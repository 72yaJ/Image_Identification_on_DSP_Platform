/*  ============================================================================
 *  Copyright (c) Texas Instruments Inc 2002, 2003, 2004, 2005
 *
 *  Use of this software is controlled by the terms and conditions found in the
 *  license agreement under which this software has been supplied.
 *  ============================================================================
 */
/** ============================================================================
 *   @file  csl_version.h
 *
 *   @path  $(CSLPATH)\inc
 *
 *   @desc  This file contains the version number of different chips
 *
 */
/* =============================================================================
 *  Revision History
 *  ===============
 *  25-Aug-2006 NG  Updated for new chip c6454 for the release v03_00_10_02
 * =============================================================================
 */

#ifndef _CSL_VERSION_H_
#define _CSL_VERSION_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <tistdtypes.h>

/* 0xAABBCCDD -> Arch (AA); API Changes (BB); Major (CC); Minor (DD) */
#define CSL_VERSION_ID          (0x03001002)    
#define CSL_VERSION_STR         "@(#) CSL Revision: 3.00.10.02;"

#ifdef c6482
#define CSL_CHIP_ID             (0x6482)
#define CSL_CHIP_STR            "TMS320C6482 PG 1.0 (C6482)"
#endif

#ifdef c6455
#define CSL_CHIP_ID             (0x6455)
#define CSL_CHIP_STR            "TMS320C6455 PG 1.0 (C6455)"
#endif

#ifdef c6454
#define CSL_CHIP_ID             (0x6454)
#define CSL_CHIP_STR            "TMS320C6454 PG 1.0 (C6454)"
#endif

#ifdef c64xplus_intc
#define CSL_CHIP_ID             (0x64A)
#define CSL_CHIP_STR            "C64X PLUS"
#endif

/**
  @brief    Retrieves the version ID
*/
Uint32 CSL_versionGetID (
    void
);


/**
  @brief    Retrieves the version string
*/
const char *
    CSL_versionGetStr (
        void
);


#ifdef __cplusplus
}
#endif

#endif /* _CSL_VERSION_H_ */

