/*
 * DaVinci memory space definitions
 *
 * Author: Kevin Hilman, MontaVista Software, Inc. <source@mvista.com>
 *
 * 2007 (c) MontaVista Software, Inc. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

/**************************************************************************
 * Included Files
 **************************************************************************/
#include <asm/page.h>
#include <asm/sizes.h>

/**************************************************************************
 * Definitions
 **************************************************************************/
#define DAVINCI_DDR_BASE	0x80000000
#define DA8XX_DDR_BASE		0xc0000000

#if defined(CONFIG_ARCH_DAVINCI_DA8XX) && defined(CONFIG_ARCH_DAVINCI_DMx)
#error Cannot enable DaVinci and DA8XX platforms concurrently
#elif defined(CONFIG_ARCH_DAVINCI_DA8XX)
#define PLAT_PHYS_OFFSET DA8XX_DDR_BASE
#else
#define PLAT_PHYS_OFFSET DAVINCI_DDR_BASE
#endif

#define DDR2_SDRCR_OFFSET	0xc
#define DDR2_SRPD_BIT		BIT(23)
#define DDR2_MCLKSTOPEN_BIT	BIT(30)
#define DDR2_LPMODEN_BIT	BIT(31)

#endif /* __ASM_ARCH_MEMORY_H */
