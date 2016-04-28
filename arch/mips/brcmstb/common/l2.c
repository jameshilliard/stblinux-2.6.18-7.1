/*
 * arch/mips/brcmstb/common/rac.c
 *
 * Copyright (C) 2007 Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 */

#include <linux/init.h>
#include <linux/kernel.h>
#include <asm/mipsregs.h>
#include <asm/bug.h>
#include <asm/addrspace.h>
#include <asm/cacheflush.h>
#include <asm/brcmstb/common/brcmstb.h>

#define CORE_OFS(x) ((x) - BCHP_BMIPS4380_RAC_CONFIG)

int l2_setting(int value)
{
	unsigned long l2_config;
	unsigned long l2_config_value;
	unsigned long cba = __read_32bit_c0_register($22, 6);

	cba = (cba & 0xfffc0000) + KSEG1;

	l2_config = cba + CORE_OFS(BCHP_BMIPS4380_L2_CONFIG);

	printk("[%d]%s L2_CONFIG_VALUE = 0x%x\n",__LINE__,__func__,DEV_RD(l2_config));

	switch(value) {
		case 0:		
			l2_config_value = 0;
			break;
		default:
			return (-1);
	}	

	DEV_WR(l2_config,(DEV_RD(l2_config) & 0xF0FFFFFF) | l2_config_value);

	printk("[%d]%s L2_CONFIG_VALUE = 0x%x\n",__LINE__,__func__,DEV_RD(l2_config));

	return(0);
}
