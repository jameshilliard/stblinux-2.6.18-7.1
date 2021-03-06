/***************************************************************************
 *     Copyright (c) 1999-2008, Broadcom Corporation
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
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Thu Jul 17 17:15:02 2008
 *                 MD5 Checksum         9220767de76c9afe7a462b5b55e5d2ff
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/3548/rdb/b0/bchp_uartb.h $
 * 
 * Hydra_Software_Devel/1   7/17/08 8:34p maivu
 * PR 44921: Initial B0 files
 *
 ***************************************************************************/

#ifndef BCHP_UARTB_H__
#define BCHP_UARTB_H__

/***************************************************************************
 *UARTB - UART B
 ***************************************************************************/
#define BCHP_UARTB_RCVSTAT                       0x004001a0 /* RECEIVE STATUS REGISTER */
#define BCHP_UARTB_RCVDATA                       0x004001a4 /* RECEIVE DATA REGISTER */
#define BCHP_UARTB_CONTROL                       0x004001ac /* CONTROL REGISTER */
#define BCHP_UARTB_BAUDHI                        0x004001b0 /* BAUD RATE REGISTER HI */
#define BCHP_UARTB_BAUDLO                        0x004001b4 /* BAUD RATE REGISTER LO */
#define BCHP_UARTB_XMTSTAT                       0x004001b8 /* TRANSMIT STATUS REGISTER */
#define BCHP_UARTB_XMTDATA                       0x004001bc /* TRANSMIT DATA REGISTER */

#endif /* #ifndef BCHP_UARTB_H__ */

/* End of File */
