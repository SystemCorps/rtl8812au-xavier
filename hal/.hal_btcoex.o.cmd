cmd_/home/nvidia/rtl8812au/hal/hal_btcoex.o := aarch64-linux-gnu-gcc -Wp,-MD,/home/nvidia/rtl8812au/hal/.hal_btcoex.o.d  -nostdinc -isystem /usr/lib/gcc/aarch64-linux-gnu/7/include -I./arch/arm64/include -I./arch/arm64/include/generated/uapi -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fno-PIE -mgeneral-regs-only -DCONFIG_AS_LSE=1 -fno-asynchronous-unwind-tables -mpc-relative-literal-loads -fno-pic -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -O2 --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=2048 -fno-stack-protector -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -g -pg -fno-inline-functions-called-once -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=date-time -O1 -Wno-unused-variable -Wno-unused-value -Wno-unused-label -Wno-unused-parameter -Wno-unused-function -Wno-unused -Wno-date-time -I/home/nvidia/rtl8812au/include -I/home/nvidia/rtl8812au/platform -I/home/nvidia/rtl8812au/hal/btc -I/home/nvidia/rtl8812au/hal/phydm -DCONFIG_RTL8812A -DCONFIG_MP_INCLUDED -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8812au.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_TRAFFIC_PROTECT -DCONFIG_LOAD_PHY_PARA_FROM_FILE -DREALTEK_CONFIG_PATH=\"/lib/firmware/\" -DCONFIG_TXPWR_BY_RATE_EN=0 -DCONFIG_TXPWR_LIMIT_EN=0 -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_RTW_NAPI -DCONFIG_RTW_GRO -DCONFIG_RTW_DEBUG -DRTW_LOG_LEVEL=4 -DDM_ODM_SUPPORT_TYPE=0x04 -DCONFIG_LITTLE_ENDIAN -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT -I/usr/src/linux-headers-4.9.108-tegra/nvidia/include -I/usr/src/linux-headers-4.9.108-tegra/nvgpu/include -I/usr/src/linux-headers-4.9.108-tegra/nvgpu-next/include  -DMODULE -mcmodel=large  -DKBUILD_BASENAME='"hal_btcoex"'  -DKBUILD_MODNAME='"8812au"' -c -o /home/nvidia/rtl8812au/hal/.tmp_hal_btcoex.o /home/nvidia/rtl8812au/hal/hal_btcoex.c

source_/home/nvidia/rtl8812au/hal/hal_btcoex.o := /home/nvidia/rtl8812au/hal/hal_btcoex.c

deps_/home/nvidia/rtl8812au/hal/hal_btcoex.o := \
    $(wildcard include/config/bt/coexist.h) \
    $(wildcard include/config/lps/lclk.h) \
    $(wildcard include/config/p2p.h) \
    $(wildcard include/config/bt/coexist/socket/trx.h) \
    $(wildcard include/config/rf4ce/coexist.h) \
    $(wildcard include/config/rtl8192e.h) \
    $(wildcard include/config/rtl8821a.h) \
    $(wildcard include/config/rtl8723b.h) \
    $(wildcard include/config/rtl8812a.h) \
    $(wildcard include/config/rtl8703b.h) \
    $(wildcard include/config/rtl8822b.h) \
    $(wildcard include/config/rtl8723d.h) \
    $(wildcard include/config/rtl8821c.h) \
    $(wildcard include/config/pci/hci.h) \
    $(wildcard include/config/usb/hci.h) \
    $(wildcard include/config/sdio/hci.h) \
    $(wildcard include/config/gspi/hci.h) \
    $(wildcard include/config/fw/multi/port/support.h) \
    $(wildcard include/config/load/phy/para/from/file.h) \

/home/nvidia/rtl8812au/hal/hal_btcoex.o: $(deps_/home/nvidia/rtl8812au/hal/hal_btcoex.o)

$(deps_/home/nvidia/rtl8812au/hal/hal_btcoex.o):
