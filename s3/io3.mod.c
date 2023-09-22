#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa4b86400, "module_layout" },
	{ 0xde4c1a24, "param_ops_charp" },
	{ 0x45b388de, "unregister_netdev" },
	{ 0x2875d4df, "netdev_rx_handler_unregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xae431784, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1b29e540, "register_netdev" },
	{ 0x84a890c0, "dev_alloc_name" },
	{ 0x2377e92e, "free_netdev" },
	{ 0xfef3c918, "__dev_get_by_name" },
	{ 0xe7ee6a65, "init_net" },
	{ 0x40bbc6af, "alloc_netdev_mqs" },
	{ 0xdb59a12d, "proc_create" },
	{ 0x7bdfb16d, "dev_queue_xmit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa916b694, "strnlen" },
	{ 0x6fba9d3e, "ether_setup" },
	{ 0x7240ad89, "proc_remove" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "47BDF6A0D58A0E843B9C6C9");
