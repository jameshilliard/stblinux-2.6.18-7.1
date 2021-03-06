/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
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
 * Date:           Generated on         Fri Mar 20 12:52:26 2009
 *                 MD5 Checksum         4f0509cfa0b8fc4589050694b4a3e234
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_usb_ohci1.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 9:20p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_USB_OHCI1_H__
#define BCHP_USB_OHCI1_H__

/***************************************************************************
 *USB_OHCI1 - USB OHCI 2 Control Registers
 ***************************************************************************/
#define BCHP_USB_OHCI1_HcRevision                0x00480600 /* Host Controller Revision Register */
#define BCHP_USB_OHCI1_HcControl                 0x00480604 /* Host Controller Control Register */
#define BCHP_USB_OHCI1_HcCommandStatus           0x00480608 /* Host Controller Command Status Register */
#define BCHP_USB_OHCI1_HcInterruptStatus         0x0048060c /* Host Controller Interrupt Status Register */
#define BCHP_USB_OHCI1_HcInterruptEnable         0x00480610 /* Host Controller Interrupt Enable Register */
#define BCHP_USB_OHCI1_HcInterruptDisable        0x00480614 /* Host Controller Interrupt Disable Register */
#define BCHP_USB_OHCI1_HcHCCA                    0x00480618 /* Host Controller Communication Area Register */
#define BCHP_USB_OHCI1_HcPeriodCurrentED         0x0048061c /* Current Isochronous or Interrupt Endpoint Descriptor Register */
#define BCHP_USB_OHCI1_HcControlHeadED           0x00480620 /* First Endpoint Descriptor of the Control List */
#define BCHP_USB_OHCI1_HcControlCurrentED        0x00480624 /* Current Endpoint Descriptor of the Control List */
#define BCHP_USB_OHCI1_HcBulkHeadED              0x00480628 /* First Endpoint Descriptor of the Bulk List */
#define BCHP_USB_OHCI1_HcBulkCurrentED           0x0048062c /* Current Endpoint Descriptor of the Bulk List */
#define BCHP_USB_OHCI1_HcDoneHead                0x00480630 /* Last Completed Transfer Descriptor Added to the Done Queue */
#define BCHP_USB_OHCI1_HcFmInterval              0x00480634 /* Frame Bit Time Interval Register */
#define BCHP_USB_OHCI1_HcFmRemaining             0x00480638 /* Bit Time Remaining in the Current Frame */
#define BCHP_USB_OHCI1_HcFmNumber                0x0048063c /* Frame Number Register */
#define BCHP_USB_OHCI1_HcPeriodicStart           0x00480640 /* Register to Start Processing the Periodic List */
#define BCHP_USB_OHCI1_HcLSThreshold             0x00480644 /* LS Packet Threshold Register */
#define BCHP_USB_OHCI1_HcRhDescriptorA           0x00480648 /* Root Hub Descriptor A Register */
#define BCHP_USB_OHCI1_HcRhDescriptorB           0x0048064c /* Root Hub Descriptor B Register */
#define BCHP_USB_OHCI1_HcRhStatus                0x00480650 /* Root Hub Status Register */
#define BCHP_USB_OHCI1_HcRhPortStatus1           0x00480654 /* Root Hub Port Status Register for Port 1 */
#define BCHP_USB_OHCI1_HcRhPortStatus2           0x00480658 /* Root Hub Port Status Register for Port 2 */

#endif /* #ifndef BCHP_USB_OHCI1_H__ */

/* End of File */
