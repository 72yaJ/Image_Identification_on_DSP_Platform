/*  ============================================================================
 *   Copyright (c) Texas Instruments Inc 2002, 2003, 2004, 2005
 *
 *   Use of this software is controlled by the terms and conditions found in the
 *   license agreement under which this software has been supplied.
 *   ===========================================================================
 */
/** ============================================================================
 *   @file  cslr_bwmngmt.h
 *
 *   @path  $(CSLPATH)\inc
 *
 *   @desc  This file contains the Register Descriptions for BWMNGMT
 */
#ifndef _CSLR_BWMNGMT_H_
#define _CSLR_BWMNGMT_H_

#include <cslr.h>
#include <csl_types.h>

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 CPUARBEXT;
    volatile Uint32 IDMAARBEXT;
    volatile Uint32 SLAPARBEXT;
    volatile Uint32 MAPARBEXT;
    volatile Uint8 RSVD0[134640];
    volatile Uint32 CPUARBL2;
    volatile Uint32 IDMAARBL2;
    volatile Uint32 SLAPARBL2;
    volatile Uint32 UCARBL2;
    volatile Uint8 RSVD1[48];
    volatile Uint32 CPUARBL1D;
    volatile Uint32 IDMAARBL1D;
    volatile Uint32 SLAPARBL1D;
    volatile Uint32 UCARBL1D;
} CSL_BwmngmtRegs;

/**************************************************************************\
* Overlay structure typedef definition
\**************************************************************************/
typedef volatile CSL_BwmngmtRegs        *CSL_BwmngmtRegsOvly;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* CPUARBL1D */

#define CSL_BWMNGMT_CPUARBL1D_MAXWAIT_MASK          (0x0000003Fu)
#define CSL_BWMNGMT_CPUARBL1D_MAXWAIT_SHIFT         (0x00000000u)
#define CSL_BWMNGMT_CPUARBL1D_MAXWAIT_RESETVAL      (0x00000010u)
#define CSL_BWMNGMT_CPUARBL1D_MAXWAIT_MAXWAIT0      (0x00000000u)
#define CSL_BWMNGMT_CPUARBL1D_MAXWAIT_MAXWAIT1      (0x00000001u)
#define CSL_BWMNGMT_CPUARBL1D_MAXWAIT_MAXWAIT2      (0x00000002u)
#define CSL_BWMNGMT_CPUARBL1D_MAXWAIT_MAXWAIT4      (0x00000004u)
#define CSL_BWMNGMT_CPUARBL1D_MAXWAIT_MAXWAIT8      (0x00000008u)
#define CSL_BWMNGMT_CPUARBL1D_MAXWAIT_MAXWAIT16     (0x00000010u)
#define CSL_BWMNGMT_CPUARBL1D_MAXWAIT_MAXWAIT32     (0x00000020u)

#define CSL_BWMNGMT_CPUARBL1D_PRI_MASK              (0x00070000u)
#define CSL_BWMNGMT_CPUARBL1D_PRI_SHIFT             (0x00000010u)
#define CSL_BWMNGMT_CPUARBL1D_PRI_RESETVAL          (0x00000001u)
#define CSL_BWMNGMT_CPUARBL1D_PRI_PRI0              (0x00000000u)
#define CSL_BWMNGMT_CPUARBL1D_PRI_PRI1              (0x00000001u)
#define CSL_BWMNGMT_CPUARBL1D_PRI_PRI2              (0x00000002u)
#define CSL_BWMNGMT_CPUARBL1D_PRI_PRI3              (0x00000003u)
#define CSL_BWMNGMT_CPUARBL1D_PRI_PRI4              (0x00000004u)
#define CSL_BWMNGMT_CPUARBL1D_PRI_PRI5              (0x00000005u)
#define CSL_BWMNGMT_CPUARBL1D_PRI_PRI6              (0x00000006u)
#define CSL_BWMNGMT_CPUARBL1D_PRI_PRI7              (0x00000007u)
                                                    
#define CSL_BWMNGMT_CPUARBL1D_RESETVAL              (0x00010010u)

/* CPUARBL2 */

#define CSL_BWMNGMT_CPUARBL2_MAXWAIT_MASK           (0x0000003Fu)
#define CSL_BWMNGMT_CPUARBL2_MAXWAIT_SHIFT          (0x00000000u)
#define CSL_BWMNGMT_CPUARBL2_MAXWAIT_RESETVAL       (0x00000010u)
#define CSL_BWMNGMT_CPUARBL2_MAXWAIT_MAXWAIT0       (0x00000000u)
#define CSL_BWMNGMT_CPUARBL2_MAXWAIT_MAXWAIT1       (0x00000001u)
#define CSL_BWMNGMT_CPUARBL2_MAXWAIT_MAXWAIT2       (0x00000002u)
#define CSL_BWMNGMT_CPUARBL2_MAXWAIT_MAXWAIT4       (0x00000004u)
#define CSL_BWMNGMT_CPUARBL2_MAXWAIT_MAXWAIT8       (0x00000008u)
#define CSL_BWMNGMT_CPUARBL2_MAXWAIT_MAXWAIT16      (0x00000010u)
#define CSL_BWMNGMT_CPUARBL2_MAXWAIT_MAXWAIT32      (0x00000020u)

#define CSL_BWMNGMT_CPUARBL2_PRI_MASK               (0x00070000u)
#define CSL_BWMNGMT_CPUARBL2_PRI_SHIFT              (0x00000010u)
#define CSL_BWMNGMT_CPUARBL2_PRI_RESETVAL           (0x00000001u)
#define CSL_BWMNGMT_CPUARBL2_PRI_PRI0               (0x00000000u)
#define CSL_BWMNGMT_CPUARBL2_PRI_PRI1               (0x00000001u)
#define CSL_BWMNGMT_CPUARBL2_PRI_PRI2               (0x00000002u)
#define CSL_BWMNGMT_CPUARBL2_PRI_PRI3               (0x00000003u)
#define CSL_BWMNGMT_CPUARBL2_PRI_PRI4               (0x00000004u)
#define CSL_BWMNGMT_CPUARBL2_PRI_PRI5               (0x00000005u)
#define CSL_BWMNGMT_CPUARBL2_PRI_PRI6               (0x00000006u)
#define CSL_BWMNGMT_CPUARBL2_PRI_PRI7               (0x00000007u)
                                                    
#define CSL_BWMNGMT_CPUARBL2_RESETVAL               (0x00010010u)

/* CPUARBEXT */

#define CSL_BWMNGMT_CPUARBEXT_MAXWAIT_MASK          (0x0000003Fu)
#define CSL_BWMNGMT_CPUARBEXT_MAXWAIT_SHIFT         (0x00000000u)
#define CSL_BWMNGMT_CPUARBEXT_MAXWAIT_RESETVAL      (0x00000010u)
#define CSL_BWMNGMT_CPUARBEXT_MAXWAIT_MAXWAIT0      (0x00000000u)
#define CSL_BWMNGMT_CPUARBEXT_MAXWAIT_MAXWAIT1      (0x00000001u)
#define CSL_BWMNGMT_CPUARBEXT_MAXWAIT_MAXWAIT2      (0x00000002u)
#define CSL_BWMNGMT_CPUARBEXT_MAXWAIT_MAXWAIT4      (0x00000004u)
#define CSL_BWMNGMT_CPUARBEXT_MAXWAIT_MAXWAIT8      (0x00000008u)
#define CSL_BWMNGMT_CPUARBEXT_MAXWAIT_MAXWAIT16     (0x00000010u)
#define CSL_BWMNGMT_CPUARBEXT_MAXWAIT_MAXWAIT32     (0x00000020u)

#define CSL_BWMNGMT_CPUARBEXT_PRI_MASK              (0x00070000u)
#define CSL_BWMNGMT_CPUARBEXT_PRI_SHIFT             (0x00000010u)
#define CSL_BWMNGMT_CPUARBEXT_PRI_RESETVAL          (0x00000001u)
#define CSL_BWMNGMT_CPUARBEXT_PRI_PRI0              (0x00000000u)
#define CSL_BWMNGMT_CPUARBEXT_PRI_PRI1              (0x00000001u)
#define CSL_BWMNGMT_CPUARBEXT_PRI_PRI2              (0x00000002u)
#define CSL_BWMNGMT_CPUARBEXT_PRI_PRI3              (0x00000003u)
#define CSL_BWMNGMT_CPUARBEXT_PRI_PRI4              (0x00000004u)
#define CSL_BWMNGMT_CPUARBEXT_PRI_PRI5              (0x00000005u)
#define CSL_BWMNGMT_CPUARBEXT_PRI_PRI6              (0x00000006u)
#define CSL_BWMNGMT_CPUARBEXT_PRI_PRI7              (0x00000007u)
                                                    
#define CSL_BWMNGMT_CPUARBEXT_RESETVAL              (0x00010010u)

/* IDMAARBL1D */

#define CSL_BWMNGMT_IDMAARBL1D_MAXWAIT_MASK         (0x0000003Fu)
#define CSL_BWMNGMT_IDMAARBL1D_MAXWAIT_SHIFT        (0x00000000u)
#define CSL_BWMNGMT_IDMAARBL1D_MAXWAIT_RESETVAL     (0x00000010u)
#define CSL_BWMNGMT_IDMAARBL1D_MAXWAIT_MAXWAIT0     (0x00000000u)
#define CSL_BWMNGMT_IDMAARBL1D_MAXWAIT_MAXWAIT1     (0x00000001u)
#define CSL_BWMNGMT_IDMAARBL1D_MAXWAIT_MAXWAIT2     (0x00000002u)
#define CSL_BWMNGMT_IDMAARBL1D_MAXWAIT_MAXWAIT4     (0x00000004u)
#define CSL_BWMNGMT_IDMAARBL1D_MAXWAIT_MAXWAIT8     (0x00000008u)
#define CSL_BWMNGMT_IDMAARBL1D_MAXWAIT_MAXWAIT16    (0x00000010u)
#define CSL_BWMNGMT_IDMAARBL1D_MAXWAIT_MAXWAIT32    (0x00000020u)

#define CSL_BWMNGMT_IDMAARBL1D_RESETVAL             (0x00000010u)

/* IDMAARBL2 */

#define CSL_BWMNGMT_IDMAARBL2_MAXWAIT_MASK          (0x0000003Fu)
#define CSL_BWMNGMT_IDMAARBL2_MAXWAIT_SHIFT         (0x00000000u)
#define CSL_BWMNGMT_IDMAARBL2_MAXWAIT_RESETVAL      (0x00000010u)
#define CSL_BWMNGMT_IDMAARBL2_MAXWAIT_MAXWAIT0      (0x00000000u)
#define CSL_BWMNGMT_IDMAARBL2_MAXWAIT_MAXWAIT1      (0x00000001u)
#define CSL_BWMNGMT_IDMAARBL2_MAXWAIT_MAXWAIT2      (0x00000002u)
#define CSL_BWMNGMT_IDMAARBL2_MAXWAIT_MAXWAIT4      (0x00000004u)
#define CSL_BWMNGMT_IDMAARBL2_MAXWAIT_MAXWAIT8      (0x00000008u)
#define CSL_BWMNGMT_IDMAARBL2_MAXWAIT_MAXWAIT16     (0x00000010u)
#define CSL_BWMNGMT_IDMAARBL2_MAXWAIT_MAXWAIT32     (0x00000020u)

#define CSL_BWMNGMT_IDMAARBL2_RESETVAL              (0x00000010u)

/* IDMAARBEXT */

#define CSL_BWMNGMT_IDMAARBEXT_MAXWAIT_MASK         (0x0000003Fu)
#define CSL_BWMNGMT_IDMAARBEXT_MAXWAIT_SHIFT        (0x00000000u)
#define CSL_BWMNGMT_IDMAARBEXT_MAXWAIT_RESETVAL     (0x00000010u)
#define CSL_BWMNGMT_IDMAARBEXT_MAXWAIT_MAXWAIT0     (0x00000000u)
#define CSL_BWMNGMT_IDMAARBEXT_MAXWAIT_MAXWAIT1     (0x00000001u)
#define CSL_BWMNGMT_IDMAARBEXT_MAXWAIT_MAXWAIT2     (0x00000002u)
#define CSL_BWMNGMT_IDMAARBEXT_MAXWAIT_MAXWAIT4     (0x00000004u)
#define CSL_BWMNGMT_IDMAARBEXT_MAXWAIT_MAXWAIT8     (0x00000008u)
#define CSL_BWMNGMT_IDMAARBEXT_MAXWAIT_MAXWAIT16    (0x00000010u)
#define CSL_BWMNGMT_IDMAARBEXT_MAXWAIT_MAXWAIT32    (0x00000020u)

#define CSL_BWMNGMT_IDMAARBEXT_RESETVAL             (0x00000010u)

/* SLAPARBL1D */

#define CSL_BWMNGMT_SLAPARBL1D_MAXWAIT_MASK         (0x0000003Fu)
#define CSL_BWMNGMT_SLAPARBL1D_MAXWAIT_SHIFT        (0x00000000u)
#define CSL_BWMNGMT_SLAPARBL1D_MAXWAIT_RESETVAL     (0x00000001u)
#define CSL_BWMNGMT_SLAPARBL1D_MAXWAIT_MAXWAIT0     (0x00000000u)
#define CSL_BWMNGMT_SLAPARBL1D_MAXWAIT_MAXWAIT1     (0x00000001u)
#define CSL_BWMNGMT_SLAPARBL1D_MAXWAIT_MAXWAIT2     (0x00000002u)
#define CSL_BWMNGMT_SLAPARBL1D_MAXWAIT_MAXWAIT4     (0x00000004u)
#define CSL_BWMNGMT_SLAPARBL1D_MAXWAIT_MAXWAIT8     (0x00000008u)
#define CSL_BWMNGMT_SLAPARBL1D_MAXWAIT_MAXWAIT16    (0x00000010u)
#define CSL_BWMNGMT_SLAPARBL1D_MAXWAIT_MAXWAIT32    (0x00000020u)

#define CSL_BWMNGMT_SLAPARBL1D_RESETVAL             (0x00000001u)

/* SLAPARBL2 */

#define CSL_BWMNGMT_SLAPARBL2_MAXWAIT_MASK          (0x0000003Fu)
#define CSL_BWMNGMT_SLAPARBL2_MAXWAIT_SHIFT         (0x00000000u)
#define CSL_BWMNGMT_SLAPARBL2_MAXWAIT_RESETVAL      (0x00000001u)
#define CSL_BWMNGMT_SLAPARBL2_MAXWAIT_MAXWAIT0      (0x00000000u)
#define CSL_BWMNGMT_SLAPARBL2_MAXWAIT_MAXWAIT1      (0x00000001u)
#define CSL_BWMNGMT_SLAPARBL2_MAXWAIT_MAXWAIT2      (0x00000002u)
#define CSL_BWMNGMT_SLAPARBL2_MAXWAIT_MAXWAIT4      (0x00000004u)
#define CSL_BWMNGMT_SLAPARBL2_MAXWAIT_MAXWAIT8      (0x00000008u)
#define CSL_BWMNGMT_SLAPARBL2_MAXWAIT_MAXWAIT16     (0x00000010u)
#define CSL_BWMNGMT_SLAPARBL2_MAXWAIT_MAXWAIT32     (0x00000020u)

#define CSL_BWMNGMT_SLAPARBL2_RESETVAL              (0x00000001u)

/* SLAPARBEXT */

#define CSL_BWMNGMT_SLAPARBEXT_MAXWAIT_MASK         (0x0000003Fu)
#define CSL_BWMNGMT_SLAPARBEXT_MAXWAIT_SHIFT        (0x00000000u)
#define CSL_BWMNGMT_SLAPARBEXT_MAXWAIT_RESETVAL     (0x00000001u)
#define CSL_BWMNGMT_SLAPARBEXT_MAXWAIT_MAXWAIT0     (0x00000000u)
#define CSL_BWMNGMT_SLAPARBEXT_MAXWAIT_MAXWAIT1     (0x00000001u)
#define CSL_BWMNGMT_SLAPARBEXT_MAXWAIT_MAXWAIT2     (0x00000002u)
#define CSL_BWMNGMT_SLAPARBEXT_MAXWAIT_MAXWAIT4     (0x00000004u)
#define CSL_BWMNGMT_SLAPARBEXT_MAXWAIT_MAXWAIT8     (0x00000008u)
#define CSL_BWMNGMT_SLAPARBEXT_MAXWAIT_MAXWAIT16    (0x00000010u)
#define CSL_BWMNGMT_SLAPARBEXT_MAXWAIT_MAXWAIT32    (0x00000020u)

#define CSL_BWMNGMT_SLAPARBEXT_RESETVAL             (0x00000001u)

/* UCARBL1D */

#define CSL_BWMNGMT_UCARBL1D_MAXWAIT_MASK           (0x0000003Fu)
#define CSL_BWMNGMT_UCARBL1D_MAXWAIT_SHIFT          (0x00000000u)
#define CSL_BWMNGMT_UCARBL1D_MAXWAIT_RESETVAL       (0x00000020u)
#define CSL_BWMNGMT_UCARBL1D_MAXWAIT_MAXWAIT0       (0x00000000u)
#define CSL_BWMNGMT_UCARBL1D_MAXWAIT_MAXWAIT1       (0x00000001u)
#define CSL_BWMNGMT_UCARBL1D_MAXWAIT_MAXWAIT2       (0x00000002u)
#define CSL_BWMNGMT_UCARBL1D_MAXWAIT_MAXWAIT4       (0x00000004u)
#define CSL_BWMNGMT_UCARBL1D_MAXWAIT_MAXWAIT8       (0x00000008u)
#define CSL_BWMNGMT_UCARBL1D_MAXWAIT_MAXWAIT16      (0x00000010u)
#define CSL_BWMNGMT_UCARBL1D_MAXWAIT_MAXWAIT32      (0x00000020u)
                                                
#define CSL_BWMNGMT_UCARBL1D_RESETVAL               (0x00000020u)

/* UCARBL2 */

#define CSL_BWMNGMT_UCARBL2_MAXWAIT_MASK            (0x0000003Fu)
#define CSL_BWMNGMT_UCARBL2_MAXWAIT_SHIFT           (0x00000000u)
#define CSL_BWMNGMT_UCARBL2_MAXWAIT_RESETVAL        (0x00000020u)
#define CSL_BWMNGMT_UCARBL2_MAXWAIT_MAXWAIT0        (0x00000000u)
#define CSL_BWMNGMT_UCARBL2_MAXWAIT_MAXWAIT1        (0x00000001u)
#define CSL_BWMNGMT_UCARBL2_MAXWAIT_MAXWAIT2        (0x00000002u)
#define CSL_BWMNGMT_UCARBL2_MAXWAIT_MAXWAIT4        (0x00000004u)
#define CSL_BWMNGMT_UCARBL2_MAXWAIT_MAXWAIT8        (0x00000008u)
#define CSL_BWMNGMT_UCARBL2_MAXWAIT_MAXWAIT16       (0x00000010u)
#define CSL_BWMNGMT_UCARBL2_MAXWAIT_MAXWAIT32       (0x00000020u)

#define CSL_BWMNGMT_UCARBL2_RESETVAL                (0x00000020u)

/* MAPARBEXT */

#define CSL_BWMNGMT_MAPARBEXT_PRI_MASK              (0x00070000u)
#define CSL_BWMNGMT_MAPARBEXT_PRI_SHIFT             (0x00000010u)
#define CSL_BWMNGMT_MAPARBEXT_PRI_RESETVAL          (0x00000007u)
#define CSL_BWMNGMT_MAPARBEXT_PRI_PRI0              (0x00000000u)
#define CSL_BWMNGMT_MAPARBEXT_PRI_PRI1              (0x00000001u)
#define CSL_BWMNGMT_MAPARBEXT_PRI_PRI2              (0x00000002u)
#define CSL_BWMNGMT_MAPARBEXT_PRI_PRI3              (0x00000003u)
#define CSL_BWMNGMT_MAPARBEXT_PRI_PRI4              (0x00000004u)
#define CSL_BWMNGMT_MAPARBEXT_PRI_PRI5              (0x00000005u)
#define CSL_BWMNGMT_MAPARBEXT_PRI_PRI6              (0x00000006u)
#define CSL_BWMNGMT_MAPARBEXT_PRI_PRI7              (0x00000007u)

#define CSL_BWMNGMT_MAPARBEXT_RESETVAL              (0x00070000u)

#endif
