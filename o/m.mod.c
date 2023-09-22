#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
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
__used __section("__versions") = {
	{ 0xcb440b5e, "module_layout" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xfc13a375, "blk_cleanup_queue" },
	{ 0x93f6cc18, "put_disk" },
	{ 0xad5c99cf, "del_gendisk" },
	{ 0x999e8297, "vfree" },
	{ 0x222ddca8, "device_add_disk" },
	{ 0x6e09262a, "set_capacity" },
	{ 0x2371725, "__alloc_disk_node" },
	{ 0x66264f10, "blk_mq_free_tag_set" },
	{ 0x2a9477bf, "blk_mq_init_queue" },
	{ 0x15849457, "blk_mq_alloc_tag_set" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x30301b37, "__blk_mq_end_request" },
	{ 0x86aef10a, "blk_update_request" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ADD605508221C54AA4B73B4");
