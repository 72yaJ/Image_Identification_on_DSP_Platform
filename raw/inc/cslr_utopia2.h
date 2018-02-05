/*  ============================================================================
 *   Copyright (c) Texas Instruments Inc 2002, 2003, 2004, 2005
 *
 *   Use of this software is controlled by the terms and conditions found in the
 *   license agreement under which this software has been supplied.
 *   ===========================================================================
 */
/** ============================================================================
 *   @file  cslr_utopia2.h
 *
 *   @path  $(CSLPATH)\inc
 *
 *   @desc  This file contains the Register Descriptions for UTOPIA
 */
#ifndef _CSLR_UTOPIA2_H_
#define _CSLR_UTOPIA2_H_

#include <cslr.h>
#include <tistdtypes.h>

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 UCR;
    volatile Uint32 RSVD0[4];
    volatile Uint32 CDR;
    volatile Uint32 EIER;
    volatile Uint32 EIPR;
} CSL_Utopia2Regs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* UCR */

#define CSL_UTOPIA2_UCR_BEND_MASK        (0x80000000u)
#define CSL_UTOPIA2_UCR_BEND_SHIFT       (0x0000001Fu)
#define CSL_UTOPIA2_UCR_BEND_RESETVAL    (0x00000000u)

/*----BEND Tokens----*/
#define CSL_UTOPIA2_UCR_BEND_LITTLE      (0x00000000u)
#define CSL_UTOPIA2_UCR_BEND_BIG         (0x00000001u)

#define CSL_UTOPIA2_UCR_SLID_MASK        (0x1F000000u)
#define CSL_UTOPIA2_UCR_SLID_SHIFT       (0x00000018u)
#define CSL_UTOPIA2_UCR_SLID_RESETVAL    (0x00000000u)

#define CSL_UTOPIA2_UCR_XUDC_MASK        (0x003C0000u)
#define CSL_UTOPIA2_UCR_XUDC_SHIFT       (0x00000012u)
#define CSL_UTOPIA2_UCR_XUDC_RESETVAL    (0x00000000u)

/*----XUDC Tokens----*/
#define CSL_UTOPIA2_UCR_XUDC_STANDARD    (0x00000000u)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER1 (0x00000001u)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER2 (0x00000002u)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER3 (0x00000003u)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER4 (0x00000004u)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER5 (0x00000005u)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER6 (0x00000006u)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER7 (0x00000007u)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER8 (0x00000008u)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER9 (0x00000009u)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER10 (0x0000000Au)
#define CSL_UTOPIA2_UCR_XUDC_EXTRAHEADER11 (0x0000000Bu)

#define CSL_UTOPIA2_UCR_UXEN_MASK        (0x00010000u)
#define CSL_UTOPIA2_UCR_UXEN_SHIFT       (0x00000010u)
#define CSL_UTOPIA2_UCR_UXEN_RESETVAL    (0x00000000u)

/*----UXEN Tokens----*/
#define CSL_UTOPIA2_UCR_UXEN_TX_PORT_DISABLE (0x00000000u)
#define CSL_UTOPIA2_UCR_UXEN_TX_PORT_ENABLE (0x00000001u)

#define CSL_UTOPIA2_UCR_MPHY_MASK        (0x00004000u)
#define CSL_UTOPIA2_UCR_MPHY_SHIFT       (0x0000000Eu)
#define CSL_UTOPIA2_UCR_MPHY_RESETVAL    (0x00000000u)

/*----MPHY Tokens----*/
#define CSL_UTOPIA2_UCR_MPHY_SINGLE_PHYMODE (0x00000000u)
#define CSL_UTOPIA2_UCR_MPHY_MULTI_PHYMODE (0x00000001u)

#define CSL_UTOPIA2_UCR_RUDC_MASK        (0x0000003Cu)
#define CSL_UTOPIA2_UCR_RUDC_SHIFT       (0x00000002u)
#define CSL_UTOPIA2_UCR_RUDC_RESETVAL    (0x00000000u)

/*----RUDC Tokens----*/
#define CSL_UTOPIA2_UCR_RUDC_STANDARD    (0x00000000u)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER1 (0x00000001u)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER2 (0x00000002u)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER3 (0x00000003u)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER4 (0x00000004u)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER5 (0x00000005u)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER6 (0x00000006u)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER7 (0x00000007u)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER8 (0x00000008u)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER9 (0x00000009u)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER10 (0x0000000Au)
#define CSL_UTOPIA2_UCR_RUDC_EXTRAHEADER11 (0x0000000Bu)

#define CSL_UTOPIA2_UCR_UREN_MASK        (0x00000001u)
#define CSL_UTOPIA2_UCR_UREN_SHIFT       (0x00000000u)
#define CSL_UTOPIA2_UCR_UREN_RESETVAL    (0x00000000u)

/*----UREN Tokens----*/
#define CSL_UTOPIA2_UCR_UREN_RX_PORT_DISABLE (0x00000000u)
#define CSL_UTOPIA2_UCR_UREN_RX_PORT_ENABLE (0x00000001u)

#define CSL_UTOPIA2_UCR_RESETVAL         (0x00000000u)

/* CDR */

#define CSL_UTOPIA2_CDR_XCCNT_MASK       (0x00FF0000u)
#define CSL_UTOPIA2_CDR_XCCNT_SHIFT      (0x00000010u)
#define CSL_UTOPIA2_CDR_XCCNT_RESETVAL   (0x000000FFu)

/*----XCCNT Tokens----*/
#define CSL_UTOPIA2_CDR_XCCNT_DISABLE    (0x00000000u)

#define CSL_UTOPIA2_CDR_RCCNT_MASK       (0x000000FFu)
#define CSL_UTOPIA2_CDR_RCCNT_SHIFT      (0x00000000u)
#define CSL_UTOPIA2_CDR_RCCNT_RESETVAL   (0x000000FFu)

/*----RCCNT Tokens----*/
#define CSL_UTOPIA2_CDR_RCCNT_DISABLE    (0x00000000u)

#define CSL_UTOPIA2_CDR_RESETVAL         (0x00FF00FFu)

/* EIER */

#define CSL_UTOPIA2_EIER_XCPE_MASK       (0x00040000u)
#define CSL_UTOPIA2_EIER_XCPE_SHIFT      (0x00000012u)
#define CSL_UTOPIA2_EIER_XCPE_RESETVAL   (0x00000000u)

/*----XCPE Tokens----*/
#define CSL_UTOPIA2_EIER_XCPE_DISABLE    (0x00000000u)
#define CSL_UTOPIA2_EIER_XCPE_ENABLE     (0x00000001u)

#define CSL_UTOPIA2_EIER_XCFE_MASK       (0x00020000u)
#define CSL_UTOPIA2_EIER_XCFE_SHIFT      (0x00000011u)
#define CSL_UTOPIA2_EIER_XCFE_RESETVAL   (0x00000000u)

/*----XCFE Tokens----*/
#define CSL_UTOPIA2_EIER_XCFE_DISABLE    (0x00000000u)
#define CSL_UTOPIA2_EIER_XCFE_ENABLE     (0x00000001u)

#define CSL_UTOPIA2_EIER_XQSE_MASK       (0x00010000u)
#define CSL_UTOPIA2_EIER_XQSE_SHIFT      (0x00000010u)
#define CSL_UTOPIA2_EIER_XQSE_RESETVAL   (0x00000000u)

/*----XQSE Tokens----*/
#define CSL_UTOPIA2_EIER_XQSE_DISABLE    (0x00000000u)
#define CSL_UTOPIA2_EIER_XQSE_ENABLE     (0x00000001u)

#define CSL_UTOPIA2_EIER_RCPE_MASK       (0x00000004u)
#define CSL_UTOPIA2_EIER_RCPE_SHIFT      (0x00000002u)
#define CSL_UTOPIA2_EIER_RCPE_RESETVAL   (0x00000000u)

/*----RCPE Tokens----*/
#define CSL_UTOPIA2_EIER_RCPE_DISABLE    (0x00000000u)
#define CSL_UTOPIA2_EIER_RCPE_ENABLE     (0x00000001u)

#define CSL_UTOPIA2_EIER_RCFE_MASK       (0x00000002u)
#define CSL_UTOPIA2_EIER_RCFE_SHIFT      (0x00000001u)
#define CSL_UTOPIA2_EIER_RCFE_RESETVAL   (0x00000000u)

/*----RCFE Tokens----*/
#define CSL_UTOPIA2_EIER_RCFE_DISABLE    (0x00000000u)
#define CSL_UTOPIA2_EIER_RCFE_ENABLE     (0x00000001u)

#define CSL_UTOPIA2_EIER_RQSE_MASK       (0x00000001u)
#define CSL_UTOPIA2_EIER_RQSE_SHIFT      (0x00000000u)
#define CSL_UTOPIA2_EIER_RQSE_RESETVAL   (0x00000000u)

/*----RQSE Tokens----*/
#define CSL_UTOPIA2_EIER_RQSE_DISABLE    (0x00000000u)
#define CSL_UTOPIA2_EIER_RQSE_ENABLE     (0x00000001u)

#define CSL_UTOPIA2_EIER_RESETVAL        (0x00000000u)

/* EIPR */

#define CSL_UTOPIA2_EIPR_XCPP_MASK       (0x00040000u)
#define CSL_UTOPIA2_EIPR_XCPP_SHIFT      (0x00000012u)
#define CSL_UTOPIA2_EIPR_XCPP_RESETVAL   (0x00000000u)

#define CSL_UTOPIA2_EIPR_XCFP_MASK       (0x00020000u)
#define CSL_UTOPIA2_EIPR_XCFP_SHIFT      (0x00000011u)
#define CSL_UTOPIA2_EIPR_XCFP_RESETVAL   (0x00000000u)

#define CSL_UTOPIA2_EIPR_XQSP_MASK       (0x00010000u)
#define CSL_UTOPIA2_EIPR_XQSP_SHIFT      (0x00000010u)
#define CSL_UTOPIA2_EIPR_XQSP_RESETVAL   (0x00000000u)

#define CSL_UTOPIA2_EIPR_RCPP_MASK       (0x00000004u)
#define CSL_UTOPIA2_EIPR_RCPP_SHIFT      (0x00000002u)
#define CSL_UTOPIA2_EIPR_RCPP_RESETVAL   (0x00000000u)

#define CSL_UTOPIA2_EIPR_RCFP_MASK       (0x00000002u)
#define CSL_UTOPIA2_EIPR_RCFP_SHIFT      (0x00000001u)
#define CSL_UTOPIA2_EIPR_RCFP_RESETVAL   (0x00000000u)

#define CSL_UTOPIA2_EIPR_RQSP_MASK       (0x00000001u)
#define CSL_UTOPIA2_EIPR_RQSP_SHIFT      (0x00000000u)
#define CSL_UTOPIA2_EIPR_RQSP_RESETVAL   (0x00000000u)

#define CSL_UTOPIA2_EIPR_RESETVAL        (0x00000000u)

#endif
