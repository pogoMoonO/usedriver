#include <linux/init.h>

#include <linux/module.h>

#define DRIVER_AUTHOR "Nick huang <sef1548@gmail.com>"



static int hello_init(void)

{

        printk(KERN_INFO "Hello, world\n");

        return 0;

}

static void hello_exit(void)

{

        printk(KERN_INFO "Goodbye, cruel world\n");

}

MODULE_AUTHOR(DRIVER_AUTHOR);	/* Who wrote this module? */
MODULE_LICENSE("Dual BSD/GPL");

module_init(hello_init);
module_exit(hello_exit);


