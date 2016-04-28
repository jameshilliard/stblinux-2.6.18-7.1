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
 * Date:           Generated on         Fri Mar 20 12:58:06 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_reg_cabac2bins_0.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 9:02p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_REG_CABAC2BINS_0_H__
#define BCHP_REG_CABAC2BINS_0_H__

/***************************************************************************
 *REG_CABAC2BINS_0
 ***************************************************************************/
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_IMG__CTX_LAST 0x00800bbc /* REG_CABAC2BINS_IMG__CTX_LAST */
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_CONTEXT_TABLE_BASE_ADDR 0x00800bd0 /* REG_CABAC2BINS_CONTEXT_TABLE_BASE_ADDR */
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_END_END 0x00800bfc /* REG_CABAC2BINS_END_END */

/***************************************************************************
 *REG_CABAC2BINS_IMG__CTX_LAST - REG_CABAC2BINS_IMG__CTX_LAST
 ***************************************************************************/
/* REG_CABAC2BINS_0 :: REG_CABAC2BINS_IMG__CTX_LAST :: reserved0 [31:09] */
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_IMG__CTX_LAST_reserved0_MASK 0xfffffe00
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_IMG__CTX_LAST_reserved0_SHIFT 9

/* REG_CABAC2BINS_0 :: REG_CABAC2BINS_IMG__CTX_LAST :: CtxLast [08:00] */
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_IMG__CTX_LAST_CtxLast_MASK 0x000001ff
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_IMG__CTX_LAST_CtxLast_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_CONTEXT_TABLE_BASE_ADDR - REG_CABAC2BINS_CONTEXT_TABLE_BASE_ADDR
 ***************************************************************************/
/* REG_CABAC2BINS_0 :: REG_CABAC2BINS_CONTEXT_TABLE_BASE_ADDR :: Addr [31:04] */
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_CONTEXT_TABLE_BASE_ADDR_Addr_MASK 0xfffffff0
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_CONTEXT_TABLE_BASE_ADDR_Addr_SHIFT 4

/* REG_CABAC2BINS_0 :: REG_CABAC2BINS_CONTEXT_TABLE_BASE_ADDR :: reserved0 [03:00] */
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_CONTEXT_TABLE_BASE_ADDR_reserved0_MASK 0x0000000f
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_CONTEXT_TABLE_BASE_ADDR_reserved0_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_END_END - REG_CABAC2BINS_END_END
 ***************************************************************************/
/* REG_CABAC2BINS_0 :: REG_CABAC2BINS_END_END :: reserved0 [31:00] */
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_END_END_reserved0_MASK 0xffffffff
#define BCHP_REG_CABAC2BINS_0_REG_CABAC2BINS_END_END_reserved0_SHIFT 0

#endif /* #ifndef BCHP_REG_CABAC2BINS_0_H__ */

/* End of File */
