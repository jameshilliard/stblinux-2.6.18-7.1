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
 * Date:           Generated on         Fri Mar 20 13:02:10 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_xpt_pb1.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 9:32p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_XPT_PB1_H__
#define BCHP_XPT_PB1_H__

/***************************************************************************
 *XPT_PB1 - Playback 1 Control Registers
 ***************************************************************************/
#define BCHP_XPT_PB1_CTRL1                       0x00387080 /* Playback Control 1 Register */
#define BCHP_XPT_PB1_CTRL2                       0x00387084 /* Playback Control 2 Register */
#define BCHP_XPT_PB1_CTRL3                       0x00387088 /* Playback Control 3 Register */
#define BCHP_XPT_PB1_CTRL4                       0x0038708c /* Playback Control 4 Register */
#define BCHP_XPT_PB1_FIRST_DESC_ADDR             0x00387090 /* Playback First Descriptor Address Register */
#define BCHP_XPT_PB1_CURR_DESC_ADDR              0x00387094 /* Playback Current Descriptor Address Register */
#define BCHP_XPT_PB1_CURR_BUFF_ADDR              0x00387098 /* Playback Current Buffer Address Register */
#define BCHP_XPT_PB1_BLOCKOUT                    0x0038709c /* Data Transport Playback Block Out Control */
#define BCHP_XPT_PB1_PKTZ_CONTEXT0               0x003870a0 /* Data Transport Playback Packetize Mode Context 0 Control */
#define BCHP_XPT_PB1_TS_ERR_BOUND_EARLY          0x003870a4 /* Data Transport Playback Timestamp Error Bound Register */
#define BCHP_XPT_PB1_TS_ERR_BOUND_LATE           0x003870a8 /* Data Transport Playback Timestamp Error Bound Register */
#define BCHP_XPT_PB1_PARSER_CTRL1                0x003870ac /* Data Transport Playback Parser Control Register */
#define BCHP_XPT_PB1_PARSER_CTRL2                0x003870b0 /* Data Transport Playback Parser Control Register 2 */
#define BCHP_XPT_PB1_PARSER_TIMESTAMP            0x003870b4 /* Data Transport Playback Parser Local Timestamp */
#define BCHP_XPT_PB1_INTR                        0x003870b8 /* Playback Processing Error and Status Interrupt Register */
#define BCHP_XPT_PB1_INTR_EN                     0x003870bc /* Playback Processing Error and Status Interrupt Enable Register */
#define BCHP_XPT_PB1_INTR_TAGS                   0x003870c0 /* Playback Interrupt Tag Register */
#define BCHP_XPT_PB1_PACING_PCR_PID              0x003870c4 /* Playback PCR Based Pacing PCR Pid */
#define BCHP_XPT_PB1_PWR_CTRL                    0x003870c8 /* Playback Power Control Register */

#endif /* #ifndef BCHP_XPT_PB1_H__ */

/* End of File */