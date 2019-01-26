#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfb557ec5, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x74fe9069, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xcb5d83b9, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x7a2dc120, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x466a64f3, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x66b4206d, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x1c0d31b, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xb08fbf06, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf051dc9d, __VMLINUX_SYMBOL_STR(__pm_stay_awake) },
	{ 0x43f48b19, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x35dd628a, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x455fd1c1, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0x5b790670, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xa0cf3107, __VMLINUX_SYMBOL_STR(wakeup_source_remove) },
	{ 0x1669ea66, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x1cffef24, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x6ee31814, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe68b8e61, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4efbd7ce, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x54c6f98f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x11a450df, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x558071a6, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xd0b14f4c, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2732db94, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcf00351, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x6ce73062, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x45988a2a, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xabb13e91, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdf389ec1, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xff22771e, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0x8b287656, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x89f463ae, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x6c304ab7, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0xe7a2a683, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x1f3d26ce, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xd5cc7b8b, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0xabfb8d2e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x9979b6a, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0xb8093a15, __VMLINUX_SYMBOL_STR(__pm_wakeup_event) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0xf9a3efb9, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_sub) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x2e91378, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xf5a29e1d, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x1ef238ac, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x7a5cd88a, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x2df50b0, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x77179393, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x9687b2c5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7a775a06, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x8bd99e10, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x580a1fb9, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x695953e3, __VMLINUX_SYMBOL_STR(__pm_relax) },
	{ 0x6254d865, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x22da1da8, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x9f3b80c5, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa62d4d72, __VMLINUX_SYMBOL_STR(wakeup_source_drop) },
	{ 0x55880858, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xb7143e88, __VMLINUX_SYMBOL_STR(__vfs_read) },
	{ 0x8ed706e1, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x24a13d2, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x7110a81f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x3a82014d, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x4c844859, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xc473b7c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd1151482, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x990173f4, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0xf51f9be, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xba73fc1b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xb88e9ba0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x36aff0e6, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x2b912d85, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x1d92d898, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x976626ab, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x4d65cbd5, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xfb5f1639, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xfcc81017, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x9ef3d21e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x55186c24, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7c97c8a4, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_add_return) },
	{ 0xebd6cda4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x3f9b6d4e, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x1f7386be, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_add) },
	{ 0x408a78e8, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x71b4482d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xec2ac905, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_sub_return) },
	{ 0x1bf2a6d9, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7d9429ba, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x92654d0, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xfa91eb38, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xcaa11930, __VMLINUX_SYMBOL_STR(proc_get_parent_data) },
	{ 0xab7e83ff, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf804b0e6, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xc1264b88, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x90b8d885, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xebc4a61a, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x50ccb5c0, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf33e22fb, __VMLINUX_SYMBOL_STR(wakeup_source_add) },
	{ 0x99278941, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0xef9822bb, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x48a581d4, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97cb2869, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf7ec2378, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xde1369f9, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xeeed0721, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xa5bd884, __VMLINUX_SYMBOL_STR(cfg80211_connect_bss) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xa6e0dd27, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xe663632a, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa6f488d0, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x4b962990, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xecbf85dc, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x811eef58, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xa4b78ece, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x110948ab, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa5222782, __VMLINUX_SYMBOL_STR(wakeup_source_prepare) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1aae192f, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x42a8a4e4, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x5864e7b3, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x3a040634, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x1d42587b, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4dfc0f, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x674c1801, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x5c4662bb, __VMLINUX_SYMBOL_STR(skb_pull) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p025Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0952d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3426d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3316d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p805Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F2A35CDD040B4434A7644D7");
