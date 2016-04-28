#include <linux/autoconf.h>
#include <linux/cpu.h>
#include <linux/cpumask.h>
#include <linux/init.h>
#include <linux/node.h>
#include <linux/nodemask.h>
#include <linux/percpu.h>

static DEFINE_PER_CPU(struct cpu, cpu_devices);

static int __init topology_init(void)
{
	int i, ret;

#ifdef CONFIG_NUMA
	for_each_online_node(i)
		register_one_node(i);
#endif /* CONFIG_NUMA */

#if defined(CONFIG_HOTPLUG_CPU) && defined(CONFIG_MIPS_BRCM97XXX)
	/* can't shut down TP0 */
	per_cpu(cpu_devices, 0).no_control = 1;
#endif
	for_each_present_cpu(i) {
		ret = register_cpu(&per_cpu(cpu_devices, i), i);
		if (ret)
			printk(KERN_WARNING "topology_init: register_cpu %d "
			       "failed (%d)\n", i, ret);
	}

	return 0;
}

subsys_initcall(topology_init);
