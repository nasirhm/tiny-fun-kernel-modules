#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

// Kernel has no standard C headers and libraries
// No memory protection!
// simgle big namespace
// always multi-threaded

MODULE_LICENSE("GPL");
MODULE_AUTHOR("nasirhm");
MODULE_DESCRIPTION("A Simple Hello World Kernel Module");

static int __init hello(void){
	printk(KERN_DEBUG ">>> Hello world! <<<\n");
	return 0; // Non-zero returns mean the module couldn't be loaded.
}

static void __exit goodbye(void){
	printk(KERN_DEBUG ">>> Goodbye World! <<<\n");
}

module_init(hello);
module_exit(goodbye);
