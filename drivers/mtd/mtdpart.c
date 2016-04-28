/*
 * Simple MTD partitioning layer
 *
 * (C) 2000 Nicolas Pitre <nico@cam.org>
 *
 * This code is GPL
 *
 * $Id: mtdpart.c,v 1.55 2005/11/07 11:14:20 gleixner Exp $
 *
 * 	02-21-2002	Thomas Gleixner <gleixner@autronix.de>
 *			added support for read_oob, write_oob
 */

#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/list.h>
#include <linux/kmod.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/partitions.h>
#include <linux/mtd/compatmac.h>

/* Our partition linked list */
static LIST_HEAD(mtd_partitions);

/* Our partition node structure */
struct mtd_part {
	struct mtd_info mtd;
	struct mtd_info *master;
	u_int64_t offset;
	int index;
	struct list_head list;
	int registered;
};

/*
 * Given a pointer to the MTD object in the mtd_part structure, we can retrieve
 * the pointer to that structure with this macro.
 */
#define PART(x)  ((struct mtd_part *)(x))


/*
 * MTD methods which simply translate the effective address and pass through
 * to the _real_ device.
 */

static int part_read (struct mtd_info *mtd, loff_t from, size_t len,
			size_t *retlen, u_char *buf)
{
	struct mtd_part *part = PART(mtd);
	int res;

	if (from >= device_size(mtd))
		len = 0;
	else if (from + len > device_size(mtd))
		len = device_size(mtd) - from;

	res = part->master->read (part->master, from + part->offset,
				   len, retlen, buf);
	if (unlikely(res)) {
		if (res == -EUCLEAN)
			mtd->ecc_stats.corrected++;
		if (res == -EBADMSG)
			mtd->ecc_stats.failed++;
	}
	return res;
}

static int part_point (struct mtd_info *mtd, loff_t from, size_t len,
			size_t *retlen, u_char **buf)
{
	struct mtd_part *part = PART(mtd);

	if (from >= device_size(mtd))
		len = 0;
	else if (from + len > device_size(mtd))
		len = device_size(mtd) - from;

	return part->master->point (part->master, from + part->offset,
				    len, retlen, buf);
}

static void part_unpoint (struct mtd_info *mtd, u_char *addr, loff_t from, size_t len)
{
	struct mtd_part *part = PART(mtd);

	part->master->unpoint (part->master, addr, from + part->offset, len);
}

static int part_read_oob(struct mtd_info *mtd, loff_t from,
			 struct mtd_oob_ops *ops)
{
	struct mtd_part *part = PART(mtd);
	int res;

	if (from >= device_size(mtd))
		return -EINVAL;
	if (from + ops->len > device_size(mtd))
		return -EINVAL;

	res = part->master->read_oob(part->master, from + part->offset, ops);

	if (unlikely(res)) {
		if (res == -EUCLEAN)
			mtd->ecc_stats.corrected++;
		if (res == -EBADMSG)
			mtd->ecc_stats.failed++;
	}
	return res;
}

static int part_read_user_prot_reg (struct mtd_info *mtd, loff_t from, size_t len,
			size_t *retlen, u_char *buf)
{
	struct mtd_part *part = PART(mtd);
	return part->master->read_user_prot_reg (part->master, from,
					len, retlen, buf);
}

static int part_get_user_prot_info (struct mtd_info *mtd,
				    struct otp_info *buf, size_t len)
{
	struct mtd_part *part = PART(mtd);
	return part->master->get_user_prot_info (part->master, buf, len);
}

static int part_read_fact_prot_reg (struct mtd_info *mtd, loff_t from, size_t len,
			size_t *retlen, u_char *buf)
{
	struct mtd_part *part = PART(mtd);
	return part->master->read_fact_prot_reg (part->master, from,
					len, retlen, buf);
}

static int part_get_fact_prot_info (struct mtd_info *mtd,
				    struct otp_info *buf, size_t len)
{
	struct mtd_part *part = PART(mtd);
	return part->master->get_fact_prot_info (part->master, buf, len);
}
#if defined(HUMAX_PLATFORM_BASE)
static int part_get_fact_read_ext_info (struct mtd_info *mtd,
				    char *buf)
{
	struct mtd_part *part = PART(mtd);
	return part->master->read_ext_info (part->master, buf);
}
static int part_get_fact_write_password (int mode,struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf)
{
	struct mtd_part *part = PART(mtd);
	return part->master->write_password_prot_reg(mode, part->master, from, len, retlen, buf);
}
#endif

static int part_write (struct mtd_info *mtd, loff_t to, size_t len,
			size_t *retlen, const u_char *buf)
{
	struct mtd_part *part = PART(mtd);
	if (!(mtd->flags & MTD_WRITEABLE))
		return -EROFS;
	if (to >= device_size(mtd))
		len = 0;
	else if (to + len > device_size(mtd))
		len = device_size(mtd) - to;

	return part->master->write (part->master, to + part->offset,
				    len, retlen, buf);
}

static int part_write_oob(struct mtd_info *mtd, loff_t to,
			 struct mtd_oob_ops *ops)
{
	struct mtd_part *part = PART(mtd);

	if (!(mtd->flags & MTD_WRITEABLE))
		return -EROFS;

	if (to >= device_size(mtd))
		return -EINVAL;
	if (to + ops->len > device_size(mtd))
		return -EINVAL;

	return part->master->write_oob(part->master, to + part->offset, ops);
}

static int part_write_user_prot_reg (struct mtd_info *mtd, loff_t from, size_t len,
			size_t *retlen, u_char *buf)
{
	struct mtd_part *part = PART(mtd);
	return part->master->write_user_prot_reg (part->master, from,
					len, retlen, buf);
}

static int part_lock_user_prot_reg (struct mtd_info *mtd, loff_t from, size_t len)
{
	struct mtd_part *part = PART(mtd);
	return part->master->lock_user_prot_reg (part->master, from, len);
}

static int part_writev (struct mtd_info *mtd,  const struct kvec *vecs,
			 unsigned long count, loff_t to, size_t *retlen)
{
	struct mtd_part *part = PART(mtd);
	if (!(mtd->flags & MTD_WRITEABLE))
		return -EROFS;
	return part->master->writev (part->master, vecs, count,
					to + part->offset, retlen);
}

static int part_erase (struct mtd_info *mtd, struct erase_info *instr)
{
	struct mtd_part *part = PART(mtd);
	int ret;
	if (!(mtd->flags & MTD_WRITEABLE))
		return -EROFS;
	if (instr->addr >= device_size(mtd))
		return -EINVAL;
	instr->addr += part->offset;
	ret = part->master->erase(part->master, instr);
	return ret;
}

void mtd_erase_callback(struct erase_info *instr)
{
	if (instr->mtd->erase == part_erase) {
		struct mtd_part *part = PART(instr->mtd);

		if (instr->fail_addr != 0xffffffffffffffffULL)
			instr->fail_addr -= part->offset;
		instr->addr -= part->offset;
	}
	if (instr->callback)
		instr->callback(instr);
}
EXPORT_SYMBOL_GPL(mtd_erase_callback);

static int part_lock (struct mtd_info *mtd, loff_t ofs, size_t len)
{
	struct mtd_part *part = PART(mtd);
	if ((len + ofs) > device_size(mtd))
		return -EINVAL;
	return part->master->lock(part->master, ofs + part->offset, len);
}

static int part_unlock (struct mtd_info *mtd, loff_t ofs, size_t len)
{
	struct mtd_part *part = PART(mtd);
	if ((len + ofs) > device_size(mtd)) 
		return -EINVAL;
	return part->master->unlock(part->master, ofs + part->offset, len);
}

static void part_sync(struct mtd_info *mtd)
{
	struct mtd_part *part = PART(mtd);
	part->master->sync(part->master);
}

static int part_suspend(struct mtd_info *mtd)
{
	struct mtd_part *part = PART(mtd);
	return part->master->suspend(part->master);
}

static void part_resume(struct mtd_info *mtd)
{
	struct mtd_part *part = PART(mtd);
	part->master->resume(part->master);
}

static int part_block_isbad (struct mtd_info *mtd, loff_t ofs)
{
	struct mtd_part *part = PART(mtd);
	if (ofs >= device_size(mtd))
		return -EINVAL;
	ofs += part->offset;
	return part->master->block_isbad(part->master, ofs);
}

static int part_block_markbad (struct mtd_info *mtd, loff_t ofs)
{
	struct mtd_part *part = PART(mtd);
	int res;

	if (!(mtd->flags & MTD_WRITEABLE))
		return -EROFS;
	if (ofs >= device_size(mtd))
		return -EINVAL;
	ofs += part->offset;
	res = part->master->block_markbad(part->master, ofs);
	if (!res)
		mtd->ecc_stats.badblocks++;
	return res;
}

/*
 * This function unregisters and destroy all slave MTD objects which are
 * attached to the given master MTD object.
 */

int del_mtd_partitions(struct mtd_info *master)
{
	struct list_head *node;
	struct mtd_part *slave;

	for (node = mtd_partitions.next;
	     node != &mtd_partitions;
	     node = node->next) {
		slave = list_entry(node, struct mtd_part, list);
		if (slave->master == master) {
			struct list_head *prev = node->prev;
			__list_del(prev, node->next);
			if(slave->registered)
				del_mtd_device(&slave->mtd);
			kfree(slave);
			node = prev;
		}
	}

	return 0;
}

/*
 * This function, given a master MTD object and a partition table, creates
 * and registers slave MTD objects which are bound to the master according to
 * the partition definitions.
 * (Q: should we register the master MTD object as well?)
 */

int add_mtd_partitions(struct mtd_info *master,
		       const struct mtd_partition *parts,
		       int nbparts)
{
	struct mtd_part *slave;
	unsigned long rem;
	u_int64_t cur_offset = 0;
	uint64_t tmpdiv;
	int i;

	printk (KERN_NOTICE "Creating %d MTD partitions on \"%s\":\n", nbparts, master->name);

	printk("Nr master erase regions %d\n", master->numeraseregions);
	
	for (i=0; i<master->numeraseregions;i++)
	{
		printk("%d: offset=0x%x,size=0x%x,blocks=%d\n",
		i,master->eraseregions[i].offset,
		master->eraseregions[i].erasesize,
		master->eraseregions[i].numblocks);
	}



	for (i = 0; i < nbparts; i++) {

		/* allocate the partition structure */
		slave = kmalloc (sizeof(*slave), GFP_KERNEL);
		if (!slave) {
			printk ("memory allocation error while creating partitions for \"%s\"\n",
				master->name);
			del_mtd_partitions(master);
			return -ENOMEM;
		}
		memset(slave, 0, sizeof(*slave));
		list_add(&slave->list, &mtd_partitions);

		/* set up the MTD object for this partition */
		slave->mtd.type = master->type;
		slave->mtd.flags = master->flags & ~parts[i].mask_flags;

		tmpdiv = parts[i].size;
		do_div(tmpdiv, master->erasesize);
		slave->mtd.num_eraseblocks = tmpdiv;
		if (parts[i].size >= (uint64_t) MTD_MAX_32BIT) {
			slave->mtd.size = 0;
		} else {
			slave->mtd.size = parts[i].size;
		}
		slave->mtd.writesize = master->writesize;
		slave->mtd.oobsize = master->oobsize;
		slave->mtd.ecctype = master->ecctype;
		slave->mtd.eccsize = master->eccsize;

		slave->mtd.name = parts[i].name;
		slave->mtd.bank_size = master->bank_size;
		slave->mtd.owner = master->owner;

		slave->mtd.read = part_read;
		slave->mtd.write = part_write;
		slave->mtd.erasesize = master->erasesize;

		if(master->point && master->unpoint){
			slave->mtd.point = part_point;
			slave->mtd.unpoint = part_unpoint;
		}

		if (master->read_oob)
			slave->mtd.read_oob = part_read_oob;
		if (master->write_oob)
			slave->mtd.write_oob = part_write_oob;
		if(master->read_user_prot_reg)
			slave->mtd.read_user_prot_reg = part_read_user_prot_reg;
		if(master->read_fact_prot_reg)
			slave->mtd.read_fact_prot_reg = part_read_fact_prot_reg;
		if(master->write_user_prot_reg)
			slave->mtd.write_user_prot_reg = part_write_user_prot_reg;
		if(master->lock_user_prot_reg)
			slave->mtd.lock_user_prot_reg = part_lock_user_prot_reg;
		if(master->get_user_prot_info)
			slave->mtd.get_user_prot_info = part_get_user_prot_info;
		if(master->get_fact_prot_info)
			slave->mtd.get_fact_prot_info = part_get_fact_prot_info;
#if defined(HUMAX_PLATFORM_BASE)
                if(master->read_ext_info)
			slave->mtd.read_ext_info = part_get_fact_read_ext_info;
		if(master->write_password_prot_reg)
			slave->mtd.write_password_prot_reg = part_get_fact_write_password;
#endif
		if (master->sync)
			slave->mtd.sync = part_sync;
		if (!i && master->suspend && master->resume) {
				slave->mtd.suspend = part_suspend;
				slave->mtd.resume = part_resume;
		}
		if (master->writev)
			slave->mtd.writev = part_writev;
		if (master->lock)
			slave->mtd.lock = part_lock;
		if (master->unlock)
			slave->mtd.unlock = part_unlock;
		if (master->block_isbad)
			slave->mtd.block_isbad = part_block_isbad;
		if (master->block_markbad)
			slave->mtd.block_markbad = part_block_markbad;
		slave->mtd.erase = part_erase;
		slave->master = master;
		slave->offset = parts[i].offset;
		slave->index = i;

		if (slave->offset == MTDPART_OFS_APPEND)
			slave->offset = cur_offset;
		if (slave->offset == MTDPART_OFS_NXTBLK) {
			slave->offset = cur_offset;

			tmpdiv = (uint64_t) cur_offset;
			rem = do_div(tmpdiv, master->erasesize);
			if (rem != 0) {
				slave->offset = (uint64_t) (tmpdiv + 1) * master->erasesize;
				printk(KERN_NOTICE "Moving partition %d: "
				       "0x%016llx -> 0x%016llx\n", i,
				       cur_offset, slave->offset);
			}
		}
		cur_offset = slave->offset + slave->mtd.size;

		printk (KERN_NOTICE "0x%016llx-0x%016llx : \"%s\"\n", slave->offset,
			slave->offset + device_size(&(slave->mtd)), slave->mtd.name);
# if 0
		if (slave->mtd.size == MTDPART_SIZ_FULL)
			slave->mtd.size = master->size - slave->offset;
		cur_offset = slave->offset + slave->mtd.size;

		printk (KERN_NOTICE "0x%08x-0x%08x : \"%s\"\n", slave->offset,
			slave->offset + slave->mtd.size, slave->mtd.name);
#endif

		/* let's do some sanity checks */
		if (slave->offset >= device_size(master)) {
				/* let's register it anyway to preserve ordering */
			slave->offset = 0;
			slave->mtd.num_eraseblocks = 0;
			slave->mtd.size = 0;
			printk ("mtd: partition \"%s\" is out of reach -- disabled\n",
				parts[i].name);
		}
		if (slave->offset + device_size(&(slave->mtd)) > device_size(master)) {
			tmpdiv = slave->offset;
			do_div(tmpdiv, slave->mtd.erasesize);
			slave->mtd.num_eraseblocks = master->num_eraseblocks - tmpdiv;
			if (slave->mtd.num_eraseblocks * slave->mtd.erasesize < (uint64_t) MTD_MAX_32BIT )
				slave->mtd.size = slave->mtd.num_eraseblocks * slave->mtd.erasesize;
			printk ("mtd: partition \"%s\" extends beyond the end of device \"%s\" -- size truncated to %#llx\n",
				parts[i].name, master->name,
				device_size(&(slave->mtd)));
		}
		if (master->numeraseregions>1) {
			/* Deal with variable erase size stuff */
			int i;
			struct mtd_erase_region_info *regions = master->eraseregions;

			/* Find the first erase regions which is part of this partition. */
			for (i=0; i < master->numeraseregions && slave->offset >= regions[i].offset; i++)
				;

			printk("first erase region %d for slave @ %d\n", i-1, slave->offset);

			slave->mtd.eraseregions = kzalloc(sizeof(struct mtd_erase_region_info) * 
			4, GFP_KERNEL);

			int j = 0;

			for (i--; i < master->numeraseregions && slave->offset + device_size(&(slave->mtd)) > regions[i].offset; i++) {
				if (slave->mtd.erasesize < regions[i].erasesize) {
					slave->mtd.erasesize = regions[i].erasesize;
				}
				
				slave->mtd.eraseregions[j].offset = regions[i].offset;
				slave->mtd.eraseregions[j].erasesize = regions[i].erasesize;
				slave->mtd.eraseregions[j].numblocks = regions[i].numblocks;
				j++;

			}
			
			slave->mtd.numeraseregions = j;

			printk("Nr slave erase regions %d\n", slave->mtd.numeraseregions);
			for (i=0; i<slave->mtd.numeraseregions;i++)
			{
				printk("%d: offset=0x%x,size=0x%x,blocks=%d\n",
					i,slave->mtd.eraseregions[i].offset,
					slave->mtd.eraseregions[i].erasesize,
					slave->mtd.eraseregions[i].numblocks);
			}

		} else {
			/* Single erase size */
			slave->mtd.erasesize = master->erasesize;
		}

		tmpdiv = (uint64_t) slave->offset;
		rem = do_div(tmpdiv, master->erasesize);
		if ((slave->mtd.flags & MTD_WRITEABLE) && rem) {
			/* Doesn't start on a boundary of major erase size */
			/* FIXME: Let it be writable if it is on a boundary of _minor_ erase size though */
			slave->mtd.flags &= ~MTD_WRITEABLE;
			printk ("mtd: partition \"%s\" doesn't start on an erase block boundary -- force read-only\n",
				parts[i].name);
		}
		tmpdiv = (uint64_t) device_size(&(slave->mtd));
		rem = do_div(tmpdiv, master->erasesize);
		if ((slave->mtd.flags & MTD_WRITEABLE) && rem) {
			slave->mtd.flags &= ~MTD_WRITEABLE;
			printk ("mtd: partition \"%s\" doesn't end on an erase block -- force read-only\n",
				parts[i].name);
		}

		slave->mtd.ecclayout = master->ecclayout;
		if (master->block_isbad) {
			uint32_t offs = 0;

			while(offs < device_size(&(slave->mtd))) {
				if (master->block_isbad(master,
							offs + slave->offset))
					slave->mtd.ecc_stats.badblocks++;
				offs += slave->mtd.erasesize;
			}
		}

		if(parts[i].mtdp)
		{	/* store the object pointer (caller may or may not register it */
			*parts[i].mtdp = &slave->mtd;
			slave->registered = 0;
		}
		else
		{
			/* register our partition */
			add_mtd_device(&slave->mtd);
			slave->registered = 1;
		}
	}

	return 0;
}

EXPORT_SYMBOL(add_mtd_partitions);
EXPORT_SYMBOL(del_mtd_partitions);

static DEFINE_SPINLOCK(part_parser_lock);
static LIST_HEAD(part_parsers);

static struct mtd_part_parser *get_partition_parser(const char *name)
{
	struct list_head *this;
	void *ret = NULL;
	spin_lock(&part_parser_lock);

	list_for_each(this, &part_parsers) {
		struct mtd_part_parser *p = list_entry(this, struct mtd_part_parser, list);

		if (!strcmp(p->name, name) && try_module_get(p->owner)) {
			ret = p;
			break;
		}
	}
	spin_unlock(&part_parser_lock);

	return ret;
}

int register_mtd_parser(struct mtd_part_parser *p)
{
	spin_lock(&part_parser_lock);
	list_add(&p->list, &part_parsers);
	spin_unlock(&part_parser_lock);

	return 0;
}

int deregister_mtd_parser(struct mtd_part_parser *p)
{
	spin_lock(&part_parser_lock);
	list_del(&p->list);
	spin_unlock(&part_parser_lock);
	return 0;
}

int parse_mtd_partitions(struct mtd_info *master, const char **types,
			 struct mtd_partition **pparts, unsigned long origin)
{
	struct mtd_part_parser *parser;
	int ret = 0;

	for ( ; ret <= 0 && *types; types++) {
		parser = get_partition_parser(*types);
#ifdef CONFIG_KMOD
		if (!parser && !request_module("%s", *types))
				parser = get_partition_parser(*types);
#endif
		if (!parser) {
			printk(KERN_NOTICE "%s partition parsing not available\n",
			       *types);
			continue;
		}
		ret = (*parser->parse_fn)(master, pparts, origin);
		if (ret > 0) {
			printk(KERN_NOTICE "%d %s partitions found on MTD device %s\n",
			       ret, parser->name, master->name);
		}
		put_partition_parser(parser);
	}
	return ret;
}

EXPORT_SYMBOL_GPL(parse_mtd_partitions);
EXPORT_SYMBOL_GPL(register_mtd_parser);
EXPORT_SYMBOL_GPL(deregister_mtd_parser);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nicolas Pitre <nico@cam.org>");
MODULE_DESCRIPTION("Generic support for partitioning of MTD devices");

