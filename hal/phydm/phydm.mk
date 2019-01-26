EXTRA_CFLAGS += -I$(src)/hal/phydm

_PHYDM_FILES := hal/phydm/phydm_debug.o	\
								hal/phydm/phydm_antdiv.o\
								hal/phydm/phydm_antdect.o\
								hal/phydm/phydm_interface.o\
								hal/phydm/phydm_hwconfig.o\
								hal/phydm/phydm.o\
								hal/phydm/halphyrf_ce.o\
								hal/phydm/phydm_dig.o\
								hal/phydm/phydm_pathdiv.o\
								hal/phydm/phydm_rainfo.o\
								hal/phydm/phydm_dynamicbbpowersaving.o\
								hal/phydm/phydm_powertracking_ce.o\
								hal/phydm/phydm_dynamictxpower.o\
								hal/phydm/phydm_adaptivity.o\
								hal/phydm/phydm_cfotracking.o\
								hal/phydm/phydm_noisemonitor.o\
								hal/phydm/phydm_acs.o\
								hal/phydm/phydm_beamforming.o\
								hal/phydm/phydm_dfs.o\
								hal/phydm/txbf/halcomtxbf.o\
								hal/phydm/txbf/haltxbfinterface.o\
								hal/phydm/txbf/phydm_hal_txbf_api.o\
								hal/phydm/phydm_adc_sampling.o\
								hal/phydm/phydm_kfree.o\
								hal/phydm/phydm_ccx.o\
								hal/phydm/phydm_psd.o\
								hal/phydm/halrf.o
		
ifeq ($(CONFIG_RTL8188E), y)
RTL871X = rtl8188e
_PHYDM_FILES += hal/phydm/$(RTL871X)/halhwimg8188e_mac.o\
								hal/phydm/$(RTL871X)/halhwimg8188e_bb.o\
								hal/phydm/$(RTL871X)/halhwimg8188e_rf.o\
								hal/phydm/$(RTL871X)/halphyrf_8188e_ce.o\
								hal/phydm/$(RTL871X)/phydm_regconfig8188e.o\
								hal/phydm/$(RTL871X)/hal8188erateadaptive.o\
								hal/phydm/$(RTL871X)/phydm_rtl8188e.o
endif

ifeq ($(CONFIG_RTL8192E), y)
RTL871X = rtl8192e
_PHYDM_FILES += hal/phydm/$(RTL871X)/halhwimg8192e_mac.o\
								hal/phydm/$(RTL871X)/halhwimg8192e_bb.o\
								hal/phydm/$(RTL871X)/halhwimg8192e_rf.o\
								hal/phydm/$(RTL871X)/halphyrf_8192e_ce.o\
								hal/phydm/$(RTL871X)/phydm_regconfig8192e.o\
								hal/phydm/$(RTL871X)/phydm_rtl8192e.o
endif


ifeq ($(CONFIG_RTL8812A), y)
RTL871X = rtl8812a
_PHYDM_FILES += hal/phydm/$(RTL871X)/halhwimg8812a_mac.o\
								hal/phydm/$(RTL871X)/halhwimg8812a_bb.o\
								hal/phydm/$(RTL871X)/halhwimg8812a_rf.o\
								hal/phydm/$(RTL871X)/halphyrf_8812a_ce.o\
								hal/phydm/$(RTL871X)/phydm_regconfig8812a.o\
								hal/phydm/$(RTL871X)/phydm_rtl8812a.o\
								hal/phydm/txbf/haltxbfjaguar.o
endif

ifeq ($(CONFIG_RTL8821A), y)
RTL871X = rtl8821a
_PHYDM_FILES += hal/phydm/rtl8821a/halhwimg8821a_mac.o\
								hal/phydm/rtl8821a/halhwimg8821a_bb.o\
								hal/phydm/rtl8821a/halhwimg8821a_rf.o\
								hal/phydm/rtl8812a/halphyrf_8812a_ce.o\
								hal/phydm/rtl8821a/halphyrf_8821a_ce.o\
								hal/phydm/rtl8821a/phydm_regconfig8821a.o\
								hal/phydm/rtl8821a/phydm_rtl8821a.o\
								hal/phydm/rtl8821a/phydm_iqk_8821a_ce.o\
								hal/phydm/txbf/haltxbfjaguar.o
endif


ifeq ($(CONFIG_RTL8723B), y)
RTL871X = rtl8723b
_PHYDM_FILES += hal/phydm/$(RTL871X)/halhwimg8723b_bb.o\
								hal/phydm/$(RTL871X)/halhwimg8723b_mac.o\
								hal/phydm/$(RTL871X)/halhwimg8723b_rf.o\
								hal/phydm/$(RTL871X)/halhwimg8723b_mp.o\
								hal/phydm/$(RTL871X)/phydm_regconfig8723b.o\
								hal/phydm/$(RTL871X)/halphyrf_8723b_ce.o\
								hal/phydm/$(RTL871X)/phydm_rtl8723b.o
endif


ifeq ($(CONFIG_RTL8814A), y)
RTL871X = rtl8814a
_PHYDM_FILES += hal/phydm/$(RTL871X)/halhwimg8814a_bb.o\
								hal/phydm/$(RTL871X)/halhwimg8814a_mac.o\
								hal/phydm/$(RTL871X)/halhwimg8814a_rf.o\
								hal/phydm/$(RTL871X)/phydm_iqk_8814a.o\
								hal/phydm/$(RTL871X)/phydm_regconfig8814a.o\
								hal/phydm/$(RTL871X)/halphyrf_8814a_ce.o\
								hal/phydm/$(RTL871X)/phydm_rtl8814a.o\
								hal/phydm/txbf/haltxbf8814a.o
endif


ifeq ($(CONFIG_RTL8723C), y)
RTL871X = rtl8703b
_PHYDM_FILES += hal/phydm/$(RTL871X)/halhwimg8703b_bb.o\
								hal/phydm/$(RTL871X)/halhwimg8703b_mac.o\
								hal/phydm/$(RTL871X)/halhwimg8703b_rf.o\
								hal/phydm/$(RTL871X)/phydm_regconfig8703b.o\
								hal/phydm/$(RTL871X)/halphyrf_8703b.o
endif

ifeq ($(CONFIG_RTL8723D), y)
RTL871X = rtl8723d
_PHYDM_FILES += hal/phydm/$(RTL871X)/halhwimg8723d_bb.o\
								hal/phydm/$(RTL871X)/halhwimg8723d_mac.o\
								hal/phydm/$(RTL871X)/halhwimg8723d_rf.o\
								hal/phydm/$(RTL871X)/phydm_regconfig8723d.o\
								hal/phydm/$(RTL871X)/phydm_rtl8723d.o\
								hal/phydm/$(RTL871X)/halphyrf_8723d.o
endif


ifeq ($(CONFIG_RTL8188F), y)
RTL871X = rtl8188f
_PHYDM_FILES += hal/phydm/$(RTL871X)/halhwimg8188f_bb.o\
								hal/phydm/$(RTL871X)/halhwimg8188f_mac.o\
								hal/phydm/$(RTL871X)/halhwimg8188f_rf.o\
								hal/phydm/$(RTL871X)/phydm_regconfig8188f.o\
								hal/phydm/$(RTL871X)/halphyrf_8188f.o \
								hal/phydm/$(RTL871X)/phydm_rtl8188f.o
endif

ifeq ($(CONFIG_RTL8822B), y)
RTL871X = rtl8822b
_PHYDM_FILES +=	hal/phydm/$(RTL871X)/halhwimg8822b_bb.o \
								hal/phydm/$(RTL871X)/halhwimg8822b_mac.o \
								hal/phydm/$(RTL871X)/halhwimg8822b_rf.o \
								hal/phydm/$(RTL871X)/halphyrf_8822b.o \
								hal/phydm/$(RTL871X)/phydm_hal_api8822b.o \
								hal/phydm/$(RTL871X)/phydm_iqk_8822b.o \
								hal/phydm/$(RTL871X)/phydm_regconfig8822b.o \
								hal/phydm/$(RTL871X)/phydm_rtl8822b.o

_PHYDM_FILES +=	hal/phydm/txbf/haltxbf8822b.o
endif


ifeq ($(CONFIG_RTL8821C), y)
RTL871X = rtl8821c
_PHYDM_FILES +=	hal/phydm/$(RTL871X)/halhwimg8821c_bb.o \
								hal/phydm/$(RTL871X)/halhwimg8821c_mac.o \
								hal/phydm/$(RTL871X)/halhwimg8821c_rf.o \
								hal/phydm/$(RTL871X)/phydm_hal_api8821c.o \
								hal/phydm/$(RTL871X)/phydm_regconfig8821c.o\
								hal/phydm/$(RTL871X)/halphyrf_8821c.o\
								hal/phydm/$(RTL871X)/phydm_iqk_8821c.o
endif