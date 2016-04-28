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
 * Date:           Generated on         Mon Mar 23 11:05:45 2009
 *                 MD5 Checksum         39db7382cfc6d56476b4578f59380093
 *
 * Compiled with:  RDB Utility          unknown
 *                 RDB Parser           3.0
 *                 generate_int_id.pl   1.0
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_int_id_xpt_msg.h $
 * 
 * Hydra_Software_Devel/1   3/23/09 11:24a yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#include "bchp.h"
#include "bchp_xpt_msg.h"

#ifndef BCHP_INT_ID_XPT_MSG_H__
#define BCHP_INT_ID_XPT_MSG_H__

#define BCHP_INT_ID_CRC_ERROR                 BCHP_INT_ID_CREATE(BCHP_XPT_MSG_DAT_ERR_INTR, BCHP_XPT_MSG_DAT_ERR_INTR_CRC_ERROR_SHIFT)
#define BCHP_INT_ID_DMA_BURST_OVFL            BCHP_INT_ID_CREATE(BCHP_XPT_MSG_DAT_ERR_INTR, BCHP_XPT_MSG_DAT_ERR_INTR_DMA_BURST_OVFL_SHIFT)
#define BCHP_INT_ID_DTV_CF_ERROR              BCHP_INT_ID_CREATE(BCHP_XPT_MSG_DAT_ERR_INTR, BCHP_XPT_MSG_DAT_ERR_INTR_DTV_CF_ERROR_SHIFT)
#define BCHP_INT_ID_DTV_HD_ERROR              BCHP_INT_ID_CREATE(BCHP_XPT_MSG_DAT_ERR_INTR, BCHP_XPT_MSG_DAT_ERR_INTR_DTV_HD_ERROR_SHIFT)
#define BCHP_INT_ID_MPT_ERROR                 BCHP_INT_ID_CREATE(BCHP_XPT_MSG_DAT_ERR_INTR, BCHP_XPT_MSG_DAT_ERR_INTR_MPT_ERROR_SHIFT)
#define BCHP_INT_ID_PES_ERROR                 BCHP_INT_ID_CREATE(BCHP_XPT_MSG_DAT_ERR_INTR, BCHP_XPT_MSG_DAT_ERR_INTR_PES_ERROR_SHIFT)
#define BCHP_INT_ID_PSC_ERROR                 BCHP_INT_ID_CREATE(BCHP_XPT_MSG_DAT_ERR_INTR, BCHP_XPT_MSG_DAT_ERR_INTR_PSC_ERROR_SHIFT)
#define BCHP_INT_ID_PSI_ERROR                 BCHP_INT_ID_CREATE(BCHP_XPT_MSG_DAT_ERR_INTR, BCHP_XPT_MSG_DAT_ERR_INTR_PSI_ERROR_SHIFT)
#define BCHP_INT_ID_XPT_MSG_INTR_FLAG         BCHP_INT_ID_CREATE(BCHP_XPT_MSG_BUF_DAT_RDY_INTR_96_127, BCHP_XPT_MSG_BUF_DAT_RDY_INTR_96_127_INTR_FLAG_SHIFT)

#endif /* #ifndef BCHP_INT_ID_XPT_MSG_H__ */

/* End of File */