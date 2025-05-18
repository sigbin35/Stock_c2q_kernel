/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _ASM_UM_IO_H
#define _ASM_UM_IO_H

<<<<<<< HEAD
#include <linux/types.h>
#include <asm/byteorder.h>

#if IS_ENABLED(CONFIG_PLATFORM_MOCK)
#include <asm/io-mock-shared.h>
#endif

=======
>>>>>>> 28f2451f44307f2f6bfd76930441de946d53c701
#define ioremap ioremap
static inline void __iomem *ioremap(phys_addr_t offset, size_t size)
{
	return (void __iomem *)(unsigned long)offset;
}
<<<<<<< HEAD
#define ioremap_nocache ioremap
=======
>>>>>>> 28f2451f44307f2f6bfd76930441de946d53c701

#define iounmap iounmap
static inline void iounmap(void __iomem *addr)
{
}

#include <asm-generic/io.h>

#endif
