/*
 * Copyright (c) 2018-2021, NVIDIA CORPORATION. All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */

#ifndef BPMP_ABI_MACH_T234_RESET_H
#define BPMP_ABI_MACH_T234_RESET_H

/**
 * @file
 * @defgroup bpmp_reset_ids Reset ID's
 * @brief Identifiers for Resets controllable by firmware
 * @{
 */
#define TEGRA234_RESET_ACTMON			1U
#define TEGRA234_RESET_ADSP_ALL			2U
#define TEGRA234_RESET_DSI_CORE			3U
#define TEGRA234_RESET_CAN1			4U
#define TEGRA234_RESET_CAN2			5U
#define TEGRA234_RESET_DLA0			6U
#define TEGRA234_RESET_DLA1			7U
#define TEGRA234_RESET_DPAUX			8U
#define TEGRA234_RESET_OFA			9U
#define TEGRA234_RESET_NVJPG1			10U
#define TEGRA234_RESET_PEX1_CORE_6		11U
#define TEGRA234_RESET_PEX1_CORE_6_APB		12U
#define TEGRA234_RESET_PEX1_COMMON_APB		13U
#define TEGRA234_RESET_PEX2_CORE_7		14U
#define TEGRA234_RESET_PEX2_CORE_7_APB		15U
#define TEGRA234_RESET_NVDISPLAY		16U
#define TEGRA234_RESET_EQOS			17U
#define TEGRA234_RESET_GPCDMA			18U
#define TEGRA234_RESET_GPU			19U
#define TEGRA234_RESET_HDA			20U
#define TEGRA234_RESET_HDACODEC			21U
#define TEGRA234_RESET_EQOS_MACSEC		22U
#define TEGRA234_RESET_EQOS_MACSEC_SECURE	23U
#define TEGRA234_RESET_I2C1			24U
#define TEGRA234_RESET_PEX2_CORE_8		25U
#define TEGRA234_RESET_PEX2_CORE_8_APB		26U
#define TEGRA234_RESET_PEX2_CORE_9		27U
#define TEGRA234_RESET_PEX2_CORE_9_APB		28U
#define TEGRA234_RESET_I2C2			29U
#define TEGRA234_RESET_I2C3			30U
#define TEGRA234_RESET_I2C4			31U
#define TEGRA234_RESET_I2C6			32U
#define TEGRA234_RESET_I2C7			33U
#define TEGRA234_RESET_I2C8			34U
#define TEGRA234_RESET_I2C9			35U
#define TEGRA234_RESET_ISP			36U
#define TEGRA234_RESET_MIPI_CAL			37U
#define TEGRA234_RESET_MPHY_CLK_CTL		38U
#define TEGRA234_RESET_MPHY_L0_RX		39U
#define TEGRA234_RESET_MPHY_L0_TX		40U
#define TEGRA234_RESET_MPHY_L1_RX		41U
#define TEGRA234_RESET_MPHY_L1_TX		42U
#define TEGRA234_RESET_NVCSI			43U
#define TEGRA234_RESET_NVDEC			44U
#define TEGRA234_RESET_MGBE0_PCS		45U
#define TEGRA234_RESET_MGBE0_MAC		46U
#define TEGRA234_RESET_MGBE0_MACSEC		47U
#define TEGRA234_RESET_MGBE0_MACSEC_SECURE	48U
#define TEGRA234_RESET_MGBE1_PCS		49U
#define TEGRA234_RESET_MGBE1_MAC		50U
#define TEGRA234_RESET_MGBE1_MACSEC		51U
#define TEGRA234_RESET_MGBE1_MACSEC_SECURE	52U
#define TEGRA234_RESET_MGBE2_PCS		53U
#define TEGRA234_RESET_MGBE2_MAC		54U
#define TEGRA234_RESET_MGBE2_MACSEC		55U
#define TEGRA234_RESET_PEX2_CORE_10		56U
#define TEGRA234_RESET_PEX2_CORE_10_APB		57U
#define TEGRA234_RESET_PEX2_COMMON_APB		58U
#define TEGRA234_RESET_NVENC			59U
#define TEGRA234_RESET_MGBE2_MACSEC_SECURE	60U
#define TEGRA234_RESET_NVJPG			61U
#define TEGRA234_RESET_PCIE			62U
#define TEGRA234_RESET_PCIEXCLK			63U
#define TEGRA234_RESET_LA			64U
#define TEGRA234_RESET_HWPM			65U
#define TEGRA234_RESET_PVA0_ALL			66U
#define TEGRA234_RESET_RSVD_67			67U
#define TEGRA234_RESET_PWM1			68U
#define TEGRA234_RESET_PWM2			69U
#define TEGRA234_RESET_PWM3			70U
#define TEGRA234_RESET_PWM4			71U
#define TEGRA234_RESET_PWM5			72U
#define TEGRA234_RESET_PWM6			73U
#define TEGRA234_RESET_PWM7			74U
#define TEGRA234_RESET_PWM8			75U
#define TEGRA234_RESET_QSPI0			76U
#define TEGRA234_RESET_QSPI1			77U
#define TEGRA234_RESET_RSVD_78			78U
#define TEGRA234_RESET_RSVD_79			79U
#define TEGRA234_RESET_SCE_ALL			80U
#define TEGRA234_RESET_RCE_ALL			81U
#define TEGRA234_RESET_SDMMC1			82U
#define TEGRA234_RESET_RSVD_83			83U
#define TEGRA234_RESET_RSVD_84			84U
#define TEGRA234_RESET_SDMMC4			85U
#define TEGRA234_RESET_SE			86U
#define TEGRA234_RESET_MGBE3_PCS		87U
#define TEGRA234_RESET_MGBE3_MAC		88U
#define TEGRA234_RESET_MGBE3_MACSEC		89U
#define TEGRA234_RESET_MGBE3_MACSEC_SECURE	90U
#define TEGRA234_RESET_SPI1			91U
#define TEGRA234_RESET_SPI2			92U
#define TEGRA234_RESET_SPI3			93U
#define TEGRA234_RESET_SPI4			94U
#define TEGRA234_RESET_TACH0			95U
#define TEGRA234_RESET_TACH1			96U
#define TEGRA234_RESET_RSVD_97			97U
#define TEGRA234_RESET_TSEC			98U
#define TEGRA234_RESET_UARTI			99U
#define TEGRA234_RESET_UARTA			100U
#define TEGRA234_RESET_UARTB			101U
#define TEGRA234_RESET_UARTC			102U
#define TEGRA234_RESET_UARTD			103U
#define TEGRA234_RESET_UARTE			104U
#define TEGRA234_RESET_UARTF			105U
#define TEGRA234_RESET_UARTJ			106U
#define TEGRA234_RESET_UARTH			107U
#define TEGRA234_RESET_UFSHC			108U
#define TEGRA234_RESET_UFSHC_AXI_M		109U
#define TEGRA234_RESET_UFSHC_LP_SEQ		110U
#define TEGRA234_RESET_RSVD_111			111U
#define TEGRA234_RESET_VI			112U
#define TEGRA234_RESET_VIC			113U
#define TEGRA234_RESET_XUSB_PADCTL		114U
#define TEGRA234_RESET_VI2			115U
#define TEGRA234_RESET_PEX0_CORE_0		116U
#define TEGRA234_RESET_PEX0_CORE_1		117U
#define TEGRA234_RESET_PEX0_CORE_2		118U
#define TEGRA234_RESET_PEX0_CORE_3		119U
#define TEGRA234_RESET_PEX0_CORE_4		120U
#define TEGRA234_RESET_PEX0_CORE_0_APB		121U
#define TEGRA234_RESET_PEX0_CORE_1_APB		122U
#define TEGRA234_RESET_PEX0_CORE_2_APB		123U
#define TEGRA234_RESET_PEX0_CORE_3_APB		124U
#define TEGRA234_RESET_PEX0_CORE_4_APB		125U
#define TEGRA234_RESET_PEX0_COMMON_APB		126U
#define TEGRA234_RESET_RSVD_127			127U
#define TEGRA234_RESET_RSVD_128			128U
#define TEGRA234_RESET_PEX1_CORE_5		129U
#define TEGRA234_RESET_PEX1_CORE_5_APB		130U
#define TEGRA234_RESET_GBE_UPHY			131U
#define TEGRA234_RESET_GBE_UPHY_PM		132U
#define TEGRA234_RESET_NVHS_UPHY		133U
#define TEGRA234_RESET_NVHS_UPHY_PLL0		134U
#define TEGRA234_RESET_NVHS_UPHY_L0		135U
#define TEGRA234_RESET_NVHS_UPHY_L1		136U
#define TEGRA234_RESET_NVHS_UPHY_L2		137U
#define TEGRA234_RESET_NVHS_UPHY_L3		138U
#define TEGRA234_RESET_NVHS_UPHY_L4		139U
#define TEGRA234_RESET_NVHS_UPHY_L5		140U
#define TEGRA234_RESET_NVHS_UPHY_L6		141U
#define TEGRA234_RESET_NVHS_UPHY_L7		142U
#define TEGRA234_RESET_NVHS_UPHY_PM		143U
#define TEGRA234_RESET_DMIC5			144U
#define TEGRA234_RESET_APE			145U
#define TEGRA234_RESET_PEX_USB_UPHY		146U
#define TEGRA234_RESET_PEX_USB_UPHY_L0		147U
#define TEGRA234_RESET_PEX_USB_UPHY_L1		148U
#define TEGRA234_RESET_PEX_USB_UPHY_L2		149U
#define TEGRA234_RESET_PEX_USB_UPHY_L3		150U
#define TEGRA234_RESET_PEX_USB_UPHY_L4		151U
#define TEGRA234_RESET_PEX_USB_UPHY_L5		152U
#define TEGRA234_RESET_PEX_USB_UPHY_L6		153U
#define TEGRA234_RESET_PEX_USB_UPHY_L7		154U
#define TEGRA234_RESET_PEX_USB_UPHY_PLL0	159U
#define TEGRA234_RESET_PEX_USB_UPHY_PLL1	160U
#define TEGRA234_RESET_PEX_USB_UPHY_PLL2	161U
#define TEGRA234_RESET_PEX_USB_UPHY_PLL3	162U
#define TEGRA234_RESET_GBE_UPHY_L0		163U
#define TEGRA234_RESET_GBE_UPHY_L1		164U
#define TEGRA234_RESET_GBE_UPHY_L2		165U
#define TEGRA234_RESET_GBE_UPHY_L3		166U
#define TEGRA234_RESET_GBE_UPHY_L4		167U
#define TEGRA234_RESET_GBE_UPHY_L5		168U
#define TEGRA234_RESET_GBE_UPHY_L6		169U
#define TEGRA234_RESET_GBE_UPHY_L7		170U
#define TEGRA234_RESET_GBE_UPHY_PLL0		171U
#define TEGRA234_RESET_GBE_UPHY_PLL1		172U
#define TEGRA234_RESET_GBE_UPHY_PLL2		173U

#define TEGRA234_MAX_PUBLIC_RESET_ID		173U

/** @} */

/* FIXME: alias to be removed after kernel DT is updated */
#define TEGRA234_RESET_PEX_USB_UPHY_L8		0U
#define TEGRA234_RESET_PEX_USB_UPHY_L9		0U
#define TEGRA234_RESET_PEX_USB_UPHY_L10		0U
#define TEGRA234_RESET_PEX_USB_UPHY_L11		0U

#endif
