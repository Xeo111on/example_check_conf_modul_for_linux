#include <linux/module.h>
#include <linux/init.h>

MODULE_AUTHOR( "GLEB KOROBEYNIKOV" );
MODULE_LICENSE( "GPL" );

static int __init module_load( void )
{
	printk("#################################\n");

#if defined(CONFIG_SMP)
	printk(KERN_INFO "CONFIG_SMP = %d\n", CONFIG_SMP);
#else
	printk(KERN_INFO "CONFIG_SMP = %d\n", CONFIG_SMP);
#endif	

#if defined(CONFIG_NETWORK_FILESYSTEMS)
	printk(KERN_INFO "CONFIG_NETWORK_FILESYSTEMS = %d\n", CONFIG_NETWORK_FILESYSTEMS);
#else
	printk(KERN_INFO "CONFIG_NETWORK_FILESYSTEMS = %d\n", CONFIG_NETWORK_FILESYSTEMS);
#endif	

#if defined(CONFIG_HDMI)
	printk(KERN_INFO "CONFIG_HDMI = %d\n", CONFIG_HDMI);
#else
	printk(KERN_INFO "CONFIG_HDMI = %d\n", CONFIG_HDMI);
#endif	
	printk("#################################\n");

	return -1;
}

module_init( module_load );
