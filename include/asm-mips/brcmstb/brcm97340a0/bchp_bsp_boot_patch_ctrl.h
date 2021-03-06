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
 * Date:           Generated on         Fri Mar 20 12:54:58 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_bsp_boot_patch_ctrl.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 7:52p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_BSP_BOOT_PATCH_CTRL_H__
#define BCHP_BSP_BOOT_PATCH_CTRL_H__

/***************************************************************************
 *BSP_BOOT_PATCH_CTRL - BSP Boot Code Patch Control Register
 ***************************************************************************/
#define BCHP_BSP_BOOT_PATCH_CTRL_ROM_HALF_SELECT 0x00328400 /* Boot Patch ROM (RAM) Half selection register */
#define BCHP_BSP_BOOT_PATCH_CTRL_PATCH_ROM_STATUS 0x00328404 /* Boot Patch ROM (RAM) Load Done Flag Register */
#define BCHP_BSP_BOOT_PATCH_CTRL_TEST_CONFIGURATON 0x00328408 /* Chip Test Configuration Register */

/***************************************************************************
 *ROM_HALF_SELECT - Boot Patch ROM (RAM) Half selection register
 ***************************************************************************/
/* BSP_BOOT_PATCH_CTRL :: ROM_HALF_SELECT :: reserved0 [31:01] */
#define BCHP_BSP_BOOT_PATCH_CTRL_ROM_HALF_SELECT_reserved0_MASK    0xfffffffe
#define BCHP_BSP_BOOT_PATCH_CTRL_ROM_HALF_SELECT_reserved0_SHIFT   1

/* BSP_BOOT_PATCH_CTRL :: ROM_HALF_SELECT :: ROM_HALF_SELECT [00:00] */
#define BCHP_BSP_BOOT_PATCH_CTRL_ROM_HALF_SELECT_ROM_HALF_SELECT_MASK 0x00000001
#define BCHP_BSP_BOOT_PATCH_CTRL_ROM_HALF_SELECT_ROM_HALF_SELECT_SHIFT 0

/***************************************************************************
 *PATCH_ROM_STATUS - Boot Patch ROM (RAM) Load Done Flag Register
 ***************************************************************************/
/* BSP_BOOT_PATCH_CTRL :: PATCH_ROM_STATUS :: reserved0 [31:01] */
#define BCHP_BSP_BOOT_PATCH_CTRL_PATCH_ROM_STATUS_reserved0_MASK   0xfffffffe
#define BCHP_BSP_BOOT_PATCH_CTRL_PATCH_ROM_STATUS_reserved0_SHIFT  1

/* BSP_BOOT_PATCH_CTRL :: PATCH_ROM_STATUS :: ROM_LOAD_DONE [00:00] */
#define BCHP_BSP_BOOT_PATCH_CTRL_PATCH_ROM_STATUS_ROM_LOAD_DONE_MASK 0x00000001
#define BCHP_BSP_BOOT_PATCH_CTRL_PATCH_ROM_STATUS_ROM_LOAD_DONE_SHIFT 0

/***************************************************************************
 *TEST_CONFIGURATON - Chip Test Configuration Register
 ***************************************************************************/
/* BSP_BOOT_PATCH_CTRL :: TEST_CONFIGURATON :: reserved0 [31:04] */
#define BCHP_BSP_BOOT_PATCH_CTRL_TEST_CONFIGURATON_reserved0_MASK  0xfffffff0
#define BCHP_BSP_BOOT_PATCH_CTRL_TEST_CONFIGURATON_reserved0_SHIFT 4

/* BSP_BOOT_PATCH_CTRL :: TEST_CONFIGURATON :: CHIP_TEST_CONFIG [03:00] */
#define BCHP_BSP_BOOT_PATCH_CTRL_TEST_CONFIGURATON_CHIP_TEST_CONFIG_MASK 0x0000000f
#define BCHP_BSP_BOOT_PATCH_CTRL_TEST_CONFIGURATON_CHIP_TEST_CONFIG_SHIFT 0

#endif /* #ifndef BCHP_BSP_BOOT_PATCH_CTRL_H__ */

/* End of File */
