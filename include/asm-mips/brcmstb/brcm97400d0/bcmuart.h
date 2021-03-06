/***********************************************************************/
/*                                                                     */
/*   MODULE:  bcmuart.h                                                */
/*   DATE:    02/15/02                                                 */
/*   PURPOSE: Definitions for UART block                               */
/*                                                                     */
/***************************************************************************
 *     Copyright (c) 1999-2005, Broadcom Corporation
 *     
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
/***********************************************************************/
#ifndef _BCMUART_H
#define _BCMUART_H

#include "bcmmips.h"
#include "boardcfg.h"
#include "bchp_common.h"
#include "bchp_uarta.h"
#include "bchp_uartb.h"
#include "bchp_uartc.h"

#if !defined __ASSEMBLY__
#ifdef __cplusplus
extern "C" {
#endif
#endif

/* UART register base addresses */
#define UARTA_ADR_BASE   BCM_PHYS_TO_K1(BCHP_PHYSICAL_OFFSET+BCHP_UARTA_RBR)
#define UARTB_ADR_BASE   BCM_PHYS_TO_K1(BCHP_PHYSICAL_OFFSET+BCHP_UARTB_RBR)
#define UARTC_ADR_BASE   BCM_PHYS_TO_K1(BCHP_PHYSICAL_OFFSET+BCHP_UARTC_RBR)


/* UART registers */
#define UART_SDW_RBR     	0x00
#define UART_SDW_THR     	0x00
#define UART_SDW_DLL     	0x00
#define UART_SDW_DLH     	0x04
#define UART_SDW_IER     	0x04
#define UART_SDW_IIR     	0x08
#define UART_SDW_FCR     	0x08
#define UART_SDW_LCR     	0x0c
#define UART_SDW_MCR     	0x10
#define UART_SDW_LSR     	0x14
#define UART_SDW_MSR     	0x18
#define UART_SDW_SCR     	0x1c


#if !defined __ASSEMBLY__

/**********************************************************************
  Uart Register Structure
 **********************************************************************/
typedef struct UartChannel {
  volatile unsigned long rxstat;
  volatile unsigned long rxdata;
  volatile unsigned long unused;
  volatile unsigned long control;
  volatile unsigned long baudh;
  /* When divide SysClk/2/(1+baudword) we should get 32*bit-rate
   */
  volatile unsigned long baudl;
  volatile unsigned long txstat;
  volatile unsigned long txdata;
} UartChannel;

#define UARTA ((volatile UartChannel *) UARTA_ADR_BASE)
#define UARTB ((volatile UartChannel *) UARTB_ADR_BASE)
#define UARTC ((volatile UartChannel *) UARTC_ADR_BASE)



#endif /* __ASSEMBLY__ */

/******************************************************************
 * Baud Rate Table
 * XTALFREQ / baud rate / 16
 ******************************************************************/
 #define UARTCLK_FREQ 81000000	/* 81 MHz */
#define BAUD_VAL(x)     (((UARTCLK_FREQ/8/(x) + 1)/2) - 1)
#define BAUD_VAL_HI(x)  ((BAUD_VAL(x) >> 8) & 0xff)
#define BAUD_VAL_LO(x)  (BAUD_VAL(x) & 0xff)

#define BAUD_1200_HI    BAUD_VAL_HI(1200)
#define BAUD_1200_LO    BAUD_VAL_LO(1200)
#define BAUD_2400_HI    BAUD_VAL_HI(2400)
#define BAUD_2400_LO    BAUD_VAL_LO(2400)
#define BAUD_4800_HI    BAUD_VAL_HI(4800)
#define BAUD_4800_LO    BAUD_VAL_LO(4800)
#define BAUD_9600_HI    BAUD_VAL_HI(9600)
#define BAUD_9600_LO    BAUD_VAL_LO(9600)
#define BAUD_19200_HI   BAUD_VAL_HI(19200)
#define BAUD_19200_LO   BAUD_VAL_LO(19200)
#define BAUD_38400_HI   BAUD_VAL_HI(38400)
#define BAUD_38400_LO   BAUD_VAL_LO(38400)
#define BAUD_57600_HI   BAUD_VAL_HI(57600)
#define BAUD_57600_LO   BAUD_VAL_LO(57600)
#define BAUD_115200_HI  BAUD_VAL_HI(115200)
#define BAUD_115200_LO  BAUD_VAL_LO(115200)



#if !defined __ASSEMBLY__
#ifdef __cplusplus
}
#endif
#endif

#endif  /* _BCMUART_H */
