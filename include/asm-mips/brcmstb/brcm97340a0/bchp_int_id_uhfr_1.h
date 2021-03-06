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
 * Date:           Generated on         Mon Mar 23 11:05:27 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_int_id_uhfr_1.h $
 * 
 * Hydra_Software_Devel/1   3/23/09 11:22a yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#include "bchp.h"
#include "bchp_uhfr_1.h"

#ifndef BCHP_INT_ID_UHFR_1_H__
#define BCHP_INT_ID_UHFR_1_H__

#define BCHP_INT_ID_IMSK_ALT_MAX_TIMEOUT      BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_ALT_MAX_TIMEOUT_SHIFT)
#define BCHP_INT_ID_IMSK_ALT_PACKET_END       BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_ALT_PACKET_END_SHIFT)
#define BCHP_INT_ID_IMSK_ALT_SFR              BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_ALT_SFR_SHIFT)
#define BCHP_INT_ID_IMSK_COLLISION_FALL       BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_COLLISION_FALL_SHIFT)
#define BCHP_INT_ID_IMSK_COLLISION_RISE       BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_COLLISION_RISE_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_ALT_CHSM_ERR    BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_ALT_CHSM_ERR_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_ALT_NO_GAP      BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_ALT_NO_GAP_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_ALT_NO_HLTR     BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_ALT_NO_HLTR_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_ALT_NO_LHTR     BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_ALT_NO_LHTR_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_ALT_WRONG_TR    BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_ALT_WRONG_TR_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_BCH_ERR         BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_BCH_ERR_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_DATA_CORR_VLD   BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_DATA_CORR_VLD_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_DECODE_PR1_END  BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_DECODE_PR1_END_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_DECODE_PR2_END  BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_DECODE_PR2_END_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_PR1_DETECTED    BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_PR1_DETECTED_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_PR1_PACKET_END  BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_PR1_PACKET_END_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_PR2_DETECTED    BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_PR2_DETECTED_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_PR2_PACKET_END  BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_PR2_PACKET_END_SHIFT)
#define BCHP_INT_ID_IMSK_CORR_STATE_INT       BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_CORR_STATE_INT_SHIFT)
#define BCHP_INT_ID_IMSK_IRR_PR1_DETECTED_FALL BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_IRR_PR1_DETECTED_FALL_SHIFT)
#define BCHP_INT_ID_IMSK_IRR_PR1_DETECTED_RISE BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_IRR_PR1_DETECTED_RISE_SHIFT)
#define BCHP_INT_ID_IMSK_IRR_PR2_DETECTED_FALL BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_IRR_PR2_DETECTED_FALL_SHIFT)
#define BCHP_INT_ID_IMSK_IRR_PR2_DETECTED_RISE BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_IRR_PR2_DETECTED_RISE_SHIFT)
#define BCHP_INT_ID_IMSK_PTP_TM_TMOUT         BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_PTP_TM_TMOUT_SHIFT)
#define BCHP_INT_ID_IMSK_SLOW_RSSI_FALL       BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_SLOW_RSSI_FALL_SHIFT)
#define BCHP_INT_ID_IMSK_SLOW_RSSI_RISE       BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_SLOW_RSSI_RISE_SHIFT)
#define BCHP_INT_ID_IMSK_SS_DONE              BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_SS_DONE_SHIFT)
#define BCHP_INT_ID_IMSK_STRB_20KHZ           BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_STRB_20KHZ_SHIFT)
#define BCHP_INT_ID_IMSK_STRB_500KHZ          BCHP_INT_ID_CREATE(BCHP_UHFR_1_IMSK, BCHP_UHFR_1_IMSK_IMSK_STRB_500KHZ_SHIFT)

#endif /* #ifndef BCHP_INT_ID_UHFR_1_H__ */

/* End of File */
