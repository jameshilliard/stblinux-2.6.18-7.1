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
 * Date:           Generated on         Fri Mar 20 12:59:35 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_rm_1.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 9:03p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_RM_1_H__
#define BCHP_RM_1_H__

/***************************************************************************
 *RM_1 - Rate Manger RM_1
 ***************************************************************************/
#define BCHP_RM_1_CONTROL                        0x00183a40 /* Rate Manager Controls */
#define BCHP_RM_1_RATE_RATIO                     0x00183a44 /* Rate Manager Output Rate Setting I */
#define BCHP_RM_1_SAMPLE_INC                     0x00183a48 /* Rate Manager Output Rate Setting II */
#define BCHP_RM_1_PHASE_INC                      0x00183a4c /* Rate Manager NCO Phase Increment */
#define BCHP_RM_1_INTEGRATOR                     0x00183a50 /* Loop Filter Integrator Value */
#define BCHP_RM_1_SKIP_REPEAT_CONTROL            0x00183a54 /* Time Base Skip or Repeat Control Register */
#define BCHP_RM_1_SKIP_REPEAT_GAP                0x00183a58 /* Time Base Skip or Repeat Gap Count Register */
#define BCHP_RM_1_SKIP_REPEAT_NUMBER             0x00183a5c /* Time Base Skip or Repeat Count Register */
#define BCHP_RM_1_STATUS                         0x00183a60 /* Rate Manager Status Register */
#define BCHP_RM_1_STATUS_CLEAR                   0x00183a64 /* Rate Manager Status Clear Register */

#endif /* #ifndef BCHP_RM_1_H__ */

/* End of File */
