/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2007 - 2013 by Vector Informatik GmbH.                                           All rights reserved.
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
 *         File:  _Compiler_Cfg.h
 *    Component:  -
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  This File is a template for the Compiler_Cfg.h
 *                This file has to be extended with the memory and pointer classes for all BSW modules
 *                which where used.
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
 *  01.01.01  2008-12-17  Ht                    Improve list of components  (Tp_AsrTpCan,Tp_AsrTpFr,DrvMcu,DrvIcu added)
 *  01.01.02  2009-04-27  Ht                    support OEM specific _compiler_cfg.inc file, improve list of components 
 *                                              (Cp_XcpOnCanAsr, Il_AsrIpduM, If_VxFblDcm, If_VxFblVpm_Volvo_ab, DrvFls added)
 *  01.01.03  2009-04-24  Msr                   Renamed J1939_AsrBase as TpJ1939_AsrBase
 *  01.01.04  2009-06-03  Ht                    Improve list of components (Adc, Dio, Gpt, Pwm, Spi, Wdg, Fls, Port, Fim)
 *  01.02.00  2009-08-01  Ht                    Improve list of components (Fee_30_Inst2, Can, ...Sub)
 *                                              Support filtering for RTE
 *  01.02.01  2009-09-02  Lo                    add external Flash driver support
 *  01.02.02  2009-09-21  Lo                    add DrvFls_Mcs12xFslftm01ExtVx
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
 *  01.03.02  2010-02-15  Ht                   support SysService_SswRcs_Daimler, SysService_Tls, Tp_Http, 
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
 *  01.05.04  2010-11-16  Ht                    add SysService_Exi, DrvTrans_Int6400EthAsr, Cdd_AsrCdd_Fiat, Diag_AsrDem_Fiat,
 *  01.05.05  2010-12-17  Ht                    add SysService_AsrSchM, DrvEep_XXStubAsr, DrvIcu_Tms570Tinhet01ExtVx
 *                                                  DrvWd_XTle4278gEAsr, DrvWd_XXStubAsr
 *  01.05.06  2011-02-17  Ht                    add DrvEed, SysService_AsrBswM
 *  01.05.07  2011-03-04  Ht                    add DrvTrans_Tja1055CandioAsr
 *                                              rename CanTrcv_30_Tja1040dio to CanTrcv_30_Tja1040
 *                                              add SysService_XmlEngine
 *  01.06.00  2011-03-04  Ht                    support ASR4.0
 *                                              add Ccl_Asr4ComM, Ccl_Asr4SmCan, Nm_Asr4NmIf, Nm_AsrNmDirOsek
 *  01.06.01  2011-04-15  Ht                    add Diag_AsrDcm_<OEM>
 *  01.06.02  2011-06-17  Ht                    correct Diag_AsrDcm_<OEM>
 *                                              add Monitoring_AsrDlt and Monitoring_GenericMeasurement
 *  01.06.03  2011-09-01  Ht                    add DrvTrans_Tja1145CanSpiAsr, DrvTrans_E52013CanspiAsr, DrvFls_XXStubAsr,
 *                                              If_AsrIfFeeV85xNec05Sub, If_AsrIfFeeV85xNec06Sub, If_AsrIfFeeV85xNec07Sub
 *                                              SysService_AsrWdMTttechSub and If_AsrIfWdTttechSub
 *  01.06.04  2011-10-20  Ht                    ESCAN00054334: add If_AsrIfFeeTiSub
 *                                              ESCAN00054719: add Cdd_AsrCdd
 *  01.06.05  2011-12-09  Ht                    add Tp_IpV4, Tp_IpV6
 *  01.06.06  2011-12-14  Ht                    add Monitoring_RuntimeMeasurement
 *  01.06.07  2012-01-03  Ht                    add DrvI2c, SysService_Asr4BswM
 *  01.06.08  2012-01-31  Ht                    add DrvTrans_Ar7000EthAsr, DrvTrans_GenericEthmiiAsr
 *  01.06.09  2012-03-06  Ht                    add If_AsrIfFeeMb9df126Fuji01Sub, 
 *                                              Infineon_Tc1767Inf01Sub, Infineon_Tc178xInf01Sub, Infineon_Tc1797Inf01Sub, Infineon_Tc1797Inf02Sub
 *  01.06.10  2012-03-13  Ht                    add Gw_AsrPduRCfg5, Il_AsrComCfg5, Il_AsrIpduMCfg5, Cdd_AsrCddCfg5,
 *                                              Tp_Asr4TpCan, Diag_Asr4Dcm, Diag_Asr4Dem
 *  01.06.11  2012-03-20  Ht                    add Cp_AsrCcp, Cp_XcpOnTcpIpAsr
 *  01.07.00  2012-07-26  Ht                    add Nm_Asr4NmCan, Nm_Asr4NmFr, Infineon_Xc2000Inf01Sub, Ccl_Asr4ComMCfg5, SysService_Asr4BswMCfg5, SysService_Asr4EcuM, SysService_AsrRamTst,
 *                                                  Ccl_Asr4SmLin
 *                                              add define REGSPACE - add support for ASR specification 4.0 R3
 *  01.07.01  2012-10-23  Seu                   add SysService_XmlSecurity
 *  01.07.02  2013-12-16  Seu                   MISRA compliance: usage of character "'" removed, typos corrected
 *********************************************************************************************************************/
#ifndef COMPILER_CFG_H
#define COMPILER_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
/* Package Merger: Start Section CompilerCfgIncludes */


#include "Rte_Compiler_Cfg.h"

/* Package Merger: Stop Section CompilerCfgIncludes */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define AUTOSAR_COMSTACKDATA

#define MSR_REGSPACE  REGSPACE

/* Configurable memory class for pointers to registers (e.g. static volatile CONSTP2VAR(uint16, PWM_CONST, REGSPACE)). */
#define REGSPACE


/* due to compatibility to ASR 2.1 */
#define _STATIC_   STATIC
#define _INLINE_   INLINE

/* Package Merger: Start Section CompilerCfgModuleList */



/**********************************************************************************************************************
 *  COMM START 
 *********************************************************************************************************************/

#define COMM_CODE

#define COMM_CONST
#define COMM_PBCFG

#define COMM_VAR_NOINIT
#define COMM_VAR_ZERO_INIT
#define COMM_VAR_PBCFG

#define COMM_APPL_VAR
#define COMM_NVM_DATA

/**********************************************************************************************************************
 *  COMM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  CanSM START
 *********************************************************************************************************************/

#define CANSM_CODE

#define CANSM_CONST


#define CANSM_APPL_CODE

#define CANSM_VAR_NOINIT
#define CANSM_VAR_ZERO_INIT

#define CANSM_APPL_VAR


/*******  FAST sections **********************************************************************************************/

#define CANSM_CONST_FAST

#define CANSM_VAR_NOINIT_FAST
#define CANSM_VAR_ZERO_INIT_FAST


/**********************************************************************************************************************
 *  CanSM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  ETHSM START 
 *********************************************************************************************************************/

#define ETHSM_CODE

#define ETHSM_CONST
#define ETHSM_APPL_CONST
#define ETHSM_PBCFG
#define ETHSM_APPL_DATA

#define ETHSM_VAR_NOINIT
#define ETHSM_VAR_ZERO_INIT

/**********************************************************************************************************************
 *  ETHSM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  Cdd_AsrCdd START 
 *********************************************************************************************************************/

/* Copy the compiler abstraction defines for each of your configured CDDs and replace the prefix _CDD with the MSN of your configured CDD as higher case. */

#define _CDD_CODE
#define _CDD_APPL_DATA

/* Add additional compiler abstraction defines for each of you configured CDDs here. */

/**********************************************************************************************************************
 *  Cdd_AsrCdd END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  XCP START 
 *********************************************************************************************************************/

#define XCP_CODE
#define XCP_CONST
#define XCP_PBCFG

#define XCP_VAR_INIT
#define XCP_VAR_NOINIT
#define XCP_VAR_ZERO_INIT
#define XCP_VAR_NOINIT_NOCACHE
#define XCP_APPL_DATA
#define XCP_APPL_VAR



/**********************************************************************************************************************
 *  XCP END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  TCPIPXCP START 
 *********************************************************************************************************************/

#define TCPIPXCP_VAR_NOINIT
#define TCPIPXCP_VAR_INIT
#define TCPIPXCP_CONST
#define TCPIPXCP_PBCFG
#define TCPIPXCP_CODE
#define TCPIPXCP_APPL_VAR
#define TCPIPXCP_APPL_DATA

/*-------------------------------------------------------------------------------------------------------------------*/
/* TCPIPXCP END                                                                                                        */
/*-------------------------------------------------------------------------------------------------------------------*/



#define DCM_CODE                /* code */
#define DCM_CONST               /* global/static constants */
#define DCM_CAL_PRM             /* calibrateable constants */
#define DCM_APPL_CODE           /* callback functions outside of Dcm */
#define DCM_APPL_CONST          /* constants outside Dcm */ 
#define DCM_APPL_DATA           /* variables/buffers outside of Dcm */
#define DCM_CALLOUT_CODE        /* callback functions outside of Dcm but part of Dcm (callouts) */
#define DCM_VAR_INIT            /* initialized global/static variables */
#define DCM_VAR_NOINIT          /* uninitialized global/static variables */
#define DCM_VAR_PBCFG           /* global/static variable for PostBuildLoadable */
#define DCM_PBCFG               /* global/static constants for PostBuildLoadable */



/*==== DEM ==================================================================*/
#define DEM_CODE                /* code */
#define DEM_VAR_INIT            /* initialized global/static variables */
#define DEM_VAR_ZERO_INIT       /* initialized global/static variables with initialization value 0 */
#define DEM_VAR_NOINIT          /* uninitialized global/static variables */
#define DEM_VAR_UNCACHED        /* uninitialized global/static un-cached variables */
#define DEM_CONST               /* global/static constants */
#define DEM_CONST_ROOT          /* global/static constants */
#define DEM_PBCFG               /* global/static constants for PostBuild */
#define DEM_PBCFG_ROOT          /* global/static constants for PostBuild */
#define DEM_VAR_PBCFG           /* post-buildable RAM */
#define DEM_DCM_DATA            /* variables/buffers passed by Dcm to Dem */
#define DEM_J1939DCM_DATA       /* variables/buffers passed by J1939Dcm to Dem */
#define DEM_DLT_DATA            /* variables/buffers passed by Dlt to Dem */
#define DEM_NVM_DATA            /* variables/buffers managed by NvM */
#define DEM_APPL_CODE           /* callback functions outside of Dem */
#define DEM_APPL_DATA           /* variables/buffers outside of Dem */
#define DEM_APPL_CONST          /* constants outside Dem */
#define DEM_SHARED_DATA         /* variables/buffers shared by all */
#define DEM_CAL_PRM             /* calibrateable constants */
#define DEM_NVM_DATA_NOINIT     DEM_NVM_DATA
#define DEM_VAR_SATELLITE       /* variables/buffers of Dem satellites */
/*===========================================================================*/


/*==== VDEM42 ================================================================*/
#define VDEM42_CODE             /* code */
#define VDEM42_APPL_DATA        /* data variables/buffers outside of VDEM42 */
#define VDEM42_APPL_VAR         /* variables/buffers outside of VDEM42 */
/*============================================================================*/



/**********************************************************************************************************************
 *  DrvAdc_VttCanoe01Asr START
 *********************************************************************************************************************/

#define ADC_APPL_CODE
#define ADC_APPL_CONST
#define ADC_APPL_DATA
#define ADC_CODE
#define ADC_VAR

/**********************************************************************************************************************
 *  DrvAdc_VttCanoe01Asr END
 *********************************************************************************************************************/



/* Kernbauer Version: 1.11 Konfiguration: DrvCan_TricoreMcanAsr Erzeugungsgangnummer: 591 */

/*        STARTSINGLE_OF_MULTIPLE_COMMENT      */


/**********************************************************************************************************************
 *  Can START    DRVCAN_MPC5700MCANASR
 *********************************************************************************************************************/

#define CAN_CODE                                   /* CAN modules code qualifier               */ /* PRQA S 0883 */ /* Appears only while testing */
#define CAN_STATIC_CODE                            /* CAN local code qualifier                 */
#define CAN_CONST                                  /* constant memory                          */
#define CAN_CONST_PBCFG                            /* postbuild generated constant/flash       */
#define CAN_VAR_NOINIT                             /* none initialized variables               */
#define CAN_VAR_INIT                               /* initialized variables                    */
#define CAN_VAR_PBCFG                              /* postbuild generated variables/dynamic RAM (CFG5 only) */
#define CAN_INT_CTRL                               /* access to Interrupt controller registers */
#define CAN_REG_CANCELL                            /* CAN cell register qualifier              */
#define CAN_RX_TX_DATA                             /* pointer width >= CAN_REG_CANCELL  / CAN rx/tx data / RAM or SFR    (rx data pointer for Indication and PreCopy functions to higher layers / tx data pointers / sdu  from application)   */
#define CAN_APPL_CODE                              /* Application code qualifier               */
#define CAN_APPL_CONST                             /* Application constant memory              */
#define CAN_APPL_VAR                               /* Application variables                    */
#define CAN_VAR_FAR                                /* far local variable qualifier */
#define CAN_VAR_NEAR                               /* near local variable qualifier */

#define CAN_PBCFG  CAN_CONST_PBCFG       /* used for compatibility (used by upper layer EcuM) */

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

#define CRYPTO_30_VHSM_CODE
#define CRYPTO_30_VHSM_APPL_CODE
#define CRYPTO_30_VHSM_CONST

#define CRYPTO_30_VHSM_VAR_NOINIT
#define CRYPTO_30_VHSM_VAR_INIT
#define CRYPTO_30_VHSM_VAR_ZERO_INIT
#define CRYPTO_30_VHSM_APPL_VAR
#define CRYPTO_30_VHSM_APPL_DATA

/**********************************************************************************************************************
 *  CRYPTO_30_VHSM END
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  DrvDio_VttCanoe01Asr START 
 **********************************************************************************************************************/

#define DIO_APPL_CONST
#define DIO_APPL_DATA
#define DIO_CODE
#define DIO_VAR

/**********************************************************************************************************************
 *  DrvDio_VttCanoe01Asr END
 **********************************************************************************************************************/




/**********************************************************************************************************************
 *  DrvEep_VttCanoe01Asr START 
 **********************************************************************************************************************/

#define EEP_APPL_CODE
#define EEP_APPL_CONST
#define EEP_APPL_DATA
#define EEP_CODE
#define EEP_VAR

/**********************************************************************************************************************
 *  DrvEep_VttCanoe01Asr END
 **********************************************************************************************************************/




/**********************************************************************************************************************
 *  ETHSWT_30_88Q5050 START
 *********************************************************************************************************************/

#define ETHSWT_30_88Q5050_CODE
#define ETHSWT_30_88Q5050_CODE_FAST
#define ETHSWT_30_88Q5050_CODE_ISR

#define ETHSWT_30_88Q5050_CONST
#define ETHSWT_30_88Q5050_CONST_FAST
#define ETHSWT_30_88Q5050_PBCFG

#define ETHSWT_30_88Q5050_VAR_INIT
#define ETHSWT_30_88Q5050_VAR_NOINIT
#define ETHSWT_30_88Q5050_VAR_ZERO_INIT
#define ETHSWT_30_88Q5050_VAR_INIT_FAST
#define ETHSWT_30_88Q5050_VAR_NOINIT_FAST
#define ETHSWT_30_88Q5050_VAR_ZERO_INIT_FAST

#define ETHSWT_30_88Q5050_VAR_INIT_NOCACHE
#define ETHSWT_30_88Q5050_VAR_NOINIT_NOCACHE
#define ETHSWT_30_88Q5050_VAR_ZERO_INIT_NOCACHE

#define ETHSWT_30_88Q5050_APPL_VAR
#define ETHSWT_30_88Q5050_APPL_CONST

/**********************************************************************************************************************
 *  ETHSWT_30_88Q5050 END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  ETH_30_TC3XX START 
 *********************************************************************************************************************/

#define ETH_30_TC3XX_CODE
#define ETH_30_TC3XX_CODE_ISR

#define ETH_30_TC3XX_CONST
#define ETH_30_TC3XX_APPL_CONST
#define ETH_30_TC3XX_PBCFG
#define ETH_30_TC3XX_APPL_DATA
#define ETH_30_TC3XX_APPL_VAR

#define ETH_30_TC3XX_APPL_CODE

#define ETH_30_TC3XX_VAR_NOINIT
#define ETH_30_TC3XX_VAR_ZERO_INIT

/* Extension of compiler abstraction due to lack of possibility to define pragmas/attributes behind the variable
 * (e.g. needed for GNU compiler to define alignment for each variable within a section)                             */

#define ETH_BUF_VAR(vartype, memclass, preattr, postattr, varname)    VAR(vartype, memclass) preattr varname postattr
#define ETH_DESC_VAR(vartype, memclass, preattr, postattr, varname)   VAR(vartype, memclass) preattr varname postattr

#define ETH_30_TC3XX_BUFFER_PRE_ATTR
#define ETH_30_TC3XX_BUFFER_POST_ATTR
#define ETH_30_TC3XX_DESCRIPTOR_PRE_ATTR
#define ETH_30_TC3XX_DESCRIPTOR_POST_ATTR

/**********************************************************************************************************************
 *  ETH_30_TC3XX END
 *********************************************************************************************************************/
 


/**********************************************************************************************************************
 *  ETH_30_VTT START 
 *********************************************************************************************************************/

#define ETH_30_VTT_CODE
#define ETH_30_VTT_CODE_ISR

#define ETH_30_VTT_CONST
#define ETH_30_VTT_APPL_CONST
#define ETH_30_VTT_PBCFG
#define ETH_30_VTT_APPL_DATA
#define ETH_30_VTT_APPL_VAR

#define ETH_30_VTT_APPL_CODE

#define ETH_30_VTT_VAR_NOINIT
#define ETH_30_VTT_VAR_ZERO_INIT

/* Extension of compiler abstraction due to lack of possibility to define pragmas/attributes behind the variable
 * (e.g. needed for GNU compiler to define alignment for each variable within a section)                             */

#define ETH_BUF_VAR(vartype, memclass, preattr, postattr, varname)    VAR(vartype, memclass) preattr varname postattr
#define ETH_DESC_VAR(vartype, memclass, preattr, postattr, varname)   VAR(vartype, memclass) preattr varname postattr

#define ETH_30_VTT_BUFFER_PRE_ATTR
#define ETH_30_VTT_BUFFER_POST_ATTR
#define ETH_30_VTT_DESCRIPTOR_PRE_ATTR
#define ETH_30_VTT_DESCRIPTOR_POST_ATTR

/**********************************************************************************************************************
 *  ETH_30_VTT END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  DrvFls_VttCanoe01Asr START 
 **********************************************************************************************************************/

#define FLS_APPL_CODE
#define FLS_APPL_CONST
#define FLS_APPL_DATA
#define FLS_CODE
#define FLS_VAR

/**********************************************************************************************************************
 *  DrvFls_VttCanoe01Asr END
 **********************************************************************************************************************/




/**********************************************************************************************************************
 *  DrvGpt_VttCanoe01Asr START 
 *********************************************************************************************************************/

#define GPT_APPL_CODE
#define GPT_APPL_CONST
#define GPT_APPL_DATA
#define GPT_CODE
#define GPT_VAR

/**********************************************************************************************************************
 *  DrvGpt_VttCanoe01Asr END
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  I2c START 
 **********************************************************************************************************************/

#define I2C_CODE
#define I2C_VAR
#define I2C_VAR_NOINIT
#define I2C_VAR_INIT
#define I2C_VAR_ZERO_INIT
#define I2C_CONST
#define I2C_PBCFG
#define I2C_APPL_CODE
#define I2C_APPL_DATA

#ifndef REGSPACE
#  error "REGSPACE not defined"
#endif

#ifndef MSR_REGSPACE
#  define MSR_REGSPACE    REGSPACE
#endif

/**********************************************************************************************************************
 *  I2c END
 **********************************************************************************************************************/



/**********************************************************************************************************************
 *  DrvIcu_VttCanoe01Asr START 
 *********************************************************************************************************************/

#define ICU_APPL_CODE
#define ICU_APPL_CONST
#define ICU_APPL_DATA
#define ICU_CODE
#define ICU_VAR

/**********************************************************************************************************************
 *  DrvIcu_VttCanoe01Asr END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  DrvMcu_VttCanoe01Asr START 
 **********************************************************************************************************************/

#define MCU_APPL_CONST
#define MCU_APPL_DATA
#define MCU_CODE
#define MCU_VAR

/**********************************************************************************************************************
 *  DrvMcu_VttCanoe01Asr END
 **********************************************************************************************************************/




/**********************************************************************************************************************
 *  DrvPort_VttCanoe01Asr START 
 *********************************************************************************************************************/

#define PORT_APPL_CONST
#define PORT_APPL_DATA
#define PORT_CODE
#define PORT_VAR

/**********************************************************************************************************************
 *  DrvPort_VttCanoe01Asr END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  DrvPwm_VttCanoe01Asr START 
 *********************************************************************************************************************/

#define PWM_APPL_CODE
#define PWM_APPL_CONST
#define PWM_APPL_DATA
#define PWM_CODE
#define PWM_VAR

/**********************************************************************************************************************
 *  DrvPwm_VttCanoe01Asr END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  SBC START
 *********************************************************************************************************************/

#define SBC_30_TLF35584_CODE
#define SBC_30_TLF35584_CODE_FAST
#define SBC_30_TLF35584_CODE_ISR

#define SBC_30_TLF35584_CONST
#define SBC_30_TLF35584_CONST_FAST
#define SBC_30_TLF35584_PBCFG

/* NOTE: Use the next keyword for the PBCFG-root-struct only in case of a ASR3.x till ASR4.0.1 implementation. 
   In case of a ASR4.0.3 (CFG5) implementation use for the PBCFG-root-struct the keyword SBC_PBCFG as well and remove the following keyword from this template. */
#define SBC_30_TLF35584_PBCFG_ROOT

#define SBC_30_TLF35584_VAR_PBCFG /* ESCAN00065502 */

#define SBC_30_TLF35584_VAR_INIT
#define SBC_30_TLF35584_VAR_NOINIT
#define SBC_30_TLF35584_VAR_ZERO_INIT
#define SBC_30_TLF35584_VAR_INIT_FAST
#define SBC_30_TLF35584_VAR_NOINIT_FAST
#define SBC_30_TLF35584_VAR_ZERO_INIT_FAST

#define SBC_30_TLF35584_VAR_INIT_NOCACHE
#define SBC_30_TLF35584_VAR_NOINIT_NOCACHE
#define SBC_30_TLF35584_VAR_ZERO_INIT_NOCACHE

#define SBC_30_TLF35584_APPL_DATA

/**********************************************************************************************************************
 *  SBC END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  DrvSpi_VttCanoe01Asr START
 *********************************************************************************************************************/

#define SPI_APPL_CODE
#define SPI_APPL_CONST
#define SPI_APPL_DATA
#define SPI_CODE
#define SPI_VAR

/**********************************************************************************************************************
 *  DrvSpi_VttCanoe01Asr END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  ETHTRCV_30_88Q1010 START 
 *********************************************************************************************************************/

#define ETHTRCV_30_88Q1010_CODE
#define ETHTRCV_30_88Q1010_CODE_INLINE
#define ETHTRCV_30_88Q1010_CODE_FAST
#define ETHTRCV_30_88Q1010_CODE_ISR

#define ETHTRCV_30_88Q1010_CONST
#define ETHTRCV_30_88Q1010_CONST_FAST
#define ETHTRCV_30_88Q1010_PBCFG


#define ETHTRCV_30_88Q1010_PBCFG_ROOT

#define ETHTRCV_30_88Q1010_VAR_PBCFG

#define ETHTRCV_30_88Q1010_APPL_VAR
#define ETHTRCV_30_88Q1010_APPL_CONST
#define ETHTRCV_30_88Q1010_APPL_CODE
#define ETHTRCV_30_88Q1010_APPL_DATA
#define ETHTRCV_30_88Q1010_VAR_NOINIT
#define ETHTRCV_30_88Q1010_VAR_ZERO_INIT
#define ETHTRCV_30_88Q1010_VAR_INIT_FAST
#define ETHTRCV_30_88Q1010_VAR_NOINIT_FAST
#define ETHTRCV_30_88Q1010_VAR_ZERO_INIT_FAST

#define ETHTRCV_30_88Q1010_VAR_INIT_NOCACHE
#define ETHTRCV_30_88Q1010_VAR_NOINIT_NOCACHE
#define ETHTRCV_30_88Q1010_VAR_ZERO_INIT_NOCACHE

/**********************************************************************************************************************
 *  ETHTRCV_30_88Q1010 END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  ETHTRCV_30_88Q2112 START 
 *********************************************************************************************************************/

#define ETHTRCV_30_88Q2112_CODE
#define ETHTRCV_30_88Q2112_CODE_INLINE
#define ETHTRCV_30_88Q2112_CODE_FAST
#define ETHTRCV_30_88Q2112_CODE_ISR

#define ETHTRCV_30_88Q2112_CONST
#define ETHTRCV_30_88Q2112_CONST_FAST
#define ETHTRCV_30_88Q2112_PBCFG


#define ETHTRCV_30_88Q2112_PBCFG_ROOT

#define ETHTRCV_30_88Q2112_VAR_PBCFG

#define ETHTRCV_30_88Q2112_APPL_VAR
#define ETHTRCV_30_88Q2112_APPL_CONST
#define ETHTRCV_30_88Q2112_APPL_CODE
#define ETHTRCV_30_88Q2112_APPL_DATA
#define ETHTRCV_30_88Q2112_VAR_NOINIT
#define ETHTRCV_30_88Q2112_VAR_ZERO_INIT
#define ETHTRCV_30_88Q2112_VAR_INIT_FAST
#define ETHTRCV_30_88Q2112_VAR_NOINIT_FAST
#define ETHTRCV_30_88Q2112_VAR_ZERO_INIT_FAST

#define ETHTRCV_30_88Q2112_VAR_INIT_NOCACHE
#define ETHTRCV_30_88Q2112_VAR_NOINIT_NOCACHE
#define ETHTRCV_30_88Q2112_VAR_ZERO_INIT_NOCACHE

/**********************************************************************************************************************
 *  ETHTRCV_30_88Q2112 END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CANTRCV_30_TJA1040 START 
 *********************************************************************************************************************/

#define CANTRCV_30_TJA1040_CODE
#define CANTRCV_30_TJA1040_CODE_FAST
#define CANTRCV_30_TJA1040_CODE_ISR

#define CANTRCV_30_TJA1040_CONST
#define CANTRCV_30_TJA1040_CONST_FAST
#define CANTRCV_30_TJA1040_PBCFG

#define CANTRCV_30_TJA1040_VAR_PBCFG /* ESCAN00065502 */

#define CANTRCV_30_TJA1040_VAR_INIT
#define CANTRCV_30_TJA1040_VAR_NOINIT
#define CANTRCV_30_TJA1040_APPL_VAR
#define CANTRCV_30_TJA1040_APPL_CODE
#define CANTRCV_30_TJA1040_VAR_ZERO_INIT
#define CANTRCV_30_TJA1040_VAR_INIT_FAST
#define CANTRCV_30_TJA1040_VAR_NOINIT_FAST
#define CANTRCV_30_TJA1040_VAR_ZERO_INIT_FAST

#define CANTRCV_30_TJA1040_VAR_INIT_NOCACHE
#define CANTRCV_30_TJA1040_VAR_NOINIT_NOCACHE
#define CANTRCV_30_TJA1040_VAR_ZERO_INIT_NOCACHE



/**********************************************************************************************************************
 *  CANTRCV_30_TJA1040 END
 *********************************************************************************************************************/ /* PRQA S 0883 */ /* Appears only while testing */


/**********************************************************************************************************************
 *  CANTRCV_30_TJA1043 START 
 *********************************************************************************************************************/

#define CANTRCV_30_TJA1043_CODE
#define CANTRCV_30_TJA1043_CODE_FAST
#define CANTRCV_30_TJA1043_CODE_ISR

#define CANTRCV_30_TJA1043_CONST
#define CANTRCV_30_TJA1043_CONST_FAST
#define CANTRCV_30_TJA1043_PBCFG

#define CANTRCV_30_TJA1043_VAR_PBCFG /* ESCAN00065502 */

#define CANTRCV_30_TJA1043_VAR_INIT
#define CANTRCV_30_TJA1043_VAR_NOINIT
#define CANTRCV_30_TJA1043_APPL_VAR
#define CANTRCV_30_TJA1043_APPL_CODE
#define CANTRCV_30_TJA1043_VAR_ZERO_INIT
#define CANTRCV_30_TJA1043_VAR_INIT_FAST
#define CANTRCV_30_TJA1043_VAR_NOINIT_FAST
#define CANTRCV_30_TJA1043_VAR_ZERO_INIT_FAST

#define CANTRCV_30_TJA1043_VAR_INIT_NOCACHE
#define CANTRCV_30_TJA1043_VAR_NOINIT_NOCACHE
#define CANTRCV_30_TJA1043_VAR_ZERO_INIT_NOCACHE



/**********************************************************************************************************************
 *  CANTRCV_30_TJA1043 END
 *********************************************************************************************************************/ /* PRQA S 0883 */ /* Appears only while testing */


/**********************************************************************************************************************
 *  ETHTRCV 30 VTT START 
 *********************************************************************************************************************/

#define ETHTRCV_30_VTT_CODE

#define ETHTRCV_30_VTT_CONST
#define ETHTRCV_30_VTT_APPL_CONST
#define ETHTRCV_30_VTT_PBCFG
#define ETHTRCV_30_VTT_APPL_DATA

#define ETHTRCV_30_VTT_VAR_NOINIT
#define ETHTRCV_30_VTT_VAR_ZERO_INIT

/**********************************************************************************************************************
 *  ETHTRCV 30 VTT END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  WDG_30_SBC START
 *********************************************************************************************************************/

#define WDG_30_SBC_CODE
#define WDG_30_SBC_CONST
#define WDG_30_SBC_VAR
#define WDG_30_SBC_VAR_INIT
#define WDG_30_SBC_APPL_DATA
#define WDG_30_SBC_PBCFG


/**********************************************************************************************************************
 *  WDG_30_SBC END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  DrvWd_VttCanoe01Asr START 
 **********************************************************************************************************************/

#define WDG_APPL_CONST
#define WDG_APPL_DATA
#define WDG_CODE
#define WDG_VAR

/**********************************************************************************************************************
 *  DrvWd_VttCanoe01Asr END
 **********************************************************************************************************************/



/**********************************************************************************************************************
 *  PDUR START 
 *********************************************************************************************************************/

#define PDUR_CODE
#define PDUR_VAR_NOINIT
#define PDUR_VAR_ZERO_INIT
#define PDUR_VAR
#define PDUR_CONST
#define PDUR_PBCFG
#define PDUR_VAR_PBCFG
#define PDUR_APPL_DATA
#define PDUR_APPL_CODE

/**********************************************************************************************************************
 *  PDUR END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  If_Asr4IfWd START
 *********************************************************************************************************************/

#define WDGIF_CODE
#define WDGIF_CONST
#define WDGIF_VAR
#define WDGIF_APPL_DATA
#define WDGIF_APPL_CONST

/**********************************************************************************************************************
 *  If_Asr4IfWd END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  CANIF START 
 *********************************************************************************************************************/

#define CANIF_CODE
#define CANIF_CODE_FAST
#define CANIF_CODE_ISR


#define CANIF_CONST
#define CANIF_CONST_FAST
#define CANIF_PBCFG

#define CANIF_VAR_PBCFG /* ESCAN00065502 */

#define CANIF_VAR_INIT
#define CANIF_VAR_NOINIT
#define CANIF_VAR_ZERO_INIT

#define CANIF_VAR_INIT_FAST
#define CANIF_VAR_NOINIT_FAST
#define CANIF_VAR_ZERO_INIT_FAST

#define CANIF_VAR_INIT_NOCACHE
#define CANIF_VAR_NOINIT_NOCACHE
#define CANIF_VAR_ZERO_INIT_NOCACHE


#define CANIF_APPL_CODE
#define CANIF_APPL_VAR
#define CANIF_APPL_PBCFG


/*-------------------------------------------------------------------------------------------------------------------*/

/* Has to be kept in default section -> Default access */
#define CANIF_VAR_STACK


/* VAR section of higher layers (TP / NM / PduR / CanSM / EcuM) automatically mapped to APPL_VAR */
#define CANIF_APPL_STATE_VAR   CANIF_APPL_VAR
#define CANIF_APPL_MSG_VAR     CANIF_APPL_VAR

/* VAR section of lower layers (CAN Driver / Transceiver Driver) automatically mapped to APPL_VAR */
#define CANIF_CBK_VAR          CANIF_APPL_VAR

/* #define CANIF_CBK_TRCV_VAR     CANIF_CBK_VAR    not used yet */
#define CANIF_CBK_DRV_VAR      CANIF_CBK_VAR

/* Code sections - DO NOT MODIFY */
#define CANIF_CBK_TRCV_CODE     CANIF_APPL_CODE
#define CANIF_CBK_CANDRV_CODE   CANIF_APPL_CODE
#define CANIF_APPL_STATE_CODE   CANIF_APPL_CODE
#define CANIF_APPL_MSG_CODE     CANIF_APPL_CODE


/* Upper layer data pointer */
#define CANIF_UL_STANDARD_VAR    CANIF_APPL_VAR
#define CANIF_UL_ADVANCED_VAR    CANIF_APPL_VAR
#define CANIF_UL_OSEKNM_VAR      CANIF_APPL_VAR

/**********************************************************************************************************************
 *  CANIF END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CRYIF START
 *********************************************************************************************************************/

#define CRYIF_CODE
#define CRYIF_CONST

#define CRYIF_VAR_ZERO_INIT
#define CRYIF_APPL_VAR

/**********************************************************************************************************************
 *  CRYIF END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  ETHIF START 
 *********************************************************************************************************************/

#define ETHIF_CODE
#define ETHIF_CODE_ISR
#define ETHIF_ETHCTRL_INLINE_CODE
#define ETHIF_ETHTRCV_INLINE_CODE
#define ETHIF_ETHSWT_INLINE_CODE
#define ETHIF_GW_INLINE_CODE
#define ETHIF_LINK_INLINE_CODE
#define ETHIF_MIRROR_INLINE_CODE
#define ETHIF_MODE_INLINE_CODE
#define ETHIF_RX_INLINE_CODE
#define ETHIF_STATS_INLINE_CODE
#define ETHIF_SWTMGMT_INLINE_CODE
#define ETHIF_SWTTIME_INLINE_CODE
#define ETHIF_TX_INLINE_CODE
#define ETHIF_UTILS_INLINE_CODE
#define ETHIF_ZEROCOPY_INLINE_CODE

#define ETHIF_CONST

#define ETHIF_APPL_VAR
#define ETHIF_APPL_DATA
#define ETHIF_APPL_CODE

#define ETHIF_VAR_NOINIT
#define ETHIF_VAR_NOINIT_FAST

#define ETHIF_VAR_INIT

/**********************************************************************************************************************
 *  ETHIF END
 *********************************************************************************************************************/


#define MEMIF_CODE
#define MEMIF_PRIVATE_CODE
#define MEMIF_CONST
#define MEMIF_APPL_DATA


/**********************************************************************************************************************
 *  SOAD START 
 *********************************************************************************************************************/

#define SOAD_CODE

#define SOAD_APPL_DATA
#define SOAD_APPL_VAR

#define SOAD_CONST
#define SOAD_PBCFG

#define SOAD_VAR_NOINIT
#define SOAD_VAR_ZERO_INIT
#define SOAD_VAR_PBCFG

/**********************************************************************************************************************
 *  SOAD END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  Com START 
 *********************************************************************************************************************/

/* Module Constant Data */
#define COM_CONST
/* Module Constant Data of the Postbuild Configuration */
#define COM_PBCFG
/* Module Var Data of the Postbuild Configuration */
#define COM_VAR_PBCFG


/* Module Implementation */
#define COM_CODE

/* Module Variables which are initialized by the startup code or by the call of Com_InitMemory() */
#define COM_VAR_NOINIT
/* Module Variables which are initialized by call of Com_Init() */
#define COM_VAR_ZERO_INIT
/* Module Variables which are initialized by call of Com_Init() */
#define COM_VAR_INIT

/* Application Code Implementation (e.g. Callbacks) */
#define COM_APPL_CODE
/* Application Buffer which is located in RAM */
#define COM_APPL_VAR
/* Application Buffer which is located in ROM or RAM */
#define COM_APPL_DATA

/**********************************************************************************************************************
 *  Com END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  IpduM START 
 *********************************************************************************************************************/

#define IPDUM_CODE
#define IPDUM_CONST
#define IPDUM_PBCFG
#define IPDUM_VAR_PBCFG
#define IPDUM_VAR_INIT
#define IPDUM_VAR_ZERO_INIT
#define IPDUM_VAR_NOINIT
#define IPDUM_APPL_DATA

/**********************************************************************************************************************
 *  IpduM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  LDCOM START
 *********************************************************************************************************************/
/* Module Implementation */
#define LDCOM_CODE

/* Module Constant Data */
#define LDCOM_CONST
/* Module Constant Data of the Postbuild Configuration */
#define LDCOM_PBCFG
/* Module Var Data of the Postbuild Configuration */
#define LDCOM_VAR_PBCFG

/* Module Variables which are initialized by call of LdCom_Init() */
#define LDCOM_VAR_INIT
/* Module Variables which are initialized by the startup code or by the call of LdCom_InitMemory() */
#define LDCOM_VAR_NOINIT
/* Module Variables which are initialized by call of LdCom_Init() */
#define LDCOM_VAR_ZERO_INIT

/* Application Code Implementation (e.g. Callbacks) */
#define LDCOM_APPL_CODE
/* Application Buffer which is located in RAM */
#define LDCOM_APPL_VAR
/* Application Buffer which is located in ROM or RAM */
#define LDCOM_APPL_DATA

/**********************************************************************************************************************
 *  LDCOM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  SECOC START 
 *********************************************************************************************************************/
/* Module Implementation */
#define SECOC_CODE

/* Module Constant Data */
#define SECOC_CONST
/* Module Constant Data of the Postbuild Configuration */
#define SECOC_PBCFG
/* Module Var Data of the Postbuild Configuration */
#define SECOC_VAR_PBCFG


/* Module Variables which are initialized by call of SecOC_Init() */
#define SECOC_VAR_INIT
/* Module Variables which are initialized by the startup code or by the call of SecOC_InitMemory() */
#define SECOC_VAR_NOINIT
/* Module Variables which are initialized by call of SecOC_Init() */
#define SECOC_VAR_ZERO_INIT

/* Application Code Implementation (e.g. Callbacks) */
#define SECOC_APPL_CODE
/* Application Buffer which is located in RAM */
#define SECOC_APPL_VAR
/* Application Buffer which is located in ROM or RAM */
#define SECOC_APPL_DATA

/**********************************************************************************************************************
 *  SECOC END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  LHYP START
 *********************************************************************************************************************/


#define LHYP_CODE
#define LHYP_CONST
#define LHYP_LOCAL static

#define LHYP_VAR_NOINIT
#define LHYP_VAR_ZERO_INIT
#define LHYP_ALWAYS_INLINE

#if !defined (LHYP_LOCAL_INLINE)
# define LHYP_LOCAL_INLINE            LOCAL_INLINE
#endif


/**********************************************************************************************************************
 *  LHYP END
 *********************************************************************************************************************/


/* Temporary container for definition of STATIC abstraction */

#define STATIC static
/*Workaround for using AUTOSAR 4.1.2 Dem_DcmIf API*/



/**********************************************************************************************************************
 *  ADC START
 *********************************************************************************************************************/

#define ADC_CODE
#define ADC_VAR_NOINIT
#define ADC_VAR_POWER_ON_INIT
#define ADC_VAR_FAST
#define ADC_VAR
#define ADC_CONST
#define ADC_APPL_DATA
#define ADC_APPL_CONST
#define ADC_APPL_CODE
#define ADC_APPL_REGSPACE

/**********************************************************************************************************************
 *  ADC END
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
 *  DIO START
 *********************************************************************************************************************/

#define DIO_CODE
#define DIO_VAR_NOINIT
#define DIO_VAR_POWER_ON_INIT
#define DIO_VAR_FAST
#define DIO_VAR
#define DIO_CONST
#define DIO_APPL_DATA
#define DIO_APPL_CONST
#define DIO_APPL_CODE
#define DIO_APPL_REGSPACE

/**********************************************************************************************************************
 *  DIO END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  DMA START
 *********************************************************************************************************************/

#define DMA_CODE
#define DMA_VAR_NOINIT
#define DMA_VAR_POWER_ON_INIT
#define DMA_VAR_FAST
#define DMA_VAR
#define DMA_CONST
#define DMA_APPL_DATA
#define DMA_APPL_CONST
#define DMA_APPL_CODE
#define DMA_APPL_REGSPACE
#define DMA_PBCFG

/**********************************************************************************************************************
 *  DMA END
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  FEE START
 *********************************************************************************************************************/

#define FEE_CODE
#define FEE_VAR_NOINIT
#define FEE_VAR_POWER_ON_INIT
#define FEE_VAR_FAST
#define FEE_VAR
#define FEE_CONST
#define FEE_APPL_DATA
#define FEE_APPL_CONST
#define FEE_APPL_CODE
#define FEE_APPL_REGSPACE
#define FEE_PBCFG
 
/**********************************************************************************************************************
 *  FEE END
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  FLS START
 *********************************************************************************************************************/

 #define FLS_CODE
#define FLS_VAR_NOINIT
#define FLS_VAR_POWER_ON_INIT
#define FLS_VAR_FAST
#define FLS_VAR
#define FLS_CONST
#define FLS_APPL_DATA
#define FLS_APPL_CONST
#define FLS_APPL_CODE
#define FLS_APPL_REGSPACE
#define FLS_17_DMU_CODE

/**********************************************************************************************************************
 *  FLS END
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  GPT START
 *********************************************************************************************************************/

#define GPT_CODE
#define GPT_VAR_NOINIT
#define GPT_VAR_POWER_ON_INIT
#define GPT_VAR_FAST
#define GPT_VAR
#define GPT_CONST
#define GPT_APPL_DATA
#define GPT_APPL_CONST
#define GPT_APPL_CODE
#define GPT_APPL_REGSPACE

/**********************************************************************************************************************
 *  GPT END
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  ICU START
 *********************************************************************************************************************/

#define ICU_CODE
#define ICU_VAR_NOINIT
#define ICU_VAR_POWER_ON_INIT
#define ICU_VAR_FAST
#define ICU_VAR
#define ICU_CONST
#define ICU_APPL_DATA
#define ICU_APPL_CONST
#define ICU_APPL_CODE
#define ICU_APPL_REGSPACE

/**********************************************************************************************************************
 *  ICU END
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  IRQ START
 *********************************************************************************************************************/

#define IRQ_CODE
#define IRQ_VAR_NOINIT
#define IRQ_VAR_POWER_ON_INIT
#define IRQ_VAR_FAST
#define IRQ_VAR
#define IRQ_CONST
#define IRQ_APPL_DATA
#define IRQ_APPL_CONST
#define IRQ_APPL_CODE
#define IRQ_APPL_REGSPACE

/**********************************************************************************************************************
 *  IRQ END
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  MCU START
 *********************************************************************************************************************/

#define MCU_CODE
#define MCU_VAR_NOINIT
#define MCU_VAR_POWER_ON_INIT
#define MCU_VAR_FAST
#define MCU_VAR
#define MCU_CONST
#define MCU_APPL_DATA
#define MCU_APPL_CONST
#define MCU_APPL_CODE
#define MCU_APPL_REGSPACE

#define GPTA_CODE
#define GPTA_VAR_NOINIT
#define GPTA_VAR_POWER_ON_INIT
#define GPTA_VAR_FAST
#define GPTA_VAR
#define GPTA_CONST
#define GPTA_APPL_DATA
#define GPTA_APPL_CONST
#define GPTA_APPL_CODE
#define GPTA_APPL_REGSPACE

/**********************************************************************************************************************
 *  MCU END
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  PORT START
 *********************************************************************************************************************/

#define PORT_CODE
#define PORT_VAR_NOINIT
#define PORT_VAR_POWER_ON_INIT
#define PORT_VAR_FAST
#define PORT_VAR
#define PORT_CONST
#define PORT_APPL_DATA
#define PORT_APPL_CONST
#define PORT_APPL_CODE
#define PORT_APPL_REGSPACE

/**********************************************************************************************************************
 *  PORT END
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  PWM START
 *********************************************************************************************************************/

#define PWM_CODE
#define PWM_VAR_NOINIT
#define PWM_VAR_POWER_ON_INIT
#define PWM_VAR_FAST
#define PWM_VAR
#define PWM_CONST
#define PWM_APPL_DATA
#define PWM_APPL_CONST
#define PWM_APPL_CODE
#define PWM_APPL_REGSPACE

/**********************************************************************************************************************
 *  PWM END
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  SPI START
 *********************************************************************************************************************/

#define SPI_CODE
#define SPI_VAR_NOINIT
#define SPI_VAR_POWER_ON_INIT
#define SPI_VAR_FAST
#define SPI_VAR
#define SPI_CONST
#define SPI_APPL_DATA
#define SPI_APPL_CONST
#define SPI_APPL_CODE
#define SPI_APPL_REGSPACE

/**********************************************************************************************************************
 *  SPI END
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  WDG START
 *********************************************************************************************************************/

#define WDG_CODE
#define WDG_VAR_NOINIT
#define WDG_VAR_POWER_ON_INIT
#define WDG_VAR_FAST
#define WDG_VAR
#define WDG_CONST
#define WDG_APPL_DATA
#define WDG_APPL_CONST
#define WDG_APPL_CODE
#define WDG_APPL_REGSPACE

/**********************************************************************************************************************
 *  WDG END
 *********************************************************************************************************************/


#define _TASKING_C_TRICORE_ 1



/**********************************************************************************************************************
 *  NvM START 
 *********************************************************************************************************************/

#define NVM_APPL_DATA
#define NVM_APPL_CODE
#define NVM_APPL_CONST

#define NVM_CRC_APPL_DATA

#define NVM_CONFIG_DATA
#define NVM_CONFIG_CONST

#define NVM_FAST_DATA

#define NVM_PRIVATE_CODE
#define NVM_PRIVATE_CONST
#define NVM_PRIVATE_DATA

#define NVM_PUBLIC_CODE
#define NVM_PUBLIC_CONST

/* SchM/RTE declares NvM_MainFunction, using NVM_CODE *
 * It MUST be defined to NVM_PUBLIC_CODE!             */
#define NVM_CODE NVM_PUBLIC_CODE

/**********************************************************************************************************************
 *  NvM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  DBG START 
 *********************************************************************************************************************/


#define DBG_CODE

#define DBG_CONST

#define DBG_VAR_INIT
#define DBG_VAR_NOINIT
#define DBG_VAR_ZERO_INIT

#define DBG_APPL_VAR
#define DBG_PBCFG


/**********************************************************************************************************************
 *  DBG END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  DLT START 
 *********************************************************************************************************************/


#define DLT_CODE

#define DLT_CONST

#define DLT_VAR_INIT
#define DLT_VAR_NOINIT
#define DLT_VAR_ZERO_INIT

#define DLT_APPL_VAR
#define DLT_PBCFG


#define DLTCOM_CODE

#define DLTCOM_CONST

#define DLTCOM_VAR_INIT
#define DLTCOM_VAR_NOINIT
#define DLTCOM_VAR_ZERO_INIT

#define DLTCOM_APPL_DATA
#define DLTCOM_APPL_VAR
#define DLTCOM_PBCFG


/**********************************************************************************************************************
 *  DLT END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  CANNM START 
 *********************************************************************************************************************/

#define CANNM_CODE

#define CANNM_CONST
#define CANNM_PBCFG

#define CANNM_VAR_NOINIT
#define CANNM_VAR_INIT
#define CANNM_VAR_ZERO_INIT
#define CANNM_VAR_PBCFG
#define CANNM_APPL_VAR

/**********************************************************************************************************************
 *  CANNM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  NM START 
 *********************************************************************************************************************/
 
#define NM_CODE
#define NM_APPL_CODE

#define NM_CONST

#define NM_VAR_NO_INIT
#define NM_VAR_INIT
#define NM_APPL_VAR

/**********************************************************************************************************************
 *  NM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  UDPNM START 
 *********************************************************************************************************************/

#define UDPNM_CODE

#define UDPNM_CONST
#define UDPNM_APPL_VAR
#define UDPNM_PBCFG

#define UDPNM_VAR_NOINIT
#define UDPNM_VAR_INIT
#define UDPNM_VAR_ZERO_INIT
#define UDPNM_VAR_PBCFG

/**********************************************************************************************************************
 *  UDPNM END
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  OS START
 *********************************************************************************************************************/

#define OS_CODE                         /* Regular OS code. */
#define OS_CODE_FAST                    /* Time critical OS code. (currently not used) */
#define OS_CODE_SLOW                    /* Not time critical OS code. (currently not used) */
#define OS_CODE_ISR                     /* OS ISRs. (currently not used) */

#define OS_PANICHOOK_CODE               /* Panic Hook */
#define OS_PRETASKHOOK_CODE             /* PreTask Hook */
#define OS_POSTTASKHOOK_CODE            /* PostTask Hook */
#define OS_STARTUPHOOK_CODE             /* Startup Hook */
#define OS_ERRORHOOK_CODE               /* Error Hook */
#define OS_PROTECTIONHOOK_CODE          /* Protection Hook */
#define OS_SHUTDOWNHOOK_CODE            /* Shutdown Hook */

#define OS_CONST                        /* Constant data. */
#define OS_CONST_FAST                   /* Constant data with fast access. (currently not used) */

#define OS_VAR_INIT                     /* Initialized dynamic data. (Not used by the OS) */
#define OS_VAR_NOINIT                   /* Not initialized dynamic data. */
#define OS_VAR_ZERO_INIT                /* Zero initialized dynamic data. */
#define OS_VAR_INIT_FAST                /* Initialized dynamic data with fast access. (Not used by the OS) */
#define OS_VAR_NOINIT_FAST              /* Not initialized dynamic data with fast access. */
#define OS_VAR_ZERO_INIT_FAST           /* Zero initialized dynamic data with fast access. */

#define OS_VAR_INIT_NOCACHE             /* Initialized dynamic data not cached. (Not used by the OS) */
#define OS_VAR_NOINIT_NOCACHE           /* Not initialized dynamic data not cached. */
#define OS_VAR_ZERO_INIT_NOCACHE        /* Zero initialized dynamic data not cached. */

#define OS_APPL_VAR                     /* Dynamic data from user space (always in RAM). */
#define OS_APPL_DATA                    /* Data from user space (maybe in RAM or ROM). */


#include "Os_Compiler_Cfg.h"

/**********************************************************************************************************************
 *  OS END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CSM START
 *********************************************************************************************************************/

#define CSM_CODE
#define CSM_APPL_CODE

#define CSM_CONST

#define CSM_VAR_NOINIT
#define CSM_VAR_ZERO_INIT
#define CSM_APPL_VAR
#define CSM_APPL_CONST

/**********************************************************************************************************************
 *  CSM END
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  VIKE START 
 *********************************************************************************************************************/

#define VIKE_CODE
#define VIKE_CONST

#define VIKE_VAR_INIT
#define VIKE_VAR_NOINIT
#define VIKE_VAR_ZERO_INIT

#define VIKE_APPL_VAR
#define VIKE_APPL_DATA
#define VIKE_APPL_CODE

/**********************************************************************************************************************
 *  VIKE END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  BSWM START 
 *********************************************************************************************************************/

#define BSWM_CODE
#define BSWM_CONST
#define BSWM_PBCFG
#define BSWM_VAR_ZERO_INIT
#define BSWM_APPL_DATA
#define BSWM_VAR_NOINIT
#define BSWM_VAR_PBCFG

/**********************************************************************************************************************
 *  BSWM END
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  SYSSERVICE_ASR4ECUM START 
 *********************************************************************************************************************/
#define ECUM_APPL_DATA 
#define ECUM_CODE
#define ECUM_CONST
#define ECUM_PBCFG
#define ECUM_VAR_NOINIT 

/**********************************************************************************************************************
 *  SYSSERVICE_ASR4ECUM END
 *********************************************************************************************************************/


/* -------------------- FiM Compiler Abstraction -------------------- */
#define FIM_CODE
#define FIM_CONST
#define FIM_PBCFG
#define FIM_PBCFG_ROOT
#define FIM_VAR_NOINIT
#define FIM_VAR_INIT
#define FIM_VAR_ZERO_INIT
#define FIM_APPL_DATA
#define FIM_DEM_DATA



/**********************************************************************************************************************
 *  SysService_Asr4WdM START 
 *********************************************************************************************************************/

#define WDGM_CODE
#define WDGM_APPL_CODE
#define WDGM_CONST
#define WDGM_VAR_INIT
#define WDGM_VAR_NOINIT
#define WDGM_APPL_DATA
#define WDGM_APPL_CONST

/**********************************************************************************************************************
 *  SysService_Asr4WdM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  SYSSERVICE_ASRCRC START 
 *********************************************************************************************************************/

#define CRC_APPL_DATA
#define CRC_PRIVATE_CODE
#define CRC_CODE
#define CRC_CONST

/**********************************************************************************************************************
 *  SYSSERVICE_ASRCRC END
 *********************************************************************************************************************/


# define DET_CODE
# define DET_VAR
# define DET_APPL_DATA
# define DET_CONST



/**********************************************************************************************************************
 *  ETM START 
 *********************************************************************************************************************/

#define ETM_CODE
#define ETM_CODE_FAST
#define ETM_CODE_ISR

#define ETM_APPL_VAR
#define ETM_APPL_DATA
#define ETM_APPL_CONST

#define ETM_CONST
#define ETM_CONST_FAST
#define ETM_PBCFG

#define ETM_VAR_PBCFG /* ESCAN00065502 */

#define ETM_VAR_INIT
#define ETM_VAR_NOINIT
#define ETM_VAR_ZERO_INIT

#define ETM_VAR_INIT_FAST
#define ETM_VAR_NOINIT_FAST
#define ETM_VAR_ZERO_INIT_FAST

#define ETM_VAR_INIT_NOCACHE
#define ETM_VAR_NOINIT_NOCACHE
#define ETM_VAR_ZERO_INIT_NOCACHE

/**********************************************************************************************************************
 *  ETM END
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  SysService_AsrRamTst START
 *********************************************************************************************************************/

#define RAMTST_APPL_DATA
#define RAMTST_CODE
#define RAMTST_VAR
#define RAMTST_CONST
#define RAMTST_PBCFG

/**********************************************************************************************************************
 *  SysService_AsrRamTst END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  SD START 
 *********************************************************************************************************************/

#define SD_CODE

#define SD_APPL_DATA
#define SD_APPL_VAR

#define SD_CONST
#define SD_PBCFG

#define SD_VAR_NOINIT
#define SD_VAR_INIT
#define SD_VAR_ZERO_INIT
#define SD_VAR_PBCFG

/**********************************************************************************************************************
 *  SD END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  STBM START
 *********************************************************************************************************************/

/* Module Constant Data */
#define STBM_CONST
#define STBM_PBCFG

/* Module Implementation */
#define STBM_CODE

/* Module Variables which are initialized by the startup code */
#define STBM_VAR_ZERO_INIT
/* Module Variables which are initialized by call of StbM_Init() */
#define STBM_VAR_NOINIT

/* Application Code Implementation (e.g. Callbacks) */
#define STBM_APPL_CODE
/* Application Buffer which is located in RAM */
#define STBM_APPL_VAR
/* Application Buffer which is located in ROM or RAM */
#define STBM_APPL_DATA

/**********************************************************************************************************************
 *  STBM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  CANTSYN START 
 *********************************************************************************************************************/

/* Module Constant Data */
#define CANTSYN_CONST

/* Module Implementation */
#define CANTSYN_CODE

/* Module Variables which are initialized by the startup code */
#define CANTSYN_VAR_ZERO_INIT
/* Module Variables which are initialized by call of CanTSyn_Init() */
#define CANTSYN_VAR_NOINIT

/* Application Buffer which is located in RAM */
#define CANTSYN_APPL_VAR
/* Application Buffer which is located in ROM or RAM */
#define CANTSYN_APPL_DATA

/**********************************************************************************************************************
 *  CANTSYN END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  ETHTSYN START 
 *********************************************************************************************************************/

#define ETHTSYN_CODE

#define ETHTSYN_CONST
#define ETHTSYN_PBCFG

#define ETHTSYN_APPL_VAR
#define ETHTSYN_APPL_DATA

#define ETHTSYN_VAR_NOINIT
#define ETHTSYN_VAR_ZERO_INIT

/**********************************************************************************************************************
 *  ETHTSYN END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  SysService_E2eLib START 
 *********************************************************************************************************************/


#define E2E_CODE
#define E2E_VAR_NOINIT
#define E2E_VAR_POWER_ON_INIT
#define E2E_VAR_FAST
#define E2E_VAR
#define E2E_CONST
#define E2E_APPL_DATA
#define E2E_APPL_CONST
#define E2E_APPL_CODE

/**********************************************************************************************************************
 *  SysService_E2eLib END
 *********************************************************************************************************************/





/**********************************************************************************************************************
 *  E2E START 
 *********************************************************************************************************************/


#define E2EPW_CODE
#define E2EPW_VAR_NOINIT
#define E2EPW_VAR_INIT
#define E2EPW_VAR_POWER_ON_INIT
#define E2EPW_VAR_FAST
#define E2EPW_VAR
#define E2EPW_CONST
#define E2EPW_APPL_DATA
#define E2EPW_APPL_CONST
#define E2EPW_APPL_CODE
#define E2EPW_APPL_VAR


/**********************************************************************************************************************
 *  E2E END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  IPBASE START
 *********************************************************************************************************************/

#define IPBASE_CODE

#define IPBASE_CONST
#define IPBASE_APPL_CONST
#define IPBASE_PBCFG
#define IPBASE_APPL_DATA

#define IPBASE_VAR_NOINIT

/**********************************************************************************************************************
 *  IPBASE END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  SRP START 
 *********************************************************************************************************************/

#define SRP_CODE

#define SRP_CONST
#define SRP_VAR

#define SRP_VAR_ZERO_INIT

/**********************************************************************************************************************
 *  SRP END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CANTP START 
 *********************************************************************************************************************/

#define CANTP_CODE
#define CANTP_CONST

#define CANTP_PBCFG
#define CANTP_VAR_PBCFG

#define CANTP_VAR_INIT
#define CANTP_VAR_NOINIT

#define CANTP_APPL_CODE
#define CANTP_APPL_DATA

/**********************************************************************************************************************
 *  CANTP END
 *********************************************************************************************************************/



/***********************************************************************************************************************
 *  SOMEIPTP START 
 **********************************************************************************************************************/

#define SOMEIPTP_CODE

#define SOMEIPTP_CONST

#define SOMEIPTP_APPL_VAR
#define SOMEIPTP_APPL_DATA
#define SOMEIPTP_APPL_CODE

#define SOMEIPTP_VAR_ZERO_INIT
#define SOMEIPTP_VAR_NOINIT

#define SOMEIPTP_PBCFG
#define SOMEIPTP_VAR_PBCFG

/***********************************************************************************************************************
 *  SOMEIPTP END
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  TCPIP START 
 *********************************************************************************************************************/

#define TCPIP_CODE
#define TCPIP_CODE_ISR

#define TCPIP_CONST
#define TCPIP_PBCFG

#define TCPIP_APPL_CONST
#define TCPIP_APPL_DATA
#define TCPIP_APPL_VAR

#define TCPIP_VAR_INIT
#define TCPIP_VAR_ZERO_INIT
#define TCPIP_VAR_NOINIT


#define IPV4_CODE

#define IPV4_CONST
#define IPV4_PBCFG
#define IPV4_PBCFG_ROOT

#define IPV4_VAR_INIT
#define IPV4_VAR_ZERO_INIT
#define IPV4_VAR_NOINIT

#define IPV4_APPL_CODE
#define IPV4_APPL_DATA
#define IPV4_APPL_CONST
#define IPV4_APPL_PBCFG
#define IPV4_APPL_VAR

#define IPV6_CODE

#define IPV6_CONST
#define IPV6_PBCFG
#define IPV6_PBCFG_ROOT

#define IPV6_VAR_INIT
#define IPV6_VAR_ZERO_INIT
#define IPV6_VAR_NOINIT

#define IPV6_APPL_CODE
#define IPV6_APPL_DATA
#define IPV6_APPL_CONST
#define IPV6_APPL_PBCFG
#define IPV6_APPL_VAR

/**********************************************************************************************************************
 *  TCPIP END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  RTP START 
 *********************************************************************************************************************/

#define RTP_CODE

#define RTP_APPL_DATA
#define RTP_APPL_CONST
#define RTP_APPL_CODE

#define RTP_CONST

#define RTP_VAR
#define RTP_VAR_NOINIT
#define RTP_VAR_INIT
#define RTP_VAR_ZERO_INIT

/**********************************************************************************************************************
 *  RTP END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  VSTDLIB START
 *********************************************************************************************************************/

#define VSTDLIB_CODE
#define VSTDLIB_VAR_FAR
#define VSTDLIB_APPL_VAR

/**********************************************************************************************************************
 *  VSTDLIB END
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  VttCntrl START
 **********************************************************************************************************************/

#define VTTCNTRL_APPL_DATA
#define VTTCNTRL_CONST
#define VTTCNTRL_CODE
#define VTTCNTRL_APPL_CONST
#define VTTCNTRL_PBCFG
#define VTTCNTRL_APPL_VAR
#define VTTCNTRL_VAR
#define VTTCNTRL_APPL_CODE

/**********************************************************************************************************************
 *  VttCntrl END
 **********************************************************************************************************************/




/* Package Merger: Stop Section CompilerCfgModuleList */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif  /* COMPILER_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Compiler_Cfg.h
 *********************************************************************************************************************/
