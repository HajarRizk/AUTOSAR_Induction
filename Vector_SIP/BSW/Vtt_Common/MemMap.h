/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2007 - 2017 by Vector Informatik GmbH.                                           All rights reserved.
 *
 *                Please note, that this file contains example configuration used by the 
 *                MICROSAR BSW. This code may influence the behaviour of the MICROSAR BSW
 *                in principle. Therefore, great care must be taken to verify
 *                the correctness of the implementation.
 *
 *                The contents of the originally delivered files are only examples respectively
 *                implementation proposals. With regard to the fact that these functions
 *                are meant for demonstration purposes only, the liability of Vector Informatik
 *                shall be expressly excluded in cases of ordinary negligence, 
 *                to the extent admissible by law or statute.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  _MemMap.h
 *    Component:  -
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  This File is a template for the MemMap.h
 *                This file has to be extended with the memory section defined for all BSW modules
 *                which are used.
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  MISRA VIOLATIONS
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Joachim Kalmbach              Jk            Vector Informatik GmbH
 *  Heike Honert                  Ht            Vector Informatik GmbH
 *  Eugen Stripling               Seu           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2007-08-01  Jk                    Initial creation
 *  01.01.00  2007-12-14  Jk                    Component specific defines filtering added
 *  01.01.02  2008-11-04  Jk                    Component specific defines filtering added
 *  01.01.03  2008-12-17  Ht                    Improve list of components  (Tp_AsrTpCan,Tp_AsrTpFr,DrvMcu,DrvIcu added)
 *  01.01.04  2009-04-27  Ht                    improve list of components  (Cp_XcpOnCanAsr, Il_AsrIpduM, If_VxFblDcm,
 *                                              If_VxFblVpm_Volvo_ab, DrvFls added)
 *  01.01.05  2009-04-24  Msr                   Renamed J1939_AsrBase as TpJ1939_AsrBase
 *  01.01.06  2009-06-03  Ht                    Improve list of components (Adc, Dio, Gpt, Pwm, Spi, Wdg, Fls, Port, Fim)
 *  01.02.00  2009-08-01  Ht                    Improve list of components (Fee_30_Inst2, Can, ...Sub)
 *                                              Support filtering for RTE
 *  01.02.01  2009-08-18  HH                    replaced C++ comment by C comment
 *  01.02.02  2009-09-02  Lo                    add external Flash driver support
 *  01.02.03  2009-09-12  Lo                    add DrvFls_Mcs12xFslftm01ExtVx
 *                        Ht                    Improve list of components (CanTrcv_30_Tja1040dio,
 *                                                Eth, EthTrcv, EthIf, SoAd, TcpIp, EthSM)
 *  01.03.00  2009-10-30  Ht                    support R8: change EthTrcv to EthTrcv_30_Canoeemu
 *                                              support EthTrcv_30_Dp83848
 *                                              change CanTrcv_30_Xdio to CanTrcv_30___Your_Trcv__
 *                                              change CanTrcv_30_Tja1040dio to CanTrcv_30_Tja1041
 *                                              change name FrTrcv to FrTrcv_30_Tja1080dio
 *                        Lo                    add Cp_AsrXcp
 *                        Ht                    add Cp_XcpOnFrAsr
 *  01.03.01  2010-01-13  Ht                    support SysService_AsrCal
 *  01.03.02  2010-02-15  Ht                    support SysService_SswRcs_Daimler, SysService_Tls, Tp_Http, 
 *                                                      SysService_Dns, SysService_Json, DrvTrans_GenericLindioAsr
 *                        Lo                    add Diag_AsrDem for all OEMs
 *                                              rename internal variables and filter methods
 *  01.04.00  2010-03-04  Ht                    change name FrTrcv_30_Tja1080dio to FrTrcv_30_Tja1080
 *  01.04.01  2010-03-10  Ht                    support DrvTrans_GenericFrAsr, DrvTrans_As8223FrspiAsr, DrvEep and If_AsrIfEa
 *  01.04.02  2010-04-07  Lo                    change IfFee to real components and add If_AsrIfWdV85xNec01Sub
 *  01.04.03  2010-06-11  Ht                    add CanTrcv_30_Tja1043
 *                        Lo                    add Il_AsrIpduMEbBmwSub
 *  01.04.04  2010-08-24  Ht                    add CanTrcv_30_Tle62512G, DrvEep_XAt25128EAsr, Tp_AsrTpFrEbBmwSub
 *  01.05.00  2010-08-24  Ht                    support R10:
 *                                              change LinTrcv_30_Tle7259dio to LinTrcv_30_Tle7259
 *  01.05.01  2010-10-14  Ht                    add VStdLib, SysService_SswScc, SysService_IpBase, SysService_Crypto
 *  01.05.02  2010-10-20  Ht                    support comments for Package Merge Tool
 *  01.05.03  2010-11-03  Ht                    add SysService_E2eLibTttechSub, SysService_E2ePwTttechSub
 *  01.05.04  2010-11-16  Ht                    add SysService_Exi, DrvTrans_Int6400EthAsr, Cdd_AsrCdd_Fiat, Diag_AsrDem_Fiat
 *  01.05.05  2010-12-17  Ht                    add SysService_AsrSchM, DrvEep_XXStubAsr, DrvIcu_Tms570Tinhet01ExtVx
 *                                                  DrvWd_XTle4278gEAsr, DrvWd_XXStubAsr
 *  01.05.06  2011-02-17  Ht                    add DrvEed, SysService_AsrBswM
 *  01.05.07  2011-03-04  Ht                    add DrvTrans_Tja1055CandioAsr
 *                                              rename CanTrcv_30_Tja1040dio to CanTrcv_30_Tja1040
 *                                              add SysService_XmlEngine
 *  01.06.00  2011-03-15  Ht                    support ASR4.0
 *                                              add Ccl_Asr4ComM, Ccl_Asr4SmCan, Nm_Asr4NmIf, Nm_AsrNmDirOsek
 *  01.06.01  2011-04-15  Ht                    add Diag_AsrDcm_<OEM>
 *  01.06.02  2011-06-17  Ht                    correct Diag_AsrDcm_<OEM>
 *                                              add Monitoring_AsrDlt and Monitoring_GenericMeasurement
 *  01.06.03  2011-09-20  Ht                    add DrvTrans_Tja1145CanSpiAsr, DrvTrans_E52013CanspiAsr, DrvFls_XXStubAsr,
 *                                              If_AsrIfFeeV85xNec05Sub, If_AsrIfFeeV85xNec06Sub, If_AsrIfFeeV85xNec07Sub
 *                                              SysService_AsrWdMTttechSub and If_AsrIfWdTttechSub
 *  01.06.04  2011-11-22  Ht                    add If_AsrIfFeeTiSub, 
 *                                              ESCAN00054718: add Cdd_AsrCdd
 *  01.06.05  2011-12-09  Ht                    add Tp_IpV4, Tp_IpV6
 *  01.06.06  2011-12-14  Ht                    add Monitoring_RuntimeMeasurement
 *  01.06.07  2012-01-03  Ht                    add DrvI2c, SysService_Asr4BswM
 *  01.06.08  2012-01-31  Ht                    add DrvTrans_Ar7000EthAsr, DrvTrans_GenericEthmiiAsr
 *  01.06.09  2012-03-06  Ht                    add If_AsrIfFeeMb9df126Fuji01Sub, 
 *                                              Infineon_Tc1767Inf01Sub, Infineon_Tc178xInf01Sub, Infineon_Tc1797Inf01Sub, Infineon_Tc1797Inf02Sub
 *  01.06.10  2012-03-13  Ht                    add Gw_AsrPduRCfg5, Il_AsrComCfg5, Il_AsrIpduMCfg5, Cdd_AsrCddCfg5,
 *                                              Tp_Asr4TpCan, Diag_Asr4Dcm, Diag_Asr4Dem
 *  01.06.11  2012-03-20  Ht                    add Cp_AsrCcp, Cp_XcpOnTcpIpAsr
 *  01.07.00  2012-07-26  Ht                    ESCAN00059365: [AUTOSAR4, compiler warning]: Wrong define name in #undef statement causes re-definition warning
 *                                              add Nm_Asr4NmCan, Nm_Asr4NmFr, Infineon_Xc2000Inf01Sub, Ccl_Asr4ComMCfg5, SysService_Asr4BswMCfg5, SysService_Asr4EcuM, SysService_AsrRamTst,
 *                                                  Ccl_Asr4SmLin 
 *            2012-09-04  Ht                    add support for ASR specification 4.0 R3
 *  01.07.01  2012-10-23  Seu                   add SysService_XmlSecurity
 *  01.07.02  2013-01-10  Seu                   MISRA deviation comments added
 *  01.08.00  2013-03-01  Seu    ESCAN00065501  AR4-325: Add support for Post-build RAM memory section
 *            2013-04-12  Seu    ESCAN00066614  Add the deviation for violation of MISRA rule 19.6
 *  01.09.00  2013-12-10  Seu    ESCAN00072537  Add *_NOCACHE_* memory sections for variables
 *            2013-12-16  Seu                   MISRA compliance: usage of character "'" removed, typos corrected
 *  01.10.00  2016-09-27  Seu                   FEATC-317: FEAT-2002: CommonAsr__Common: Support 64 Bit Signal Types for COM according to ASR 4.2.2
 *  01.11.00  2017-07-05  Seu    ESCAN00095756  FEAT-2455: Support ASR4.2 compatible MemMap for MCALs
 *            2017-08-01  Seu    ESCAN00096129  MEMMAP_SW_MINOR_VERSION / MEM_SW_MINOR_VERSION is not correct
 *********************************************************************************************************************/

/* PRQA S 0841 MEMMAP_0841_TAG */ /* MD_MSR_19.6 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

 /* PRQA S 0883 1 */ /* MD_MemMap_19.15 */
#undef MEMMAP_VENDOR_ID /* PRQA S 0841 */ /* MD_MSR_19.6 */

#define MEMMAP_VENDOR_ID        (30u)

/* AUTOSAR Software Specification Version Information */


# undef MEMMAP_AR_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_AR_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_AR_PATCH_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

/* AUTOSAR Document version 1.1.0 part of release 3.0.1 */
# define MEMMAP_AR_MAJOR_VERSION       (1u)
# define MEMMAP_AR_MINOR_VERSION       (1u)
# define MEMMAP_AR_PATCH_VERSION       (0u)

/* compatiblity to older versions */
# undef MEM_AR_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_AR_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_AR_PATCH_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

# define MEM_AR_MAJOR_VERSION          MEMMAP_AR_MAJOR_VERSION
# define MEM_AR_MINOR_VERSION          MEMMAP_AR_MINOR_VERSION
# define MEM_AR_PATCH_VERSION          MEMMAP_AR_PATCH_VERSION


# undef MEMMAP_SW_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_SW_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_SW_PATCH_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

# define MEMMAP_SW_MAJOR_VERSION     (1u)
# define MEMMAP_SW_MINOR_VERSION     (11u)
# define MEMMAP_SW_PATCH_VERSION     (0u)

/* compatiblity to older versions */
# undef MEM_SW_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_SW_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_SW_PATCH_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

# define MEM_SW_MAJOR_VERSION        MEMMAP_SW_MAJOR_VERSION 
# define MEM_SW_MINOR_VERSION        MEMMAP_SW_MINOR_VERSION 
# define MEM_SW_PATCH_VERSION        MEMMAP_SW_PATCH_VERSION 
  
#define MEMMAP_ERROR

/* Package Merger: Start Section MemMapModuleList */


#include "Rte_MemMap.h"


/**********************************************************************************************************************
 *  COMM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef COMM_START_SEC_CODE
  #undef COMM_START_SEC_CODE                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef COMM_STOP_SEC_CODE
  #undef COMM_STOP_SEC_CODE                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef COMM_START_SEC_CONST_8BIT
# undef COMM_START_SEC_CONST_8BIT                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef COMM_STOP_SEC_CONST_8BIT
# undef COMM_STOP_SEC_CONST_8BIT                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef COMM_START_SEC_CONST_16BIT
# undef COMM_START_SEC_CONST_16BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#ifdef COMM_STOP_SEC_CONST_16BIT
# undef COMM_STOP_SEC_CONST_16BIT                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef COMM_START_SEC_CONST_UNSPECIFIED
# undef COMM_START_SEC_CONST_UNSPECIFIED            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef COMM_STOP_SEC_CONST_UNSPECIFIED
# undef COMM_STOP_SEC_CONST_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* CONST PBCFG sections */

#ifdef COMM_START_SEC_PBCFG
# undef COMM_START_SEC_PBCFG                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef COMM_STOP_SEC_PBCFG
# undef COMM_STOP_SEC_PBCFG                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef COMM_START_SEC_VAR_NOINIT_8BIT
# undef COMM_START_SEC_VAR_NOINIT_8BIT              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef COMM_STOP_SEC_VAR_NOINIT_8BIT
# undef COMM_STOP_SEC_VAR_NOINIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef COMM_START_SEC_VAR_NOINIT_16BIT
# undef COMM_START_SEC_VAR_NOINIT_16BIT             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef COMM_STOP_SEC_VAR_NOINIT_16BIT
# undef COMM_STOP_SEC_VAR_NOINIT_16BIT              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef COMM_START_SEC_VAR_NOINIT_UNSPECIFIED       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR PBCFG sections */

#ifdef COMM_START_SEC_VAR_PBCFG
# undef COMM_START_SEC_VAR_PBCFG                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG                         /* mapped to default var pbcfg section */
#endif
#ifdef COMM_STOP_SEC_VAR_PBCFG
# undef COMM_STOP_SEC_VAR_PBCFG                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                                /* default var stop section */
#endif

/* VAR ZERO INIT sections */

#ifdef COMM_START_SEC_VAR_ZERO_INIT_8BIT
# undef COMM_START_SEC_VAR_ZERO_INIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef COMM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef COMM_STOP_SEC_VAR_ZERO_INIT_8BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef COMM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef COMM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef COMM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef COMM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NVRAM sections */

#ifdef COMM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
# undef COMM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#ifdef COMM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
# undef COMM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  COMM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CanSM START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef CANSM_START_SEC_CODE
# undef CANSM_START_SEC_CODE
# define START_SEC_CODE                                               /* mapped to default code section */
#endif

#ifdef CANSM_STOP_SEC_CODE
# undef CANSM_STOP_SEC_CODE
# define STOP_SEC_CODE                                                /* default code stop section */
#endif


#ifdef CANSM_START_SEC_APPL_CODE
# undef CANSM_START_SEC_APPL_CODE
# define START_SEC_CODE                                               /* mapped to default code section */
#endif

#ifdef CANSM_STOP_SEC_APPL_CODE
# undef CANSM_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE                                                /* default code stop section */
#endif
 


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */


#ifdef CANSM_START_SEC_CONST_8BIT
# undef CANSM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif

#ifdef CANSM_STOP_SEC_CONST_8BIT
# undef CANSM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST                                               /* default const stop section */
#endif

#ifdef CANSM_START_SEC_CONST_32BIT
# undef CANSM_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif

#ifdef CANSM_STOP_SEC_CONST_32BIT
# undef CANSM_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif


#ifdef CANSM_START_SEC_CONST_UNSPECIFIED
# undef CANSM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef CANSM_STOP_SEC_CONST_UNSPECIFIED
# undef CANSM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/* FAST CONST sections */
#ifdef CANSM_START_SEC_CONST_FAST_8BIT
# undef CANSM_START_SEC_CONST_FAST_8BIT
# define START_SEC_CONST_FAST_8BIT
#endif

#ifdef CANSM_STOP_SEC_CONST_FAST_8BIT
# undef CANSM_STOP_SEC_CONST_FAST_8BIT
# define STOP_SEC_CONST                                               /* default const stop section */
#endif

#ifdef CANSM_START_SEC_CONST_FAST_32BIT
# undef CANSM_START_SEC_CONST_FAST_32BIT
# define START_SEC_CONST_FAST_32BIT
#endif

#ifdef CANSM_STOP_SEC_CONST_FAST_32BIT
# undef CANSM_STOP_SEC_CONST_FAST_32BIT
# define STOP_SEC_CONST
#endif


#ifdef CANSM_START_SEC_CONST_FAST_UNSPECIFIED
# undef CANSM_START_SEC_CONST_FAST_UNSPECIFIED
# define START_SEC_CONST_FAST_UNSPECIFIED
#endif

#ifdef CANSM_STOP_SEC_CONST_FAST_UNSPECIFIED
# undef CANSM_STOP_SEC_CONST_FAST_UNSPECIFIED
# define STOP_SEC_CONST
#endif



/* Postbuild CFG CONST sections */



/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */


/* VAR NOINIT sections */

#ifdef CANSM_START_SEC_VAR_NOINIT_8BIT
# undef CANSM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef CANSM_STOP_SEC_VAR_NOINIT_8BIT
# undef CANSM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif


#ifdef CANSM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef CANSM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef CANSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef CANSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#ifdef CANSM_START_SEC_VAR_ZERO_INIT_8BIT
# undef CANSM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif

#ifdef CANSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef CANSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

/* VAR FAST INIT sections */

/* VAR FAST NOINIT sections */

#ifdef CANSM_START_SEC_VAR_FAST_NOINIT_8BIT
# undef CANSM_START_SEC_VAR_FAST_NOINIT_8BIT
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif

#ifdef CANSM_STOP_SEC_VAR_FAST_NOINIT_8BIT
# undef CANSM_STOP_SEC_VAR_FAST_NOINIT_8BIT
# define STOP_SEC_VAR
#endif


#ifdef CANSM_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef CANSM_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif

#ifdef CANSM_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef CANSM_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif


/* VAR FAST ZERO INIT sections */

#ifdef CANSM_START_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef CANSM_START_SEC_VAR_FAST_ZERO_INIT_8BIT
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif

#ifdef CANSM_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef CANSM_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif







/**********************************************************************************************************************
 *  CanSM END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  ETHSM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined ETHSM_START_SEC_CODE
  #undef ETHSM_START_SEC_CODE                       /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#if defined ETHSM_STOP_SEC_CODE
  #undef ETHSM_STOP_SEC_CODE                        /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#if defined ETHSM_START_SEC_CONST_8BIT
# undef ETHSM_START_SEC_CONST_8BIT                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT
#endif
#if defined ETHSM_STOP_SEC_CONST_8BIT
# undef ETHSM_STOP_SEC_CONST_8BIT                   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined ETHSM_START_SEC_CONST_16BIT
# undef ETHSM_START_SEC_CONST_16BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16BIT
#endif
#if defined ETHSM_STOP_SEC_CONST_16BIT
# undef ETHSM_STOP_SEC_CONST_16BIT                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined ETHSM_START_SEC_CONST_32BIT
# undef ETHSM_START_SEC_CONST_32BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_32BIT
#endif
#if defined ETHSM_STOP_SEC_CONST_32BIT
# undef ETHSM_STOP_SEC_CONST_32BIT                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined ETHSM_START_SEC_CONST_UNSPECIFIED
# undef ETHSM_START_SEC_CONST_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined ETHSM_STOP_SEC_CONST_UNSPECIFIED
# undef ETHSM_STOP_SEC_CONST_UNSPECIFIED            /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined ETHSM_START_SEC_PBCFG
# undef ETHSM_START_SEC_PBCFG                       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_PBCFG
#endif
#if defined ETHSM_STOP_SEC_PBCFG
# undef ETHSM_STOP_SEC_PBCFG                        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined ETHSM_START_SEC_PBCFG_ROOT
# undef ETHSM_START_SEC_PBCFG_ROOT                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_PBCFG
#endif
#if defined ETHSM_STOP_SEC_PBCFG_ROOT
# undef ETHSM_STOP_SEC_PBCFG_ROOT                   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#if defined ETHSM_START_SEC_VAR_NOINIT_8BIT
# undef ETHSM_START_SEC_VAR_NOINIT_8BIT             /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined ETHSM_STOP_SEC_VAR_NOINIT_8BIT
# undef ETHSM_STOP_SEC_VAR_NOINIT_8BIT              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_NOINIT_16BIT
# undef ETHSM_START_SEC_VAR_NOINIT_16BIT            /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined ETHSM_STOP_SEC_VAR_NOINIT_16BIT
# undef ETHSM_STOP_SEC_VAR_NOINIT_16BIT             /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_NOINIT_32BIT
# undef ETHSM_START_SEC_VAR_NOINIT_32BIT            /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined ETHSM_STOP_SEC_VAR_NOINIT_32BIT
# undef ETHSM_STOP_SEC_VAR_NOINIT_32BIT             /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHSM_START_SEC_VAR_NOINIT_UNSPECIFIED      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined ETHSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_INIT_8BIT
# undef ETHSM_START_SEC_VAR_INIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8BIT
#endif
#if defined ETHSM_STOP_SEC_VAR_INIT_8BIT
# undef ETHSM_STOP_SEC_VAR_INIT_8BIT                /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_INIT_16BIT
# undef ETHSM_START_SEC_VAR_INIT_16BIT              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined ETHSM_STOP_SEC_VAR_INIT_16BIT
# undef ETHSM_STOP_SEC_VAR_INIT_16BIT               /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_INIT_32BIT
# undef ETHSM_START_SEC_VAR_INIT_32BIT              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined ETHSM_STOP_SEC_VAR_INIT_32BIT
# undef ETHSM_STOP_SEC_VAR_INIT_32BIT               /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_INIT_UNSPECIFIED
# undef ETHSM_START_SEC_VAR_INIT_UNSPECIFIED        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined ETHSM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef ETHSM_STOP_SEC_VAR_INIT_UNSPECIFIED         /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_ZERO_INIT_8BIT
# undef ETHSM_START_SEC_VAR_ZERO_INIT_8BIT          /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined ETHSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef ETHSM_STOP_SEC_VAR_ZERO_INIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_ZERO_INIT_16BIT
# undef ETHSM_START_SEC_VAR_ZERO_INIT_16BIT         /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined ETHSM_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef ETHSM_STOP_SEC_VAR_ZERO_INIT_16BIT          /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_ZERO_INIT_32BIT
# undef ETHSM_START_SEC_VAR_ZERO_INIT_32BIT         /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined ETHSM_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef ETHSM_STOP_SEC_VAR_ZERO_INIT_32BIT          /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined ETHSM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETHSM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined ETHSM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETHSM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED    /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  ETHSM END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cdd_AsrCdd START 
 *********************************************************************************************************************/
/* Copy the memory mapping defines for each of your configured CDDs and replace the prefix _CDD with the MSN of your configured CDD as higher case. */

/*******  CODE sections **********************************************************************************************/

#ifdef _CDD_START_SEC_CODE
# undef _CDD_START_SEC_CODE
# define START_SEC_CODE
#endif
#ifdef _CDD_STOP_SEC_CODE
# undef _CDD_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

/* Add additional memory mapping defines for each of you configured CDDs here. */

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

/* FAST CONST sections */

/* Postbuild CFG CONST sections */

/* Root table for postbuild data */

/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

/* VAR NOINIT sections */

/* VAR ZERO INIT sections */

/* VAR FAST INIT sections */

/* VAR FAST NOINIT sections */

/* VAR FAST ZERO INIT sections */

/**********************************************************************************************************************
 *  Cdd_AsrCdd END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  XCP START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(XCP_START_SEC_CODE)
# undef XCP_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE         /* mapped to default code section */
#endif
#if defined(XCP_STOP_SEC_CODE)
# undef XCP_STOP_SEC_CODE       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(XCP_START_SEC_CONST_8BIT)
# undef XCP_START_SEC_CONST_8BIT  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT     /* mapped to default const 8bit section */
#endif
#if defined(XCP_STOP_SEC_CONST_8BIT)
# undef XCP_STOP_SEC_CONST_8BIT   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#if defined(XCP_START_SEC_CONST_16BIT)
# undef XCP_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined(XCP_STOP_SEC_CONST_16BIT)
# undef XCP_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(XCP_START_SEC_CONST_32BIT)
# undef XCP_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined(XCP_STOP_SEC_CONST_32BIT)
# undef XCP_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(XCP_START_SEC_CONST_UNSPECIFIED)
# undef XCP_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_CONST_UNSPECIFIED)
# undef XCP_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#if defined(XCP_START_SEC_PBCFG)
# undef XCP_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(XCP_STOP_SEC_PBCFG)
# undef XCP_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(XCP_START_SEC_VAR_INIT_8BIT)
# undef XCP_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#if defined(XCP_STOP_SEC_VAR_INIT_8BIT)
# undef XCP_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                /* default var stop section */
#endif

#if defined(XCP_START_SEC_VAR_INIT_16BIT)
# undef XCP_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_INIT_16BIT)
# undef XCP_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_INIT_32BIT)
# undef XCP_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_INIT_32BIT)
# undef XCP_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_INIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#if defined(XCP_START_SEC_VAR_NOINIT_8BIT)
# undef XCP_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOINIT_8BIT)
# undef XCP_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOINIT_16BIT)
# undef XCP_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOINIT_16BIT)
# undef XCP_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOINIT_32BIT)
# undef XCP_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOINIT_32BIT)
# undef XCP_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* ESCAN00065501 */
#if defined(XCP_START_SEC_VAR_PBCFG)
# undef XCP_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#if defined(XCP_STOP_SEC_VAR_PBCFG)
# undef XCP_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#if defined(XCP_START_SEC_VAR_ZERO_INIT_8BIT)
# undef XCP_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(XCP_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef XCP_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_ZERO_INIT_16BIT)
# undef XCP_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_ZERO_INIT_16BIT)
# undef XCP_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_ZERO_INIT_32BIT)
# undef XCP_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_ZERO_INIT_32BIT)
# undef XCP_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR NOCACHE INIT sections */

#if defined(XCP_START_SEC_VAR_NOCACHE_INIT_8BIT)
# undef XCP_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_INIT_8BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_INIT_16BIT)
# undef XCP_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_INIT_16BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_INIT_32BIT)
# undef XCP_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_INIT_32BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE NOINIT sections */

#if defined(XCP_START_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef XCP_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef XCP_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef XCP_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE ZERO INIT sections */

#if defined(XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR Safe sections */
#if defined (XCP_START_SEC_VAR_INIT_UNSPECIFIED_SAFE)
# undef XCP_START_SEC_VAR_INIT_UNSPECIFIED_SAFE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined (XCP_STOP_SEC_VAR_INIT_UNSPECIFIED_SAFE)
# undef XCP_STOP_SEC_VAR_INIT_UNSPECIFIED_SAFE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  XCP END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  TCPIPXCP START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef TCPIPXCP_START_SEC_CODE
  #undef TCPIPXCP_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif

#ifdef TCPIPXCP_STOP_SEC_CODE
  #undef TCPIPXCP_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef TCPIPXCP_START_SEC_CONST_8BIT
  #undef TCPIPXCP_START_SEC_CONST_8BIT
  #define START_SEC_CONST_8BIT                      /* mapped to const 8 bit section */
#endif

#ifdef TCPIPXCP_STOP_SEC_CONST_8BIT
  #undef TCPIPXCP_STOP_SEC_CONST_8BIT
  #define STOP_SEC_CONST                            /* default const stop section */
#endif

#ifdef TCPIPXCP_START_SEC_CONST_UNSPECIFIED
  #undef TCPIPXCP_START_SEC_CONST_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED               /* mapped to const unspecified bit section */
#endif

#ifdef TCPIPXCP_STOP_SEC_CONST_UNSPECIFIED
  #undef TCPIPXCP_STOP_SEC_CONST_UNSPECIFIED
  #define STOP_SEC_CONST                            /* default const stop section */
#endif


/* Post build config unspecified */

#ifdef TCPIPXCP_START_SEC_PBCFG_ROOT
  #undef TCPIPXCP_START_SEC_PBCFG_ROOT
  #define START_SEC_CONST_PBCFG                     /* mapped to const unspecified section */
#endif

#ifdef TCPIPXCP_STOP_SEC_PBCFG_ROOT
  #undef TCPIPXCP_STOP_SEC_PBCFG_ROOT
  #define STOP_SEC_CONST                            /* default const stop section */
#endif


#ifdef TCPIPXCP_START_SEC_PBCFG
  #undef TCPIPXCP_START_SEC_PBCFG
  #define START_SEC_CONST_PBCFG                     /* mapped to const unspecified section */
#endif

#ifdef TCPIPXCP_STOP_SEC_PBCFG
  #undef TCPIPXCP_STOP_SEC_PBCFG
  #define STOP_SEC_CONST                            /* default const stop section */
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */
#ifdef TCPIPXCP_START_SEC_VAR_NOINIT_8BIT
  #undef TCPIPXCP_START_SEC_VAR_NOINIT_8BIT
  #define START_SEC_VAR_NOINIT_8BIT                 /* mapped to uninitialized RAM 8bit section */
#endif

#ifdef TCPIPXCP_STOP_SEC_VAR_NOINIT_8BIT
  #undef TCPIPXCP_STOP_SEC_VAR_NOINIT_8BIT
  #define STOP_SEC_VAR                              /* default RAM stop section */
#endif

#ifdef TCPIPXCP_START_SEC_VAR_NOINIT_16BIT
  #undef TCPIPXCP_START_SEC_VAR_NOINIT_16BIT
  #define START_SEC_VAR_NOINIT_16BIT                /* mapped to uninitialized RAM 8bit section */
#endif

#ifdef TCPIPXCP_STOP_SEC_VAR_NOINIT_16BIT
  #undef TCPIPXCP_STOP_SEC_VAR_NOINIT_16BIT
  #define STOP_SEC_VAR                              /* default RAM stop section */
#endif

/* Var noinit unspecified */
#ifdef TCPIPXCP_START_SEC_VAR_NOINIT_UNSPECIFIED
  #undef TCPIPXCP_START_SEC_VAR_NOINIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED          /* mapped to uninitialized RAM unspecified section */
#endif

#ifdef TCPIPXCP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
  #undef TCPIPXCP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
  #define STOP_SEC_VAR                              /* default RAM stop section */
#endif

/* VAR INIT sections */
#ifdef TCPIPXCP_START_SEC_VAR_INIT_UNSPECIFIED_SAFE 
    #undef TCPIPXCP_START_SEC_VAR_INIT_UNSPECIFIED_SAFE 
    #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef TCPIPXCP_STOP_SEC_VAR_INIT_UNSPECIFIED_SAFE 
    #undef TCPIPXCP_STOP_SEC_VAR_INIT_UNSPECIFIED_SAFE 
    #define STOP_SEC_VAR
#endif

#ifdef TCPIPXCP_START_SEC_VAR_INIT_8BIT
  #undef TCPIPXCP_START_SEC_VAR_INIT_8BIT
  #define START_SEC_VAR_INIT_8BIT                 /* mapped to initialized RAM 8bit section */
#endif

#ifdef TCPIPXCP_STOP_SEC_VAR_INIT_8BIT
  #undef TCPIPXCP_STOP_SEC_VAR_INIT_8BIT
  #define STOP_SEC_VAR                              /* default RAM stop section */
#endif

/**********************************************************************************************************************
 *  TCPIPXCP END
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef DCM_START_SEC_CODE
# undef DCM_START_SEC_CODE                                           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE
#endif
#ifdef DCM_STOP_SEC_CODE
# undef DCM_STOP_SEC_CODE                                            /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE
#endif

#ifdef DCM_START_SEC_APPL_CODE
# undef DCM_START_SEC_APPL_CODE                                      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE
#endif
#ifdef DCM_STOP_SEC_APPL_CODE
# undef DCM_STOP_SEC_APPL_CODE                                       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE
#endif

#ifdef DCM_START_SEC_CALLOUT_CODE
# undef DCM_START_SEC_CALLOUT_CODE                                   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE
#endif
#ifdef DCM_STOP_SEC_CALLOUT_CODE
# undef DCM_STOP_SEC_CALLOUT_CODE                                    /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef DCM_START_SEC_CONST_8
# undef DCM_START_SEC_CONST_8                                        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8
#endif
#ifdef DCM_STOP_SEC_CONST_8
# undef DCM_STOP_SEC_CONST_8                                         /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef DCM_START_SEC_CONST_16
# undef DCM_START_SEC_CONST_16                                       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16
#endif
#ifdef DCM_STOP_SEC_CONST_16
# undef DCM_STOP_SEC_CONST_16                                        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef DCM_START_SEC_CONST_32
# undef DCM_START_SEC_CONST_32                                       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_32
#endif
#ifdef DCM_STOP_SEC_CONST_32
# undef DCM_STOP_SEC_CONST_32                                        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef DCM_START_SEC_CONST_UNSPECIFIED
# undef DCM_START_SEC_CONST_UNSPECIFIED                              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef DCM_STOP_SEC_CONST_UNSPECIFIED
# undef DCM_STOP_SEC_CONST_UNSPECIFIED                               /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#ifdef DCM_START_SEC_PBCFG
# undef DCM_START_SEC_PBCFG                                          /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_PBCFG
#endif
#ifdef DCM_STOP_SEC_PBCFG
# undef DCM_STOP_SEC_PBCFG                                           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef DCM_START_SEC_VAR_INIT_8
# undef DCM_START_SEC_VAR_INIT_8                                     /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8
#endif
#ifdef DCM_STOP_SEC_VAR_INIT_8
# undef DCM_STOP_SEC_VAR_INIT_8                                      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DCM_START_SEC_VAR_INIT_16
# undef DCM_START_SEC_VAR_INIT_16                                    /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_16
#endif
#ifdef DCM_STOP_SEC_VAR_INIT_16
# undef DCM_STOP_SEC_VAR_INIT_16                                     /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DCM_START_SEC_VAR_INIT_32
# undef DCM_START_SEC_VAR_INIT_32                                    /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_32
#endif
#ifdef DCM_STOP_SEC_VAR_INIT_32
# undef DCM_STOP_SEC_VAR_INIT_32                                     /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef DCM_START_SEC_VAR_NO_INIT_8
# undef DCM_START_SEC_VAR_NO_INIT_8                                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NO_INIT_8
#endif
#ifdef DCM_STOP_SEC_VAR_NO_INIT_8
# undef DCM_STOP_SEC_VAR_NO_INIT_8                                   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DCM_START_SEC_VAR_NO_INIT_16
# undef DCM_START_SEC_VAR_NO_INIT_16                                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NO_INIT_16
#endif
#ifdef DCM_STOP_SEC_VAR_NO_INIT_16
# undef DCM_STOP_SEC_VAR_NO_INIT_16                                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DCM_START_SEC_VAR_NO_INIT_32
# undef DCM_START_SEC_VAR_NO_INIT_32                                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NO_INIT_32
#endif
#ifdef DCM_STOP_SEC_VAR_NO_INIT_32
# undef DCM_STOP_SEC_VAR_NO_INIT_32                                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DCM_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef DCM_START_SEC_VAR_NO_INIT_UNSPECIFIED                        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NO_INIT_UNSPECIFIED
#endif
#ifdef DCM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef DCM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED                         /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* Postbuild CFG VAR sections */

#ifdef DCM_START_SEC_VAR_PBCFG
# undef DCM_START_SEC_VAR_PBCFG                                      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_PBCFG
#endif
#ifdef DCM_STOP_SEC_VAR_PBCFG
# undef DCM_STOP_SEC_VAR_PBCFG                                       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/*******  CALIB sections  **********************************************************************************************/

#ifdef DCM_START_SEC_CALIB_8
# undef DCM_START_SEC_CALIB_8                                        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8
#endif
#ifdef DCM_STOP_SEC_CALIB_8
# undef DCM_STOP_SEC_CALIB_8                                         /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef DCM_START_SEC_CALIB_16
# undef DCM_START_SEC_CALIB_16                                       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16
#endif
#ifdef DCM_STOP_SEC_CALIB_16
# undef DCM_STOP_SEC_CALIB_16                                        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef DCM_START_SEC_CALIB_32
# undef DCM_START_SEC_CALIB_32                                       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_32
#endif
#ifdef DCM_STOP_SEC_CALIB_32
# undef DCM_STOP_SEC_CALIB_32                                        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef DCM_START_SEC_CALIB_UNSPECIFIED
# undef DCM_START_SEC_CALIB_UNSPECIFIED                              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef DCM_STOP_SEC_CALIB_UNSPECIFIED
# undef DCM_STOP_SEC_CALIB_UNSPECIFIED                               /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

/** DEM **********************************************************************/
/*---------------------START-MODULE-SPECIFIC-START-SECTIONS------------------*/

                                                            /* code sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_CODE)
# undef DEM_START_SEC_CODE                                                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

#if defined (DEM_START_SEC_CALLOUT_CODE)
# undef DEM_START_SEC_CALLOUT_CODE                                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

#if defined (DEM_START_SEC_CODE_LIB)
# undef DEM_START_SEC_CODE_LIB                                                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

                                               /* uninitialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_VAR_NOINIT_8BIT)
# undef DEM_START_SEC_VAR_NOINIT_8BIT                                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined (DEM_START_SEC_VAR_NOINIT_16BIT)
# undef DEM_START_SEC_VAR_NOINIT_16BIT                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined (DEM_START_SEC_VAR_NOINIT_32BIT)
# undef DEM_START_SEC_VAR_NOINIT_32BIT                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined (DEM_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef DEM_START_SEC_VAR_NOINIT_UNSPECIFIED                                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_VAR_UNCACHED_UNSPECIFIED)
# undef DEM_START_SEC_VAR_UNCACHED_UNSPECIFIED                                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_VAR_NOINIT_UNSPECIFIED_SAT0)
# undef DEM_START_SEC_VAR_NOINIT_UNSPECIFIED_SAT0                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_VAR_NOINIT_UNSPECIFIED_SAT1)
# undef DEM_START_SEC_VAR_NOINIT_UNSPECIFIED_SAT1                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

                                                 /* initialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_VAR_INIT_8BIT)
# undef DEM_START_SEC_VAR_INIT_8BIT                                            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT
#endif
#if defined (DEM_START_SEC_VAR_INIT_32BIT)
# undef DEM_START_SEC_VAR_INIT_32BIT                                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif

                                              /* post-buildable RAM sections */
/*---------------------------------------------------------------------------*/
#if defined (DEM_START_SEC_VAR_PBCFG)
# undef DEM_START_SEC_VAR_PBCFG                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif


                                                          /* NV RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_VAR_SAVED_ZONE0_8BIT)
# undef DEM_START_SEC_VAR_SAVED_ZONE0_8BIT                                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif

#if defined (DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED)
# undef DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_CONST_SAVED_RECOVERY_ZONE0)
# undef DEM_START_SEC_CONST_SAVED_RECOVERY_ZONE0                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

                                                             /* ROM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_CONST_8BIT)
# undef DEM_START_SEC_CONST_8BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif
#if defined (DEM_START_SEC_CONST_16BIT)
# undef DEM_START_SEC_CONST_16BIT                                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined (DEM_START_SEC_CONST_32BIT)
# undef DEM_START_SEC_CONST_32BIT                                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined (DEM_START_SEC_CONST_UNSPECIFIED)
# undef DEM_START_SEC_CONST_UNSPECIFIED                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_CONFIG_DATA_UNSPECIFIED)
# undef DEM_START_SEC_CONFIG_DATA_UNSPECIFIED                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_PBCFG_ROOT)
# undef DEM_START_SEC_PBCFG_ROOT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif

#if defined (DEM_START_SEC_CALIB_UNSPECIFIED)
# undef DEM_START_SEC_CALIB_UNSPECIFIED                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_CALIB_8BIT)
# undef DEM_START_SEC_CALIB_8BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif

#if defined (DEM_START_SEC_PBCFG)
# undef DEM_START_SEC_PBCFG                                                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif



/*---------------------STOP-MODULE-SPECIFIC-START-SECTIONS-------------------*/

/*---------------------START-MODULE-SPECIFIC-STOP-SECTIONS-------------------*/


                                                            /* code sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_CODE)
# undef DEM_STOP_SEC_CODE                                                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#if defined (DEM_STOP_SEC_CALLOUT_CODE)
# undef DEM_STOP_SEC_CALLOUT_CODE                                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#if defined (DEM_STOP_SEC_CODE_LIB)
# undef DEM_STOP_SEC_CODE_LIB                                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

                                               /* uninitialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_VAR_NOINIT_8BIT)
# undef DEM_STOP_SEC_VAR_NOINIT_8BIT                                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif
#if defined (DEM_STOP_SEC_VAR_NOINIT_16BIT)
# undef DEM_STOP_SEC_VAR_NOINIT_16BIT                                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif
#if defined (DEM_STOP_SEC_VAR_NOINIT_32BIT)
# undef DEM_STOP_SEC_VAR_NOINIT_32BIT                                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif
#if defined (DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED                                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined (DEM_STOP_SEC_VAR_UNCACHED_UNSPECIFIED)
# undef DEM_STOP_SEC_VAR_UNCACHED_UNSPECIFIED                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined (DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED_SAT0)
# undef DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED_SAT0                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined (DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED_SAT1)
# undef DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED_SAT1                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


                                                 /* initialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_VAR_INIT_8BIT)
# undef DEM_STOP_SEC_VAR_INIT_8BIT                                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif
#if defined (DEM_STOP_SEC_VAR_INIT_32BIT)
# undef DEM_STOP_SEC_VAR_INIT_32BIT                                            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

                                              /* post-buildable RAM sections */
/*---------------------------------------------------------------------------*/
#if defined (DEM_STOP_SEC_VAR_PBCFG)
# undef DEM_STOP_SEC_VAR_PBCFG                                                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

                                                          /* NV RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED)
# undef DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined (DEM_STOP_SEC_VAR_SAVED_ZONE0_8BIT)
# undef DEM_STOP_SEC_VAR_SAVED_ZONE0_8BIT                                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined (DEM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE0)
# undef DEM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE0                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

                                                             /* ROM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_CONST_8BIT)
# undef DEM_STOP_SEC_CONST_8BIT                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_16BIT)
# undef DEM_STOP_SEC_CONST_16BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_32BIT)
# undef DEM_STOP_SEC_CONST_32BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_UNSPECIFIED)
# undef DEM_STOP_SEC_CONST_UNSPECIFIED                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined (DEM_STOP_SEC_PBCFG_ROOT)
# undef DEM_STOP_SEC_PBCFG_ROOT                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined (DEM_STOP_SEC_CALIB_UNSPECIFIED)
# undef DEM_STOP_SEC_CALIB_UNSPECIFIED                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CALIB_8BIT)
# undef DEM_STOP_SEC_CALIB_8BIT                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined (DEM_STOP_SEC_PBCFG)
# undef DEM_STOP_SEC_PBCFG                                                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#include "Dem_MemMap.h"

/*---------------------STOP-MODULE-SPECIFIC-STOP-SECTIONS--------------------*/
/** End of DEM ***************************************************************/


/**********************************************************************************************************************
 *  VDEM42 START
 *********************************************************************************************************************/

/*******  DATA sections **********************************************************************************************/

#if defined(VDEM42_START_SEC_VAR_INIT_UNSPECIFIED)
# undef VDEM42_START_SEC_VAR_INIT_UNSPECIFIED                                                                                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED          /* mapped to default data section */
#endif

#if defined(VDEM42_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef VDEM42_STOP_SEC_VAR_INIT_UNSPECIFIED                                                                                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                            /* default data stop section */
#endif

/*******  CODE sections **********************************************************************************************/

#if defined(VDEM42_START_SEC_CODE)
# undef VDEM42_START_SEC_CODE                                                                                                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                          /* mapped to default code section */
#endif

#if defined(VDEM42_STOP_SEC_CODE)
# undef VDEM42_STOP_SEC_CODE                                                                                                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE                           /* default code stop section */
#endif

/**********************************************************************************************************************
 *  VDEM42 END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  DrvAdc_VttCanoe01Asr START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

/*******  CONST sections  ********************************************************************************************/

/*******  VAR sections  **********************************************************************************************/


/**********************************************************************************************************************
 *  DrvAdc_VttCanoe01Asr END
 *********************************************************************************************************************/

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/*        STARTSINGLE_OF_MULTIPLE_COMMENT      */


/**********************************************************************************************************************
 *  Can START  DRVCAN_MPC5700MCANASR
 *********************************************************************************************************************/

#if defined (CAN_REMAP_PB_SECTIONS)        /* PRQA S 0883 */ /* Appears only while testing */
/* for none PB variants the code will be mapped to standard sections, so the generated and static code can ignore the variant handling */
# if defined (CAN_START_SEC_PBCFG)
#  undef CAN_START_SEC_PBCFG                /* PRQA S 0841 */ /* MD_MSR_19.6 */
#  define CAN_START_SEC_CONST_UNSPECIFIED
# endif
# if defined (CAN_STOP_SEC_PBCFG)
#  undef CAN_STOP_SEC_PBCFG                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#  define CAN_STOP_SEC_CONST_UNSPECIFIED
# endif

# if defined (CAN_START_SEC_VAR_PBCFG)
#  undef CAN_START_SEC_VAR_PBCFG            /* PRQA S 0841 */ /* MD_MSR_19.6 */
#  define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
# endif
# if defined (CAN_STOP_SEC_VAR_PBCFG)
#  undef CAN_STOP_SEC_VAR_PBCFG             /* PRQA S 0841 */ /* MD_MSR_19.6 */
#  define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# endif
#endif

/*******  CODE sections **********************************************************************************************/

#ifdef CAN_START_SEC_CODE                             /* CAN code */
# undef CAN_START_SEC_CODE                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                               /* mapped to default code section */
#endif
#ifdef CAN_STOP_SEC_CODE
# undef CAN_STOP_SEC_CODE                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#ifdef CAN_START_SEC_STATIC_CODE                      /* CAN static code */
# undef CAN_START_SEC_STATIC_CODE                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                               /* mapped to default code section */
#endif
#ifdef CAN_STOP_SEC_STATIC_CODE
# undef CAN_STOP_SEC_STATIC_CODE                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#ifdef CAN_START_SEC_CODE_APPL                        /* Appl code (generic precopy)*/
# undef CAN_START_SEC_CODE_APPL                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                               /* mapped to default code section */
#endif
#ifdef CAN_STOP_SEC_CODE_APPL
# undef CAN_STOP_SEC_CODE_APPL                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CAN_START_SEC_CONST_8BIT                       /* Const 8bit */
# undef CAN_START_SEC_CONST_8BIT                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT                         /* mapped to default const 8bit section */
#endif
#ifdef CAN_STOP_SEC_CONST_8BIT
# undef CAN_STOP_SEC_CONST_8BIT                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CAN_START_SEC_CONST_16BIT                      /* Const 16bit */
# undef CAN_START_SEC_CONST_16BIT                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT                        /* mapped to default const 16bit section */
#endif
#ifdef CAN_STOP_SEC_CONST_16BIT
# undef CAN_STOP_SEC_CONST_16BIT                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CAN_START_SEC_CONST_32BIT                      /* Const 32bit */
# undef CAN_START_SEC_CONST_32BIT                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT                        /* mapped to default const 32bit section */
#endif
#ifdef CAN_STOP_SEC_CONST_32BIT
# undef CAN_STOP_SEC_CONST_32BIT                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CAN_START_SEC_CONST_UNSPECIFIED                /* Const unspecified */
# undef CAN_START_SEC_CONST_UNSPECIFIED                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED                  /* mapped to default const unspec section */
#endif
#ifdef CAN_STOP_SEC_CONST_UNSPECIFIED
# undef CAN_STOP_SEC_CONST_UNSPECIFIED                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* FAST CONST sections */
/* unused */

/* Postbuild CFG CONST sections */

/* Root table for postbuild data (not relevant for CFG5 AutoSar4.0.3) */
#ifdef CAN_START_SEC_PBCFG_ROOT                       /* Generated Postbuild Root Table */
# undef CAN_START_SEC_PBCFG_ROOT                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG                        /* mapped to default const postbuild section */
#endif
#ifdef CAN_STOP_SEC_PBCFG_ROOT
# undef CAN_STOP_SEC_PBCFG_ROOT                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CAN_START_SEC_PBCFG                            /* Generated Postbuild */
# undef CAN_START_SEC_PBCFG                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG                        /* mapped to default const postbuild section */
#endif
#ifdef CAN_STOP_SEC_PBCFG
# undef CAN_STOP_SEC_PBCFG                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef CAN_START_SEC_VAR_INIT_UNSPECIFIED             /* init RAM*/
# undef CAN_START_SEC_VAR_INIT_UNSPECIFIED              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED               /* mapped to default init var section */
#endif
#ifdef CAN_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef CAN_STOP_SEC_VAR_INIT_UNSPECIFIED               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef CAN_START_SEC_VAR_NOINIT_UNSPECIFIED           /* uninit RAM*/
# undef CAN_START_SEC_VAR_NOINIT_UNSPECIFIED            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED             /* mapped to default uninit var section */
#endif
#ifdef CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef CAN_START_SEC_VAR_NOINIT_8BIT                  /* uninit 8bit RAM*/
# undef CAN_START_SEC_VAR_NOINIT_8BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED             /* mapped to default uninit var section */
#endif
#ifdef CAN_STOP_SEC_VAR_NOINIT_8BIT
# undef CAN_STOP_SEC_VAR_NOINIT_8BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef CAN_START_SEC_VAR_NOINIT_16BIT                  /* uninit 16bit RAM*/
# undef CAN_START_SEC_VAR_NOINIT_16BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED             /* mapped to default uninit var section */
#endif
#ifdef CAN_STOP_SEC_VAR_NOINIT_16BIT
# undef CAN_STOP_SEC_VAR_NOINIT_16BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef CAN_START_SEC_VAR_NOINIT_32BIT                  /* uninit 32bit RAM*/
# undef CAN_START_SEC_VAR_NOINIT_32BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED             /* mapped to default uninit var section */
#endif
#ifdef CAN_STOP_SEC_VAR_NOINIT_32BIT
# undef CAN_STOP_SEC_VAR_NOINIT_32BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif



/* VAR PBCFG sections */

#ifdef CAN_START_SEC_VAR_PBCFG           /* Generated Postbuild RAM*/
# undef CAN_START_SEC_VAR_PBCFG            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG             /* mapped to default uninit var section */
#endif
#ifdef CAN_STOP_SEC_VAR_PBCFG
# undef CAN_STOP_SEC_VAR_PBCFG             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */
/* unused */


/* VAR FAST INIT sections */
/* unused */


/* VAR FAST NOINIT sections */
/* unused */

/* VAR FAST ZERO INIT sections */
/* unused */



/**********************************************************************************************************************
 *  Can END    DRVCAN_MPC5700MCANASR
 *********************************************************************************************************************/

/*  STOPSINGLE_OF_MULTIPLE_COMMENT  */
/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */


/**********************************************************************************************************************
 *  CRYPTO_30_VHSM START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef CRYPTO_30_VHSM_START_SEC_CODE
# undef CRYPTO_30_VHSM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_CODE
# undef CRYPTO_30_VHSM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef CRYPTO_30_VHSM_START_SEC_APPL_CODE
# undef CRYPTO_30_VHSM_START_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE                    /* mapped to default code section */
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_APPL_CODE
# undef CRYPTO_30_VHSM_STOP_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef CRYPTO_30_VHSM_START_SEC_CODE_ISR
# undef CRYPTO_30_VHSM_START_SEC_CODE_ISR /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_CODE_ISR
# undef CRYPTO_30_VHSM_STOP_SEC_CODE_ISR /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef CRYPTO_30_VHSM_START_SEC_RAMCODE
# undef CRYPTO_30_VHSM_START_SEC_RAMCODE /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define CODE_SEC_OPEN
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to RAM on platforms which need this. */

  #if defined(__ghs__) && defined (BRS_PLATFORM_MPC57XX)
  /* No Ramcode section needed */
  #elif defined(__ghs__) && defined (BRS_PLATFORM_SPC58xx)
  /* No Ramcode section needed */
  #elif defined(__ghs__)
    #pragma ghs section text=".vHsmRamCode"
  #elif defined(__TASKING__)

  #endif
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_RAMCODE
# undef CRYPTO_30_VHSM_STOP_SEC_RAMCODE /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef CODE_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to RAM on platforms which need this. */

  #if defined(__ghs__) && defined (BRS_PLATFORM_MPC57XX)
  /* No Ramcode section needed */
  #elif defined(__ghs__) && defined (BRS_PLATFORM_SPC58xx)
  /* No Ramcode section needed */
  #elif defined(__ghs__)
    #pragma ghs section text=default
  #elif defined(__TASKING__)

  #endif
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CRYPTO_30_VHSM_START_SEC_CONST_UNSPECIFIED
# undef CRYPTO_30_VHSM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_CONST_UNSPECIFIED
# undef CRYPTO_30_VHSM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/


/* VAR INIT sections */
#if defined(CRYPTO_30_VHSM_START_SEC_VAR_INIT_UNSPECIFIED)
# undef CRYPTO_30_VHSM_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(CRYPTO_30_VHSM_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef CRYPTO_30_VHSM_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */
#ifdef CRYPTO_30_VHSM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef CRYPTO_30_VHSM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef CRYPTO_30_VHSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CRYPTO_30_VHSM_START_SEC_GLOBAL_VAR_NOINIT_32BIT
# undef CRYPTO_30_VHSM_START_SEC_GLOBAL_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define VAR_SEC_OPEN
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to global RAM on platforms which need this. */

  #if defined(__ghs__)
    #pragma ghs section bss=".vHsmGlobalRamBuffer"
    #pragma ghs section sbss=".svHsmGlobalRamBuffer"
  #elif defined(__TASKING__)
    #pragma section all "vHsmGlobalRamBuffer"
  #endif
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_GLOBAL_VAR_NOINIT_32BIT
# undef CRYPTO_30_VHSM_STOP_SEC_GLOBAL_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef VAR_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to global RAM on platforms which need this. */

  #if defined(__ghs__)
    #pragma ghs section bss=default
    #pragma ghs section sbss=default
  #elif defined(__TASKING__)
    #pragma section all restore
  #endif
#endif

#ifdef CRYPTO_30_VHSM_START_SEC_GLOBAL_VAR_NOINIT_64BIT
# undef CRYPTO_30_VHSM_START_SEC_GLOBAL_VAR_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define VAR_SEC_OPEN
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to global RAM on platforms which need this. */

  #if defined(__ghs__)
    #pragma ghs section bss=".vHsmGlobalRamBuffer"
    #pragma ghs section sbss=".svHsmGlobalRamBuffer"
  #elif defined(__TASKING__)
    #pragma section all "vHsmGlobalRamBuffer"
  #endif
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_GLOBAL_VAR_NOINIT_64BIT
# undef CRYPTO_30_VHSM_STOP_SEC_GLOBAL_VAR_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef VAR_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to global RAM on platforms which need this. */

  #if defined(__ghs__)
    #pragma ghs section bss=default
    #pragma ghs section sbss=default
  #elif defined(__TASKING__)
    #pragma section all restore
  #endif
#endif

#ifdef CRYPTO_30_VHSM_START_SEC_GLOBAL_VAR_NOINIT_UNSPECIFIED
# undef CRYPTO_30_VHSM_START_SEC_GLOBAL_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define VAR_SEC_OPEN
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to global RAM on platforms which need this. */

  #if defined(__ghs__)
    #pragma ghs section bss=".vHsmGlobalRamBuffer"
    #pragma ghs section sbss=".svHsmGlobalRamBuffer"
  #elif defined(__TASKING__)
    #pragma section all "vHsmGlobalRamBuffer"
  #endif
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_GLOBAL_VAR_NOINIT_UNSPECIFIED
# undef CRYPTO_30_VHSM_STOP_SEC_GLOBAL_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef VAR_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to global RAM on platforms which need this. */

  #if defined(__ghs__)
    #pragma ghs section bss=default
    #pragma ghs section sbss=default
  #elif defined(__TASKING__)
    #pragma section all restore
  #endif
#endif

#ifdef CRYPTO_30_VHSM_START_SEC_GLOBAL_VAR_NOINIT_UNSPECIFIED
# undef CRYPTO_30_VHSM_START_SEC_GLOBAL_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define VAR_SEC_OPEN
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to global RAM on platforms which need this. */

  # pragma ghs section bss=".vHsmGlobalRamBuffer"
  # pragma ghs section sbss=".svHsmGlobalRamBuffer"
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_GLOBAL_VAR_NOINIT_UNSPECIFIED
# undef CRYPTO_30_VHSM_STOP_SE_GLOBALC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef VAR_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to global RAM on platforms which need this. */

  # pragma ghs section bss=default
  # pragma ghs section sbss=default
#endif

#ifdef CRYPTO_30_VHSM_START_SEC_IPC_MEMORY_VAR_NOINIT_32BIT
# undef CRYPTO_30_VHSM_START_SEC_IPC_MEMORY_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define VAR_SEC_OPEN
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

  /* Move section to the same memory which is used by the vHsm as IPC memory */

  #if defined(__DCC__)
    # pragma section VHSMIPCMEMORY ".bss" ".vHsmIpcMemory" far-absolute
    # if defined( VHSMIPCMEMORY_USESECTION )
    # else
      #  pragma use_section VHSMIPCMEMORY Crypto_30_vHsm_Ipc_Memory
      #  define VHSMIPCMEMORY_USESECTION
    # endif 
  #endif
  #if defined(__ghs__)
    #pragma ghs section bss=".vHsmIpcMemory"
    #pragma ghs section sbss=".svHsmIpcMemory"
  #elif defined(__TASKING__)
    #pragma section all "vHsmIpcMemory"
    #pragma noclear
  #endif
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_IPC_MEMORY_VAR_NOINIT_32BIT
# undef CRYPTO_30_VHSM_STOP_SEC_IPC_MEMORY_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef VAR_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
  #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef  */

  /* Move section to the same memory which is used by the vHsm as IPC memory */

  #if defined(__DCC__)
    #pragma section BSS
  #endif
  #if defined(__ghs__)
    #pragma ghs section bss=default
    #pragma ghs section sbss=default
  #elif defined(__TASKING__)
    #pragma section all restore
    #pragma clear
  #endif
#endif

#ifdef CRYPTO_30_VHSM_START_SEC_VAR_NOINIT_8BIT
# undef CRYPTO_30_VHSM_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_VAR_NOINIT_8BIT
# undef CRYPTO_30_VHSM_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CRYPTO_30_VHSM_START_SEC_VAR_NOINIT_32BIT
# undef CRYPTO_30_VHSM_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_VAR_NOINIT_32BIT
# undef CRYPTO_30_VHSM_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */

#ifdef CRYPTO_30_VHSM_START_SEC_VAR_ZERO_INIT_8BIT
# undef CRYPTO_30_VHSM_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef CRYPTO_30_VHSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef CRYPTO_30_VHSM_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  CRYPTO_30_VHSM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  DrvDio_VttCanoe01Asr START 
 **********************************************************************************************************************/

/*******  CODE sections ***********************************************************************************************/

/*******  CONST sections  *********************************************************************************************/

/*******  VAR sections  ***********************************************************************************************/


/**********************************************************************************************************************
 *  DrvDio_VttCanoe01Asr END
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  DrvEep_VttCanoe01Asr START 
 **********************************************************************************************************************/

/*******  CODE sections ***********************************************************************************************/
#ifdef EEP_START_SEC_CODE
# undef EEP_START_SEC_CODE
# define START_SEC_CODE
#endif

#ifdef EEP_STOP_SEC_CODE
# undef EEP_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

/*******  CONST sections  *********************************************************************************************/

/*******  VAR sections  ***********************************************************************************************/


/**********************************************************************************************************************
 *  DrvEep_VttCanoe01Asr END
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  ETHSWT_30_88Q5050 START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(ETHSWT_30_88Q5050_START_SEC_CODE)
# undef ETHSWT_30_88Q5050_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE         /* mapped to default code section */
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_CODE)
# undef ETHSWT_30_88Q5050_STOP_SEC_CODE       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_CODE_FAST)
# undef ETHSWT_30_88Q5050_START_SEC_CODE_FAST /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE_FAST    /* mapped to default fast code section */
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_CODE_FAST)
# undef ETHSWT_30_88Q5050_STOP_SEC_CODE_FAST  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_CODE_ISR)
# undef ETHSWT_30_88Q5050_START_SEC_CODE_ISR  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE_ISR     /* mapped to default ISR code section */
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_CODE_ISR)
# undef ETHSWT_30_88Q5050_STOP_SEC_CODE_ISR   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_CONST_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_CONST_8BIT  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT     /* mapped to default const 8bit section */
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_CONST_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_CONST_8BIT   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_CONST_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_CONST_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_CONST_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_CONST_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


#if defined(ETHSWT_30_88Q5050_START_SEC_CONST_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_CONST_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


#if defined(ETHSWT_30_88Q5050_START_SEC_CONST_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_CONST_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_FAST_CONST_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_8BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_FAST_CONST_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_FAST_CONST_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_FAST_CONST_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_FAST_CONST_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_FAST_CONST_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_FAST_CONST_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_FAST_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_FAST_CONST_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_FAST_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_FAST_CONST_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_FAST_CONST_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

/* NOTE: ASR3.x till ASR4.0.1 only. Root table for postbuild data */
#if defined(ETHSWT_30_88Q5050_START_SEC_PBCFG_ROOT)
# undef ETHSWT_30_88Q5050_START_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_PBCFG_ROOT)
# undef ETHSWT_30_88Q5050_STOP_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* ESCAN00065501 */
/* NOTE: ASR4.0.3 (CFG5) only. The origin root table for postbuild data. Relevant only for EcuM. */
#if defined(ETHSWT_30_88Q5050_START_SEC_PBCFG_GLOBALROOT)
# undef ETHSWT_30_88Q5050_START_SEC_PBCFG_GLOBALROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_PBCFG_GLOBALROOT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_PBCFG_GLOBALROOT)
# undef ETHSWT_30_88Q5050_STOP_SEC_PBCFG_GLOBALROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_PBCFG)
# undef ETHSWT_30_88Q5050_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_PBCFG)
# undef ETHSWT_30_88Q5050_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_INIT_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_INIT_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                /* default var stop section */
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_INIT_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_INIT_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_INIT_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_INIT_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_INIT_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_INIT_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOINIT_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOINIT_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOINIT_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOINIT_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOINIT_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOINIT_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOINIT_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOINIT_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* ESCAN00065501 */
#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_PBCFG)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_PBCFG)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_ZERO_INIT_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_ZERO_INIT_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_ZERO_INIT_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_ZERO_INIT_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_ZERO_INIT_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_ZERO_INIT_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_ZERO_INIT_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR FAST INIT sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_INIT_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_INIT_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_INIT_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_INIT_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_INIT_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_INIT_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_INIT_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_INIT_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR FAST NOINIT sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_NOINIT_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_NOINIT_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_NOINIT_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_NOINIT_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_NOINIT_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_NOINIT_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_NOINIT_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_NOINIT_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR FAST ZERO INIT sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_ZERO_INIT_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_ZERO_INIT_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE INIT sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_INIT_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_INIT_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_INIT_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_INIT_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_INIT_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_INIT_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_INIT_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_INIT_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE NOINIT sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_NOINIT_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_NOINIT_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE ZERO INIT sections */

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_ZERO_INIT_64BIT)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#if defined(ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef ETHSWT_30_88Q5050_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  ETHSWT_30_88Q5050 END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  ETH_30_TC3XX START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined ETH_30_TC3XX_START_SEC_CODE
  #undef ETH_30_TC3XX_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#if defined ETH_30_TC3XX_STOP_SEC_CODE
  #undef ETH_30_TC3XX_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#if defined ETH_30_TC3XX_START_SEC_CODE_ISR
  #undef ETH_30_TC3XX_START_SEC_CODE_ISR
  #define START_SEC_CODE_ISR                        /* mapped to default ISR code section */
#endif
#if defined ETH_30_TC3XX_STOP_SEC_CODE_ISR
  #undef ETH_30_TC3XX_STOP_SEC_CODE_ISR
  #define STOP_SEC_CODE_ISR                             /* default code stop section */
#endif

#if defined ETH_30_TC3XX_START_SEC_APPL_CODE
  #undef ETH_30_TC3XX_START_SEC_APPL_CODE
  #define START_SEC_APPL_CODE                        /* mapped to default APPL code section */
#endif
#if defined ETH_30_TC3XX_STOP_SEC_APPL_CODE
  #undef ETH_30_TC3XX_STOP_SEC_APPL_CODE
  #define STOP_SEC_APPL_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#if defined ETH_30_TC3XX_START_SEC_CONST_8BIT
# undef ETH_30_TC3XX_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#if defined ETH_30_TC3XX_STOP_SEC_CONST_8BIT
# undef ETH_30_TC3XX_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#if defined ETH_30_TC3XX_START_SEC_CONST_16BIT
# undef ETH_30_TC3XX_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#if defined ETH_30_TC3XX_STOP_SEC_CONST_16BIT
# undef ETH_30_TC3XX_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#if defined ETH_30_TC3XX_START_SEC_CONST_32BIT
# undef ETH_30_TC3XX_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#if defined ETH_30_TC3XX_STOP_SEC_CONST_32BIT
# undef ETH_30_TC3XX_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#if defined ETH_30_TC3XX_START_SEC_CONST_UNSPECIFIED
# undef ETH_30_TC3XX_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined ETH_30_TC3XX_STOP_SEC_CONST_UNSPECIFIED
# undef ETH_30_TC3XX_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#if defined ETH_30_TC3XX_START_SEC_PBCFG
# undef ETH_30_TC3XX_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#if defined ETH_30_TC3XX_STOP_SEC_PBCFG
# undef ETH_30_TC3XX_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#if defined ETH_30_TC3XX_START_SEC_PBCFG_ROOT
# undef ETH_30_TC3XX_START_SEC_PBCFG_ROOT
# define START_SEC_CONST_PBCFG
#endif
#if defined ETH_30_TC3XX_STOP_SEC_PBCFG_ROOT
# undef ETH_30_TC3XX_STOP_SEC_PBCFG_ROOT
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#if defined ETH_30_TC3XX_START_SEC_VAR_NOINIT_BOOLEAN
# undef ETH_30_TC3XX_START_SEC_VAR_NOINIT_BOOLEAN
# define START_SEC_VAR_NOINIT_BOOLEAN
#endif
#if defined ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_BOOLEAN
# define STOP_SEC_VAR
#endif

#if defined ETH_30_TC3XX_START_SEC_VAR_NOINIT_8BIT
# undef ETH_30_TC3XX_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_8BIT
# undef ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef ETH_30_TC3XX_START_SEC_VAR_ZERO_INIT_8BIT
# undef ETH_30_TC3XX_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef ETH_30_TC3XX_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef ETH_30_TC3XX_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#if defined ETH_30_TC3XX_START_SEC_VAR_NOINIT_16BIT
# undef ETH_30_TC3XX_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_16BIT
# undef ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#if defined ETH_30_TC3XX_START_SEC_VAR_NOINIT_32BIT
# undef ETH_30_TC3XX_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_32BIT
# undef ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#if defined ETH_30_TC3XX_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETH_30_TC3XX_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef ETH_30_TC3XX_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETH_30_TC3XX_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef ETH_30_TC3XX_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETH_30_TC3XX_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#if defined ETH_30_TC3XX_START_SEC_VAR_NOINIT_DESCRIPTOR
# undef ETH_30_TC3XX_START_SEC_VAR_NOINIT_DESCRIPTOR

# if defined _MICROSOFT_C_VTT_
   /* VTT usecase - nothing to do here */
# else
#  error "For Integrator: This section must be aligned to a 64 BYTES border!"
   /* Pragma must be placed here. */
   /* Example for GHS compiler:  
#  pragma ghs section bss=".EthDesc"
   */
# endif

# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_DESCRIPTOR
# undef ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_DESCRIPTOR

# if defined _MICROSOFT_C_VTT_
   /* VTT usecase - nothing to do here */
# else
#  error "For Integrator: This section must be aligned to a 64 BYTES border!"
   /* Pragma must be placed here. */
   /* Example for GHS compiler:  
#  pragma ghs section bss=default
   */
# endif

# define STOP_SEC_VAR
# endif

#if defined ETH_30_TC3XX_START_SEC_VAR_NOINIT_BUFFER
# undef ETH_30_TC3XX_START_SEC_VAR_NOINIT_BUFFER

# if defined _MICROSOFT_C_VTT_
   /* VTT usecase - nothing to do here */
# else
#  error "For Integrator: This section must be aligned to a 64 BYTES border!"
   /* Pragma must be placed here. */
   /* Example for GHS compiler:  
#  pragma ghs section bss=".EthBuffers"
   */
# endif

# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_BUFFER
# undef ETH_30_TC3XX_STOP_SEC_VAR_NOINIT_BUFFER

# if defined _MICROSOFT_C_VTT_
   /* VTT usecase - nothing to do here */
# else
#  error "For Integrator: This section must be aligned to a 64 BYTES border!"
   /* Pragma must be placed here. */
   /* Example for GHS compiler:  
#  pragma ghs section bss=default
   */
# endif

# define STOP_SEC_VAR
#endif


/**********************************************************************************************************************
 *  ETH_30_TC3XX END
 *********************************************************************************************************************/
 

/**********************************************************************************************************************
 *  ETH_30_VTT START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined ETH_30_VTT_START_SEC_CODE
  #undef ETH_30_VTT_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#if defined ETH_30_VTT_STOP_SEC_CODE
  #undef ETH_30_VTT_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#if defined ETH_30_VTT_START_SEC_CODE_ISR
  #undef ETH_30_VTT_START_SEC_CODE_ISR
  #define START_SEC_CODE_ISR                        /* mapped to default ISR code section */
#endif
#if defined ETH_30_VTT_STOP_SEC_CODE_ISR
  #undef ETH_30_VTT_STOP_SEC_CODE_ISR
  #define STOP_SEC_CODE_ISR                             /* default code stop section */
#endif

#if defined ETH_30_VTT_START_SEC_APPL_CODE
  #undef ETH_30_VTT_START_SEC_APPL_CODE
  #define START_SEC_APPL_CODE                        /* mapped to default APPL code section */
#endif
#if defined ETH_30_VTT_STOP_SEC_APPL_CODE
  #undef ETH_30_VTT_STOP_SEC_APPL_CODE
  #define STOP_SEC_APPL_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#if defined ETH_30_VTT_START_SEC_CONST_8BIT
# undef ETH_30_VTT_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#if defined ETH_30_VTT_STOP_SEC_CONST_8BIT
# undef ETH_30_VTT_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#if defined ETH_30_VTT_START_SEC_CONST_16BIT
# undef ETH_30_VTT_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#if defined ETH_30_VTT_STOP_SEC_CONST_16BIT
# undef ETH_30_VTT_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#if defined ETH_30_VTT_START_SEC_CONST_32BIT
# undef ETH_30_VTT_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#if defined ETH_30_VTT_STOP_SEC_CONST_32BIT
# undef ETH_30_VTT_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#if defined ETH_30_VTT_START_SEC_CONST_UNSPECIFIED
# undef ETH_30_VTT_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined ETH_30_VTT_STOP_SEC_CONST_UNSPECIFIED
# undef ETH_30_VTT_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#if defined ETH_30_VTT_START_SEC_PBCFG
# undef ETH_30_VTT_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#if defined ETH_30_VTT_STOP_SEC_PBCFG
# undef ETH_30_VTT_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#if defined ETH_30_VTT_START_SEC_PBCFG_ROOT
# undef ETH_30_VTT_START_SEC_PBCFG_ROOT
# define START_SEC_CONST_PBCFG
#endif
#if defined ETH_30_VTT_STOP_SEC_PBCFG_ROOT
# undef ETH_30_VTT_STOP_SEC_PBCFG_ROOT
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#if defined ETH_30_VTT_START_SEC_VAR_NOINIT_BOOLEAN
# undef ETH_30_VTT_START_SEC_VAR_NOINIT_BOOLEAN
# define START_SEC_VAR_NOINIT_BOOLEAN
#endif
#if defined ETH_30_VTT_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef ETH_30_VTT_STOP_SEC_VAR_NOINIT_BOOLEAN
# define STOP_SEC_VAR
#endif

#if defined ETH_30_VTT_START_SEC_VAR_NOINIT_8BIT
# undef ETH_30_VTT_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined ETH_30_VTT_STOP_SEC_VAR_NOINIT_8BIT
# undef ETH_30_VTT_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef ETH_30_VTT_START_SEC_VAR_ZERO_INIT_8BIT
# undef ETH_30_VTT_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef ETH_30_VTT_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef ETH_30_VTT_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#if defined ETH_30_VTT_START_SEC_VAR_NOINIT_16BIT
# undef ETH_30_VTT_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined ETH_30_VTT_STOP_SEC_VAR_NOINIT_16BIT
# undef ETH_30_VTT_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#if defined ETH_30_VTT_START_SEC_VAR_NOINIT_32BIT
# undef ETH_30_VTT_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined ETH_30_VTT_STOP_SEC_VAR_NOINIT_32BIT
# undef ETH_30_VTT_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#if defined ETH_30_VTT_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETH_30_VTT_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined ETH_30_VTT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETH_30_VTT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef ETH_30_VTT_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETH_30_VTT_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef ETH_30_VTT_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETH_30_VTT_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#if defined ETH_30_VTT_START_SEC_VAR_NOINIT_DESCRIPTOR
# undef ETH_30_VTT_START_SEC_VAR_NOINIT_DESCRIPTOR

# if defined _MICROSOFT_C_VTT_
   /* VTT usecase - nothing to do here */
# else
#  error "For Integrator: This section must be aligned to a 64 BYTES border!"
   /* Pragma must be placed here. */
   /* Example for GHS compiler:  
#  pragma ghs section bss=".EthDesc"
   */
# endif

# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined ETH_30_VTT_STOP_SEC_VAR_NOINIT_DESCRIPTOR
# undef ETH_30_VTT_STOP_SEC_VAR_NOINIT_DESCRIPTOR

# if defined _MICROSOFT_C_VTT_
   /* VTT usecase - nothing to do here */
# else
#  error "For Integrator: This section must be aligned to a 64 BYTES border!"
   /* Pragma must be placed here. */
   /* Example for GHS compiler:  
#  pragma ghs section bss=default
   */
# endif

# define STOP_SEC_VAR
# endif

#if defined ETH_30_VTT_START_SEC_VAR_NOINIT_BUFFER
# undef ETH_30_VTT_START_SEC_VAR_NOINIT_BUFFER

# if defined _MICROSOFT_C_VTT_
   /* VTT usecase - nothing to do here */
# else
#  error "For Integrator: This section must be aligned to a 64 BYTES border!"
   /* Pragma must be placed here. */
   /* Example for GHS compiler:  
#  pragma ghs section bss=".EthBuffers"
   */
# endif

# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined ETH_30_VTT_STOP_SEC_VAR_NOINIT_BUFFER
# undef ETH_30_VTT_STOP_SEC_VAR_NOINIT_BUFFER

# if defined _MICROSOFT_C_VTT_
   /* VTT usecase - nothing to do here */
# else
#  error "For Integrator: This section must be aligned to a 64 BYTES border!"
   /* Pragma must be placed here. */
   /* Example for GHS compiler:  
#  pragma ghs section bss=default
   */
# endif

# define STOP_SEC_VAR
#endif


/**********************************************************************************************************************
 *  ETH_30_VTT END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  DrvFls_VttCanoe01Asr START 
 **********************************************************************************************************************/

/*******  CODE sections ***********************************************************************************************/
#ifdef FLS_START_SEC_CODE
# undef FLS_START_SEC_CODE
# define START_SEC_CODE
#endif

#ifdef FLS_STOP_SEC_CODE
# undef FLS_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

/*******  CONST sections  *********************************************************************************************/

/*******  VAR sections  ***********************************************************************************************/


/**********************************************************************************************************************
 *  DrvFls_VttCanoe01Asr END
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  DrvGpt_VttCanoe01Asr START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

/*******  CONST sections  ********************************************************************************************/

/*******  VAR sections  **********************************************************************************************/


/**********************************************************************************************************************
 *  DrvGpt_VttCanoe01Asr END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  I2c START 
 **********************************************************************************************************************/

/*******  CODE sections  **********************************************************************************************/

#ifdef I2C_START_SEC_CODE
    #undef I2C_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define START_SEC_CODE
#endif

#ifdef I2C_STOP_SEC_CODE
    #undef I2C_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define STOP_SEC_CODE
#endif

/*******  ISR sections  ***********************************************************************************************/

#ifdef I2C_START_SEC_CODE_ISR
    #undef I2C_START_SEC_CODE_ISR /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define START_SEC_CODE_ISR
#endif

#ifdef I2C_STOP_SEC_CODE_ISR
    #undef I2C_STOP_SEC_CODE_ISR /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define STOP_SEC_CODE
#endif

/*******  CONST sections  *********************************************************************************************/

#ifdef I2C_START_SEC_PBCFG_ROOT
    #undef I2C_START_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define START_SEC_CONST_PBCFG
#endif

#ifdef I2C_STOP_SEC_PBCFG_ROOT
    #undef I2C_STOP_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define STOP_SEC_CONST
#endif

#ifdef I2C_START_SEC_PBCFG
    #undef I2C_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define START_SEC_CONST_PBCFG
#endif

#ifdef I2C_STOP_SEC_PBCFG
    #undef I2C_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define STOP_SEC_CONST
#endif

#ifdef I2C_START_SEC_CONST_32BIT
    #undef I2C_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define START_SEC_CONST_32BIT
#endif

#ifdef I2C_STOP_SEC_CONST_32BIT
    #undef I2C_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define STOP_SEC_CONST
#endif

#ifdef I2C_START_SEC_CONST_UNSPECIFIED
    #undef I2C_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef I2C_STOP_SEC_CONST_UNSPECIFIED
    #undef I2C_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define STOP_SEC_CONST
#endif

/*******  VAR sections  ***********************************************************************************************/
#ifdef I2C_START_SEC_VAR_INIT_UNSPECIFIED
    #undef I2C_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef I2C_STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef I2C_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define STOP_SEC_VAR
#endif

#ifdef I2C_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef I2C_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef I2C_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef I2C_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define STOP_SEC_VAR
#endif

#ifdef I2C_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef I2C_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef I2C_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef I2C_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_0841 */
    #define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  I2c END
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  DrvIcu_VttCanoe01Asr START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

/*******  CONST sections  ********************************************************************************************/

/*******  VAR sections  **********************************************************************************************/


/**********************************************************************************************************************
 *  DrvIcu_VttCanoe01Asr END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  DrvMcu_VttCanoe01Asr START 
 **********************************************************************************************************************/

/*******  CODE sections ***********************************************************************************************/

/*******  CONST sections  *********************************************************************************************/

/*******  VAR sections  ***********************************************************************************************/



/**********************************************************************************************************************
 *  DrvMcu_VttCanoe01Asr END
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  DrvPort_VttCanoe01Asr START 
 **********************************************************************************************************************/

/*******  CODE sections ***********************************************************************************************/

/*******  CONST sections  *********************************************************************************************/

/*******  VAR sections  ***********************************************************************************************/



/**********************************************************************************************************************
 *  DrvPort_VttCanoe01Asr END
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  DrvPwm_VttCanoe01Asr START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

/*******  CONST sections  ********************************************************************************************/

/*******  VAR sections  **********************************************************************************************/


/**********************************************************************************************************************
 *  DrvPwm_VttCanoe01Asr END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  SBC START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef SBC_30_TLF35584_START_SEC_CODE /* PRQA S 0883 */ /* Appears only while testing */
  #undef SBC_30_TLF35584_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CODE      /* mapped to default code section */
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_CODE
  #undef SBC_30_TLF35584_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CODE      /* default code stop section */
#endif

#ifdef SBC_30_TLF35584_START_SEC_CODE_FAST
  #undef SBC_30_TLF35584_START_SEC_CODE_FAST /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CODE_FAST      /* mapped to default fast code section */
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_CODE_FAST
  #undef SBC_30_TLF35584_STOP_SEC_CODE_FAST /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CODE           /* default code stop section */
#endif

#ifdef SBC_30_TLF35584_START_SEC_CODE_ISR
  #undef SBC_30_TLF35584_START_SEC_CODE_ISR /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CODE_ISR      /* mapped to default ISR code section */
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_CODE_ISR
  #undef SBC_30_TLF35584_STOP_SEC_CODE_ISR /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CODE          /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef SBC_30_TLF35584_START_SEC_CONST_8BIT
# undef SBC_30_TLF35584_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT      /* mapped to default const 8bit section */
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_CONST_8BIT
# undef SBC_30_TLF35584_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#ifdef SBC_30_TLF35584_START_SEC_CONST_16BIT
# undef SBC_30_TLF35584_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_CONST_16BIT
# undef SBC_30_TLF35584_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef SBC_30_TLF35584_START_SEC_CONST_32BIT
# undef SBC_30_TLF35584_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_CONST_32BIT
# undef SBC_30_TLF35584_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef SBC_30_TLF35584_START_SEC_CONST_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_CONST_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */

#ifdef SBC_30_TLF35584_START_SEC_FAST_CONST_8BIT
# undef SBC_30_TLF35584_START_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_8BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_FAST_CONST_8BIT
# undef SBC_30_TLF35584_STOP_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef SBC_30_TLF35584_START_SEC_FAST_CONST_16BIT
# undef SBC_30_TLF35584_START_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_FAST_CONST_16BIT
# undef SBC_30_TLF35584_STOP_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef SBC_30_TLF35584_START_SEC_FAST_CONST_32BIT
# undef SBC_30_TLF35584_START_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_FAST_CONST_32BIT
# undef SBC_30_TLF35584_STOP_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef SBC_30_TLF35584_START_SEC_FAST_CONST_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_FAST_CONST_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

/* NOTE: ASR3.x till ASR4.0.1 only. Root table for postbuild data */
#ifdef SBC_30_TLF35584_START_SEC_PBCFG_ROOT
# undef SBC_30_TLF35584_START_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_PBCFG_ROOT
# undef SBC_30_TLF35584_STOP_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* ESCAN00065501 */
/* NOTE: ASR4.0.3 (CFG5) only. The origin root table for postbuild data. Relevant only for EcuM. */
#ifdef SBC_30_TLF35584_START_SEC_PBCFG_GLOBALROOT
# undef SBC_30_TLF35584_START_SEC_PBCFG_GLOBALROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_PBCFG_GLOBALROOT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_PBCFG_GLOBALROOT
# undef SBC_30_TLF35584_STOP_SEC_PBCFG_GLOBALROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef SBC_30_TLF35584_START_SEC_PBCFG
# undef SBC_30_TLF35584_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_PBCFG
# undef SBC_30_TLF35584_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef SBC_30_TLF35584_START_SEC_VAR_INIT_8BIT
# undef SBC_30_TLF35584_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_INIT_8BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                /* default var stop section */
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_INIT_16BIT
# undef SBC_30_TLF35584_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_INIT_16BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_INIT_32BIT
# undef SBC_30_TLF35584_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_INIT_32BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOINIT_8BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOINIT_8BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOINIT_16BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOINIT_16BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOINIT_32BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOINIT_32BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOINIT_SAFE
# undef SBC_30_TLF35584_START_SEC_VAR_NOINIT_SAFE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOINIT_SAFE
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOINIT_SAFE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* ESCAN00065501 */
#ifdef SBC_30_TLF35584_START_SEC_VAR_PBCFG
# undef SBC_30_TLF35584_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_PBCFG
# undef SBC_30_TLF35584_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#ifdef SBC_30_TLF35584_START_SEC_VAR_ZERO_INIT_8BIT
# undef SBC_30_TLF35584_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_ZERO_INIT_16BIT
# undef SBC_30_TLF35584_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_ZERO_INIT_32BIT
# undef SBC_30_TLF35584_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR FAST INIT sections */

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_INIT_8BIT
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_INIT_8BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_INIT_16BIT
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_INIT_16BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_INIT_32BIT
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_INIT_32BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR FAST NOINIT sections */

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_NOINIT_8BIT
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_NOINIT_8BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_NOINIT_16BIT
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_NOINIT_16BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_NOINIT_32BIT
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_NOINIT_32BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR FAST ZERO INIT sections */

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_ZERO_INIT_16BIT
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_ZERO_INIT_32BIT
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE INIT sections */

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_INIT_8BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_INIT_8BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_INIT_16BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_INIT_16BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_INIT_32BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_INIT_32BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE NOINIT sections */

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_NOINIT_8BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_NOINIT_16BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE ZERO INIT sections */

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#ifdef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# undef SBC_30_TLF35584_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  SBC END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  DrvSpi_VttCanoe01Asr START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef SPI_START_SEC_CODE
# undef SPI_START_SEC_CODE
# define START_SEC_CODE
#endif

#ifdef SPI_STOP_SEC_CODE
# undef SPI_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

/*******  CONST sections  ********************************************************************************************/

/*******  VAR sections  **********************************************************************************************/


/**********************************************************************************************************************
 *  DrvSpi_VttCanoe01Asr END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  ETHTRCV_30_88Q1010 START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef ETHTRCV_30_88Q1010_START_SEC_CODE
# undef ETHTRCV_30_88Q1010_START_SEC_CODE
# define START_SEC_CODE                                               /* mapped to default code section */
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_CODE
# undef ETHTRCV_30_88Q1010_STOP_SEC_CODE
# define STOP_SEC_CODE                                                /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef ETHTRCV_30_88Q1010_START_SEC_CONST_8BIT
# undef ETHTRCV_30_88Q1010_START_SEC_CONST_8BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_CONST_8BIT
# undef ETHTRCV_30_88Q1010_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_88Q1010_START_SEC_CONST_16BIT
# undef ETHTRCV_30_88Q1010_START_SEC_CONST_16BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_CONST_16BIT
# undef ETHTRCV_30_88Q1010_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_88Q1010_START_SEC_CONST_32BIT
# undef ETHTRCV_30_88Q1010_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_CONST_32BIT
# undef ETHTRCV_30_88Q1010_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_88Q1010_START_SEC_CONST_UNSPECIFIED
# undef ETHTRCV_30_88Q1010_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_CONST_UNSPECIFIED
# undef ETHTRCV_30_88Q1010_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_88Q1010_START_SEC_PBCFG
# undef ETHTRCV_30_88Q1010_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_PBCFG
# undef ETHTRCV_30_88Q1010_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_88Q1010_START_SEC_PBCFG_ROOT
# undef ETHTRCV_30_88Q1010_START_SEC_PBCFG_ROOT
# define START_SEC_CONST_PBCFG
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_PBCFG_ROOT
# undef ETHTRCV_30_88Q1010_STOP_SEC_PBCFG_ROOT
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#ifdef ETHTRCV_30_88Q1010_START_SEC_VAR_NOINIT_8BIT
# undef ETHTRCV_30_88Q1010_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_VAR_NOINIT_8BIT
# undef ETHTRCV_30_88Q1010_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_88Q1010_START_SEC_VAR_ZERO_INIT_8BIT
# undef ETHTRCV_30_88Q1010_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef ETHTRCV_30_88Q1010_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_88Q1010_START_SEC_VAR_NOINIT_16BIT
# undef ETHTRCV_30_88Q1010_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_VAR_NOINIT_16BIT
# undef ETHTRCV_30_88Q1010_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_88Q1010_START_SEC_VAR_NOINIT_32BIT
# undef ETHTRCV_30_88Q1010_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_VAR_NOINIT_32BIT
# undef ETHTRCV_30_88Q1010_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_88Q1010_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHTRCV_30_88Q1010_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHTRCV_30_88Q1010_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_88Q1010_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETHTRCV_30_88Q1010_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef ETHTRCV_30_88Q1010_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETHTRCV_30_88Q1010_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  ETHTRCV_30_88Q1010 END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  ETHTRCV_30_88Q2112 START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef ETHTRCV_30_88Q2112_START_SEC_CODE
# undef ETHTRCV_30_88Q2112_START_SEC_CODE
# define START_SEC_CODE                                               /* mapped to default code section */
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_CODE
# undef ETHTRCV_30_88Q2112_STOP_SEC_CODE
# define STOP_SEC_CODE                                                /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef ETHTRCV_30_88Q2112_START_SEC_CONST_8BIT
# undef ETHTRCV_30_88Q2112_START_SEC_CONST_8BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_CONST_8BIT
# undef ETHTRCV_30_88Q2112_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_88Q2112_START_SEC_CONST_16BIT
# undef ETHTRCV_30_88Q2112_START_SEC_CONST_16BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_CONST_16BIT
# undef ETHTRCV_30_88Q2112_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_88Q2112_START_SEC_CONST_32BIT
# undef ETHTRCV_30_88Q2112_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_CONST_32BIT
# undef ETHTRCV_30_88Q2112_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_88Q2112_START_SEC_CONST_UNSPECIFIED
# undef ETHTRCV_30_88Q2112_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_CONST_UNSPECIFIED
# undef ETHTRCV_30_88Q2112_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_88Q2112_START_SEC_PBCFG
# undef ETHTRCV_30_88Q2112_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_PBCFG
# undef ETHTRCV_30_88Q2112_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_88Q2112_START_SEC_PBCFG_ROOT
# undef ETHTRCV_30_88Q2112_START_SEC_PBCFG_ROOT
# define START_SEC_CONST_PBCFG
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_PBCFG_ROOT
# undef ETHTRCV_30_88Q2112_STOP_SEC_PBCFG_ROOT
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#ifdef ETHTRCV_30_88Q2112_START_SEC_VAR_NOINIT_8BIT
# undef ETHTRCV_30_88Q2112_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_VAR_NOINIT_8BIT
# undef ETHTRCV_30_88Q2112_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_88Q2112_START_SEC_VAR_ZERO_INIT_8BIT
# undef ETHTRCV_30_88Q2112_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef ETHTRCV_30_88Q2112_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_88Q2112_START_SEC_VAR_NOINIT_16BIT
# undef ETHTRCV_30_88Q2112_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_VAR_NOINIT_16BIT
# undef ETHTRCV_30_88Q2112_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_88Q2112_START_SEC_VAR_NOINIT_32BIT
# undef ETHTRCV_30_88Q2112_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_VAR_NOINIT_32BIT
# undef ETHTRCV_30_88Q2112_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_88Q2112_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHTRCV_30_88Q2112_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHTRCV_30_88Q2112_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_88Q2112_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETHTRCV_30_88Q2112_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef ETHTRCV_30_88Q2112_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETHTRCV_30_88Q2112_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  ETHTRCV_30_88Q2112 END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  CANTRCV_30_TJA1040 START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(CANTRCV_30_TJA1040_START_SEC_CODE)
# undef CANTRCV_30_TJA1040_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE         /* mapped to default code section */
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CODE)
# undef CANTRCV_30_TJA1040_STOP_SEC_CODE       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_CODE_FAST)
# undef CANTRCV_30_TJA1040_START_SEC_CODE_FAST /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE_FAST    /* mapped to default fast code section */
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CODE_FAST)
# undef CANTRCV_30_TJA1040_STOP_SEC_CODE_FAST  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_CODE_ISR)
# undef CANTRCV_30_TJA1040_START_SEC_CODE_ISR  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE_ISR     /* mapped to default ISR code section */
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CODE_ISR)
# undef CANTRCV_30_TJA1040_STOP_SEC_CODE_ISR   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE          /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_CONST_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_CONST_8BIT  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT     /* mapped to default const 8bit section */
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CONST_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_CONST_8BIT   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_CONST_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CONST_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_CONST_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CONST_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_CONST_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CONST_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_CONST_FAST_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_8BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CONST_FAST_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_CONST_FAST_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CONST_FAST_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_CONST_FAST_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CONST_FAST_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_CONST_FAST_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_CONST_FAST_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_PBCFG)
# undef CANTRCV_30_TJA1040_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_PBCFG
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_PBCFG)
# undef CANTRCV_30_TJA1040_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_INIT_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_INIT_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR                /* default var stop section */
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_INIT_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_INIT_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_INIT_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_INIT_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOINIT_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOINIT_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOINIT_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOINIT_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOINIT_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOINIT_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* ESCAN00065501 */
#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_PBCFG)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_PBCFG
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_PBCFG)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR FAST INIT sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_INIT_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_INIT_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_INIT_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_INIT_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_INIT_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_INIT_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR FAST NOINIT sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_NOINIT_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_NOINIT_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_NOINIT_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_NOINIT_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_NOINIT_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_NOINIT_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR FAST ZERO INIT sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE INIT sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_INIT_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_INIT_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_INIT_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_INIT_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_INIT_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_INIT_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE NOINIT sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE ZERO INIT sections */

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1040_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  CANTRCV_30_TJA1040 END
 *********************************************************************************************************************/ /* PRQA S 0883 */ /* Appears only while testing */

/**********************************************************************************************************************
 *  CANTRCV_30_TJA1043 START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(CANTRCV_30_TJA1043_START_SEC_CODE)
# undef CANTRCV_30_TJA1043_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE         /* mapped to default code section */
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CODE)
# undef CANTRCV_30_TJA1043_STOP_SEC_CODE       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_CODE_FAST)
# undef CANTRCV_30_TJA1043_START_SEC_CODE_FAST /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE_FAST    /* mapped to default fast code section */
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CODE_FAST)
# undef CANTRCV_30_TJA1043_STOP_SEC_CODE_FAST  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_CODE_ISR)
# undef CANTRCV_30_TJA1043_START_SEC_CODE_ISR  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE_ISR     /* mapped to default ISR code section */
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CODE_ISR)
# undef CANTRCV_30_TJA1043_STOP_SEC_CODE_ISR   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE          /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_CONST_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_CONST_8BIT  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT     /* mapped to default const 8bit section */
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CONST_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_CONST_8BIT   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_CONST_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CONST_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_CONST_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CONST_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_CONST_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CONST_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_CONST_FAST_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_8BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CONST_FAST_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_CONST_FAST_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CONST_FAST_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_CONST_FAST_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CONST_FAST_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_CONST_FAST_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_CONST_FAST_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_PBCFG)
# undef CANTRCV_30_TJA1043_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_PBCFG
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_PBCFG)
# undef CANTRCV_30_TJA1043_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_INIT_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_INIT_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR                /* default var stop section */
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_INIT_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_INIT_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_INIT_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_INIT_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOINIT_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOINIT_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOINIT_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOINIT_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOINIT_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOINIT_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* ESCAN00065501 */
#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_PBCFG)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_PBCFG
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_PBCFG)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR FAST INIT sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_INIT_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_INIT_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_INIT_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_INIT_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_INIT_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_INIT_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR FAST NOINIT sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_NOINIT_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_NOINIT_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_NOINIT_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_NOINIT_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_NOINIT_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_NOINIT_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR FAST ZERO INIT sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE INIT sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_INIT_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_INIT_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_INIT_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_INIT_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_INIT_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_INIT_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE NOINIT sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE ZERO INIT sections */

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#if defined(CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef CANTRCV_30_TJA1043_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  CANTRCV_30_TJA1043 END
 *********************************************************************************************************************/ /* PRQA S 0883 */ /* Appears only while testing */

/**********************************************************************************************************************
 *  ETHTRCV 30 VTT START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef ETHTRCV_30_VTT_START_SEC_CODE
  #undef ETHTRCV_30_VTT_START_SEC_CODE                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CODE                                    /* mapped to default code section */
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_CODE
  #undef ETHTRCV_30_VTT_STOP_SEC_CODE                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CODE                                     /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef ETHTRCV_30_VTT_START_SEC_CONST_8BIT
# undef ETHTRCV_30_VTT_START_SEC_CONST_8BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_CONST_8BIT
# undef ETHTRCV_30_VTT_STOP_SEC_CONST_8BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_VTT_START_SEC_CONST_16BIT
# undef ETHTRCV_30_VTT_START_SEC_CONST_16BIT                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_CONST_16BIT
# undef ETHTRCV_30_VTT_STOP_SEC_CONST_16BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_VTT_START_SEC_CONST_32BIT
# undef ETHTRCV_30_VTT_START_SEC_CONST_32BIT                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_CONST_32BIT
# undef ETHTRCV_30_VTT_STOP_SEC_CONST_32BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_VTT_START_SEC_CONST_UNSPECIFIED
# undef ETHTRCV_30_VTT_START_SEC_CONST_UNSPECIFIED          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_CONST_UNSPECIFIED
# undef ETHTRCV_30_VTT_STOP_SEC_CONST_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_VTT_START_SEC_PBCFG
# undef ETHTRCV_30_VTT_START_SEC_PBCFG                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_PBCFG
# undef ETHTRCV_30_VTT_STOP_SEC_PBCFG                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef ETHTRCV_30_VTT_START_SEC_PBCFG_ROOT
# undef ETHTRCV_30_VTT_START_SEC_PBCFG_ROOT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_PBCFG_ROOT
# undef ETHTRCV_30_VTT_STOP_SEC_PBCFG_ROOT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#ifdef ETHTRCV_30_VTT_START_SEC_VAR_NOINIT_8BIT
# undef ETHTRCV_30_VTT_START_SEC_VAR_NOINIT_8BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_VAR_NOINIT_8BIT
# undef ETHTRCV_30_VTT_STOP_SEC_VAR_NOINIT_8BIT             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_VTT_START_SEC_VAR_ZERO_INIT_8BIT
# undef ETHTRCV_30_VTT_START_SEC_VAR_ZERO_INIT_8BIT         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef ETHTRCV_30_VTT_STOP_SEC_VAR_ZERO_INIT_8BIT          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_VTT_START_SEC_VAR_NOINIT_16BIT
# undef ETHTRCV_30_VTT_START_SEC_VAR_NOINIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_VAR_NOINIT_16BIT
# undef ETHTRCV_30_VTT_STOP_SEC_VAR_NOINIT_16BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_VTT_START_SEC_VAR_NOINIT_32BIT
# undef ETHTRCV_30_VTT_START_SEC_VAR_NOINIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_VAR_NOINIT_32BIT
# undef ETHTRCV_30_VTT_STOP_SEC_VAR_NOINIT_32BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_VTT_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHTRCV_30_VTT_START_SEC_VAR_NOINIT_UNSPECIFIED     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHTRCV_30_VTT_STOP_SEC_VAR_NOINIT_UNSPECIFIED      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#ifdef ETHTRCV_30_VTT_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETHTRCV_30_VTT_START_SEC_VAR_ZERO_INIT_UNSPECIFIED  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef ETHTRCV_30_VTT_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETHTRCV_30_VTT_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  ETHTRCV 30 VTT END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  WDG_30_SBC START
 *********************************************************************************************************************/
 
/******** CODE sections **********************************************************************************************/
#ifdef WDG_30_SBC_START_SEC_CODE                      
    #undef WDG_30_SBC_START_SEC_CODE	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_CODE
#endif
#ifdef WDG_30_SBC_STOP_SEC_CODE
    #undef WDG_30_SBC_STOP_SEC_CODE	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_CODE
#endif

/*******  CONST sections  ********************************************************************************************/
#ifdef WDG_30_SBC_START_SEC_CONST_UNSPECIFIED
    #undef WDG_30_SBC_START_SEC_CONST_UNSPECIFIED  /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef WDG_30_SBC_STOP_SEC_CONST_UNSPECIFIED
    #undef WDG_30_SBC_STOP_SEC_CONST_UNSPECIFIED   /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_CONST
#endif
#ifdef WDG_30_SBC_START_SEC_PBCFG_ROOT
	#undef WDG_30_SBC_START_SEC_PBCFG_ROOT	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
	#define START_SEC_CONST_PBCFG
#endif
#ifdef WDG_30_SBC_STOP_SEC_PBCFG_ROOT
	#undef WDG_30_SBC_STOP_SEC_PBCFG_ROOT	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
	#define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/
#ifdef WDG_30_SBC_START_SEC_VAR_INIT_8       /* Init variables */
    #undef WDG_30_SBC_START_SEC_VAR_INIT_8	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_INIT_8
#endif
#ifdef WDG_30_SBC_STOP_SEC_VAR_INIT_8
    #undef WDG_30_SBC_STOP_SEC_VAR_INIT_8	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR
#endif	
#ifdef WDG_30_SBC_START_SEC_VAR_CLEARED_8    /* Cleared variables */
    #undef WDG_30_SBC_START_SEC_VAR_CLEARED_8	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_CLEARED_8
#endif
#ifdef WDG_30_SBC_STOP_SEC_VAR_CLEARED_8
    #undef WDG_30_SBC_STOP_SEC_VAR_CLEARED_8	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR
#endif

#ifdef WDG_30_SBC_START_SEC_VAR_CLEARED_32
    #undef WDG_30_SBC_START_SEC_VAR_CLEARED_32	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_CLEARED_32
#endif
#ifdef WDG_30_SBC_STOP_SEC_VAR_CLEARED_32
    #undef WDG_30_SBC_STOP_SEC_VAR_CLEARED_32	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR
#endif

#ifdef WDG_30_SBC_START_SEC_VAR_INIT_UNSPECIFIED
    #undef WDG_30_SBC_START_SEC_VAR_INIT_UNSPECIFIED     /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef WDG_30_SBC_STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef WDG_30_SBC_STOP_SEC_VAR_INIT_UNSPECIFIED  /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR
#endif
	
#ifdef WDG_30_SBC_START_SEC_VAR_CLEARED_UNSPECIFIED
    #undef WDG_30_SBC_START_SEC_VAR_CLEARED_UNSPECIFIED	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_CLEARED_UNSPECIFIED
#endif
#ifdef WDG_30_SBC_STOP_SEC_VAR_CLEARED_UNSPECIFIED
    #undef WDG_30_SBC_STOP_SEC_VAR_CLEARED_UNSPECIFIED	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR
#endif

#ifdef WDG_30_SBC_START_SEC_VAR_NOINIT_UNSPECIFIED   /* No init variables */
    #undef WDG_30_SBC_START_SEC_VAR_NOINIT_UNSPECIFIED	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef WDG_30_SBC_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef WDG_30_SBC_STOP_SEC_VAR_NOINIT_UNSPECIFIED	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 *  WDG_30_SBC END
 *********************************************************************************************************************/
 


/**********************************************************************************************************************
 *  DrvWd_VttCanoe01Asr START 
 **********************************************************************************************************************/

/*******  CODE sections ***********************************************************************************************/

/*******  CONST sections  *********************************************************************************************/

/*******  VAR sections  ***********************************************************************************************/


/**********************************************************************************************************************
 *  DrvWd_VttCanoe01Asr END
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  PDUR START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef PDUR_START_SEC_CODE
# undef PDUR_START_SEC_CODE
# define START_SEC_CODE
#endif
#ifdef PDUR_STOP_SEC_CODE
# undef PDUR_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef PDUR_START_SEC_CONST_8BIT
# undef PDUR_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef PDUR_STOP_SEC_CONST_8BIT
# undef PDUR_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef PDUR_START_SEC_CONST_16BIT
# undef PDUR_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef PDUR_STOP_SEC_CONST_16BIT
# undef PDUR_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef PDUR_START_SEC_CONST_32BIT
# undef PDUR_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef PDUR_STOP_SEC_CONST_32BIT
# undef PDUR_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef PDUR_START_SEC_CONST_UNSPECIFIED
# undef PDUR_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef PDUR_STOP_SEC_CONST_UNSPECIFIED
# undef PDUR_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/* FAST CONST sections */


/* Postbuild CFG CONST sections */

/* Root table for postbuild data */
#ifdef PDUR_START_SEC_PBCFG
# undef PDUR_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef PDUR_STOP_SEC_PBCFG
# undef PDUR_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef PDUR_START_SEC_VAR_ZERO_INIT_8BIT
# undef PDUR_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef PDUR_START_SEC_VAR_NOINIT_8BIT
# undef PDUR_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef PDUR_STOP_SEC_VAR_NOINIT_8BIT
# undef PDUR_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef PDUR_START_SEC_VAR_NOINIT_16BIT
# undef PDUR_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef PDUR_STOP_SEC_VAR_NOINIT_16BIT
# undef PDUR_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef PDUR_START_SEC_VAR_NOINIT_32BIT
# undef PDUR_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef PDUR_STOP_SEC_VAR_NOINIT_32BIT
# undef PDUR_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif


#ifdef PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef PDUR_START_SEC_BUFFER_VAR_NOINIT_8BIT
# undef PDUR_START_SEC_BUFFER_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef PDUR_STOP_SEC_BUFFER_VAR_NOINIT_8BIT
# undef PDUR_STOP_SEC_BUFFER_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

/* Postbuild CFG VAR sections */

#ifdef PDUR_START_SEC_VAR_PBCFG
# undef PDUR_START_SEC_VAR_PBCFG
# define START_SEC_VAR_PBCFG
#endif
#ifdef PDUR_STOP_SEC_VAR_PBCFG
# undef PDUR_STOP_SEC_VAR_PBCFG
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */



/* VAR FAST INIT sections */



/* VAR FAST NOINIT sections */


/* VAR FAST ZERO INIT sections */



/**********************************************************************************************************************
 *  PDUR END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  WDGIF START
 *********************************************************************************************************************/

//#include "WdgIf_MemMap.h"

/*******  CODE sections **********************************************************************************************/

#if defined WDGIF_START_SEC_CODE
# undef WDGIF_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif
#if defined WDGIF_STOP_SEC_CODE
# undef WDGIF_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

#if defined WDGIF_START_SEC_CONST_UNSPECIFIED
# undef WDGIF_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined WDGIF_STOP_SEC_CONST_UNSPECIFIED
# undef WDGIF_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined WDGIF_START_SEC_VAR_INIT_8BIT
# undef WDGIF_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_INIT_8BIT
# undef WDGIF_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined WDGIF_START_SEC_VAR_INIT_16BIT
# undef WDGIF_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_INIT_16BIT
# undef WDGIF_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/**********************************************************************************************************************
 *  WDGIF END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CANIF START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef CANIF_START_SEC_CODE
# undef CANIF_START_SEC_CODE                       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef CANIF_STOP_SEC_CODE
# undef CANIF_STOP_SEC_CODE                        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE                             /* default code stop section */
#endif


#ifdef CANIF_START_SEC_APPL_CODE
# undef CANIF_START_SEC_APPL_CODE                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE                            /* mapped to default code section */
#endif

#ifdef CANIF_STOP_SEC_APPL_CODE
# undef CANIF_STOP_SEC_APPL_CODE                   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE                             /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CANIF_START_SEC_CONST_8BIT
# undef CANIF_START_SEC_CONST_8BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT                      /* mapped to const 8 bit section */
#endif
#ifdef CANIF_STOP_SEC_CONST_8BIT
# undef CANIF_STOP_SEC_CONST_8BIT                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST                            /* default const stop section */
#endif

#ifdef CANIF_START_SEC_CONST_16BIT
# undef CANIF_START_SEC_CONST_16BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16BIT
#endif
#ifdef CANIF_STOP_SEC_CONST_16BIT
# undef CANIF_STOP_SEC_CONST_16BIT                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST                             /* default const stop section */
#endif


/* Const 32bit */

#ifdef CANIF_START_SEC_CONST_32BIT
# undef CANIF_START_SEC_CONST_32BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_32BIT                      /* mapped to const 32 bit section */
#endif
#ifdef CANIF_STOP_SEC_CONST_32BIT
# undef CANIF_STOP_SEC_CONST_32BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST                            /* default const stop section */
#endif


/* Const unspecified */

#ifdef CANIF_START_SEC_CONST_UNSPECIFIED
# undef CANIF_START_SEC_CONST_UNSPECIFIED          /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED               /* mapped to const unspecified section */
#endif
#ifdef CANIF_STOP_SEC_CONST_UNSPECIFIED
# undef CANIF_STOP_SEC_CONST_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST                            /* default const stop section */
#endif


/* FAST CONST sections */

#ifdef CANIF_START_SEC_CONST_FAST_8BIT
# undef CANIF_START_SEC_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_8BIT
#endif
#ifdef CANIF_STOP_SEC_CONST_FAST_8BIT
# undef CANIF_STOP_SEC_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef CANIF_START_SEC_CONST_FAST_16BIT
# undef CANIF_START_SEC_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_16BIT
#endif
#ifdef CANIF_STOP_SEC_CONST_FAST_16BIT
# undef CANIF_STOP_SEC_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef CANIF_START_SEC_CONST_FAST_32BIT
# undef CANIF_START_SEC_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_32BIT
#endif
#ifdef CANIF_STOP_SEC_CONST_FAST_32BIT
# undef CANIF_STOP_SEC_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef CANIF_START_SEC_CONST_FAST_UNSPECIFIED
# undef CANIF_START_SEC_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_FAST_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_CONST_FAST_UNSPECIFIED
# undef CANIF_STOP_SEC_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#ifdef CANIF_START_SEC_PBCFG
# undef CANIF_START_SEC_PBCFG                      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_PBCFG                     /* mapped to const unspecified section */
#endif
#ifdef CANIF_STOP_SEC_PBCFG
# undef CANIF_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef CANIF_START_SEC_VAR_INIT_8BIT
# undef CANIF_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#ifdef CANIF_STOP_SEC_VAR_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR                /* default var stop section */
#endif

#ifdef CANIF_START_SEC_VAR_INIT_16BIT
# undef CANIF_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_INIT_32BIT
# undef CANIF_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef CANIF_START_SEC_VAR_NOINIT_8BIT
# undef CANIF_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOINIT_8BIT
# undef CANIF_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOINIT_16BIT
# undef CANIF_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOINIT_16BIT
# undef CANIF_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOINIT_32BIT
# undef CANIF_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOINIT_32BIT
# undef CANIF_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* ESCAN00065501 */
#ifdef CANIF_START_SEC_VAR_PBCFG
# undef CANIF_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_PBCFG
#endif
#ifdef CANIF_STOP_SEC_VAR_PBCFG
# undef CANIF_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#ifdef CANIF_START_SEC_VAR_ZERO_INIT_8BIT
# undef CANIF_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_ZERO_INIT_16BIT
# undef CANIF_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_ZERO_INIT_32BIT
# undef CANIF_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR FAST INIT sections */

#ifdef CANIF_START_SEC_VAR_FAST_INIT_8BIT
# undef CANIF_START_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_FAST_INIT_16BIT
# undef CANIF_START_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_FAST_INIT_32BIT
# undef CANIF_START_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_FAST_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR FAST NOINIT sections */

#ifdef CANIF_START_SEC_VAR_FAST_NOINIT_8BIT
# undef CANIF_START_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_NOINIT_8BIT
# undef CANIF_STOP_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_FAST_NOINIT_16BIT
# undef CANIF_START_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_NOINIT_16BIT
# undef CANIF_STOP_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_FAST_NOINIT_32BIT
# undef CANIF_START_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_NOINIT_32BIT
# undef CANIF_STOP_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR FAST ZERO INIT sections */

#ifdef CANIF_START_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef CANIF_START_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_FAST_ZERO_INIT_16BIT
# undef CANIF_START_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_FAST_ZERO_INIT_32BIT
# undef CANIF_START_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE INIT sections */

#ifdef CANIF_START_SEC_VAR_NOCACHE_INIT_8BIT
# undef CANIF_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_INIT_16BIT
# undef CANIF_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_INIT_32BIT
# undef CANIF_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE NOINIT sections */

#ifdef CANIF_START_SEC_VAR_NOCACHE_NOINIT_8BIT
# undef CANIF_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_NOINIT_16BIT
# undef CANIF_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef CANIF_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE ZERO INIT sections */

#ifdef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# undef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
# undef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
# undef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  CANIF END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  CRYIF START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef CRYIF_START_SEC_CODE
# undef CRYIF_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE                                               /* mapped to default code section */
#endif
#ifdef CRYIF_STOP_SEC_CODE
# undef CRYIF_STOP_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE                                                /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CRYIF_START_SEC_CONST_UNSPECIFIED
# undef CRYIF_START_SEC_CONST_UNSPECIFIED      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef CRYIF_STOP_SEC_CONST_UNSPECIFIED
# undef CRYIF_STOP_SEC_CONST_UNSPECIFIED      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */


/* VAR ZERO INIT sections */

#ifdef CRYIF_START_SEC_VAR_ZERO_INIT_8BIT
# undef CRYIF_START_SEC_VAR_ZERO_INIT_8BIT      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef CRYIF_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef CRYIF_STOP_SEC_VAR_ZERO_INIT_8BIT      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  CRYIF END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  ETHIF START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined ETHIF_START_SEC_CODE
  #undef ETHIF_START_SEC_CODE                       /* PRQA S 0841 */
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#if defined ETHIF_STOP_SEC_CODE
  #undef ETHIF_STOP_SEC_CODE                        /* PRQA S 0841 */
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#if defined ETHIF_START_SEC_CODE_ISR
  #undef ETHIF_START_SEC_CODE_ISR                   /* PRQA S 0841 */
  #define START_SEC_CODE_ISR                        /* mapped to default ISR code section */
#endif
#if defined ETHIF_STOP_SEC_CODE_ISR
  #undef ETHIF_STOP_SEC_CODE_ISR                    /* PRQA S 0841 */
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#if defined ETHIF_START_SEC_CONST_8BIT
# undef ETHIF_START_SEC_CONST_8BIT                  /* PRQA S 0841 */
# define START_SEC_CONST_8BIT
#endif
#if defined ETHIF_STOP_SEC_CONST_8BIT
# undef ETHIF_STOP_SEC_CONST_8BIT                   /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

#if defined ETHIF_START_SEC_CONST_16BIT
# undef ETHIF_START_SEC_CONST_16BIT                 /* PRQA S 0841 */
# define START_SEC_CONST_16BIT
#endif
#if defined ETHIF_STOP_SEC_CONST_16BIT
# undef ETHIF_STOP_SEC_CONST_16BIT                  /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

#if defined ETHIF_START_SEC_CONST_32BIT
# undef ETHIF_START_SEC_CONST_32BIT                 /* PRQA S 0841 */
# define START_SEC_CONST_32BIT
#endif
#if defined ETHIF_STOP_SEC_CONST_32BIT
# undef ETHIF_STOP_SEC_CONST_32BIT                  /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

#if defined ETHIF_START_SEC_CONST_UNSPECIFIED
# undef ETHIF_START_SEC_CONST_UNSPECIFIED           /* PRQA S 0841 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined ETHIF_STOP_SEC_CONST_UNSPECIFIED
# undef ETHIF_STOP_SEC_CONST_UNSPECIFIED            /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

#if defined ETHIF_START_SEC_PBCFG
# undef ETHIF_START_SEC_PBCFG                       /* PRQA S 0841 */
# define START_SEC_CONST_PBCFG
#endif
#if defined ETHIF_STOP_SEC_PBCFG
# undef ETHIF_STOP_SEC_PBCFG                        /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

#if defined ETHIF_START_SEC_PBCFG_ROOT
# undef ETHIF_START_SEC_PBCFG_ROOT                  /* PRQA S 0841 */
# define START_SEC_CONST_PBCFG
#endif
#if defined ETHIF_STOP_SEC_PBCFG_ROOT
# undef ETHIF_STOP_SEC_PBCFG_ROOT                   /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#if defined ETHIF_START_SEC_VAR_NOINIT_8BIT
# undef ETHIF_START_SEC_VAR_NOINIT_8BIT             /* PRQA S 0841 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined ETHIF_STOP_SEC_VAR_NOINIT_8BIT
# undef ETHIF_STOP_SEC_VAR_NOINIT_8BIT              /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined ETHIF_START_SEC_VAR_NOINIT_16BIT
# undef ETHIF_START_SEC_VAR_NOINIT_16BIT            /* PRQA S 0841 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined ETHIF_STOP_SEC_VAR_NOINIT_16BIT
# undef ETHIF_STOP_SEC_VAR_NOINIT_16BIT             /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined ETHIF_START_SEC_VAR_NOINIT_32BIT
# undef ETHIF_START_SEC_VAR_NOINIT_32BIT            /* PRQA S 0841 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined ETHIF_STOP_SEC_VAR_NOINIT_32BIT
# undef ETHIF_STOP_SEC_VAR_NOINIT_32BIT             /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined ETHIF_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHIF_START_SEC_VAR_NOINIT_UNSPECIFIED      /* PRQA S 0841 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined ETHIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED       /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined ETHIF_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETHIF_START_SEC_VAR_ZERO_INIT_UNSPECIFIED     /* PRQA S 0841 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined ETHIF_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ETHIF_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED      /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  ETHIF END
 *********************************************************************************************************************/

#ifdef MEMIF_START_SEC_CONST_8BIT 
    #undef MEMIF_START_SEC_CONST_8BIT 
    #define START_SEC_CONST_8BIT
#endif

#ifdef MEMIF_STOP_SEC_CONST_8BIT 
    #undef MEMIF_STOP_SEC_CONST_8BIT 
    #define STOP_SEC_CONST
#endif


#ifdef MEMIF_START_SEC_CONST_32BIT
    #undef MEMIF_START_SEC_CONST_32BIT
    #define START_SEC_CONST_32BIT
#endif

#ifdef MEMIF_STOP_SEC_CONST_32BIT
    #undef MEMIF_STOP_SEC_CONST_32BIT
    #define STOP_SEC_CONST
#endif


#ifdef MEMIF_START_SEC_CODE
    #undef MEMIF_START_SEC_CODE
    #define START_SEC_CODE
#endif

#ifdef MEMIF_STOP_SEC_CODE
    #undef MEMIF_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 *  SOAD START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined SOAD_START_SEC_CODE
# undef SOAD_START_SEC_CODE                         /* PRQA S 0841 */
# define START_SEC_CODE                             /* mapped to default code section */
#endif
#if defined SOAD_STOP_SEC_CODE
# undef SOAD_STOP_SEC_CODE                          /* PRQA S 0841 */
# define STOP_SEC_CODE                              /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#if defined SOAD_START_SEC_CONST_8BIT
# undef SOAD_START_SEC_CONST_8BIT                   /* PRQA S 0841 */
# define START_SEC_CONST_8BIT
#endif
#if defined SOAD_STOP_SEC_CONST_8BIT
# undef SOAD_STOP_SEC_CONST_8BIT                    /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

#if defined SOAD_START_SEC_CONST_16BIT
# undef SOAD_START_SEC_CONST_16BIT                  /* PRQA S 0841 */
# define START_SEC_CONST_16BIT
#endif
#if defined SOAD_STOP_SEC_CONST_16BIT
# undef SOAD_STOP_SEC_CONST_16BIT                   /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

#if defined SOAD_START_SEC_CONST_32BIT
# undef SOAD_START_SEC_CONST_32BIT                  /* PRQA S 0841 */
# define START_SEC_CONST_32BIT
#endif
#if defined SOAD_STOP_SEC_CONST_32BIT
# undef SOAD_STOP_SEC_CONST_32BIT                   /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

#if defined SOAD_START_SEC_CONST_UNSPECIFIED
# undef SOAD_START_SEC_CONST_UNSPECIFIED            /* PRQA S 0841 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined SOAD_STOP_SEC_CONST_UNSPECIFIED
# undef SOAD_STOP_SEC_CONST_UNSPECIFIED             /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

#if defined SOAD_START_SEC_PBCFG
# undef SOAD_START_SEC_PBCFG                        /* PRQA S 0841 */
# define START_SEC_CONST_PBCFG
#endif
#if defined SOAD_STOP_SEC_PBCFG
# undef SOAD_STOP_SEC_PBCFG                         /* PRQA S 0841 */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#if defined SOAD_START_SEC_VAR_NOINIT_8BIT
# undef SOAD_START_SEC_VAR_NOINIT_8BIT              /* PRQA S 0841 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined SOAD_STOP_SEC_VAR_NOINIT_8BIT
# undef SOAD_STOP_SEC_VAR_NOINIT_8BIT               /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_NOINIT_16BIT
# undef SOAD_START_SEC_VAR_NOINIT_16BIT             /* PRQA S 0841 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined SOAD_STOP_SEC_VAR_NOINIT_16BIT
# undef SOAD_STOP_SEC_VAR_NOINIT_16BIT              /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_NOINIT_32BIT
# undef SOAD_START_SEC_VAR_NOINIT_32BIT             /* PRQA S 0841 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined SOAD_STOP_SEC_VAR_NOINIT_32BIT
# undef SOAD_STOP_SEC_VAR_NOINIT_32BIT              /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef SOAD_START_SEC_VAR_NOINIT_UNSPECIFIED       /* PRQA S 0841 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined SOAD_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef SOAD_STOP_SEC_VAR_NOINIT_UNSPECIFIED        /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_INIT_8BIT
# undef SOAD_START_SEC_VAR_INIT_8BIT                /* PRQA S 0841 */
# define START_SEC_VAR_INIT_8BIT
#endif
#if defined SOAD_STOP_SEC_VAR_INIT_8BIT
# undef SOAD_STOP_SEC_VAR_INIT_8BIT                 /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_INIT_16BIT
# undef SOAD_START_SEC_VAR_INIT_16BIT               /* PRQA S 0841 */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined SOAD_STOP_SEC_VAR_INIT_16BIT
# undef SOAD_STOP_SEC_VAR_INIT_16BIT                /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_INIT_32BIT
# undef SOAD_START_SEC_VAR_INIT_32BIT               /* PRQA S 0841 */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined SOAD_STOP_SEC_VAR_INIT_32BIT
# undef SOAD_STOP_SEC_VAR_INIT_32BIT                /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_INIT_UNSPECIFIED
# undef SOAD_START_SEC_VAR_INIT_UNSPECIFIED         /* PRQA S 0841 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined SOAD_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef SOAD_STOP_SEC_VAR_INIT_UNSPECIFIED          /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_ZERO_INIT_8BIT
# undef SOAD_START_SEC_VAR_ZERO_INIT_8BIT           /* PRQA S 0841 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined SOAD_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef SOAD_STOP_SEC_VAR_ZERO_INIT_8BIT            /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_ZERO_INIT_16BIT
# undef SOAD_START_SEC_VAR_ZERO_INIT_16BIT          /* PRQA S 0841 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined SOAD_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef SOAD_STOP_SEC_VAR_ZERO_INIT_16BIT           /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_ZERO_INIT_32BIT
# undef SOAD_START_SEC_VAR_ZERO_INIT_32BIT          /* PRQA S 0841 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined SOAD_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef SOAD_STOP_SEC_VAR_ZERO_INIT_32BIT           /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef SOAD_START_SEC_VAR_ZERO_INIT_UNSPECIFIED    /* PRQA S 0841 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined SOAD_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef SOAD_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED     /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

#if defined SOAD_START_SEC_VAR_PBCFG
# undef SOAD_START_SEC_VAR_PBCFG                    /* PRQA S 0841 */
# define START_SEC_VAR_PBCFG
#endif
#if defined SOAD_STOP_SEC_VAR_PBCFG
# undef SOAD_STOP_SEC_VAR_PBCFG                     /* PRQA S 0841 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  SOAD END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  Com START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef COM_START_SEC_CODE
# undef COM_START_SEC_CODE
# define START_SEC_CODE
#endif
#ifdef COM_STOP_SEC_CODE
# undef COM_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif
/* COM application callback code section (Rte_Cbk.h)*/
#ifdef COM_START_SEC_APPL_CODE
# undef COM_START_SEC_APPL_CODE
# define START_SEC_CODE
#endif
#ifdef COM_STOP_SEC_APPL_CODE
# undef COM_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef COM_START_SEC_CONST_8BIT
# undef COM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef COM_STOP_SEC_CONST_8BIT
# undef COM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_CONST_16BIT
# undef COM_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef COM_STOP_SEC_CONST_16BIT
# undef COM_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_CONST_32BIT
# undef COM_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef COM_STOP_SEC_CONST_32BIT
# undef COM_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_CONST_64BIT
# undef COM_START_SEC_CONST_64BIT
# define START_SEC_CONST_64BIT
#endif
#ifdef COM_STOP_SEC_CONST_64BIT
# undef COM_STOP_SEC_CONST_64BIT
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_CONST_UNSPECIFIED
# undef COM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef COM_STOP_SEC_CONST_UNSPECIFIED
# undef COM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_PBCFG
# undef COM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef COM_STOP_SEC_PBCFG
# undef COM_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_VAR_PBCFG
# undef COM_START_SEC_VAR_PBCFG
# define START_SEC_VAR_PBCFG
#endif
#ifdef COM_STOP_SEC_VAR_PBCFG
# undef COM_STOP_SEC_VAR_PBCFG
# define STOP_SEC_VAR
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef COM_START_SEC_VAR_INIT_UNSPECIFIED
# undef COM_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef COM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef COM_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef COM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef COM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef COM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef COM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef COM_START_SEC_VAR_ZERO_INIT_8BIT
# undef COM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef COM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef COM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

/* VAR NOINIT sections */

#ifdef COM_START_SEC_VAR_NOINIT_BOOLEAN
# undef COM_START_SEC_VAR_NOINIT_BOOLEAN
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef COM_STOP_SEC_VAR_NOINIT_BOOLEAN
# define STOP_SEC_VAR
#endif

#ifdef COM_START_SEC_VAR_NOINIT_8BIT
# undef COM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_8BIT
# undef COM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef COM_START_SEC_VAR_NOINIT_16BIT
# undef COM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_16BIT
# undef COM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef COM_START_SEC_VAR_NOINIT_32BIT
# undef COM_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_32BIT
# undef COM_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef COM_START_SEC_VAR_NOINIT_64BIT
# undef COM_START_SEC_VAR_NOINIT_64BIT
# define START_SEC_VAR_NOINIT_64BIT
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_64BIT
# undef COM_STOP_SEC_VAR_NOINIT_64BIT
# define STOP_SEC_VAR
#endif

#ifdef COM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef COM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef COM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */



/* VAR FAST INIT sections */



/* VAR FAST NOINIT sections */


/* VAR FAST ZERO INIT sections */



/**********************************************************************************************************************
 *  Com END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  IpduM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef IPDUM_START_SEC_CODE
# undef IPDUM_START_SEC_CODE
# define START_SEC_CODE /* mapped to default code section */
#endif
#ifdef IPDUM_STOP_SEC_CODE
# undef IPDUM_STOP_SEC_CODE
# define STOP_SEC_CODE  /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* Postbuild CFG CONST sections */

#ifdef IPDUM_START_SEC_PBCFG_8BIT
# undef IPDUM_START_SEC_PBCFG_8BIT
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_PBCFG_8BIT
# undef IPDUM_STOP_SEC_PBCFG_8BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_PBCFG_16BIT
# undef IPDUM_START_SEC_PBCFG_16BIT
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_PBCFG_16BIT
# undef IPDUM_STOP_SEC_PBCFG_16BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_PBCFG_32BIT
# undef IPDUM_START_SEC_PBCFG_32BIT
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_PBCFG_32BIT
# undef IPDUM_STOP_SEC_PBCFG_32BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_PBCFG_UNSPECIFIED
# undef IPDUM_START_SEC_PBCFG_UNSPECIFIED
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_PBCFG_UNSPECIFIED
# undef IPDUM_STOP_SEC_PBCFG_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_PBCFG
# undef IPDUM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_PBCFG
# undef IPDUM_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_VAR_PBCFG
# undef IPDUM_START_SEC_VAR_PBCFG
# define START_SEC_VAR_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_VAR_PBCFG
# undef IPDUM_STOP_SEC_VAR_PBCFG
# define STOP_SEC_VAR
#endif

#ifdef IPDUM_START_SEC_CONST_8BIT
# undef IPDUM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef IPDUM_STOP_SEC_CONST_8BIT
# undef IPDUM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_CONST_16BIT
# undef IPDUM_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef IPDUM_STOP_SEC_CONST_16BIT
# undef IPDUM_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_CONST_32BIT
# undef IPDUM_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef IPDUM_STOP_SEC_CONST_32BIT
# undef IPDUM_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_CONST_UNSPECIFIED
# undef IPDUM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef IPDUM_STOP_SEC_CONST_UNSPECIFIED
# undef IPDUM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR ZERO INIT sections */

#ifdef IPDUM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef IPDUM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef IPDUM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef IPDUM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef IPDUM_START_SEC_VAR_ZERO_INIT_8BIT
# undef IPDUM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT
#endif
#ifdef IPDUM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef IPDUM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

/* VAR INIT sections */

#ifdef IPDUM_START_SEC_VAR_INIT_UNSPECIFIED
# undef IPDUM_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef IPDUM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef IPDUM_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef IPDUM_START_SEC_VAR_INIT_8BIT
# undef IPDUM_START_SEC_VAR_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT
#endif
#ifdef IPDUM_STOP_SEC_VAR_INIT_8BIT
# undef IPDUM_STOP_SEC_VAR_INIT_8BIT
# define STOP_SEC_VAR
#endif

/* VAR NOINIT sections */

#ifdef IPDUM_START_SEC_VAR_NOINIT_8BIT
# undef IPDUM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef IPDUM_STOP_SEC_VAR_NOINIT_8BIT
# undef IPDUM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef IPDUM_START_SEC_VAR_NOINIT_16BIT
# undef IPDUM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef IPDUM_STOP_SEC_VAR_NOINIT_16BIT
# undef IPDUM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef IPDUM_START_SEC_VAR_NOINIT_32BIT
# undef IPDUM_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef IPDUM_STOP_SEC_VAR_NOINIT_32BIT
# undef IPDUM_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef IPDUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef IPDUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef IPDUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef IPDUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  IpduM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  LDCOM START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef LDCOM_START_SEC_CODE
# undef LDCOM_START_SEC_CODE
# define START_SEC_CODE /* mapped to default code section */
#endif
#ifdef LDCOM_STOP_SEC_CODE
# undef LDCOM_STOP_SEC_CODE
# define STOP_SEC_CODE  /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef LDCOM_START_SEC_CONST_8BIT
# undef LDCOM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT   /* mapped to default const 8bit section */
#endif
#ifdef LDCOM_STOP_SEC_CONST_8BIT
# undef LDCOM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST /* default const stop section */
#endif

#ifdef LDCOM_START_SEC_CONST_16BIT
# undef LDCOM_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef LDCOM_STOP_SEC_CONST_16BIT
# undef LDCOM_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef LDCOM_START_SEC_CONST_32BIT
# undef LDCOM_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef LDCOM_STOP_SEC_CONST_32BIT
# undef LDCOM_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef LDCOM_START_SEC_CONST_UNSPECIFIED
# undef LDCOM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef LDCOM_STOP_SEC_CONST_UNSPECIFIED
# undef LDCOM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#ifdef LDCOM_START_SEC_PBCFG
# undef LDCOM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef LDCOM_STOP_SEC_PBCFG
# undef LDCOM_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef LDCOM_START_SEC_VAR_INIT_8BIT
# undef LDCOM_START_SEC_VAR_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT        /* mapped to default var init 8bit section */
#endif
#ifdef LDCOM_STOP_SEC_VAR_INIT_8BIT
# undef LDCOM_STOP_SEC_VAR_INIT_8BIT
# define STOP_SEC_VAR   /* default var stop section */
#endif

#ifdef LDCOM_START_SEC_VAR_INIT_16BIT
# undef LDCOM_START_SEC_VAR_INIT_16BIT
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef LDCOM_STOP_SEC_VAR_INIT_16BIT
# undef LDCOM_STOP_SEC_VAR_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef LDCOM_START_SEC_VAR_INIT_32BIT
# undef LDCOM_START_SEC_VAR_INIT_32BIT
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef LDCOM_STOP_SEC_VAR_INIT_32BIT
# undef LDCOM_STOP_SEC_VAR_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef LDCOM_START_SEC_VAR_INIT_UNSPECIFIED
# undef LDCOM_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef LDCOM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef LDCOM_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/* VAR NOINIT sections */

#ifdef LDCOM_START_SEC_VAR_NOINIT_BOOLEAN
# undef LDCOM_START_SEC_VAR_NOINIT_BOOLEAN
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef LDCOM_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef LDCOM_STOP_SEC_VAR_NOINIT_BOOLEAN
# define STOP_SEC_VAR
#endif

#ifdef LDCOM_START_SEC_VAR_NOINIT_8BIT
# undef LDCOM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef LDCOM_STOP_SEC_VAR_NOINIT_8BIT
# undef LDCOM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef LDCOM_START_SEC_VAR_NOINIT_16BIT
# undef LDCOM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef LDCOM_STOP_SEC_VAR_NOINIT_16BIT
# undef LDCOM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef LDCOM_START_SEC_VAR_NOINIT_32BIT
# undef LDCOM_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef LDCOM_STOP_SEC_VAR_NOINIT_32BIT
# undef LDCOM_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef LDCOM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef LDCOM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef LDCOM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef LDCOM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */

#ifdef LDCOM_START_SEC_VAR_ZERO_INIT_8BIT
# undef LDCOM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT
#endif
#ifdef LDCOM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef LDCOM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef LDCOM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef LDCOM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef LDCOM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef LDCOM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/* VAR FAST INIT sections */

/* VAR FAST NOINIT sections */

/* VAR FAST ZERO INIT sections */


/**********************************************************************************************************************
 *  LDCOM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  SECOC START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(SECOC_START_SEC_CODE)
# undef SECOC_START_SEC_CODE      /* PRQA S 0841 */     /* MD_MSR_19.6 */
# define START_SEC_CODE /* mapped to default code section */
#endif

#if defined(SECOC_STOP_SEC_CODE)
# undef SECOC_STOP_SEC_CODE       /* PRQA S 0841 */     /* MD_MSR_19.6 */
# define STOP_SEC_CODE  /* default code stop section */
#endif

#if defined(SECOC_START_SEC_APPL_CODE)
# undef SECOC_START_SEC_APPL_CODE      /* PRQA S 0841 */        /* MD_MSR_19.6 */
# define START_SEC_CODE /* mapped to default code section */
#endif

#if defined(SECOC_STOP_SEC_APPL_CODE)
# undef SECOC_STOP_SEC_APPL_CODE       /* PRQA S 0841 */        /* MD_MSR_19.6 */
# define STOP_SEC_CODE  /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(SECOC_START_SEC_CONST_8BIT)
# undef SECOC_START_SEC_CONST_8BIT  /* PRQA S 0841 */   /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT   /* mapped to default const 8bit section */
#endif
#if defined(SECOC_STOP_SEC_CONST_8BIT)
# undef SECOC_STOP_SEC_CONST_8BIT   /* PRQA S 0841 */   /* MD_MSR_19.6 */
# define STOP_SEC_CONST /* default const stop section */
#endif

#if defined(SECOC_START_SEC_CONST_16BIT)
# undef SECOC_START_SEC_CONST_16BIT /* PRQA S 0841 */   /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined(SECOC_STOP_SEC_CONST_16BIT)
# undef SECOC_STOP_SEC_CONST_16BIT /* PRQA S 0841 */    /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(SECOC_START_SEC_CONST_32BIT)
# undef SECOC_START_SEC_CONST_32BIT /* PRQA S 0841 */   /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined(SECOC_STOP_SEC_CONST_32BIT)
# undef SECOC_STOP_SEC_CONST_32BIT /* PRQA S 0841 */    /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(SECOC_START_SEC_CONST_UNSPECIFIED)
# undef SECOC_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */     /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(SECOC_STOP_SEC_CONST_UNSPECIFIED)
# undef SECOC_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */      /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#if defined(SECOC_START_SEC_PBCFG)
# undef SECOC_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(SECOC_STOP_SEC_PBCFG)
# undef SECOC_STOP_SEC_PBCFG /* PRQA S 0841 */  /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(SECOC_START_SEC_VAR_INIT_8BIT)
# undef SECOC_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT        /* mapped to default var init 8bit section */
#endif
#if defined(SECOC_STOP_SEC_VAR_INIT_8BIT)
# undef SECOC_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */  /* MD_MSR_19.6 */
# define STOP_SEC_VAR   /* default var stop section */
#endif

#if defined(SECOC_START_SEC_VAR_INIT_16BIT)
# undef SECOC_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */        /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined(SECOC_STOP_SEC_VAR_INIT_16BIT)
# undef SECOC_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SECOC_START_SEC_VAR_INIT_32BIT)
# undef SECOC_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */        /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined(SECOC_STOP_SEC_VAR_INIT_32BIT)
# undef SECOC_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SECOC_START_SEC_VAR_INIT_UNSPECIFIED)
# undef SECOC_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */  /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(SECOC_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef SECOC_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */   /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#if defined SECOC_START_SEC_VAR_NOINIT_BOOLEAN
# undef SECOC_START_SEC_VAR_NOINIT_BOOLEAN /* PRQA S 0841 */    /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined SECOC_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef SECOC_STOP_SEC_VAR_NOINIT_BOOLEAN /* PRQA S 0841 */     /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SECOC_START_SEC_VAR_NOINIT_8BIT)
# undef SECOC_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */       /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(SECOC_STOP_SEC_VAR_NOINIT_8BIT)
# undef SECOC_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */        /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SECOC_START_SEC_VAR_NOINIT_16BIT)
# undef SECOC_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */      /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(SECOC_STOP_SEC_VAR_NOINIT_16BIT)
# undef SECOC_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */       /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SECOC_START_SEC_VAR_NOINIT_32BIT)
# undef SECOC_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */      /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined(SECOC_STOP_SEC_VAR_NOINIT_32BIT)
# undef SECOC_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */       /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SECOC_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef SECOC_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */        /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(SECOC_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef SECOC_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SECOC_START_SEC_VAR_PBCFG)
# undef SECOC_START_SEC_VAR_PBCFG /* PRQA S 0841 */     /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#if defined(SECOC_STOP_SEC_VAR_PBCFG)
# undef SECOC_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */      /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#if defined(SECOC_START_SEC_VAR_ZERO_INIT_8BIT)
# undef SECOC_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */    /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(SECOC_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef SECOC_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */     /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SECOC_START_SEC_VAR_ZERO_INIT_16BIT)
# undef SECOC_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */   /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined(SECOC_STOP_SEC_VAR_ZERO_INIT_16BIT)
# undef SECOC_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */    /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SECOC_START_SEC_VAR_ZERO_INIT_32BIT)
# undef SECOC_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */   /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined(SECOC_STOP_SEC_VAR_ZERO_INIT_32BIT)
# undef SECOC_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */    /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SECOC_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef SECOC_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */     /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(SECOC_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef SECOC_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */      /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR FAST INIT sections */


/* VAR FAST NOINIT sections */


/* VAR FAST ZERO INIT sections */


/**********************************************************************************************************************
 *  SECOC END
 *********************************************************************************************************************/

#ifdef ADC_START_SEC_CODE_ASIL_B_GLOBAL
  #undef ADC_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef ADC_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef ADC_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef ADC_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef ADC_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef ADC_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef ADC_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef ADC_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef ADC_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef ADC_START_SEC_CONST_ASIL_B_GLOBAL_8
  #undef ADC_START_SEC_CONST_ASIL_B_GLOBAL_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef ADC_STOP_SEC_CONST_ASIL_B_GLOBAL_8
  #undef ADC_STOP_SEC_CONST_ASIL_B_GLOBAL_8
  #define STOP_SEC_CONST
#endif

#ifdef ADC_START_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #undef ADC_START_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #undef ADC_STOP_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #undef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #undef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef ADC_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef ADC_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #undef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #undef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #undef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #undef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #undef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #undef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #undef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #undef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #undef ADC_START_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #undef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef ADC_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef ADC_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef ADC_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef CRC_START_SEC_CODE_ASIL_B_GLOBAL
  #undef CRC_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef CRC_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef CRC_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef CRC_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
  #undef CRC_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef CRC_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
  #undef CRC_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_ASIL_B_GLOBAL_16
  #undef CRC_START_SEC_CONST_ASIL_B_GLOBAL_16
  #define START_SEC_CONST_16
#endif

#ifdef CRC_STOP_SEC_CONST_ASIL_B_GLOBAL_16
  #undef CRC_STOP_SEC_CONST_ASIL_B_GLOBAL_16
  #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_ASIL_B_GLOBAL_32
  #undef CRC_START_SEC_CONST_ASIL_B_GLOBAL_32
  #define START_SEC_CONST_32
#endif

#ifdef CRC_STOP_SEC_CONST_ASIL_B_GLOBAL_32
  #undef CRC_STOP_SEC_CONST_ASIL_B_GLOBAL_32
  #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_ASIL_B_GLOBAL_8
  #undef CRC_START_SEC_CONST_ASIL_B_GLOBAL_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef CRC_STOP_SEC_CONST_ASIL_B_GLOBAL_8
  #undef CRC_STOP_SEC_CONST_ASIL_B_GLOBAL_8
  #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #undef CRC_START_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_INIT_32BIT
#endif

#ifdef CRC_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #undef CRC_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef CRC_START_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #undef CRC_START_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef CRC_STOP_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #undef CRC_STOP_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef CRC_START_SEC_VAR_INIT_ASIL_B_GLOBAL_8
  #undef CRC_START_SEC_VAR_INIT_ASIL_B_GLOBAL_8
  #define START_SEC_VAR_INIT_8BIT
#endif

#ifdef CRC_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_8
  #undef CRC_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_8
  #define STOP_SEC_VAR
#endif
#ifdef DIO_START_SEC_CODE_ASIL_B_GLOBAL
  #undef DIO_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef DIO_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef DIO_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef DIO_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef DIO_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef DIO_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef DIO_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef DIO_START_SEC_CONST_ASIL_B_GLOBAL_16
  #undef DIO_START_SEC_CONST_ASIL_B_GLOBAL_16
  #define START_SEC_CONST_16BIT
#endif

#ifdef DIO_STOP_SEC_CONST_ASIL_B_GLOBAL_16
  #undef DIO_STOP_SEC_CONST_ASIL_B_GLOBAL_16
  #define STOP_SEC_CONST
#endif

#ifdef DIO_START_SEC_CONST_ASIL_B_GLOBAL_32
  #undef DIO_START_SEC_CONST_ASIL_B_GLOBAL_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef DIO_STOP_SEC_CONST_ASIL_B_GLOBAL_32
  #undef DIO_STOP_SEC_CONST_ASIL_B_GLOBAL_32
  #define STOP_SEC_CONST
#endif

#ifdef DMA_START_SEC_CODE_ASIL_B_GLOBAL
  #undef DMA_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef DMA_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef DMA_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef DMA_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef DMA_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef DMA_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef DMA_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef DMA_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef DMA_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef DMA_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef DMA_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef DMA_START_SEC_CONST_ASIL_B_GLOBAL_32
  #undef DMA_START_SEC_CONST_ASIL_B_GLOBAL_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef DMA_STOP_SEC_CONST_ASIL_B_GLOBAL_32
  #undef DMA_STOP_SEC_CONST_ASIL_B_GLOBAL_32
  #define STOP_SEC_CONST
#endif

#ifdef DMA_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef DMA_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef DMA_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #undef DMA_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #define START_SEC_VAR_ZERO_INIT_8BIT
#endif

#ifdef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #undef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #define STOP_SEC_VAR
#endif
#ifdef DMA_START_SEC_CONFIG_DATA_ASIL_B_CORE0_256
  #undef DMA_START_SEC_CONFIG_DATA_ASIL_B_CORE0_256
  #define START_SEC_CONST_32BIT
#endif

#ifdef DMA_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_256
  #undef DMA_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_256
  #define STOP_SEC_CONST
#endif

#ifdef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE0_8
  #undef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE0_8
  #define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_8
  #undef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_8
  #define STOP_SEC_VAR
#endif

#ifdef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE1_8
  #undef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE1_8
  #define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_8
  #undef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_8
  #define STOP_SEC_VAR
#endif

#ifdef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE2_8
  #undef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE2_8
  #define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_8
  #undef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_8
  #define STOP_SEC_VAR
#endif

#ifdef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE3_8
  #undef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE3_8
  #define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_8
  #undef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_8
  #define STOP_SEC_VAR
#endif

#ifdef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE4_8
  #undef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE4_8
  #define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_8
  #undef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_8
  #define STOP_SEC_VAR
#endif

#ifdef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE5_8
  #undef DMA_START_SEC_VAR_CLEARED_ASIL_B_CORE5_8
  #define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_8
  #undef DMA_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_8
  #define STOP_SEC_VAR
#endif

#ifdef FEE_START_SEC_CODE
  #undef FEE_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_CODE
  #undef FEE_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef FEE_START_SEC_CODE_ASIL_B_GLOBAL
  #undef FEE_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef FEE_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef FEE_START_SEC_CODE_ASIL_B_ILLEGALNOTIF
  #undef FEE_START_SEC_CODE_ASIL_B_ILLEGALNOTIF
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_CODE_ASIL_B_ILLEGALNOTIF
  #undef FEE_STOP_SEC_CODE_ASIL_B_ILLEGALNOTIF
  #define STOP_SEC_CODE
#endif

#ifdef FEE_START_SEC_CODE_ASIL_B_JOBENDNOTIF
  #undef FEE_START_SEC_CODE_ASIL_B_JOBENDNOTIF
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_CODE_ASIL_B_JOBENDNOTIF
  #undef FEE_STOP_SEC_CODE_ASIL_B_JOBENDNOTIF
  #define STOP_SEC_CODE
#endif

#ifdef FEE_START_SEC_CODE_ASIL_B_JOBERRNOTIF
  #undef FEE_START_SEC_CODE_ASIL_B_JOBERRNOTIF
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_CODE_ASIL_B_JOBERRNOTIF
  #undef FEE_STOP_SEC_CODE_ASIL_B_JOBERRNOTIF
  #define STOP_SEC_CODE
#endif

#ifdef FEE_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
  #undef FEE_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef FEE_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
  #undef FEE_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef FEE_START_SEC_CONST_ASIL_B_32
  #undef FEE_START_SEC_CONST_ASIL_B_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef FEE_STOP_SEC_CONST_ASIL_B_32
  #undef FEE_STOP_SEC_CONST_ASIL_B_32
  #define STOP_SEC_CONST
#endif

#ifdef FEE_START_SEC_CONST_ASIL_B_UNSPECIFIED
  #undef FEE_START_SEC_CONST_ASIL_B_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef FEE_STOP_SEC_CONST_ASIL_B_UNSPECIFIED
  #undef FEE_STOP_SEC_CONST_ASIL_B_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef FEE_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef FEE_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef FEE_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef FEE_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef FEE_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_UNSPECIFIED
  #undef FEE_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef FEE_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_UNSPECIFIED
  #undef FEE_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef FEE_START_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #undef FEE_START_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_INIT_32BIT
#endif

#ifdef FEE_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #undef FEE_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif
#ifdef FEE_START_SEC_CODE_ASIL_B_LOCAL
  #undef FEE_START_SEC_CODE_ASIL_B_LOCAL
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_CODE_ASIL_B_LOCAL
  #undef FEE_STOP_SEC_CODE_ASIL_B_LOCAL
  #define STOP_SEC_CODE
#endif

#ifdef FEE_START_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #undef FEE_START_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef FEE_STOP_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #undef FEE_STOP_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef FEE_START_SEC_VAR_CLEARED_ASIL_B_LOCAL_32
  #undef FEE_START_SEC_VAR_CLEARED_ASIL_B_LOCAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef FEE_STOP_SEC_VAR_CLEARED_ASIL_B_LOCAL_32
  #undef FEE_STOP_SEC_VAR_CLEARED_ASIL_B_LOCAL_32
  #define STOP_SEC_VAR
#endif

#ifdef FEE_START_SEC_VAR_INIT_ASIL_B_LOCAL_8
  #undef FEE_START_SEC_VAR_INIT_ASIL_B_LOCAL_8
  #define START_SEC_VAR_INIT_8BIT
#endif

#ifdef FEE_STOP_SEC_VAR_INIT_ASIL_B_LOCAL_8
  #undef FEE_STOP_SEC_VAR_INIT_ASIL_B_LOCAL_8
  #define STOP_SEC_VAR
#endif

#ifdef FEE_START_SEC_CONST_ASIL_B_LOCAL_32
  #undef FEE_START_SEC_CONST_ASIL_B_LOCAL_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef FEE_STOP_SEC_CONST_ASIL_B_LOCAL_32
  #undef FEE_STOP_SEC_CONST_ASIL_B_LOCAL_32
  #define STOP_SEC_CONST
#endif

#ifdef FEE_START_SEC_CONFIG_DATA_ASIL_B_LOCAL_UNSPECIFIED
  #undef FEE_START_SEC_CONFIG_DATA_ASIL_B_LOCAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef FEE_STOP_SEC_CONFIG_DATA_ASIL_B_LOCAL_UNSPECIFIED
  #undef FEE_STOP_SEC_CONFIG_DATA_ASIL_B_LOCAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef FEE_START_SEC_JOBENDNOTIF_CODE_ASIL_B_LOCAL
  #undef FEE_START_SEC_JOBENDNOTIF_CODE_ASIL_B_LOCAL
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_JOBENDNOTIF_CODE_ASIL_B_LOCAL
  #undef FEE_STOP_SEC_JOBENDNOTIF_CODE_ASIL_B_LOCAL
  #define STOP_SEC_CODE
#endif

#ifdef FEE_START_SEC_JOBERRNOTIF_CODE_ASIL_B_LOCAL
  #undef FEE_START_SEC_JOBERRNOTIF_CODE_ASIL_B_LOCAL
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_JOBERRNOTIF_CODE_ASIL_B_LOCAL
  #undef FEE_STOP_SEC_JOBERRNOTIF_CODE_ASIL_B_LOCAL
  #define STOP_SEC_CODE
#endif

#ifdef FEE_START_SEC_PROGERRORNOTI_CODE_ASIL_B_LOCAL
  #undef FEE_START_SEC_PROGERRORNOTI_CODE_ASIL_B_LOCAL
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_PROGERRORNOTI_CODE_ASIL_B_LOCAL
  #undef FEE_STOP_SEC_PROGERRORNOTI_CODE_ASIL_B_LOCAL
  #define STOP_SEC_CODE
#endif

#ifdef FEE_START_SEC_ILLEGALNOTIF_CODE_ASIL_B_LOCAL
  #undef FEE_START_SEC_ILLEGALNOTIF_CODE_ASIL_B_LOCAL
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_ILLEGALNOTIF_CODE_ASIL_B_LOCAL
  #undef FEE_STOP_SEC_ILLEGALNOTIF_CODE_ASIL_B_LOCAL
  #define STOP_SEC_CODE
#endif

#ifdef FEE_START_SEC_ERASEERRORNOTI_CODE_ASIL_B_LOCAL
  #undef FEE_START_SEC_ERASEERRORNOTI_CODE_ASIL_B_LOCAL
  #define START_SEC_CODE
#endif

#ifdef FEE_STOP_SEC_ERASEERRORNOTI_CODE_ASIL_B_LOCAL
  #undef FEE_STOP_SEC_ERASEERRORNOTI_CODE_ASIL_B_LOCAL
  #define STOP_SEC_CODE
#endif

#ifdef FLS_17_DMU_START_SEC_CODE
  #undef FLS_17_DMU_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef FLS_17_DMU_STOP_SEC_CODE
  #undef FLS_17_DMU_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif
#ifdef FLS_17_DMU_START_SEC_CODE_ASIL_B_LOCAL
  #undef FLS_17_DMU_START_SEC_CODE_ASIL_B_LOCAL
  #define START_SEC_CODE
#endif

#ifdef FLS_17_DMU_STOP_SEC_CODE_ASIL_B_LOCAL
  #undef FLS_17_DMU_STOP_SEC_CODE_ASIL_B_LOCAL
  #define STOP_SEC_CODE
#endif

#ifdef FLS_17_DMU_START_SEC_CONFIG_DATA_ASIL_B_LOCAL_UNSPECIFIED
  #undef FLS_17_DMU_START_SEC_CONFIG_DATA_ASIL_B_LOCAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef FLS_17_DMU_STOP_SEC_CONFIG_DATA_ASIL_B_LOCAL_UNSPECIFIED
  #undef FLS_17_DMU_STOP_SEC_CONFIG_DATA_ASIL_B_LOCAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif


#ifdef FLS_17_DMU_START_SEC_VAR_CLEARED_ASIL_B_LOCAL_32
  #undef FLS_17_DMU_START_SEC_VAR_CLEARED_ASIL_B_LOCAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef FLS_17_DMU_STOP_SEC_VAR_CLEARED_ASIL_B_LOCAL_32
  #undef FLS_17_DMU_STOP_SEC_VAR_CLEARED_ASIL_B_LOCAL_32
  #define STOP_SEC_VAR
#endif

#ifdef FLS_17_DMU_START_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #undef FLS_17_DMU_START_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef FLS_17_DMU_STOP_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #undef FLS_17_DMU_STOP_SEC_VAR_CLEARED_ASIL_B_LOCAL_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef FLSLOADER_START_SEC_BUSYLOOP_CALLOUT_CODE_QM_LOCAL
  #undef FLSLOADER_START_SEC_BUSYLOOP_CALLOUT_CODE_QM_LOCAL
  #define START_SEC_CODE
#endif

#ifdef FLSLOADER_STOP_SEC_BUSYLOOP_CALLOUT_CODE_QM_LOCAL
  #undef FLSLOADER_STOP_SEC_BUSYLOOP_CALLOUT_CODE_QM_LOCAL
  #define STOP_SEC_CODE
#endif

#ifdef FLSLOADER_START_SEC_CODE_QM_LOCAL
  #undef FLSLOADER_START_SEC_CODE_QM_LOCAL
  #define START_SEC_CODE
#endif

#ifdef FLSLOADER_STOP_SEC_CODE_QM_LOCAL
  #undef FLSLOADER_STOP_SEC_CODE_QM_LOCAL
  #define STOP_SEC_CODE
#endif

#ifdef FLSLOADER_START_SEC_CONST_QM_LOCAL_32
  #undef FLSLOADER_START_SEC_CONST_QM_LOCAL_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef FLSLOADER_STOP_SEC_CONST_QM_LOCAL_32
  #undef FLSLOADER_STOP_SEC_CONST_QM_LOCAL_32
  #define STOP_SEC_CONST
#endif

#ifdef FLSLOADER_START_SEC_CONST_QM_LOCAL_8
  #undef FLSLOADER_START_SEC_CONST_QM_LOCAL_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef FLSLOADER_STOP_SEC_CONST_QM_LOCAL_8
  #undef FLSLOADER_STOP_SEC_CONST_QM_LOCAL_8
  #define STOP_SEC_CONST
#endif

#ifdef FLSLOADER_START_SEC_VAR_CLEARED_QM_LOCAL_32
  #undef FLSLOADER_START_SEC_VAR_CLEARED_QM_LOCAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef FLSLOADER_STOP_SEC_VAR_CLEARED_QM_LOCAL_32
  #undef FLSLOADER_STOP_SEC_VAR_CLEARED_QM_LOCAL_32
  #define STOP_SEC_VAR
#endif

#ifdef FLSLOADER_START_SEC_VAR_CLEARED_QM_LOCAL_8
  #undef FLSLOADER_START_SEC_VAR_CLEARED_QM_LOCAL_8
  #define START_SEC_VAR_ZERO_INIT_8BIT
#endif

#ifdef FLSLOADER_STOP_SEC_VAR_CLEARED_QM_LOCAL_8
  #undef FLSLOADER_STOP_SEC_VAR_CLEARED_QM_LOCAL_8
  #define STOP_SEC_VAR
#endif

#ifdef FLSLOADER_START_SEC_WRITEERASE_CODE_QM_LOCAL
  #undef FLSLOADER_START_SEC_WRITEERASE_CODE_QM_LOCAL
  #define START_SEC_CODE
#endif

#ifdef FLSLOADER_STOP_SEC_WRITEERASE_CODE_QM_LOCAL
  #undef FLSLOADER_STOP_SEC_WRITEERASE_CODE_QM_LOCAL
  #define STOP_SEC_CODE
#endif

#ifdef GPT_START_SEC_CODE_ASIL_B_GLOBAL
  #undef GPT_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef GPT_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef GPT_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef GPT_START_SEC_CODE_FAST_ASIL_B_GLOBAL
  #undef GPT_START_SEC_CODE_FAST_ASIL_B_GLOBAL
  #define START_SEC_CODE_FAST
#endif

#ifdef GPT_STOP_SEC_CODE_FAST_ASIL_B_GLOBAL
  #undef GPT_STOP_SEC_CODE_FAST_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef GPT_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef GPT_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef GPT_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef GPT_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef GPT_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef GPT_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef GPT_START_SEC_CONST_ASIL_B_CORE0_8
  #undef GPT_START_SEC_CONST_ASIL_B_CORE0_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef GPT_STOP_SEC_CONST_ASIL_B_CORE0_8
  #undef GPT_STOP_SEC_CONST_ASIL_B_CORE0_8
  #define STOP_SEC_CONST
#endif

#ifdef GPT_START_SEC_CONST_ASIL_B_CORE1_8
  #undef GPT_START_SEC_CONST_ASIL_B_CORE1_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef GPT_STOP_SEC_CONST_ASIL_B_CORE1_8
  #undef GPT_STOP_SEC_CONST_ASIL_B_CORE1_8
  #define STOP_SEC_CONST
#endif

#ifdef GPT_START_SEC_CONST_ASIL_B_CORE2_8
  #undef GPT_START_SEC_CONST_ASIL_B_CORE2_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef GPT_STOP_SEC_CONST_ASIL_B_CORE2_8
  #undef GPT_STOP_SEC_CONST_ASIL_B_CORE2_8
  #define STOP_SEC_CONST
#endif

#ifdef GPT_START_SEC_CONST_ASIL_B_CORE3_8
  #undef GPT_START_SEC_CONST_ASIL_B_CORE3_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef GPT_STOP_SEC_CONST_ASIL_B_CORE3_8
  #undef GPT_STOP_SEC_CONST_ASIL_B_CORE3_8
  #define STOP_SEC_CONST
#endif

#ifdef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE0_8
  #undef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE0_8
  #define START_SEC_VAR_ZERO_INIT_8BIT
#endif

#ifdef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_8
  #undef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_8
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #undef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #undef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #undef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #undef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #undef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #undef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #undef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #undef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #undef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #undef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #undef GPT_START_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #undef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef GPT_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef GPT_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_INIT_ASIL_B_CORE0_UNSPECIFIED
  #undef GPT_START_SEC_VAR_INIT_ASIL_B_CORE0_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE0_UNSPECIFIED
  #undef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE0_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_INIT_ASIL_B_CORE1_UNSPECIFIED
  #undef GPT_START_SEC_VAR_INIT_ASIL_B_CORE1_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE1_UNSPECIFIED
  #undef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE1_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_INIT_ASIL_B_CORE2_UNSPECIFIED
  #undef GPT_START_SEC_VAR_INIT_ASIL_B_CORE2_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE2_UNSPECIFIED
  #undef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE2_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_INIT_ASIL_B_CORE3_UNSPECIFIED
  #undef GPT_START_SEC_VAR_INIT_ASIL_B_CORE3_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE3_UNSPECIFIED
  #undef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE3_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_INIT_ASIL_B_CORE4_UNSPECIFIED
  #undef GPT_START_SEC_VAR_INIT_ASIL_B_CORE4_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE4_UNSPECIFIED
  #undef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE4_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_INIT_ASIL_B_CORE5_UNSPECIFIED
  #undef GPT_START_SEC_VAR_INIT_ASIL_B_CORE5_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE5_UNSPECIFIED
  #undef GPT_STOP_SEC_VAR_INIT_ASIL_B_CORE5_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #undef GPT_START_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_INIT_32BIT
#endif

#ifdef GPT_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #undef GPT_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef GPT_START_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #undef GPT_START_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #undef GPT_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef ICU_17_TIMERIP_START_SEC_CODE_ASIL_B_GLOBAL
  #undef ICU_17_TIMERIP_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef ICU_17_TIMERIP_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef ICU_17_TIMERIP_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef ICU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef ICU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef ICU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef ICU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef ICU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef ICU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef ICU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef ICU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #undef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #undef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #define STOP_SEC_VAR
#endif

#ifdef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #undef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #undef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #define STOP_SEC_VAR
#endif

#ifdef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #undef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #undef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #define STOP_SEC_VAR
#endif

#ifdef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #undef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #undef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #define STOP_SEC_VAR
#endif

#ifdef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #undef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #undef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #define STOP_SEC_VAR
#endif

#ifdef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #undef ICU_17_TIMERIP_START_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #undef ICU_17_TIMERIP_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #define STOP_SEC_VAR
#endif

#ifdef IRQ_START_SEC_CODE
  #undef IRQ_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef IRQ_STOP_SEC_CODE
  #undef IRQ_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef IRQ_START_SEC_CODE_QM_GLOBAL
  #undef IRQ_START_SEC_CODE_QM_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef IRQ_STOP_SEC_CODE_QM_GLOBAL
  #undef IRQ_STOP_SEC_CODE_QM_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef IRQ_START_SEC_CODE
  #undef IRQ_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef IRQ_STOP_SEC_CODE
  #undef IRQ_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef IRQ_START_SEC_CODE_QM_GLOBAL
  #undef IRQ_START_SEC_CODE_QM_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef IRQ_STOP_SEC_CODE_QM_GLOBAL
  #undef IRQ_STOP_SEC_CODE_QM_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef MCALLIB_START_SEC_CODE_ASIL_B_GLOBAL
  #undef MCALLIB_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef MCALLIB_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef MCALLIB_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef MCALLIB_START_SEC_CONST_ASIL_B_GLOBAL_8
  #undef MCALLIB_START_SEC_CONST_ASIL_B_GLOBAL_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef MCALLIB_STOP_SEC_CONST_ASIL_B_GLOBAL_8
  #undef MCALLIB_STOP_SEC_CONST_ASIL_B_GLOBAL_8
  #define STOP_SEC_CONST
#endif

#ifdef MCALLIB_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
	#error "For Integrator: This section must be aligned to a 4-byte boundary!"
	   /* Pragma must be placed here. */
	   /* Example for Tasking compiler:  
		#pragma align 4
	   */
  #undef MCALLIB_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef MCALLIB_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
	#error "For Integrator: Alignment must be restored!"
	   /* Pragma must be restored here. */
	   /* Example for Tasking compiler:  
		#pragma align restore
		#pragma section farbss restore
	   */
  #undef MCALLIB_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef MCU_17_TIMERIP_START_SEC_CODE_ASIL_B_GLOBAL
  #undef MCU_17_TIMERIP_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef MCU_17_TIMERIP_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef MCU_17_TIMERIP_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef MCU_17_TIMERIP_START_SEC_CODE_FAST_ASIL_B_GLOBAL
  #undef MCU_17_TIMERIP_START_SEC_CODE_FAST_ASIL_B_GLOBAL
  #define START_SEC_CODE_FAST
#endif

#ifdef MCU_17_TIMERIP_STOP_SEC_CODE_FAST_ASIL_B_GLOBAL
  #undef MCU_17_TIMERIP_STOP_SEC_CODE_FAST_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef MCU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_16
  #undef MCU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_16
  #define START_SEC_CONST_16BIT
#endif

#ifdef MCU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_16
  #undef MCU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_16
  #define STOP_SEC_CONST
#endif

#ifdef MCU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
  #undef MCU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef MCU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
  #undef MCU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
  #define STOP_SEC_CONST
#endif

#ifdef MCU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_8
  #undef MCU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef MCU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_8
  #undef MCU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_8
  #define STOP_SEC_CONST
#endif

#ifdef MCU_17_TIMERIP_START_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #undef MCU_17_TIMERIP_START_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef MCU_17_TIMERIP_STOP_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #undef MCU_17_TIMERIP_STOP_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef MCU_17_TIMERIP_START_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #undef MCU_17_TIMERIP_START_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_INIT_32BIT
#endif

#ifdef MCU_17_TIMERIP_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #undef MCU_17_TIMERIP_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef MCU_17_TIMERIP_START_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #undef MCU_17_TIMERIP_START_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef MCU_17_TIMERIP_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #undef MCU_17_TIMERIP_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef MCU_START_SEC_CODE_ASIL_B_GLOBAL
  #undef MCU_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef MCU_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef MCU_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef MCU_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef MCU_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef MCU_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef MCU_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef MCU_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef MCU_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef MCU_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef MCU_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef PORT_START_SEC_CODE_ASIL_B_GLOBAL
  #undef PORT_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef PORT_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef PORT_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef PORT_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef PORT_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef PORT_START_SEC_CONST_ASIL_B_GLOBAL_16
  #undef PORT_START_SEC_CONST_ASIL_B_GLOBAL_16
  #define START_SEC_CONST_16BIT
#endif

#ifdef PORT_STOP_SEC_CONST_ASIL_B_GLOBAL_16
  #undef PORT_STOP_SEC_CONST_ASIL_B_GLOBAL_16
  #define STOP_SEC_CONST
#endif

#ifdef PORT_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef PORT_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef PORT_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef PORT_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef PORT_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #undef PORT_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #define START_SEC_VAR_ZERO_INIT_8BIT
#endif

#ifdef PORT_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #undef PORT_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #define STOP_SEC_VAR
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_CODE_ASIL_B_GLOBAL
  #undef PWM_17_GTMCCU6_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef PWM_17_GTMCCU6_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_CODE_FAST_ASIL_B_GLOBAL
  #undef PWM_17_GTMCCU6_START_SEC_CODE_FAST_ASIL_B_GLOBAL
  #define START_SEC_CODE_FAST
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_CODE_FAST_ASIL_B_GLOBAL
  #undef PWM_17_GTMCCU6_STOP_SEC_CODE_FAST_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef PWM_17_GTMCCU6_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef PWM_17_GTMCCU6_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef PWM_17_GTMCCU6_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef PWM_17_GTMCCU6_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #undef PWM_17_GTMCCU6_START_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #undef PWM_17_GTMCCU6_STOP_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #undef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #undef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #undef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #undef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #undef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #undef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #undef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #undef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #undef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #undef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #undef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #undef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #undef PWM_17_GTMCCU6_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #define START_SEC_VAR_ZERO_INIT_8BIT
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #undef PWM_17_GTMCCU6_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_8
  #define STOP_SEC_VAR
#endif

#ifdef PWM_17_GTMCCU6_START_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #undef PWM_17_GTMCCU6_START_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef PWM_17_GTMCCU6_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #undef PWM_17_GTMCCU6_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_CODE
  #undef SPI_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef SPI_STOP_SEC_CODE
  #undef SPI_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef SPI_START_SEC_CODE_ASIL_B_GLOBAL
  #undef SPI_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef SPI_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef SPI_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
  #undef SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
  #undef SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
  #define STOP_SEC_CONST
#endif

#ifdef SPI_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
  #undef SPI_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef SPI_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
  #undef SPI_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
  #define STOP_SEC_CONST
#endif

#ifdef SPI_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef SPI_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #undef SPI_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE0_256
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE0_256
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_256
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_256
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_32
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE1_256
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE1_256
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_256
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_256
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_32
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE2_256
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE2_256
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_256
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_256
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_32
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE3_256
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE3_256
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_256
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_256
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_32
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE4_256
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE4_256
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_256
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_256
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_32
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE5_256
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE5_256
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_256
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_256
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_32
  #define STOP_SEC_VAR
#endif

#ifdef SPI_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef SPI_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef SPI_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef WDG_17_SCU_START_SEC_CODE_ASIL_B_GLOBAL
  #undef WDG_17_SCU_START_SEC_CODE_ASIL_B_GLOBAL
  #define START_SEC_CODE
#endif

#ifdef WDG_17_SCU_STOP_SEC_CODE_ASIL_B_GLOBAL
  #undef WDG_17_SCU_STOP_SEC_CODE_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef WDG_17_SCU_START_SEC_CODE_FAST_ASIL_B_GLOBAL
  #undef WDG_17_SCU_START_SEC_CODE_FAST_ASIL_B_GLOBAL
  #define START_SEC_CODE_FAST
#endif

#ifdef WDG_17_SCU_STOP_SEC_CODE_FAST_ASIL_B_GLOBAL
  #undef WDG_17_SCU_STOP_SEC_CODE_FAST_ASIL_B_GLOBAL
  #define STOP_SEC_CODE
#endif

#ifdef WDG_17_SCU_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef WDG_17_SCU_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef WDG_17_SCU_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #undef WDG_17_SCU_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef WDG_17_SCU_START_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #undef WDG_17_SCU_START_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef WDG_17_SCU_STOP_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #undef WDG_17_SCU_STOP_SEC_CONST_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #undef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #undef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE0_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #undef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #undef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE1_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #undef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #undef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE2_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #undef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #undef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE3_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #undef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #undef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE4_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #undef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #undef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_CORE5_UNSPECIFIED
  #define STOP_SEC_VAR
#endif

#ifdef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef WDG_17_SCU_START_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define START_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #undef WDG_17_SCU_STOP_SEC_VAR_CLEARED_ASIL_B_GLOBAL_32
  #define STOP_SEC_VAR
#endif

#ifdef WDG_17_SCU_START_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #undef WDG_17_SCU_START_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef WDG_17_SCU_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #undef WDG_17_SCU_STOP_SEC_VAR_INIT_ASIL_B_GLOBAL_UNSPECIFIED
  #define STOP_SEC_VAR
#endif



/**********************************************************************************************************************
 *  NvM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef NVM_START_SEC_CODE
    #undef NVM_START_SEC_CODE
    #define START_SEC_CODE                /* mapped to default code section */
#endif
#ifdef NVM_STOP_SEC_CODE
    #undef NVM_STOP_SEC_CODE
    #define STOP_SEC_CODE                /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef NVM_START_SEC_CONST_8
    #undef NVM_START_SEC_CONST_8
    #define START_SEC_CONST_8BIT
#endif
#ifdef NVM_STOP_SEC_CONST_8
    #undef NVM_STOP_SEC_CONST_8
    #define STOP_SEC_CONST
#endif

#ifdef NVM_START_SEC_CONST_16
    #undef NVM_START_SEC_CONST_16
    #define START_SEC_CONST_16BIT
#endif
#ifdef NVM_STOP_SEC_CONST_16
    #undef NVM_STOP_SEC_CONST_16
    #define STOP_SEC_CONST
#endif

#ifdef NVM_START_SEC_CONST_UNSPECIFIED
    #undef NVM_START_SEC_CONST_UNSPECIFIED
    #define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_CONST_UNSPECIFIED
    #undef NVM_STOP_SEC_CONST_UNSPECIFIED
    #define STOP_SEC_CONST
#endif

#ifdef NVM_START_SEC_CONST_DESCRIPTOR_TABLE
    #undef NVM_START_SEC_CONST_DESCRIPTOR_TABLE
    #define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
    #undef NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
    #define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef NVM_START_SEC_VAR_NOINIT_8
    #undef NVM_START_SEC_VAR_NOINIT_8
    #define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef NVM_STOP_SEC_VAR_NOINIT_8
    #undef NVM_STOP_SEC_VAR_NOINIT_8
    #define STOP_SEC_VAR
#endif

#ifdef NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #define STOP_SEC_VAR
#endif

/* If Development Error Detection is ON (as well as INIT check),    *
 *   it SHALL be mapped to an initialized section (zeor is ok)      *
 * if Development Error Detection (or at least INIT check) is OFF,  *
 *   it MAY also be mapped to a NOINIT section.                     */
#ifdef NVM_START_SEC_VAR_UNSPECIFIED
    #undef NVM_START_SEC_VAR_UNSPECIFIED
    #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_VAR_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_UNSPECIFIED
    #define STOP_SEC_VAR
#endif

/* VAR FAST NOINIT sections */
#ifdef NVM_START_SEC_VAR_FAST_8
    #undef NVM_START_SEC_VAR_FAST_8
    #define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#ifdef NVM_STOP_SEC_VAR_FAST_8
    #undef NVM_STOP_SEC_VAR_FAST_8
    #define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */

/* SHALL be mapped to a section that is guaranteed to be ZEROed out after Power-On Reset       *
 * (therefore it MAY be a "normal" ZERO_INIT section, being ZEROed out after ANY reset         *
 * Make shure this helds true for all kinds of variable data (esp. "uninitialized).            *
 * If necessary, create a special section (don't map to a common one)                          */    
#ifdef NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #undef NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  NvM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  DBG START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef DBG_START_SEC_CODE
  #undef DBG_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef DBG_STOP_SEC_CODE
  #undef DBG_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef DBG_START_SEC_CODE_FAST
  #undef DBG_START_SEC_CODE_FAST
  #define START_SEC_CODE_FAST                       /* mapped to default fast code section */
#endif
#ifdef DBG_STOP_SEC_CODE_FAST
  #undef DBG_STOP_SEC_CODE_FAST
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef DBG_START_SEC_CONST_8BIT
# undef DBG_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef DBG_STOP_SEC_CONST_8BIT
# undef DBG_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef DBG_START_SEC_CONST_16BIT
# undef DBG_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef DBG_STOP_SEC_CONST_16BIT
# undef DBG_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef DBG_START_SEC_CONST_32BIT
# undef DBG_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef DBG_STOP_SEC_CONST_32BIT
# undef DBG_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef DBG_START_SEC_CONST_UNSPECIFIED
# undef DBG_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef DBG_STOP_SEC_CONST_UNSPECIFIED
# undef DBG_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef DBG_START_SEC_VAR_INIT_8BIT
# undef DBG_START_SEC_VAR_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT                    /* mapped to default var init 8bit section */
#endif
#ifdef DBG_STOP_SEC_VAR_INIT_8BIT
# undef DBG_STOP_SEC_VAR_INIT_8BIT
# define STOP_SEC_VAR                               /* default var stop section */
#endif

#ifdef DBG_START_SEC_VAR_INIT_16BIT
# undef DBG_START_SEC_VAR_INIT_16BIT
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef DBG_STOP_SEC_VAR_INIT_16BIT
# undef DBG_STOP_SEC_VAR_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_INIT_32BIT
# undef DBG_START_SEC_VAR_INIT_32BIT
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef DBG_STOP_SEC_VAR_INIT_32BIT
# undef DBG_STOP_SEC_VAR_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_INIT_UNSPECIFIED
# undef DBG_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef DBG_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef DBG_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef DBG_START_SEC_VAR_NOINIT_8BIT
# undef DBG_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef DBG_STOP_SEC_VAR_NOINIT_8BIT
# undef DBG_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_NOINIT_16BIT
# undef DBG_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef DBG_STOP_SEC_VAR_NOINIT_16BIT
# undef DBG_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_NOINIT_32BIT
# undef DBG_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef DBG_STOP_SEC_VAR_NOINIT_32BIT
# undef DBG_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef DBG_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef DBG_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef DBG_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#ifdef DBG_START_SEC_VAR_ZERO_INIT_8BIT
# undef DBG_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef DBG_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef DBG_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_ZERO_INIT_16BIT
# undef DBG_START_SEC_VAR_ZERO_INIT_16BIT
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef DBG_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef DBG_STOP_SEC_VAR_ZERO_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_ZERO_INIT_32BIT
# undef DBG_START_SEC_VAR_ZERO_INIT_32BIT
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef DBG_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef DBG_STOP_SEC_VAR_ZERO_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DBG_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef DBG_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DBG_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif



/**********************************************************************************************************************
 *  DBG END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  DLT START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef DLT_START_SEC_CODE
  #undef DLT_START_SEC_CODE                         /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef DLT_STOP_SEC_CODE
  #undef DLT_STOP_SEC_CODE                          /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef DLT_START_SEC_CODE_FAST
  #undef DLT_START_SEC_CODE_FAST                    /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define START_SEC_CODE_FAST                       /* mapped to default fast code section */
#endif
#ifdef DLT_STOP_SEC_CODE_FAST
  #undef DLT_STOP_SEC_CODE_FAST                     /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define STOP_SEC_CODE                             /* default code stop section */
#endif


#ifdef DLTCOM_START_SEC_CODE
  #undef DLTCOM_START_SEC_CODE                      /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef DLTCOM_STOP_SEC_CODE
  #undef DLTCOM_STOP_SEC_CODE                       /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef DLTCOM_START_SEC_CODE_FAST
  #undef DLTCOM_START_SEC_CODE_FAST                 /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define START_SEC_CODE_FAST                       /* mapped to default fast code section */
#endif
#ifdef DLTCOM_STOP_SEC_CODE_FAST
  #undef DLTCOM_STOP_SEC_CODE_FAST                  /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef DLT_START_SEC_CONST_8BIT
# undef DLT_START_SEC_CONST_8BIT                    /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef DLT_STOP_SEC_CONST_8BIT
# undef DLT_STOP_SEC_CONST_8BIT                     /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef DLT_START_SEC_CONST_16BIT
# undef DLT_START_SEC_CONST_16BIT                   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16BIT
#endif
#ifdef DLT_STOP_SEC_CONST_16BIT
# undef DLT_STOP_SEC_CONST_16BIT                    /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef DLT_START_SEC_CONST_32BIT
# undef DLT_START_SEC_CONST_32BIT                   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_32BIT
#endif
#ifdef DLT_STOP_SEC_CONST_32BIT
# undef DLT_STOP_SEC_CONST_32BIT                    /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef DLT_START_SEC_CONST_UNSPECIFIED
# undef DLT_START_SEC_CONST_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef DLT_STOP_SEC_CONST_UNSPECIFIED
# undef DLT_STOP_SEC_CONST_UNSPECIFIED              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif



#ifdef DLTCOM_START_SEC_CONST_8BIT
# undef DLTCOM_START_SEC_CONST_8BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef DLTCOM_STOP_SEC_CONST_8BIT
# undef DLTCOM_STOP_SEC_CONST_8BIT                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef DLTCOM_START_SEC_CONST_16BIT
# undef DLTCOM_START_SEC_CONST_16BIT                /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16BIT
#endif
#ifdef DLTCOM_STOP_SEC_CONST_16BIT
# undef DLTCOM_STOP_SEC_CONST_16BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef DLTCOM_START_SEC_CONST_32BIT
# undef DLTCOM_START_SEC_CONST_32BIT                /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_32BIT
#endif
#ifdef DLTCOM_STOP_SEC_CONST_32BIT
# undef DLTCOM_STOP_SEC_CONST_32BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef DLTCOM_START_SEC_CONST_UNSPECIFIED
# undef DLTCOM_START_SEC_CONST_UNSPECIFIED          /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef DLTCOM_STOP_SEC_CONST_UNSPECIFIED
# undef DLTCOM_STOP_SEC_CONST_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif



/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef DLT_START_SEC_VAR_INIT_8BIT
# undef DLT_START_SEC_VAR_INIT_8BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8BIT                    /* mapped to default var init 8bit section */
#endif
#ifdef DLT_STOP_SEC_VAR_INIT_8BIT
# undef DLT_STOP_SEC_VAR_INIT_8BIT                  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR                               /* default var stop section */
#endif

#ifdef DLT_START_SEC_VAR_INIT_16BIT
# undef DLT_START_SEC_VAR_INIT_16BIT                /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef DLT_STOP_SEC_VAR_INIT_16BIT
# undef DLT_STOP_SEC_VAR_INIT_16BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_INIT_32BIT
# undef DLT_START_SEC_VAR_INIT_32BIT                /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef DLT_STOP_SEC_VAR_INIT_32BIT
# undef DLT_STOP_SEC_VAR_INIT_32BIT                 /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_INIT_UNSPECIFIED
# undef DLT_START_SEC_VAR_INIT_UNSPECIFIED          /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef DLT_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef DLT_STOP_SEC_VAR_INIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif



#ifdef DLTCOM_START_SEC_VAR_INIT_8BIT
# undef DLTCOM_START_SEC_VAR_INIT_8BIT              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8BIT                    /* mapped to default var init 8bit section */
#endif
#ifdef DLTCOM_STOP_SEC_VAR_INIT_8BIT
# undef DLTCOM_STOP_SEC_VAR_INIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR                               /* default var stop section */
#endif

#ifdef DLTCOM_START_SEC_VAR_INIT_16BIT
# undef DLTCOM_START_SEC_VAR_INIT_16BIT             /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_INIT_16BIT
# undef DLTCOM_STOP_SEC_VAR_INIT_16BIT              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_INIT_32BIT
# undef DLTCOM_START_SEC_VAR_INIT_32BIT             /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_INIT_32BIT
# undef DLTCOM_STOP_SEC_VAR_INIT_32BIT              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_INIT_UNSPECIFIED
# undef DLTCOM_START_SEC_VAR_INIT_UNSPECIFIED       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef DLTCOM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef DLTCOM_STOP_SEC_VAR_INIT_UNSPECIFIED        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef DLT_START_SEC_VAR_NOINIT_8BIT
# undef DLT_START_SEC_VAR_NOINIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef DLT_STOP_SEC_VAR_NOINIT_8BIT
# undef DLT_STOP_SEC_VAR_NOINIT_8BIT                /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_NOINIT_16BIT
# undef DLT_START_SEC_VAR_NOINIT_16BIT              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef DLT_STOP_SEC_VAR_NOINIT_16BIT
# undef DLT_STOP_SEC_VAR_NOINIT_16BIT               /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_NOINIT_32BIT
# undef DLT_START_SEC_VAR_NOINIT_32BIT              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef DLT_STOP_SEC_VAR_NOINIT_32BIT
# undef DLT_STOP_SEC_VAR_NOINIT_32BIT               /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef DLT_START_SEC_VAR_NOINIT_UNSPECIFIED        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef DLT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef DLT_STOP_SEC_VAR_NOINIT_UNSPECIFIED         /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif



#ifdef DLTCOM_START_SEC_VAR_NOINIT_8BIT
# undef DLTCOM_START_SEC_VAR_NOINIT_8BIT            /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_NOINIT_8BIT
# undef DLTCOM_STOP_SEC_VAR_NOINIT_8BIT             /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_NOINIT_16BIT
# undef DLTCOM_START_SEC_VAR_NOINIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_NOINIT_16BIT
# undef DLTCOM_STOP_SEC_VAR_NOINIT_16BIT            /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_NOINIT_32BIT
# undef DLTCOM_START_SEC_VAR_NOINIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_NOINIT_32BIT
# undef DLTCOM_STOP_SEC_VAR_NOINIT_32BIT            /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef DLTCOM_START_SEC_VAR_NOINIT_UNSPECIFIED     /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef DLTCOM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef DLTCOM_STOP_SEC_VAR_NOINIT_UNSPECIFIED      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif



/* VAR ZERO INIT sections */

#ifdef DLT_START_SEC_VAR_ZERO_INIT_8BIT
# undef DLT_START_SEC_VAR_ZERO_INIT_8BIT            /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef DLT_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef DLT_STOP_SEC_VAR_ZERO_INIT_8BIT             /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_ZERO_INIT_16BIT
# undef DLT_START_SEC_VAR_ZERO_INIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef DLT_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef DLT_STOP_SEC_VAR_ZERO_INIT_16BIT            /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_ZERO_INIT_32BIT
# undef DLT_START_SEC_VAR_ZERO_INIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef DLT_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef DLT_STOP_SEC_VAR_ZERO_INIT_32BIT            /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DLT_START_SEC_VAR_ZERO_INIT_UNSPECIFIED     /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef DLT_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DLT_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED      /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif



#ifdef DLTCOM_START_SEC_VAR_ZERO_INIT_8BIT
# undef DLTCOM_START_SEC_VAR_ZERO_INIT_8BIT         /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef DLTCOM_STOP_SEC_VAR_ZERO_INIT_8BIT          /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_ZERO_INIT_16BIT
# undef DLTCOM_START_SEC_VAR_ZERO_INIT_16BIT        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef DLTCOM_STOP_SEC_VAR_ZERO_INIT_16BIT         /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_ZERO_INIT_32BIT
# undef DLTCOM_START_SEC_VAR_ZERO_INIT_32BIT        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef DLTCOM_STOP_SEC_VAR_ZERO_INIT_32BIT         /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DLTCOM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef DLTCOM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DLTCOM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED   /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif




/**********************************************************************************************************************
 *  DLT END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CANNM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef CANNM_START_SEC_CODE
    #undef CANNM_START_SEC_CODE                         /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_CODE                              /* mapped to default code section */
#endif
#ifdef CANNM_STOP_SEC_CODE
    #undef CANNM_STOP_SEC_CODE                          /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_CODE                               /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CANNM_START_SEC_CONST_8BIT
    #undef CANNM_START_SEC_CONST_8BIT                   /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_CONST_8BIT                        /* mapped to default const section */
#endif
#ifdef CANNM_STOP_SEC_CONST_8BIT
    #undef CANNM_STOP_SEC_CONST_8BIT                    /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_CONST                              /* default const stop section */
#endif

#ifdef CANNM_START_SEC_CONST_UNSPECIFIED
    #undef CANNM_START_SEC_CONST_UNSPECIFIED            /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_CONST_UNSPECIFIED                 /* mapped to default const section */
#endif
#ifdef CANNM_STOP_SEC_CONST_UNSPECIFIED
    #undef CANNM_STOP_SEC_CONST_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_CONST                              /* default const stop section */
#endif

/* Postbuild CFG CONST sections */

#ifdef CANNM_START_SEC_PBCFG
    #undef CANNM_START_SEC_PBCFG                        /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_CONST_PBCFG                       /* mapped to default postbuild section */
#endif
#ifdef CANNM_STOP_SEC_PBCFG
    #undef CANNM_STOP_SEC_PBCFG                         /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_CONST                              /* default const stop section */
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef CANNM_START_SEC_VAR_NOINIT_8BIT
    #undef CANNM_START_SEC_VAR_NOINIT_8BIT              /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_NOINIT_8BIT                   /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_NOINIT_8BIT
    #undef CANNM_STOP_SEC_VAR_NOINIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

#ifdef CANNM_START_SEC_VAR_NOINIT_16BIT
    #undef CANNM_START_SEC_VAR_NOINIT_16BIT              /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_NOINIT_16BIT                   /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_NOINIT_16BIT
    #undef CANNM_STOP_SEC_VAR_NOINIT_16BIT               /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

#ifdef CANNM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef CANNM_START_SEC_VAR_NOINIT_UNSPECIFIED       /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_NOINIT_UNSPECIFIED            /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef CANNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED        /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

/* VAR INIT sections */
#ifdef CANNM_START_SEC_VAR_INIT_UNSPECIFIED
    #undef CANNM_START_SEC_VAR_INIT_UNSPECIFIED         /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_INIT_UNSPECIFIED              /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef CANNM_STOP_SEC_VAR_INIT_UNSPECIFIED          /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

#ifdef CANNM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef CANNM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED    /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED         /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef CANNM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED     /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif


#ifdef CANNM_START_SEC_VAR_ZERO_INIT_8BIT
    #undef CANNM_START_SEC_VAR_ZERO_INIT_8BIT              /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_ZERO_INIT_8BIT                   /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_ZERO_INIT_8BIT
    #undef CANNM_STOP_SEC_VAR_ZERO_INIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

/* VAR PBCFG sections */

#ifdef CANNM_START_SEC_VAR_PBCFG
    #undef CANNM_START_SEC_VAR_PBCFG                    /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_PBCFG                         /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_PBCFG
    #undef CANNM_STOP_SEC_VAR_PBCFG                     /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

/**********************************************************************************************************************
 *  CANNM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  NM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef NM_START_SEC_CODE
# undef NM_START_SEC_CODE                               /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define START_SEC_CODE                                 /* mapped to default code section */
#endif
#ifdef NM_STOP_SEC_CODE
# undef NM_STOP_SEC_CODE                                /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define STOP_SEC_CODE                                  /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef NM_START_SEC_CONST_8
# undef NM_START_SEC_CONST_8                            /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define START_SEC_CONST_8                              /* mapped to default const section */
#endif
#ifdef NM_STOP_SEC_CONST_8
# undef NM_STOP_SEC_CONST_8                             /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

#ifdef NM_START_SEC_CONST_16
# undef NM_START_SEC_CONST_16                           /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define START_SEC_CONST_16                             /* mapped to default const section */
#endif
#ifdef NM_STOP_SEC_CONST_16
# undef NM_STOP_SEC_CONST_16                            /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

#ifdef NM_START_SEC_CONST_UNSPECIFIED
# undef NM_START_SEC_CONST_UNSPECIFIED                  /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define START_SEC_CONST_UNSPECIFIED                    /* mapped to default const section */
#endif
#ifdef NM_STOP_SEC_CONST_UNSPECIFIED
# undef NM_STOP_SEC_CONST_UNSPECIFIED                   /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NO_INIT sections */

#ifdef NM_START_SEC_VAR_NO_INIT_8
# undef NM_START_SEC_VAR_NO_INIT_8                      /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define START_SEC_VAR_NO_INIT_8                        /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_NO_INIT_8
# undef NM_STOP_SEC_VAR_NO_INIT_8                       /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define STOP_SEC_VAR                                   /* default var stop section */
#endif

#ifdef NM_START_SEC_VAR_NO_INIT_16
# undef NM_START_SEC_VAR_NO_INIT_16                     /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define START_SEC_VAR_NO_INIT_16                       /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_NO_INIT_16
# undef NM_STOP_SEC_VAR_NO_INIT_16                      /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define STOP_SEC_VAR                                   /* default var stop section */
#endif

#ifdef NM_START_SEC_VAR_NO_INIT_32
# undef NM_START_SEC_VAR_NO_INIT_32                     /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define START_SEC_VAR_NO_INIT_32                       /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_NO_INIT_32
# undef NM_STOP_SEC_VAR_NO_INIT_32                      /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define STOP_SEC_VAR                                   /* default var stop section */
#endif

#ifdef NM_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef NM_START_SEC_VAR_NO_INIT_UNSPECIFIED            /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define START_SEC_VAR_NO_INIT_UNSPECIFIED              /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef NM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define STOP_SEC_VAR                                   /* default var stop section */
#endif

/* VAR INIT sections */

#ifdef NM_START_SEC_VAR_INIT_8
# undef NM_START_SEC_VAR_INIT_8                         /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define START_SEC_VAR_INIT_8                           /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_INIT_8
# undef NM_STOP_SEC_VAR_INIT_8                          /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define STOP_SEC_VAR                                   /* default var stop section */
#endif

#ifdef NM_START_SEC_VAR_INIT_UNSPECIFIED
# undef NM_START_SEC_VAR_INIT_UNSPECIFIED               /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define START_SEC_VAR_INIT_UNSPECIFIED                 /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef NM_STOP_SEC_VAR_INIT_UNSPECIFIED                /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
# define STOP_SEC_VAR                                   /* default var stop section */
#endif

/**********************************************************************************************************************
 *  NM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  UDPNM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef UDPNM_START_SEC_CODE
    #undef UDPNM_START_SEC_CODE                         /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_CODE                              /* mapped to default code section */
#endif
#ifdef UDPNM_STOP_SEC_CODE
    #undef UDPNM_STOP_SEC_CODE                          /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_CODE                               /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef UDPNM_START_SEC_CONST_8BIT
    #undef UDPNM_START_SEC_CONST_8BIT                   /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_CONST_8BIT                        /* mapped to default const section */
#endif
#ifdef UDPNM_STOP_SEC_CONST_8BIT
    #undef UDPNM_STOP_SEC_CONST_8BIT                    /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_CONST                              /* default const stop section */
#endif

#ifdef UDPNM_START_SEC_CONST_UNSPECIFIED
    #undef UDPNM_START_SEC_CONST_UNSPECIFIED            /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_CONST_UNSPECIFIED                 /* mapped to default const section */
#endif
#ifdef UDPNM_STOP_SEC_CONST_UNSPECIFIED
    #undef UDPNM_STOP_SEC_CONST_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_CONST                              /* default const stop section */
#endif

/* Postbuild CFG CONST sections */

#ifdef UDPNM_START_SEC_PBCFG
    #undef UDPNM_START_SEC_PBCFG                        /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_CONST_PBCFG                       /* mapped to default postbuild section */
#endif
#ifdef UDPNM_STOP_SEC_PBCFG
    #undef UDPNM_STOP_SEC_PBCFG                         /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_CONST                              /* default const stop section */
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef UDPNM_START_SEC_VAR_NOINIT_8BIT
    #undef UDPNM_START_SEC_VAR_NOINIT_8BIT              /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_NOINIT_8BIT                   /* mapped to default var section */
#endif
#ifdef UDPNM_STOP_SEC_VAR_NOINIT_8BIT
    #undef UDPNM_STOP_SEC_VAR_NOINIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

#ifdef UDPNM_START_SEC_VAR_NOINIT_16BIT
    #undef UDPNM_START_SEC_VAR_NOINIT_16BIT              /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_NOINIT_16BIT                   /* mapped to default var section */
#endif
#ifdef UDPNM_STOP_SEC_VAR_NOINIT_16BIT
    #undef UDPNM_STOP_SEC_VAR_NOINIT_16BIT               /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

#ifdef UDPNM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef UDPNM_START_SEC_VAR_NOINIT_UNSPECIFIED       /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_NOINIT_UNSPECIFIED            /* mapped to default var section */
#endif
#ifdef UDPNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef UDPNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED        /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

/* VAR INIT sections */
#ifdef UDPNM_START_SEC_VAR_INIT_UNSPECIFIED
    #undef UDPNM_START_SEC_VAR_INIT_UNSPECIFIED         /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_INIT_UNSPECIFIED              /* mapped to default var section */
#endif
#ifdef UDPNM_STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef UDPNM_STOP_SEC_VAR_INIT_UNSPECIFIED          /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

#ifdef UDPNM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef UDPNM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED    /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED         /* mapped to default var section */
#endif
#ifdef UDPNM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef UDPNM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED     /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif


#ifdef UDPNM_START_SEC_VAR_ZERO_INIT_8BIT
    #undef UDPNM_START_SEC_VAR_ZERO_INIT_8BIT              /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_ZERO_INIT_8BIT                   /* mapped to default var section */
#endif
#ifdef UDPNM_STOP_SEC_VAR_ZERO_INIT_8BIT
    #undef UDPNM_STOP_SEC_VAR_ZERO_INIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

/* VAR PBCFG sections */

#ifdef UDPNM_START_SEC_VAR_PBCFG
    #undef UDPNM_START_SEC_VAR_PBCFG                    /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define START_SEC_VAR_PBCFG                         /* mapped to default var section */
#endif
#ifdef UDPNM_STOP_SEC_VAR_PBCFG
    #undef UDPNM_STOP_SEC_VAR_PBCFG                     /* PRQA S 0841 */ /* MD_MSR_Rule20.5 */
    #define STOP_SEC_VAR                                /* default var stop section */
#endif

/**********************************************************************************************************************
 *  UDPNM END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  CSM START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef CSM_START_SEC_CODE
# undef CSM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE                                               /* mapped to default code section */
#endif
#ifdef CSM_STOP_SEC_CODE
# undef CSM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE                                                /* default code stop section */
#endif

#ifdef CSM_START_SEC_APPL_CODE
# undef CSM_START_SEC_APPL_CODE  /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE                                               /* mapped to default code section */
#endif
#ifdef CSM_STOP_SEC_APPL_CODE
# undef CSM_STOP_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE                                                /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CSM_START_SEC_CONST_UNSPECIFIED
# undef CSM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef CSM_STOP_SEC_CONST_UNSPECIFIED
# undef CSM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef CSM_START_SEC_VAR_NOINIT_8BIT
# undef CSM_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef CSM_STOP_SEC_VAR_NOINIT_8BIT
# undef CSM_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CSM_START_SEC_VAR_NOINIT_16BIT
# undef CSM_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef CSM_STOP_SEC_VAR_NOINIT_16BIT
# undef CSM_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */

#ifdef CSM_START_SEC_VAR_ZERO_INIT_8BIT
# undef CSM_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef CSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef CSM_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef CSM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef CSM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef CSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef CSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  CSM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  MSN START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(VIKE_START_SEC_CODE)
# undef VIKE_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE         /* mapped to default code section */
#endif
#if defined(VIKE_STOP_SEC_CODE)
# undef VIKE_STOP_SEC_CODE       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(VIKE_START_SEC_CODE_FAST)
# undef VIKE_START_SEC_CODE_FAST /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE_FAST    /* mapped to default fast code section */
#endif
#if defined(VIKE_STOP_SEC_CODE_FAST)
# undef VIKE_STOP_SEC_CODE_FAST  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(VIKE_START_SEC_CODE_ISR)
# undef VIKE_START_SEC_CODE_ISR  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE_ISR     /* mapped to default ISR code section */
#endif
#if defined(VIKE_STOP_SEC_CODE_ISR)
# undef VIKE_STOP_SEC_CODE_ISR   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(VIKE_START_SEC_CONST_8BIT)
# undef VIKE_START_SEC_CONST_8BIT  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT     /* mapped to default const 8bit section */
#endif
#if defined(VIKE_STOP_SEC_CONST_8BIT)
# undef VIKE_STOP_SEC_CONST_8BIT   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#if defined(VIKE_START_SEC_CONST_16BIT)
# undef VIKE_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined(VIKE_STOP_SEC_CONST_16BIT)
# undef VIKE_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(VIKE_START_SEC_CONST_32BIT)
# undef VIKE_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined(VIKE_STOP_SEC_CONST_32BIT)
# undef VIKE_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


#if defined(VIKE_START_SEC_CONST_64BIT)
# undef VIKE_START_SEC_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_64BIT
#endif
#if defined(VIKE_STOP_SEC_CONST_64BIT)
# undef VIKE_STOP_SEC_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


#if defined(VIKE_START_SEC_CONST_UNSPECIFIED)
# undef VIKE_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_CONST_UNSPECIFIED)
# undef VIKE_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */

#if defined(VIKE_START_SEC_FAST_CONST_8BIT)
# undef VIKE_START_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_8BIT
#endif
#if defined(VIKE_STOP_SEC_FAST_CONST_8BIT)
# undef VIKE_STOP_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(VIKE_START_SEC_FAST_CONST_16BIT)
# undef VIKE_START_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_16BIT
#endif
#if defined(VIKE_STOP_SEC_FAST_CONST_16BIT)
# undef VIKE_STOP_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(VIKE_START_SEC_FAST_CONST_32BIT)
# undef VIKE_START_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_32BIT
#endif
#if defined(VIKE_STOP_SEC_FAST_CONST_32BIT)
# undef VIKE_STOP_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(VIKE_START_SEC_FAST_CONST_64BIT)
# undef VIKE_START_SEC_FAST_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_64BIT
#endif
#if defined(VIKE_STOP_SEC_FAST_CONST_64BIT)
# undef VIKE_STOP_SEC_FAST_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(VIKE_START_SEC_FAST_CONST_UNSPECIFIED)
# undef VIKE_START_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_FAST_CONST_UNSPECIFIED)
# undef VIKE_STOP_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

/* NOTE: ASR3.x till ASR4.0.1 only. Root table for postbuild data */
#if defined(VIKE_START_SEC_PBCFG_ROOT)
# undef VIKE_START_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(VIKE_STOP_SEC_PBCFG_ROOT)
# undef VIKE_STOP_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* ESCAN00065501 */
/* NOTE: ASR4.0.3 (CFG5) only. The origin root table for postbuild data. Relevant only for EcuM. */
#if defined(VIKE_START_SEC_PBCFG_GLOBALROOT)
# undef VIKE_START_SEC_PBCFG_GLOBALROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_PBCFG_GLOBALROOT
#endif
#if defined(VIKE_STOP_SEC_PBCFG_GLOBALROOT)
# undef VIKE_STOP_SEC_PBCFG_GLOBALROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(VIKE_START_SEC_PBCFG)
# undef VIKE_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(VIKE_STOP_SEC_PBCFG)
# undef VIKE_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(VIKE_START_SEC_VAR_INIT_8BIT)
# undef VIKE_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#if defined(VIKE_STOP_SEC_VAR_INIT_8BIT)
# undef VIKE_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                /* default var stop section */
#endif

#if defined(VIKE_START_SEC_VAR_INIT_16BIT)
# undef VIKE_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_INIT_16BIT)
# undef VIKE_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_INIT_32BIT)
# undef VIKE_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_INIT_32BIT)
# undef VIKE_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_INIT_64BIT)
# undef VIKE_START_SEC_VAR_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_64BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_INIT_64BIT)
# undef VIKE_STOP_SEC_VAR_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_INIT_UNSPECIFIED)
# undef VIKE_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef VIKE_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#if defined(VIKE_START_SEC_VAR_NOINIT_8BIT)
# undef VIKE_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOINIT_8BIT)
# undef VIKE_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOINIT_16BIT)
# undef VIKE_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOINIT_16BIT)
# undef VIKE_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOINIT_32BIT)
# undef VIKE_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOINIT_32BIT)
# undef VIKE_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOINIT_64BIT)
# undef VIKE_START_SEC_VAR_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_64BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOINIT_64BIT)
# undef VIKE_STOP_SEC_VAR_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef VIKE_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef VIKE_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* ESCAN00065501 */
#if defined(VIKE_START_SEC_VAR_PBCFG)
# undef VIKE_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#if defined(VIKE_STOP_SEC_VAR_PBCFG)
# undef VIKE_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#if defined(VIKE_START_SEC_VAR_ZERO_INIT_8BIT)
# undef VIKE_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef VIKE_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_ZERO_INIT_16BIT)
# undef VIKE_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_ZERO_INIT_16BIT)
# undef VIKE_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_ZERO_INIT_32BIT)
# undef VIKE_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_ZERO_INIT_32BIT)
# undef VIKE_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_ZERO_INIT_64BIT)
# undef VIKE_START_SEC_VAR_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_64BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_ZERO_INIT_64BIT)
# undef VIKE_STOP_SEC_VAR_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef VIKE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef VIKE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR FAST INIT sections */

#if defined(VIKE_START_SEC_VAR_FAST_INIT_8BIT)
# undef VIKE_START_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_INIT_8BIT)
# undef VIKE_STOP_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_INIT_16BIT)
# undef VIKE_START_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_INIT_16BIT)
# undef VIKE_STOP_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_INIT_32BIT)
# undef VIKE_START_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_INIT_32BIT)
# undef VIKE_STOP_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_INIT_64BIT)
# undef VIKE_START_SEC_VAR_FAST_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_64BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_INIT_64BIT)
# undef VIKE_STOP_SEC_VAR_FAST_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef VIKE_START_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef VIKE_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR FAST NOINIT sections */

#if defined(VIKE_START_SEC_VAR_FAST_NOINIT_8BIT)
# undef VIKE_START_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_NOINIT_8BIT)
# undef VIKE_STOP_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_NOINIT_16BIT)
# undef VIKE_START_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_NOINIT_16BIT)
# undef VIKE_STOP_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_NOINIT_32BIT)
# undef VIKE_START_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_NOINIT_32BIT)
# undef VIKE_STOP_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_NOINIT_64BIT)
# undef VIKE_START_SEC_VAR_FAST_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_64BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_NOINIT_64BIT)
# undef VIKE_STOP_SEC_VAR_FAST_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef VIKE_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef VIKE_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR FAST ZERO INIT sections */

#if defined(VIKE_START_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef VIKE_START_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef VIKE_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef VIKE_START_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef VIKE_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef VIKE_START_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef VIKE_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_ZERO_INIT_64BIT)
# undef VIKE_START_SEC_VAR_FAST_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_64BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_ZERO_INIT_64BIT)
# undef VIKE_STOP_SEC_VAR_FAST_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef VIKE_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef VIKE_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE INIT sections */

#if defined(VIKE_START_SEC_VAR_NOCACHE_INIT_8BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_INIT_8BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_INIT_16BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_INIT_16BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_INIT_32BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_INIT_32BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_INIT_64BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_64BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_INIT_64BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef VIKE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef VIKE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE NOINIT sections */

#if defined(VIKE_START_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_NOINIT_64BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_64BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_NOINIT_64BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef VIKE_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef VIKE_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE ZERO INIT sections */

#if defined(VIKE_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT)
# undef VIKE_START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_64BIT)
# undef VIKE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(VIKE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef VIKE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#if defined(VIKE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef VIKE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  MSN END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  BSWM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef BSWM_START_SEC_CODE
# undef BSWM_START_SEC_CODE
# define START_SEC_CODE                                 /* mapped to default code section*/
#endif

#ifdef BSWM_STOP_SEC_CODE
# undef BSWM_STOP_SEC_CODE
# define STOP_SEC_CODE                                  /* default code stop section*/
#endif

/**********************************************************************************************************************
 *  BSWM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  SYSSERVICE_ASR4ECUM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef ECUM_START_SEC_CODE
# undef ECUM_START_SEC_CODE
# define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef ECUM_STOP_SEC_CODE
# undef ECUM_STOP_SEC_CODE
# define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef ECUM_START_SEC_CONST_UNSPECIFIED
# undef ECUM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef ECUM_STOP_SEC_CONST_UNSPECIFIED
# undef ECUM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef ECUM_START_SEC_CONST_8BIT
# undef ECUM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef ECUM_STOP_SEC_CONST_8BIT
# undef ECUM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

/* Postbuild CFG CONST sections */

#ifdef ECUM_START_SEC_PBCFG
# undef ECUM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef ECUM_STOP_SEC_PBCFG
# undef ECUM_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef ECUM_START_SEC_PBCFG_GLOBALROOT
# undef ECUM_START_SEC_PBCFG_GLOBALROOT
# define START_SEC_PBCFG_GLOBALROOT
#endif
#ifdef ECUM_STOP_SEC_PBCFG_GLOBALROOT
# undef ECUM_STOP_SEC_PBCFG_GLOBALROOT
# define STOP_SEC_CONST
#endif



/*******  VAR sections  **********************************************************************************************/


/* VAR NOINIT sections */

#ifdef ECUM_START_SEC_VAR_NOINIT_8BIT
# undef ECUM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_8BIT
# undef ECUM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef ECUM_START_SEC_VAR_NOINIT_16BIT
# undef ECUM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_16BIT
# undef ECUM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef ECUM_START_SEC_VAR_NOINIT_32BIT
# undef ECUM_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_32BIT
# undef ECUM_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef ECUM_START_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef ECUM_START_SEC_VAR_NOCACHE_NOINIT_32BIT
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef ECUM_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
# define STOP_SEC_VAR
#endif


/**********************************************************************************************************************
 *  SYSSERVICE_ASR4ECUM END
 *********************************************************************************************************************/

/** FiM **********************************************************************/

/*---------------------START-MODULE-SPECIFIC-START-SECTIONS------------------*/

#ifdef FIM_START_SEC_CODE
# undef FIM_START_SEC_CODE                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                                 /* mapped to default code section */
#endif


#ifdef FIM_START_SEC_CONST_8BIT
# undef FIM_START_SEC_CONST_8BIT                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT                          /* mapped to default const section */
#endif

#ifdef FIM_START_SEC_CONST_16BIT
# undef FIM_START_SEC_CONST_16BIT                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT                          /* mapped to default const section */
#endif

#ifdef FIM_START_SEC_CONST_UNSPECIFIED
# undef FIM_START_SEC_CONST_UNSPECIFIED                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED                   /* mapped to default const section */
#endif


#ifdef FIM_START_SEC_PBCFG
# undef FIM_START_SEC_PBCFG                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG                         /* mapped to default const section */
#endif

#ifdef FIM_START_SEC_PBCFG_ROOT
# undef FIM_START_SEC_PBCFG_ROOT                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG                         /* mapped to default const section */
#endif


#ifdef FIM_START_SEC_VAR_NOINIT_16BIT
# undef FIM_START_SEC_VAR_NOINIT_16BIT                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT                      /* mapped to default var section */
#endif

#ifdef FIM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FIM_START_SEC_VAR_NOINIT_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED                /* mapped to default var section */
#endif

#ifdef FIM_START_SEC_VAR_INIT_8BIT
# undef FIM_START_SEC_VAR_INIT_8BIT                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT                         /* mapped to default var section */
#endif



/*---------------------STOP-MODULE-SPECIFIC-START-SECTIONS-------------------*/

/*---------------------START-MODULE-SPECIFIC-STOP-SECTIONS-------------------*/
#ifdef FIM_STOP_SEC_CODE
# undef FIM_STOP_SEC_CODE                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE                                  /* mapped to default code section */
#endif


#ifdef FIM_STOP_SEC_CONST_8BIT
# undef FIM_STOP_SEC_CONST_8BIT                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                /* mapped to default const section */
#endif

#ifdef FIM_STOP_SEC_CONST_16BIT
# undef FIM_STOP_SEC_CONST_16BIT                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                /* mapped to default const section */
#endif

#ifdef FIM_STOP_SEC_CONST_UNSPECIFIED
# undef FIM_STOP_SEC_CONST_UNSPECIFIED                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                /* mapped to default const section */
#endif


#ifdef FIM_STOP_SEC_VAR_NOINIT_16BIT
# undef FIM_STOP_SEC_VAR_NOINIT_16BIT                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                                    /* mapped to default var section */
#endif

#ifdef FIM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FIM_STOP_SEC_VAR_NOINIT_UNSPECIFIED              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                                    /* mapped to default var section */
#endif

#ifdef FIM_STOP_SEC_VAR_INIT_8BIT
# undef FIM_STOP_SEC_VAR_INIT_8BIT                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                                    /* mapped to default var section */
#endif


#ifdef FIM_STOP_SEC_PBCFG
# undef FIM_STOP_SEC_PBCFG                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                /* mapped to default const section */
#endif

#ifdef FIM_STOP_SEC_PBCFG_ROOT
# undef FIM_STOP_SEC_PBCFG_ROOT                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                /* mapped to default const section */
#endif

//#include "FiM_MemMap.h"

/*---------------------STOP-MODULE-SPECIFIC-STOP-SECTIONS--------------------*/

/** End of FiM ***************************************************************/



/**********************************************************************************************************************
 *  WDGM START
 *********************************************************************************************************************/

//#include "WdgM_OsMemMap.h" 

/*******  CODE sections **********************************************************************************************/

#if defined WDGM_START_SEC_CODE
# undef WDGM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE
#endif
#if defined WDGM_STOP_SEC_CODE
# undef WDGM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE
#endif

#if defined(WDGM_START_SEC_APPL_CODE)
# undef WDGM_START_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE
#endif
#if defined(WDGM_STOP_SEC_APPL_CODE)
# undef WDGM_STOP_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

#if defined WDGM_START_SEC_CONST_8BIT
# undef WDGM_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT
#endif
#if defined WDGM_STOP_SEC_CONST_8BIT
# undef WDGM_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined WDGM_START_SEC_CONST_16BIT
# undef WDGM_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16BIT
#endif
#if defined WDGM_STOP_SEC_CONST_16BIT
# undef WDGM_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined WDGM_START_SEC_CONST_32BIT
# undef WDGM_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_32BIT
#endif
#if defined WDGM_STOP_SEC_CONST_32BIT
# undef WDGM_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined WDGM_START_SEC_CONST_UNSPECIFIED
# undef WDGM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined WDGM_STOP_SEC_CONST_UNSPECIFIED
# undef WDGM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#if defined WDGM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef WDGM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined WDGM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef WDGM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined WDGM_START_SEC_VAR_NOINIT_8BIT
# undef WDGM_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined WDGM_STOP_SEC_VAR_NOINIT_8BIT
# undef WDGM_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined WDGM_START_SEC_VAR_NOINIT_16BIT
# undef WDGM_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined WDGM_STOP_SEC_VAR_NOINIT_16BIT
# undef WDGM_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined WDGM_START_SEC_VAR_NOINIT_32BIT
# undef WDGM_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined WDGM_STOP_SEC_VAR_NOINIT_32BIT
# undef WDGM_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR INIT sections */

#if defined WDGM_START_SEC_VAR_8BIT
# undef WDGM_START_SEC_VAR_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8BIT
#endif
#if defined WDGM_STOP_SEC_VAR_8BIT
# undef WDGM_STOP_SEC_VAR_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined WDGM_START_SEC_VAR_16BIT
# undef WDGM_START_SEC_VAR_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_16BIT  
#endif
#if defined WDGM_STOP_SEC_VAR_16BIT
# undef WDGM_STOP_SEC_VAR_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined WDGM_START_SEC_VAR_32BIT
# undef WDGM_START_SEC_VAR_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined WDGM_STOP_SEC_VAR_32BIT
# undef WDGM_STOP_SEC_VAR_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined WDGM_START_SEC_VAR_BOOLEAN
# undef WDGM_START_SEC_VAR_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined WDGM_STOP_SEC_VAR_BOOLEAN
# undef WDGM_STOP_SEC_VAR_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* Global Shared Variables of the WdgM.
 * If a SafeContext OS is used this section will be defined by the OS.
 * If no SafeContext OS is used this section has to be mapped to a memory area where all SWCs has access
 */
/*#if defined GlobalShared_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef GlobalShared_START_SEC_VAR_NOINIT_UNSPECIFIED*/ /* PRQA S 0841 */ /* MD_MSR_Undef */
/*# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined GlobalShared_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef GlobalShared_STOP_SEC_VAR_NOINIT_UNSPECIFIED*/ /* PRQA S 0841 */ /* MD_MSR_Undef */
/*# define STOP_SEC_VAR
#endif*/
/* or the following section (depending on which OS version is used) */
/*#if defined OS_START_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED
# undef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED*/ /* PRQA S 0841 */ /* MD_MSR_Undef */
/*# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED
# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED*/ /* PRQA S 0841 */ /* MD_MSR_Undef */
/*# define STOP_SEC_VAR
#endif*/
 
/**********************************************************************************************************************
 *  WDGM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  SYSSERVICE_ASRCRC START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef CRC_START_SEC_CODE
    #undef CRC_START_SEC_CODE
    #define START_SEC_CODE
#endif
#ifdef CRC_STOP_SEC_CODE
    #undef CRC_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

/*******  CONST sections  ********************************************************************************************/
#ifdef CRC_START_SEC_CONST_8
    #undef CRC_START_SEC_CONST_8
    #define START_SEC_CONST_8
#endif
#ifdef CRC_STOP_SEC_CONST_8
    #undef CRC_STOP_SEC_CONST_8
    #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_16
    #undef CRC_START_SEC_CONST_16
    #define START_SEC_CONST_16
#endif
#ifdef CRC_STOP_SEC_CONST_16
    #undef CRC_STOP_SEC_CONST_16
    #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_32
    #undef CRC_START_SEC_CONST_32
    #define START_SEC_CONST_32
#endif
#ifdef CRC_STOP_SEC_CONST_32
    #undef CRC_STOP_SEC_CONST_32
    #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_64
    #undef CRC_START_SEC_CONST_64
    #define START_SEC_CONST_64
#endif
#ifdef CRC_STOP_SEC_CONST_64
    #undef CRC_STOP_SEC_CONST_64
    #define STOP_SEC_CONST
#endif

/**********************************************************************************************************************
 *  SYSSERVICE_ASRCRC END
 *********************************************************************************************************************/

#ifdef DET_START_SEC_CODE
# undef DET_START_SEC_CODE
# define START_SEC_CODE
#endif
#ifdef DET_STOP_SEC_CODE
# undef DET_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

#ifdef DET_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef DET_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef DET_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef DET_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef DET_START_SEC_VAR_NOINIT_8BIT
# undef DET_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef DET_STOP_SEC_VAR_NOINIT_8BIT
# undef DET_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef DET_START_SEC_VAR_INIT_UNSPECIFIED
# undef DET_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef DET_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef DET_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef DET_START_SEC_CONST_UNSPECIFIED
# undef DET_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef DET_STOP_SEC_CONST_UNSPECIFIED
# undef DET_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif


/**********************************************************************************************************************
 *  ETM START
 *********************************************************************************************************************/

/*******  CODE sections  *********************************************************************************************/

#if defined(ETM_START_SEC_CODE)
# undef ETM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE    /* mapped to default code section */
#endif
#if defined(ETM_STOP_SEC_CODE)
# undef ETM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE    /* default code stop section */
#endif

#if defined(ETM_START_SEC_CODE_FAST)
# undef ETM_START_SEC_CODE_FAST /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE_FAST    /* mapped to default fast code section */
#endif
#if defined(ETM_STOP_SEC_CODE_FAST)
# undef ETM_STOP_SEC_CODE_FAST /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE         /* default code stop section */
#endif

#if defined(ETM_START_SEC_CODE_ISR)
# undef ETM_START_SEC_CODE_ISR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE_ISR    /* mapped to default ISR code section */
#endif
#if defined(ETM_STOP_SEC_CODE_ISR)
# undef ETM_STOP_SEC_CODE_ISR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE        /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(ETM_START_SEC_CONST_8BIT)
# undef ETM_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT    /* mapped to default const 8bit section */
#endif
#if defined(ETM_STOP_SEC_CONST_8BIT)
# undef ETM_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST         /* default const stop section */
#endif

#if defined(ETM_START_SEC_CONST_16BIT)
# undef ETM_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined(ETM_STOP_SEC_CONST_16BIT)
# undef ETM_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETM_START_SEC_CONST_32BIT)
# undef ETM_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined(ETM_STOP_SEC_CONST_32BIT)
# undef ETM_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETM_START_SEC_CONST_64BIT)
# undef ETM_START_SEC_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_64BIT
#endif
#if defined(ETM_STOP_SEC_CONST_64BIT)
# undef ETM_STOP_SEC_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETM_START_SEC_CONST_UNSPECIFIED)
# undef ETM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_CONST_UNSPECIFIED)
# undef ETM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* FAST CONST sections */

#if defined(ETM_START_SEC_FAST_CONST_8BIT)
# undef ETM_START_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_8BIT
#endif
#if defined(ETM_STOP_SEC_FAST_CONST_8BIT)
# undef ETM_STOP_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETM_START_SEC_FAST_CONST_16BIT)
# undef ETM_START_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_16BIT
#endif
#if defined(ETM_STOP_SEC_FAST_CONST_16BIT)
# undef ETM_STOP_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETM_START_SEC_FAST_CONST_32BIT)
# undef ETM_START_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_32BIT
#endif
#if defined(ETM_STOP_SEC_FAST_CONST_32BIT)
# undef ETM_STOP_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETM_START_SEC_FAST_CONST_64BIT)
# undef ETM_START_SEC_FAST_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_64BIT
#endif
#if defined(ETM_STOP_SEC_FAST_CONST_64BIT)
# undef ETM_STOP_SEC_FAST_CONST_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(ETM_START_SEC_FAST_CONST_UNSPECIFIED)
# undef ETM_START_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_FAST_CONST_UNSPECIFIED)
# undef ETM_STOP_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* Postbuild CFG CONST sections */

#if defined(ETM_START_SEC_PBCFG)
# undef ETM_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(ETM_STOP_SEC_PBCFG)
# undef ETM_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(ETM_START_SEC_VAR_INIT_8BIT)
# undef ETM_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT    /* mapped to default var init 8bit section */
#endif
#if defined(ETM_STOP_SEC_VAR_INIT_8BIT)
# undef ETM_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR              /* default var stop section */
#endif

#if defined(ETM_START_SEC_VAR_INIT_16BIT)
# undef ETM_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined(ETM_STOP_SEC_VAR_INIT_16BIT)
# undef ETM_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_INIT_32BIT)
# undef ETM_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined(ETM_STOP_SEC_VAR_INIT_32BIT)
# undef ETM_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_INIT_64BIT)
# undef ETM_START_SEC_VAR_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_64BIT
#endif
#if defined(ETM_STOP_SEC_VAR_INIT_64BIT)
# undef ETM_STOP_SEC_VAR_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_INIT_UNSPECIFIED)
# undef ETM_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef ETM_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOINIT sections */

#if defined(ETM_START_SEC_VAR_NOINIT_8BIT)
# undef ETM_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOINIT_8BIT)
# undef ETM_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOINIT_16BIT)
# undef ETM_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOINIT_16BIT)
# undef ETM_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOINIT_32BIT)
# undef ETM_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOINIT_32BIT)
# undef ETM_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOINIT_64BIT)
# undef ETM_START_SEC_VAR_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_64BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOINIT_64BIT)
# undef ETM_STOP_SEC_VAR_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef ETM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef ETM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* ESCAN00065501 */
#if defined(ETM_START_SEC_VAR_PBCFG)
# undef ETM_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#if defined(ETM_STOP_SEC_VAR_PBCFG)
# undef ETM_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */

#if defined(ETM_START_SEC_VAR_ZERO_INIT_8BIT)
# undef ETM_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(ETM_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef ETM_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_ZERO_INIT_16BIT)
# undef ETM_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined(ETM_STOP_SEC_VAR_ZERO_INIT_16BIT)
# undef ETM_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_ZERO_INIT_32BIT)
# undef ETM_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined(ETM_STOP_SEC_VAR_ZERO_INIT_32BIT)
# undef ETM_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_ZERO_INIT_64BIT)
# undef ETM_START_SEC_VAR_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_64BIT
#endif
#if defined(ETM_STOP_SEC_VAR_ZERO_INIT_64BIT)
# undef ETM_STOP_SEC_VAR_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef ETM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef ETM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR FAST INIT sections */

#if defined(ETM_START_SEC_VAR_FAST_INIT_8BIT)
# undef ETM_START_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_INIT_8BIT)
# undef ETM_STOP_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_INIT_16BIT)
# undef ETM_START_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_INIT_16BIT)
# undef ETM_STOP_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_INIT_32BIT)
# undef ETM_START_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_INIT_32BIT)
# undef ETM_STOP_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_INIT_64BIT)
# undef ETM_START_SEC_VAR_FAST_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_64BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_INIT_64BIT)
# undef ETM_STOP_SEC_VAR_FAST_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef ETM_START_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef ETM_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR FAST NOINIT sections */

#if defined(ETM_START_SEC_VAR_FAST_NOINIT_8BIT)
# undef ETM_START_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_NOINIT_8BIT)
# undef ETM_STOP_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_NOINIT_16BIT)
# undef ETM_START_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_NOINIT_16BIT)
# undef ETM_STOP_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_NOINIT_32BIT)
# undef ETM_START_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_NOINIT_32BIT)
# undef ETM_STOP_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_NOINIT_64BIT)
# undef ETM_START_SEC_VAR_FAST_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_64BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_NOINIT_64BIT)
# undef ETM_STOP_SEC_VAR_FAST_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef ETM_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef ETM_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR FAST ZERO INIT sections */

#if defined(ETM_START_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef ETM_START_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef ETM_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef ETM_START_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef ETM_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef ETM_START_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef ETM_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_ZERO_INIT_64BIT)
# undef ETM_START_SEC_VAR_FAST_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_64BIT
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_ZERO_INIT_64BIT)
# undef ETM_STOP_SEC_VAR_FAST_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef ETM_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef ETM_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE INIT sections */

#if defined(ETM_START_SEC_VAR_NOCACHE_INIT_8BIT)
# undef ETM_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_INIT_8BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_INIT_16BIT)
# undef ETM_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_INIT_16BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_INIT_32BIT)
# undef ETM_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_INIT_32BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_INIT_64BIT)
# undef ETM_START_SEC_VAR_NOCACHE_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_64BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_INIT_64BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef ETM_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef ETM_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE NOINIT sections */

#if defined(ETM_START_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef ETM_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef ETM_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef ETM_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_NOINIT_64BIT)
# undef ETM_START_SEC_VAR_NOCACHE_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_64BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_NOINIT_64BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_NOINIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef ETM_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef ETM_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE ZERO INIT sections */

#if defined(ETM_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef ETM_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef ETM_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef ETM_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT)
# undef ETM_START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_ZERO_INIT_64BIT)
# undef ETM_STOP_SEC_VAR_NOCACHE_ZERO_INIT_64BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(ETM_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef ETM_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#if defined(ETM_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef ETM_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  ETM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  SysService_AsrRamTst START
 *********************************************************************************************************************/

#ifdef RAMTST_START_SEC_CODE
  #undef RAMTST_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CODE
#endif

#ifdef RAMTST_STOP_SEC_CODE
  #undef RAMTST_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CODE
#endif

#ifdef RAMTST_START_SEC_VAR_INIT_UNSPECIFIED
  #undef RAMTST_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef RAMTST_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef RAMTST_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_VAR
#endif

#ifdef RAMTST_START_SEC_VAR_NO_INIT_8
  #undef RAMTST_START_SEC_VAR_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_VAR_NO_INIT_8
#endif

#ifdef RAMTST_STOP_SEC_VAR_NO_INIT_8
  #undef RAMTST_STOP_SEC_VAR_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_VAR
#endif

#ifdef RAMTST_START_SEC_VAR_NO_INIT_32
  #undef RAMTST_START_SEC_VAR_NO_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_VAR_NO_INIT_32
#endif

#ifdef RAMTST_STOP_SEC_VAR_NO_INIT_32
  #undef RAMTST_STOP_SEC_VAR_NO_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_VAR
#endif

#ifdef RAMTST_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef RAMTST_START_SEC_VAR_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_VAR_NO_INIT_UNSPECIFIED
#endif

#ifdef RAMTST_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef RAMTST_STOP_SEC_VAR_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_VAR
#endif

#ifdef RAMTST_START_SEC_CONST_32
  #undef RAMTST_START_SEC_CONST_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CONST_32
#endif

#ifdef RAMTST_STOP_SEC_CONST_32
  #undef RAMTST_STOP_SEC_CONST_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CONST
#endif

#ifdef RAMTST_START_SEC_CONST_UNSPECIFIED
  #undef RAMTST_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef RAMTST_STOP_SEC_CONST_UNSPECIFIED
  #undef RAMTST_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CONST
#endif

#ifdef RAMTST_START_SEC_CONST_PBCFG
  #undef RAMTST_START_SEC_CONST_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef RAMTST_STOP_SEC_CONST_PBCFG
  #undef RAMTST_STOP_SEC_CONST_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CONST
#endif

#ifdef RAMTST_START_SEC_CONST_PBCFG_ROOT
  #undef RAMTST_START_SEC_CONST_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef RAMTST_STOP_SEC_CONST_PBCFG_ROOT
  #undef RAMTST_STOP_SEC_CONST_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CONST
#endif

/**********************************************************************************************************************
 *  SysService_AsrRamTst END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  SD START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef SD_START_SEC_CODE
# undef SD_START_SEC_CODE
# define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef SD_STOP_SEC_CODE
# undef SD_STOP_SEC_CODE
# define STOP_SEC_CODE                             /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef SD_START_SEC_CONST_8BIT
# undef SD_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef SD_STOP_SEC_CONST_8BIT
# undef SD_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef SD_START_SEC_CONST_16BIT
# undef SD_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef SD_STOP_SEC_CONST_16BIT
# undef SD_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef SD_START_SEC_CONST_32BIT
# undef SD_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef SD_STOP_SEC_CONST_32BIT
# undef SD_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef SD_START_SEC_CONST_UNSPECIFIED
# undef SD_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef SD_STOP_SEC_CONST_UNSPECIFIED
# undef SD_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef SD_START_SEC_PBCFG
# undef SD_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef SD_STOP_SEC_PBCFG
# undef SD_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef SD_START_SEC_VAR_INIT_8BIT
# undef SD_START_SEC_VAR_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT                    /* mapped to default var init 8bit section */
#endif
#ifdef SD_STOP_SEC_VAR_INIT_8BIT
# undef SD_STOP_SEC_VAR_INIT_8BIT
# define STOP_SEC_VAR                               /* default var stop section */
#endif

#ifdef SD_START_SEC_VAR_INIT_16BIT
# undef SD_START_SEC_VAR_INIT_16BIT
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef SD_STOP_SEC_VAR_INIT_16BIT
# undef SD_STOP_SEC_VAR_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef SD_START_SEC_VAR_INIT_32BIT
# undef SD_START_SEC_VAR_INIT_32BIT
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef SD_STOP_SEC_VAR_INIT_32BIT
# undef SD_STOP_SEC_VAR_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef SD_START_SEC_VAR_INIT_UNSPECIFIED
# undef SD_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef SD_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef SD_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef SD_START_SEC_VAR_NOINIT_8BIT
# undef SD_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef SD_STOP_SEC_VAR_NOINIT_8BIT
# undef SD_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef SD_START_SEC_VAR_NOINIT_16BIT
# undef SD_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef SD_STOP_SEC_VAR_NOINIT_16BIT
# undef SD_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef SD_START_SEC_VAR_NOINIT_32BIT
# undef SD_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef SD_STOP_SEC_VAR_NOINIT_32BIT
# undef SD_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef SD_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef SD_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef SD_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef SD_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef SD_START_SEC_VAR_PBCFG
# undef SD_START_SEC_VAR_PBCFG
# define START_SEC_VAR_PBCFG
#endif
#ifdef SD_STOP_SEC_VAR_PBCFG
# undef SD_STOP_SEC_VAR_PBCFG
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#ifdef SD_START_SEC_VAR_ZERO_INIT_8BIT
# undef SD_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef SD_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef SD_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef SD_START_SEC_VAR_ZERO_INIT_16BIT
# undef SD_START_SEC_VAR_ZERO_INIT_16BIT
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef SD_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef SD_STOP_SEC_VAR_ZERO_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef SD_START_SEC_VAR_ZERO_INIT_32BIT
# undef SD_START_SEC_VAR_ZERO_INIT_32BIT
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef SD_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef SD_STOP_SEC_VAR_ZERO_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef SD_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef SD_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef SD_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef SD_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  SD END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  STBM START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(STBM_START_SEC_CODE)
# undef STBM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE /* mapped to default code section */
#endif
#if defined(STBM_STOP_SEC_CODE)
# undef STBM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE  /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(STBM_START_SEC_CONST_UNSPECIFIED)
# undef STBM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(STBM_STOP_SEC_CONST_UNSPECIFIED)
# undef STBM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(STBM_START_SEC_CONST_8BIT)
# undef STBM_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT
#endif
#if defined(STBM_STOP_SEC_CONST_8BIT)
# undef STBM_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#if defined(STBM_START_SEC_VAR_NOINIT_8BIT)
# undef STBM_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(STBM_STOP_SEC_VAR_NOINIT_8BIT)
# undef STBM_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(STBM_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef STBM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(STBM_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef STBM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */

#if defined(STBM_START_SEC_VAR_ZERO_INIT_8BIT)
# undef STBM_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(STBM_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef STBM_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(STBM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef STBM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(STBM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef STBM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  STBM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CANTSYN START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(CANTSYN_START_SEC_CODE)
# undef CANTSYN_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE          /* mapped to default code section */
#endif
#if defined(CANTSYN_STOP_SEC_CODE)
# undef CANTSYN_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE           /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(CANTSYN_START_SEC_CONST_UNSPECIFIED)
# undef CANTSYN_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(CANTSYN_STOP_SEC_CONST_UNSPECIFIED)
# undef CANTSYN_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTSYN_START_SEC_CONST_8BIT)
# undef CANTSYN_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT
#endif
#if defined(CANTSYN_STOP_SEC_CONST_8BIT)
# undef CANTSYN_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#if defined(CANTSYN_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef CANTSYN_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(CANTSYN_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef CANTSYN_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(CANTSYN_START_SEC_VAR_NOINIT_8BIT)
# undef CANTSYN_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(CANTSYN_STOP_SEC_VAR_NOINIT_8BIT)
# undef CANTSYN_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */

#if defined(CANTSYN_START_SEC_VAR_ZERO_INIT_8BIT)
# undef CANTSYN_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(CANTSYN_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef CANTSYN_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  CANTSYN END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  ETHTSYN START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef ETHTSYN_START_SEC_CODE
# undef ETHTSYN_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE                                               /* mapped to default code section */
#endif
#ifdef ETHTSYN_STOP_SEC_CODE
# undef ETHTSYN_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE                                                /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef ETHTSYN_START_SEC_CONST_8BIT
# undef ETHTSYN_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT                                         /* mapped to default const 8bit section */
#endif
#ifdef ETHTSYN_STOP_SEC_CONST_8BIT
# undef ETHTSYN_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST                                               /* default const stop section */
#endif

#ifdef ETHTSYN_START_SEC_CONST_16BIT
# undef ETHTSYN_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16BIT
#endif
#ifdef ETHTSYN_STOP_SEC_CONST_16BIT
# undef ETHTSYN_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef ETHTSYN_START_SEC_CONST_32BIT
# undef ETHTSYN_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_32BIT
#endif
#ifdef ETHTSYN_STOP_SEC_CONST_32BIT
# undef ETHTSYN_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef ETHTSYN_START_SEC_CONST_UNSPECIFIED
# undef ETHTSYN_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef ETHTSYN_STOP_SEC_CONST_UNSPECIFIED
# undef ETHTSYN_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef ETHTSYN_START_SEC_VAR_INIT_8BIT
# undef ETHTSYN_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8BIT                                      /* mapped to default var init 8bit section */
#endif
#ifdef ETHTSYN_STOP_SEC_VAR_INIT_8BIT
# undef ETHTSYN_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR                                                 /* default var stop section */
#endif

#ifdef ETHTSYN_START_SEC_VAR_INIT_16BIT
# undef ETHTSYN_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef ETHTSYN_STOP_SEC_VAR_INIT_16BIT
# undef ETHTSYN_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef ETHTSYN_START_SEC_VAR_INIT_32BIT
# undef ETHTSYN_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef ETHTSYN_STOP_SEC_VAR_INIT_32BIT
# undef ETHTSYN_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef ETHTSYN_START_SEC_VAR_INIT_UNSPECIFIED
# undef ETHTSYN_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef ETHTSYN_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef ETHTSYN_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef ETHTSYN_START_SEC_VAR_NOINIT_8BIT
# undef ETHTSYN_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef ETHTSYN_STOP_SEC_VAR_NOINIT_8BIT
# undef ETHTSYN_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef ETHTSYN_START_SEC_VAR_NOINIT_16BIT
# undef ETHTSYN_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef ETHTSYN_STOP_SEC_VAR_NOINIT_16BIT
# undef ETHTSYN_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef ETHTSYN_START_SEC_VAR_NOINIT_32BIT
# undef ETHTSYN_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef ETHTSYN_STOP_SEC_VAR_NOINIT_32BIT
# undef ETHTSYN_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef ETHTSYN_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHTSYN_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef ETHTSYN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ETHTSYN_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#ifdef ETHTSYN_START_SEC_VAR_ZERO_INIT_8BIT
# undef ETHTSYN_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef ETHTSYN_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef ETHTSYN_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef ETHTSYN_START_SEC_VAR_ZERO_INIT_16BIT
# undef ETHTSYN_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef ETHTSYN_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef ETHTSYN_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#if defined(ETHTSYN_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef ETHTSYN_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(ETHTSYN_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef ETHTSYN_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  ETHTSYN END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  SysService_E2eLib START
 *********************************************************************************************************************/


/*******  CODE sections **********************************************************************************************/

#ifdef E2E_START_SEC_CODE
    #undef E2E_START_SEC_CODE
    #define START_SEC_CODE
#endif
#ifdef E2E_STOP_SEC_CODE
    #undef E2E_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 *  SysService_E2eLib END
 *********************************************************************************************************************/

/* E2EPW_MemMap.inc: End-To-End Protection Wrapper Memory Mapping: */


/* Code */
/* To be used for mapping code to application block, boot block, external flash etc. */
#if defined   E2EPW_START_SEC_CODE
#undef        E2EPW_START_SEC_CODE
#define           START_SEC_CODE

#elif defined E2EPW_STOP_SEC_CODE
#undef        E2EPW_STOP_SEC_CODE
#define             STOP_SEC_CODE


/* Constants */
/* To be used for global or static constants.  */
#elif defined E2EPW_START_SEC_CONST_UNSPECIFIED
#undef        E2EPW_START_SEC_CONST_UNSPECIFIED
#define             START_SEC_CONST_UNSPECIFIED

#elif defined E2EPW_STOP_SEC_CONST_UNSPECIFIED
#undef        E2EPW_STOP_SEC_CONST_UNSPECIFIED
#define             STOP_SEC_CONST


/* Var init unspecified */
#elif defined E2EPW_START_SEC_VAR_INIT_UNSPECIFIED
#undef        E2EPW_START_SEC_VAR_INIT_UNSPECIFIED
#define             START_SEC_VAR_INIT_UNSPECIFIED

#elif defined E2EPW_STOP_SEC_VAR_INIT_UNSPECIFIED
#undef        E2EPW_STOP_SEC_VAR_INIT_UNSPECIFIED
#define             STOP_SEC_VAR


/* Var uninitialized unspecified */
/* To be used for all global or static variables that are never initialized */
#elif defined E2EPW_START_SEC_VAR_NOINIT_UNSPECIFIED
#undef        E2EPW_START_SEC_VAR_NOINIT_UNSPECIFIED
#define             START_SEC_VAR_NOINIT_UNSPECIFIED

#elif defined E2EPW_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#undef        E2EPW_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#define             STOP_SEC_VAR


/* Var zero init unspecified */
#elif defined E2EPW_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#undef        E2EPW_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#define             START_SEC_VAR_ZERO_INIT_UNSPECIFIED

#elif defined E2EPW_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#undef        E2EPW_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#define             STOP_SEC_VAR


/* Library code     */
/* To be used for code that shall go into library segments for <MSN> module. */
#elif defined E2EPW_START_SEC_CODE_LIB
#undef        E2EPW_START_SEC_CODE_LIB
#define             START_SEC_CODE

#elif defined E2EPW_STOP_SEC_CODE_LIB
#undef        E2EPW_STOP_SEC_CODE_LIB
#define             STOP_SEC_CODE

#endif

/* End of file E2EPW_MemMap.inc */

/**********************************************************************************************************************
 *  IPBASE START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef IPBASE_START_SEC_CODE
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_START_SEC_CODE
#define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef IPBASE_STOP_SEC_CODE
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_STOP_SEC_CODE
#define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef IPBASE_START_SEC_CONST_8BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_START_SEC_CONST_8BIT
#define START_SEC_CONST_8BIT
#endif
#ifdef IPBASE_STOP_SEC_CONST_8BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_STOP_SEC_CONST_8BIT
#define STOP_SEC_CONST
#endif

#ifdef IPBASE_START_SEC_CONST_16BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_START_SEC_CONST_16BIT
#define START_SEC_CONST_16BIT
#endif
#ifdef IPBASE_STOP_SEC_CONST_16BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_STOP_SEC_CONST_16BIT
#define STOP_SEC_CONST
#endif

#ifdef IPBASE_START_SEC_CONST_32BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_START_SEC_CONST_32BIT
#define START_SEC_CONST_32BIT
#endif
#ifdef IPBASE_STOP_SEC_CONST_32BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_STOP_SEC_CONST_32BIT
#define STOP_SEC_CONST
#endif

#ifdef IPBASE_START_SEC_CONST_UNSPECIFIED
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_START_SEC_CONST_UNSPECIFIED
#define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef IPBASE_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_STOP_SEC_CONST_UNSPECIFIED
#define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#ifdef IPBASE_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_START_SEC_VAR_NOINIT_8BIT
#define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef IPBASE_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_STOP_SEC_VAR_NOINIT_8BIT
#define STOP_SEC_VAR
#endif

#ifdef IPBASE_START_SEC_VAR_NOINIT_16BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_START_SEC_VAR_NOINIT_16BIT
#define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef IPBASE_STOP_SEC_VAR_NOINIT_16BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_STOP_SEC_VAR_NOINIT_16BIT
#define STOP_SEC_VAR
#endif

#ifdef IPBASE_START_SEC_VAR_NOINIT_32BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_START_SEC_VAR_NOINIT_32BIT
#define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef IPBASE_STOP_SEC_VAR_NOINIT_32BIT
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_STOP_SEC_VAR_NOINIT_32BIT
#define STOP_SEC_VAR
#endif

#ifdef IPBASE_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_START_SEC_VAR_NOINIT_UNSPECIFIED
#define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef IPBASE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 0841 */ /* MD_MSR_19.6 */
#undef IPBASE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  IPBASE END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  SRP START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(SRP_START_SEC_CODE)
# undef SRP_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE         /* mapped to default code section */
#endif
#if defined(SRP_STOP_SEC_CODE)
# undef SRP_STOP_SEC_CODE       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(SRP_START_SEC_CODE_FAST)
# undef SRP_START_SEC_CODE_FAST /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE_FAST    /* mapped to default fast code section */
#endif
#if defined(SRP_STOP_SEC_CODE_FAST)
# undef SRP_STOP_SEC_CODE_FAST  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(SRP_START_SEC_CODE_ISR)
# undef SRP_START_SEC_CODE_ISR  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE_ISR     /* mapped to default ISR code section */
#endif
#if defined(SRP_STOP_SEC_CODE_ISR)
# undef SRP_STOP_SEC_CODE_ISR   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(SRP_START_SEC_CONST_8BIT)
# undef SRP_START_SEC_CONST_8BIT  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT     /* mapped to default const 8bit section */
#endif
#if defined(SRP_STOP_SEC_CONST_8BIT)
# undef SRP_STOP_SEC_CONST_8BIT   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#if defined(SRP_START_SEC_CONST_16BIT)
# undef SRP_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined(SRP_STOP_SEC_CONST_16BIT)
# undef SRP_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(SRP_START_SEC_CONST_32BIT)
# undef SRP_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined(SRP_STOP_SEC_CONST_32BIT)
# undef SRP_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(SRP_START_SEC_CONST_UNSPECIFIED)
# undef SRP_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_CONST_UNSPECIFIED)
# undef SRP_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */

#if defined(SRP_START_SEC_FAST_CONST_8BIT)
# undef SRP_START_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_8BIT
#endif
#if defined(SRP_STOP_SEC_FAST_CONST_8BIT)
# undef SRP_STOP_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(SRP_START_SEC_FAST_CONST_16BIT)
# undef SRP_START_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_16BIT
#endif
#if defined(SRP_STOP_SEC_FAST_CONST_16BIT)
# undef SRP_STOP_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(SRP_START_SEC_FAST_CONST_32BIT)
# undef SRP_START_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_32BIT
#endif
#if defined(SRP_STOP_SEC_FAST_CONST_32BIT)
# undef SRP_STOP_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(SRP_START_SEC_FAST_CONST_UNSPECIFIED)
# undef SRP_START_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_FAST_CONST_UNSPECIFIED)
# undef SRP_STOP_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

/* NOTE: ASR3.x till ASR4.0.1 only. Root table for postbuild data */
#if defined(SRP_START_SEC_PBCFG_ROOT)
# undef SRP_START_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(SRP_STOP_SEC_PBCFG_ROOT)
# undef SRP_STOP_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* ESCAN00065501 */
/* NOTE: ASR4.0.3 (CFG5) only. The origin root table for postbuild data. Relevant only for EcuM. */
#if defined(SRP_START_SEC_PBCFG_GLOBALROOT)
# undef SRP_START_SEC_PBCFG_GLOBALROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_PBCFG_GLOBALROOT
#endif
#if defined(SRP_STOP_SEC_PBCFG_GLOBALROOT)
# undef SRP_STOP_SEC_PBCFG_GLOBALROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(SRP_START_SEC_PBCFG)
# undef SRP_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(SRP_STOP_SEC_PBCFG)
# undef SRP_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(SRP_START_SEC_VAR_INIT_8BIT)
# undef SRP_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#if defined(SRP_STOP_SEC_VAR_INIT_8BIT)
# undef SRP_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                /* default var stop section */
#endif

#if defined(SRP_START_SEC_VAR_INIT_16BIT)
# undef SRP_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined(SRP_STOP_SEC_VAR_INIT_16BIT)
# undef SRP_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_INIT_32BIT)
# undef SRP_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined(SRP_STOP_SEC_VAR_INIT_32BIT)
# undef SRP_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_INIT_UNSPECIFIED)
# undef SRP_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef SRP_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#if defined(SRP_START_SEC_VAR_NOINIT_8BIT)
# undef SRP_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOINIT_8BIT)
# undef SRP_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOINIT_16BIT)
# undef SRP_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOINIT_16BIT)
# undef SRP_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOINIT_32BIT)
# undef SRP_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOINIT_32BIT)
# undef SRP_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef SRP_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef SRP_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* ESCAN00065501 */
#if defined(SRP_START_SEC_VAR_PBCFG)
# undef SRP_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#if defined(SRP_STOP_SEC_VAR_PBCFG)
# undef SRP_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#if defined(SRP_START_SEC_VAR_ZERO_INIT_8BIT)
# undef SRP_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(SRP_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef SRP_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_ZERO_INIT_16BIT)
# undef SRP_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined(SRP_STOP_SEC_VAR_ZERO_INIT_16BIT)
# undef SRP_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_ZERO_INIT_32BIT)
# undef SRP_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined(SRP_STOP_SEC_VAR_ZERO_INIT_32BIT)
# undef SRP_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef SRP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef SRP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR FAST INIT sections */

#if defined(SRP_START_SEC_VAR_FAST_INIT_8BIT)
# undef SRP_START_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_INIT_8BIT)
# undef SRP_STOP_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_FAST_INIT_16BIT)
# undef SRP_START_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_INIT_16BIT)
# undef SRP_STOP_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_FAST_INIT_32BIT)
# undef SRP_START_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_INIT_32BIT)
# undef SRP_STOP_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef SRP_START_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef SRP_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR FAST NOINIT sections */

#if defined(SRP_START_SEC_VAR_FAST_NOINIT_8BIT)
# undef SRP_START_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_NOINIT_8BIT)
# undef SRP_STOP_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_FAST_NOINIT_16BIT)
# undef SRP_START_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_NOINIT_16BIT)
# undef SRP_STOP_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_FAST_NOINIT_32BIT)
# undef SRP_START_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_NOINIT_32BIT)
# undef SRP_STOP_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef SRP_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef SRP_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR FAST ZERO INIT sections */

#if defined(SRP_START_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef SRP_START_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef SRP_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef SRP_START_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef SRP_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef SRP_START_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef SRP_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef SRP_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef SRP_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE INIT sections */

#if defined(SRP_START_SEC_VAR_NOCACHE_INIT_8BIT)
# undef SRP_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_INIT_8BIT)
# undef SRP_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOCACHE_INIT_16BIT)
# undef SRP_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_INIT_16BIT)
# undef SRP_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOCACHE_INIT_32BIT)
# undef SRP_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_INIT_32BIT)
# undef SRP_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef SRP_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef SRP_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE NOINIT sections */

#if defined(SRP_START_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef SRP_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef SRP_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef SRP_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef SRP_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef SRP_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef SRP_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef SRP_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef SRP_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* VAR NOCACHE ZERO INIT sections */

#if defined(SRP_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef SRP_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef SRP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef SRP_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef SRP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef SRP_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef SRP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(SRP_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef SRP_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#if defined(SRP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef SRP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  SRP END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  CANTP START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef   CANTP_START_SEC_CODE
# undef  CANTP_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE      /* mapped to default code section */
#endif
#ifdef   CANTP_STOP_SEC_CODE
# undef  CANTP_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE      /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef   CANTP_START_SEC_CONST_UNSPECIFIED
# undef  CANTP_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef   CANTP_STOP_SEC_CONST_UNSPECIFIED
# undef  CANTP_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(CANTP_START_SEC_CONST_16BIT)
# undef CANTP_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16BIT
#endif
#if defined(CANTP_STOP_SEC_CONST_16BIT)
# undef CANTP_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef   CANTP_START_SEC_CONST_8BIT
# undef  CANTP_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT
#endif
#ifdef   CANTP_STOP_SEC_CONST_8BIT
# undef  CANTP_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

/* Postbuild CFG CONST sections */

#ifdef   CANTP_START_SEC_PBCFG
# undef  CANTP_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_PBCFG
#endif
#ifdef   CANTP_STOP_SEC_PBCFG
# undef  CANTP_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif



/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef   CANTP_START_SEC_VAR_INIT_8BIT
# undef  CANTP_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8BIT
#endif
#ifdef   CANTP_STOP_SEC_VAR_INIT_8BIT
# undef  CANTP_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef   CANTP_START_SEC_VAR_NOINIT_8BIT
# undef  CANTP_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef   CANTP_STOP_SEC_VAR_NOINIT_8BIT
# undef  CANTP_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef   CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef  CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef   CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef  CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef   CANTP_START_SEC_VAR_PBCFG
# undef  CANTP_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_PBCFG
#endif
#ifdef   CANTP_STOP_SEC_VAR_PBCFG
# undef  CANTP_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif



/**********************************************************************************************************************
 *  CANTP END
 *********************************************************************************************************************/


/***********************************************************************************************************************
 *  SOMEIPTP START 
 **********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef SOMEIPTP_START_SEC_CODE
  #undef SOMEIPTP_START_SEC_CODE                         /* PRQA S 0841 */ /* MD_MSR_Undef */
  #define START_SEC_CODE
#endif
#ifdef SOMEIPTP_STOP_SEC_CODE
  #undef SOMEIPTP_STOP_SEC_CODE                          /* PRQA S 0841 */ /* MD_MSR_Undef */ 
  #define STOP_SEC_CODE
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef SOMEIPTP_START_SEC_CONST_UNSPECIFIED
# undef SOMEIPTP_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef SOMEIPTP_STOP_SEC_CONST_UNSPECIFIED
# undef SOMEIPTP_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef SOMEIPTP_START_SEC_CONST_32BIT
# undef SOMEIPTP_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */ 
# define START_SEC_CONST_32BIT
#endif
#ifdef SOMEIPTP_STOP_SEC_CONST_32BIT
# undef SOMEIPTP_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#if defined(SOMEIPTP_START_SEC_CONST_16BIT)
# undef SOMEIPTP_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_16BIT
#endif
#if defined(SOMEIPTP_STOP_SEC_CONST_16BIT)
# undef SOMEIPTP_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

#ifdef   SOMEIPTP_START_SEC_CONST_8BIT
# undef  SOMEIPTP_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CONST_8BIT
#endif
#ifdef   SOMEIPTP_STOP_SEC_CONST_8BIT
# undef  SOMEIPTP_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CONST
#endif

/* Postbuild CFG CONST sections */
#ifdef SOMEIPTP_START_SEC_PBCFG
# undef SOMEIPTP_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */ 
# define START_SEC_CONST_PBCFG
#endif
#ifdef SOMEIPTP_STOP_SEC_PBCFG
# undef SOMEIPTP_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */ 
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef   SOMEIPTP_START_SEC_VAR_INIT_8BIT
# undef  SOMEIPTP_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_INIT_8BIT
#endif
#ifdef   SOMEIPTP_STOP_SEC_VAR_INIT_8BIT
# undef  SOMEIPTP_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR NOINIT sections */

#ifdef SOMEIPTP_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef SOMEIPTP_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef SOMEIPTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef SOMEIPTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef SOMEIPTP_START_SEC_VAR_NOINIT_8BIT
# undef SOMEIPTP_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */ 
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef SOMEIPTP_STOP_SEC_VAR_NOINIT_8BIT
# undef SOMEIPTP_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */ 
# define STOP_SEC_VAR
#endif

#ifdef SOMEIPTP_START_SEC_VAR_NOINIT_32BIT
# undef SOMEIPTP_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */ 
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef SOMEIPTP_STOP_SEC_VAR_NOINIT_32BIT
# undef SOMEIPTP_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */
#ifdef SOMEIPTP_START_SEC_VAR_ZERO_INIT_8BIT
# undef SOMEIPTP_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */ 
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef SOMEIPTP_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef SOMEIPTP_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef SOMEIPTP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef SOMEIPTP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef SOMEIPTP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef SOMEIPTP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

#ifdef SOMEIPTP_START_SEC_VAR_PBCFG
# undef SOMEIPTP_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_VAR_PBCFG
#endif
#ifdef SOMEIPTP_STOP_SEC_VAR_PBCFG
# undef SOMEIPTP_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_VAR
#endif

/***********************************************************************************************************************
 *  SOMEIPTP END
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  TCPIP START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef TCPIP_START_SEC_CODE
  #undef TCPIP_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef TCPIP_STOP_SEC_CODE
  #undef TCPIP_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef TCPIP_START_SEC_CODE_ISR
  #undef TCPIP_START_SEC_CODE_ISR
  #define START_SEC_CODE_ISR                        /* mapped to default ISR code section */
#endif
#ifdef TCPIP_STOP_SEC_CODE_ISR
  #undef TCPIP_STOP_SEC_CODE_ISR
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef IPV4_START_SEC_CODE
  #undef IPV4_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef IPV4_STOP_SEC_CODE
  #undef IPV4_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef IPV6_START_SEC_CODE
  #undef IPV6_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef IPV6_STOP_SEC_CODE
  #undef IPV6_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef IPV6_START_SEC_CODE_FAST
  #undef IPV6_START_SEC_CODE_FAST
  #define START_SEC_CODE_FAST                       /* mapped to default fast code section */
#endif
#ifdef IPV6_STOP_SEC_CODE_FAST
  #undef IPV6_STOP_SEC_CODE_FAST
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef IPV6_START_SEC_CODE_ISR
  #undef IPV6_START_SEC_CODE_ISR
  #define START_SEC_CODE_ISR                        /* mapped to default ISR code section */
#endif
#ifdef IPV6_STOP_SEC_CODE_ISR
  #undef IPV6_STOP_SEC_CODE_ISR
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef TCPIP_START_SEC_CONST_8BIT
# undef TCPIP_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef TCPIP_STOP_SEC_CONST_8BIT
# undef TCPIP_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef TCPIP_START_SEC_CONST_16BIT
# undef TCPIP_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef TCPIP_STOP_SEC_CONST_16BIT
# undef TCPIP_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef TCPIP_START_SEC_CONST_32BIT
# undef TCPIP_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef TCPIP_STOP_SEC_CONST_32BIT
# undef TCPIP_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef TCPIP_START_SEC_CONST_UNSPECIFIED
# undef TCPIP_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef TCPIP_STOP_SEC_CONST_UNSPECIFIED
# undef TCPIP_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef TCPIP_START_SEC_CONST_BOOLEAN
# undef TCPIP_START_SEC_CONST_BOOLEAN
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef TCPIP_STOP_SEC_CONST_BOOLEAN
# undef TCPIP_STOP_SEC_CONST_BOOLEAN
# define STOP_SEC_CONST
#endif

#ifdef TCPIP_START_SEC_PBCFG
# undef TCPIP_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef TCPIP_STOP_SEC_PBCFG
# undef TCPIP_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef TCPIP_START_SEC_PBCFG_ROOT
# undef TCPIP_START_SEC_PBCFG_ROOT
# define START_SEC_CONST_PBCFG
#endif
#ifdef TCPIP_STOP_SEC_PBCFG_ROOT
# undef TCPIP_STOP_SEC_PBCFG_ROOT
# define STOP_SEC_CONST
#endif

#ifdef IPV4_START_SEC_CONST_8BIT
# undef IPV4_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef IPV4_STOP_SEC_CONST_8BIT
# undef IPV4_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef IPV4_START_SEC_CONST_16BIT
# undef IPV4_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef IPV4_STOP_SEC_CONST_16BIT
# undef IPV4_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef IPV4_START_SEC_CONST_32BIT
# undef IPV4_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef IPV4_STOP_SEC_CONST_32BIT
# undef IPV4_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef IPV4_START_SEC_CONST_UNSPECIFIED
# undef IPV4_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef IPV4_STOP_SEC_CONST_UNSPECIFIED
# undef IPV4_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef IPV6_START_SEC_CONST_8BIT
# undef IPV6_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef IPV6_STOP_SEC_CONST_8BIT
# undef IPV6_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef IPV6_START_SEC_CONST_16BIT
# undef IPV6_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef IPV6_STOP_SEC_CONST_16BIT
# undef IPV6_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef IPV6_START_SEC_CONST_32BIT
# undef IPV6_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef IPV6_STOP_SEC_CONST_32BIT
# undef IPV6_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef IPV6_START_SEC_CONST_UNSPECIFIED
# undef IPV6_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef IPV6_STOP_SEC_CONST_UNSPECIFIED
# undef IPV6_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */

#ifdef IPV6_START_SEC_FAST_CONST_8BIT
# undef IPV6_START_SEC_FAST_CONST_8BIT
# define START_SEC_FAST_CONST_8BIT
#endif
#ifdef IPV6_STOP_SEC_FAST_CONST_8BIT
# undef IPV6_STOP_SEC_FAST_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef IPV6_START_SEC_FAST_CONST_16BIT
# undef IPV6_START_SEC_FAST_CONST_16BIT
# define START_SEC_FAST_CONST_16BIT
#endif
#ifdef IPV6_STOP_SEC_FAST_CONST_16BIT
# undef IPV6_STOP_SEC_FAST_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef IPV6_START_SEC_FAST_CONST_32BIT
# undef IPV6_START_SEC_FAST_CONST_32BIT
# define START_SEC_FAST_CONST_32BIT
#endif
#ifdef IPV6_STOP_SEC_FAST_CONST_32BIT
# undef IPV6_STOP_SEC_FAST_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef IPV6_START_SEC_FAST_CONST_UNSPECIFIED
# undef IPV6_START_SEC_FAST_CONST_UNSPECIFIED
# define START_SEC_FAST_CONST_UNSPECIFIED
#endif
#ifdef IPV6_STOP_SEC_FAST_CONST_UNSPECIFIED
# undef IPV6_STOP_SEC_FAST_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

/* Root table for postbuild data */
#ifdef IPV6_START_SEC_PBCFG_ROOT
# undef IPV6_START_SEC_PBCFG_ROOT
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPV6_STOP_SEC_PBCFG_ROOT
# undef IPV6_STOP_SEC_PBCFG_ROOT
# define STOP_SEC_CONST
#endif

#ifdef IPV6_START_SEC_PBCFG
# undef IPV6_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPV6_STOP_SEC_PBCFG
# undef IPV6_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef IPV6_START_SEC_VAR_INIT_8BIT
# undef IPV6_START_SEC_VAR_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT                    /* mapped to default var init 8bit section */
#endif
#ifdef IPV6_STOP_SEC_VAR_INIT_8BIT
# undef IPV6_STOP_SEC_VAR_INIT_8BIT
# define STOP_SEC_VAR                               /* default var stop section */
#endif

#ifdef IPV6_START_SEC_VAR_INIT_16BIT
# undef IPV6_START_SEC_VAR_INIT_16BIT
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_INIT_16BIT
# undef IPV6_STOP_SEC_VAR_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_INIT_32BIT
# undef IPV6_START_SEC_VAR_INIT_32BIT
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_INIT_32BIT
# undef IPV6_STOP_SEC_VAR_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_INIT_UNSPECIFIED
# undef IPV6_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef IPV6_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef IPV6_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/* VAR NO INIT sections */

#ifdef TCPIP_START_SEC_VAR_NOINIT_8BIT
# undef TCPIP_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef TCPIP_STOP_SEC_VAR_NOINIT_8BIT
# undef TCPIP_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef TCPIP_START_SEC_VAR_NOINIT_16BIT
# undef TCPIP_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef TCPIP_STOP_SEC_VAR_NOINIT_16BIT
# undef TCPIP_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef TCPIP_START_SEC_VAR_NOINIT_32BIT
# undef TCPIP_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef TCPIP_STOP_SEC_VAR_NOINIT_32BIT
# undef TCPIP_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef TCPIP_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef TCPIP_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef TCPIP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef TCPIP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef TCPIP_START_SEC_VAR_NOINIT_BOOLEAN
# undef TCPIP_START_SEC_VAR_NOINIT_BOOLEAN
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef TCPIP_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef TCPIP_STOP_SEC_VAR_NOINIT_BOOLEAN
# define STOP_SEC_VAR
#endif

#ifdef IPV4_START_SEC_VAR_NOINIT_8BIT
# undef IPV4_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef IPV4_STOP_SEC_VAR_NOINIT_8BIT
# undef IPV4_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef TCPIP_START_SEC_VAR_BUFFERS
# undef TCPIP_START_SEC_VAR_BUFFERS
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef TCPIP_STOP_SEC_VAR_BUFFERS
# undef TCPIP_STOP_SEC_VAR_BUFFERS
# define STOP_SEC_VAR
#endif

#ifdef IPV4_START_SEC_VAR_NOINIT_16BIT
# undef IPV4_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef IPV4_STOP_SEC_VAR_NOINIT_16BIT
# undef IPV4_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV4_START_SEC_VAR_NOINIT_32BIT
# undef IPV4_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef IPV4_STOP_SEC_VAR_NOINIT_32BIT
# undef IPV4_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV4_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef IPV4_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef IPV4_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef IPV4_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

#ifdef IPV4_START_SEC_VAR_NOINIT_BOOLEAN
# undef IPV4_START_SEC_VAR_NOINIT_BOOLEAN
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef IPV4_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef IPV4_STOP_SEC_VAR_NOINIT_BOOLEAN
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_NOINIT_8BIT
# undef IPV6_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_NOINIT_8BIT
# undef IPV6_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_NOINIT_16BIT
# undef IPV6_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_NOINIT_16BIT
# undef IPV6_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_NOINIT_32BIT
# undef IPV6_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_NOINIT_32BIT
# undef IPV6_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef IPV6_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef IPV6_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef IPV6_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif


/* VAR FAST NOINIT sections */

#ifdef IPV6_START_SEC_VAR_FAST_NOINIT_8BIT
# undef IPV6_START_SEC_VAR_FAST_NOINIT_8BIT
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_NOINIT_8BIT
# undef IPV6_STOP_SEC_VAR_FAST_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_FAST_NOINIT_16BIT
# undef IPV6_START_SEC_VAR_FAST_NOINIT_16BIT
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_NOINIT_16BIT
# undef IPV6_STOP_SEC_VAR_FAST_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_FAST_NOINIT_32BIT
# undef IPV6_START_SEC_VAR_FAST_NOINIT_32BIT
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_NOINIT_32BIT
# undef IPV6_STOP_SEC_VAR_FAST_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef IPV6_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef IPV6_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */

#ifdef TCPIP_START_SEC_VAR_ZERO_INIT_8BIT
# undef TCPIP_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef TCPIP_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef TCPIP_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV4_START_SEC_VAR_ZERO_INIT_8BIT
# undef IPV4_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef IPV4_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef IPV4_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_ZERO_INIT_8BIT
# undef IPV6_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef IPV6_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_ZERO_INIT_16BIT
# undef IPV6_START_SEC_VAR_ZERO_INIT_16BIT
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef IPV6_STOP_SEC_VAR_ZERO_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_ZERO_INIT_32BIT
# undef IPV6_START_SEC_VAR_ZERO_INIT_32BIT
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef IPV6_STOP_SEC_VAR_ZERO_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef IPV6_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef IPV6_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef IPV6_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/* VAR FAST INIT sections */

#ifdef IPV6_START_SEC_VAR_FAST_INIT_8BIT
# undef IPV6_START_SEC_VAR_FAST_INIT_8BIT
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_INIT_8BIT
# undef IPV6_STOP_SEC_VAR_FAST_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_FAST_INIT_16BIT
# undef IPV6_START_SEC_VAR_FAST_INIT_16BIT
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_INIT_16BIT
# undef IPV6_STOP_SEC_VAR_FAST_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_FAST_INIT_32BIT
# undef IPV6_START_SEC_VAR_FAST_INIT_32BIT
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_INIT_32BIT
# undef IPV6_STOP_SEC_VAR_FAST_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_FAST_INIT_UNSPECIFIED
# undef IPV6_START_SEC_VAR_FAST_INIT_UNSPECIFIED
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
# undef IPV6_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/* VAR FAST ZERO INIT sections */

#ifdef IPV6_START_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef IPV6_START_SEC_VAR_FAST_ZERO_INIT_8BIT
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef IPV6_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_FAST_ZERO_INIT_16BIT
# undef IPV6_START_SEC_VAR_FAST_ZERO_INIT_16BIT
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT
# undef IPV6_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_FAST_ZERO_INIT_32BIT
# undef IPV6_START_SEC_VAR_FAST_ZERO_INIT_32BIT
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT
# undef IPV6_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef IPV6_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
# undef IPV6_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#ifdef IPV6_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
# undef IPV6_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  TCPIP END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  RTP START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef RTP_START_SEC_CODE
# undef RTP_START_SEC_CODE
# define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef RTP_STOP_SEC_CODE
# undef RTP_STOP_SEC_CODE
# define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef RTP_START_SEC_CONST_8BIT
# undef RTP_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef RTP_STOP_SEC_CONST_8BIT
# undef RTP_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef RTP_START_SEC_CONST_16BIT
# undef RTP_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef RTP_STOP_SEC_CONST_16BIT
# undef RTP_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef RTP_START_SEC_CONST_32BIT
# undef RTP_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef RTP_STOP_SEC_CONST_32BIT
# undef RTP_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef RTP_START_SEC_CONST_UNSPECIFIED
# undef RTP_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef RTP_STOP_SEC_CONST_UNSPECIFIED
# undef RTP_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef RTP_START_SEC_VAR_INIT_8BIT
# undef RTP_START_SEC_VAR_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT                    /* mapped to default var init 8bit section */
#endif
#ifdef RTP_STOP_SEC_VAR_INIT_8BIT
# undef RTP_STOP_SEC_VAR_INIT_8BIT
# define STOP_SEC_VAR                               /* default var stop section */
#endif

#ifdef RTP_START_SEC_VAR_INIT_16BIT
# undef RTP_START_SEC_VAR_INIT_16BIT
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef RTP_STOP_SEC_VAR_INIT_16BIT
# undef RTP_STOP_SEC_VAR_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef RTP_START_SEC_VAR_INIT_32BIT
# undef RTP_START_SEC_VAR_INIT_32BIT
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef RTP_STOP_SEC_VAR_INIT_32BIT
# undef RTP_STOP_SEC_VAR_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef RTP_START_SEC_VAR_INIT_UNSPECIFIED
# undef RTP_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef RTP_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef RTP_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/* VAR NOINIT sections */

#ifdef RTP_START_SEC_VAR_NOINIT_8BIT
# undef RTP_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef RTP_STOP_SEC_VAR_NOINIT_8BIT
# undef RTP_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef RTP_START_SEC_VAR_NOINIT_16BIT
# undef RTP_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef RTP_STOP_SEC_VAR_NOINIT_16BIT
# undef RTP_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef RTP_START_SEC_VAR_NOINIT_32BIT
# undef RTP_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef RTP_STOP_SEC_VAR_NOINIT_32BIT
# undef RTP_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef RTP_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef RTP_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef RTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef RTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/* VAR ZERO INIT sections */

#ifdef RTP_START_SEC_VAR_ZERO_INIT_8BIT
# undef RTP_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef RTP_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef RTP_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef RTP_START_SEC_VAR_ZERO_INIT_16BIT
# undef RTP_START_SEC_VAR_ZERO_INIT_16BIT
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef RTP_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef RTP_STOP_SEC_VAR_ZERO_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef RTP_START_SEC_VAR_ZERO_INIT_32BIT
# undef RTP_START_SEC_VAR_ZERO_INIT_32BIT
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef RTP_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef RTP_STOP_SEC_VAR_ZERO_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef RTP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef RTP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef RTP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef RTP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  RTP END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  VSTDLIB START
 *********************************************************************************************************************/

#if defined(VSTDLIB_START_SEC_CODE)
# undef VSTDLIB_START_SEC_CODE                             /* PRQA S 0841 */ /* MD_MSR_Undef */
# define START_SEC_CODE                                    /* mapped to default code section */
#endif
#if defined(VSTDLIB_STOP_SEC_CODE)
# undef VSTDLIB_STOP_SEC_CODE                              /* PRQA S 0841 */ /* MD_MSR_Undef */
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 *  VSTDLIB END
 *********************************************************************************************************************/



/* PRQA L:MEMMAP_0841_TAG */

#include "MemMap_Common.h"

/**********************************************************************************************************************
 *  END OF FILE: MemMap.h
 *********************************************************************************************************************/

