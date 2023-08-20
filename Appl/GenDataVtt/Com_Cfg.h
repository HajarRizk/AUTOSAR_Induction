/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Com
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Delphi Deutschland GmbH
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC-397 B-Step
 *    License Scope : The usage is restricted to CBD1800285_D02
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Cfg.h
 *   Generation Time: 2023-08-20 14:13:55
 *           Project: AUTOSAR_Induction - Version 1.0
 *          Delivery: CBD1800285_D02
 *      Tool Version: DaVinci Configurator (beta) 5.19.46 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Pro and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/


#if !defined (COM_CFG_H)
# define COM_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "Com_Types.h"
# include "Com_PBcfg.h"
# include "Com_Cbk.h"
# include "PduR_Cfg.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

#ifndef COM_USE_DUMMY_STATEMENT
#define COM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatement */
#endif
#ifndef COM_DUMMY_STATEMENT
#define COM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef COM_DUMMY_STATEMENT_CONST
#define COM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef COM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define COM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef COM_ATOMIC_VARIABLE_ACCESS
#define COM_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef COM_PROCESSOR_TC397_STEPB
#define COM_PROCESSOR_TC397_STEPB
#endif
#ifndef COM_COMP_GNU
#define COM_COMP_GNU
#endif
#ifndef COM_GEN_GENERATOR_MSR
#define COM_GEN_GENERATOR_MSR
#endif
#ifndef COM_CPUTYPE_BITORDER_LSB2MSB
#define COM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef COM_CONFIGURATION_VARIANT_PRECOMPILE
#define COM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef COM_CONFIGURATION_VARIANT_LINKTIME
#define COM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef COM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define COM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef COM_CONFIGURATION_VARIANT
#define COM_CONFIGURATION_VARIANT COM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef COM_POSTBUILD_VARIANT_SUPPORT
#define COM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  ComPCDataSwitches  Com Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define COM_ACTIVATABLERXCOMIPDUS                                     STD_OFF  /**< Deactivateable: 'Com_ActivatableRxComIPdus' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXPDUINFOIDXOFACTIVATABLERXCOMIPDUS                       STD_OFF  /**< Deactivateable: 'Com_ActivatableRxComIPdus.RxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_ACTIVATABLETXCOMIPDUS                                     STD_OFF  /**< Deactivateable: 'Com_ActivatableTxComIPdus' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXPDUINFOIDXOFACTIVATABLETXCOMIPDUS                       STD_OFF  /**< Deactivateable: 'Com_ActivatableTxComIPdus.TxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_ALWAYSACTIVERXCOMIPDUS                                    STD_ON
#define COM_RXPDUINFOIDXOFALWAYSACTIVERXCOMIPDUS                      STD_ON
#define COM_ALWAYSACTIVETXCOMIPDUS                                    STD_ON
#define COM_TXPDUINFOIDXOFALWAYSACTIVETXCOMIPDUS                      STD_ON
#define COM_CBKRXTOUTFUNCPTR                                          STD_OFF  /**< Deactivateable: 'Com_CbkRxTOutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKRXTOUTFUNCPTRIND                                       STD_OFF  /**< Deactivateable: 'Com_CbkRxTOutFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKDEFFUNCPTR                                        STD_OFF  /**< Deactivateable: 'Com_CbkTxAckDefFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKDEFFUNCPTRIND                                     STD_OFF  /**< Deactivateable: 'Com_CbkTxAckDefFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKIMFUNCPTR                                         STD_OFF  /**< Deactivateable: 'Com_CbkTxAckImFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKIMFUNCPTRIND                                      STD_OFF  /**< Deactivateable: 'Com_CbkTxAckImFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXERRFUNCPTR                                           STD_OFF  /**< Deactivateable: 'Com_CbkTxErrFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXERRFUNCPTRIND                                        STD_OFF  /**< Deactivateable: 'Com_CbkTxErrFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXTOUTFUNCPTR                                          STD_OFF  /**< Deactivateable: 'Com_CbkTxTOutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXTOUTFUNCPTRIND                                       STD_OFF  /**< Deactivateable: 'Com_CbkTxTOutFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONFIGID                                                  STD_ON
#define COM_CONSTVALUEARRAYBASED                                      STD_ON
#define COM_CONSTVALUEFLOAT32                                         STD_OFF  /**< Deactivateable: 'Com_ConstValueFloat32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEFLOAT64                                         STD_OFF  /**< Deactivateable: 'Com_ConstValueFloat64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESINT16                                          STD_OFF  /**< Deactivateable: 'Com_ConstValueSInt16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESINT32                                          STD_OFF  /**< Deactivateable: 'Com_ConstValueSInt32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESINT64                                          STD_OFF  /**< Deactivateable: 'Com_ConstValueSInt64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESINT8                                           STD_OFF  /**< Deactivateable: 'Com_ConstValueSInt8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESIGGRPARRAYACCESS                               STD_OFF  /**< Deactivateable: 'Com_ConstValueSigGrpArrayAccess' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEUINT16                                          STD_ON
#define COM_CONSTVALUEUINT32                                          STD_OFF  /**< Deactivateable: 'Com_ConstValueUInt32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEUINT64                                          STD_OFF  /**< Deactivateable: 'Com_ConstValueUInt64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEUINT8                                           STD_OFF  /**< Deactivateable: 'Com_ConstValueUInt8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CURRENTTXMODE                                             STD_ON
#define COM_CYCLETIMECNT                                              STD_ON
#define COM_CYCLICSENDREQUEST                                         STD_ON
#define COM_DEFERREDGWMAPPINGEVENT                                    STD_OFF  /**< Deactivateable: 'Com_DeferredGwMappingEvent' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_DEFERREDGWMAPPINGINFO                                     STD_OFF  /**< Deactivateable: 'Com_DeferredGwMappingInfo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_RXPDUINFOIDXOFDEFERREDGWMAPPINGINFO                       STD_OFF  /**< Deactivateable: 'Com_DeferredGwMappingInfo.RxPduInfoIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_DELAYTIMECNT                                              STD_ON
#define COM_DIRECTTRIGGER                                             STD_OFF  /**< Deactivateable: 'Com_DirectTrigger' Reason: 'the parameter is only needed if ComEnableMDTForCyclicTransmission is equals FALSE.' */
#define COM_FILTERINFO_FLOAT32                                        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_FLOAT32                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_FLOAT32                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_FLOAT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterMax' Reason: 'FilterMin, FilterMax, FilterX are deactivated for Float32 and Float64 Filter Info, because they aren't configurable.' */
#define COM_FILTERMINOFFILTERINFO_FLOAT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterMin' Reason: 'FilterMin, FilterMax, FilterX are deactivated for Float32 and Float64 Filter Info, because they aren't configurable.' */
#define COM_FILTERXOFFILTERINFO_FLOAT32                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterX' Reason: 'FilterMin, FilterMax, FilterX are deactivated for Float32 and Float64 Filter Info, because they aren't configurable.' */
#define COM_FILTERINFO_FLOAT64                                        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_FLOAT64                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_FLOAT64                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_FLOAT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterMax' Reason: 'FilterMin, FilterMax, FilterX are deactivated for Float32 and Float64 Filter Info, because they aren't configurable.' */
#define COM_FILTERMINOFFILTERINFO_FLOAT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterMin' Reason: 'FilterMin, FilterMax, FilterX are deactivated for Float32 and Float64 Filter Info, because they aren't configurable.' */
#define COM_FILTERXOFFILTERINFO_FLOAT64                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterX' Reason: 'FilterMin, FilterMax, FilterX are deactivated for Float32 and Float64 Filter Info, because they aren't configurable.' */
#define COM_FILTERINFO_SINT16                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_SINT16                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_SINT16                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_SINT16                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_SINT16                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_SINT16                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_SINT32                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_SINT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_SINT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_SINT32                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_SINT32                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_SINT32                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_SINT64                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_SINT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_SINT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_SINT64                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_SINT64                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_SINT64                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_SINT8                                          STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_SINT8                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_SINT8                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_SINT8                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_SINT8                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_SINT8                                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_UINT16                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_UINT16                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_UINT16                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_UINT16                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_UINT16                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_UINT16                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_UINT32                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_UINT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_UINT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_UINT32                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_UINT32                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_UINT32                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_UINT64                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_UINT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_UINT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_UINT64                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_UINT64                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_UINT64                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_UINT8                                          STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_UINT8                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_UINT8                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_UINT8                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_UINT8                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_UINT8                                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_UINT8_N                                        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_UINT8_N                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_UINT8_N                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_UINT8_N                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_UINT8_N                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_UINT8_N                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FINALMAGICNUMBER                                          STD_OFF  /**< Deactivateable: 'Com_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define COM_GATEWAYDESCRIPTIONPROCESSINGISRLOCKCOUNTER                STD_OFF  /**< Deactivateable: 'Com_GatewayDescriptionProcessingISRLockCounter' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GATEWAYDESCRIPTIONPROCESSINGISRLOCKTHRESHOLD              STD_OFF  /**< Deactivateable: 'Com_GatewayDescriptionProcessingISRLockThreshold' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GATEWAYPROCESSINGISRLOCKCOUNTER                           STD_ON
#define COM_GATEWAYPROCESSINGISRLOCKTHRESHOLD                         STD_OFF  /**< Deactivateable: 'Com_GatewayProcessingISRLockThreshold' Reason: 'Signal Gateway is not configured.' */
#define COM_GWDESCRIPTIONACCESSINFO                                   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_BITOFFSETOFGWDESCRIPTIONACCESSINFO                        STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.BitOffset' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_BITSIZEOFGWDESCRIPTIONACCESSINFO                          STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.BitSize' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_COPYTYPEOFGWDESCRIPTIONACCESSINFO                         STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.CopyType' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_ENDIANNESSOFGWDESCRIPTIONACCESSINFO                       STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Endianness' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GWSOURCESTARTBITINDEXOFGWDESCRIPTIONACCESSINFO            STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.GwSourceStartBitIndex' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_RXUBIDXOFGWDESCRIPTIONACCESSINFO                          STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.RxUbIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_RXUBMASKIDXOFGWDESCRIPTIONACCESSINFO                      STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.RxUbMaskIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_RXUBMASKUSEDOFGWDESCRIPTIONACCESSINFO                     STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.RxUbMaskUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_SOURCEDESCRIPTIONMASKENDMASKIDXOFGWDESCRIPTIONACCESSINFO  STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceDescriptionMaskEndMaskIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_SOURCEDESCRIPTIONMASKENDMASKUSEDOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceDescriptionMaskEndMaskUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_SOURCEDESCRIPTIONMASKIDXOFGWDESCRIPTIONACCESSINFO         STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceDescriptionMaskIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_SOURCESTARTBYTEPOSITIONOFGWDESCRIPTIONACCESSINFO          STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceStartBytePosition' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_TXBUFFERENDIDXOFGWDESCRIPTIONACCESSINFO                   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxBufferEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_TXBUFFERLENGTHOFGWDESCRIPTIONACCESSINFO                   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxBufferLength' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_TXBUFFERSTARTIDXOFGWDESCRIPTIONACCESSINFO                 STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxBufferStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_TXBUFFERUBIDXOFGWDESCRIPTIONACCESSINFO                    STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxBufferUbIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_TXBUFFERUBUSEDOFGWDESCRIPTIONACCESSINFO                   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxBufferUbUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_TXPDUINFOIDXOFGWDESCRIPTIONACCESSINFO                     STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxPduInfoIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_TXUBMASKIDXOFGWDESCRIPTIONACCESSINFO                      STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxUbMaskIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_TXUBMASKUSEDOFGWDESCRIPTIONACCESSINFO                     STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxUbMaskUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_TYPEOFGWDESCRIPTIONACCESSINFO                             STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_VALIDDLCOFGWDESCRIPTIONACCESSINFO                         STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.ValidDlc' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GWEVENT                                                   STD_OFF  /**< Deactivateable: 'Com_GwEvent' Reason: 'The gateway is deactivated!' */
#define COM_GWEVENTCACHE                                              STD_OFF  /**< Deactivateable: 'Com_GwEventCache' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GWEVENTCACHEINDEX                                         STD_OFF  /**< Deactivateable: 'Com_GwEventCacheIndex' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GWGRPSIGMAPPING                                           STD_OFF  /**< Deactivateable: 'Com_GwGrpSigMapping' Reason: 'The gateway is deactivated!' */
#define COM_RXACCESSINFOIDXOFGWGRPSIGMAPPING                          STD_OFF  /**< Deactivateable: 'Com_GwGrpSigMapping.RxAccessInfoIdx' Reason: 'The gateway is deactivated!' */
#define COM_TXSIGIDOFGWGRPSIGMAPPING                                  STD_OFF  /**< Deactivateable: 'Com_GwGrpSigMapping.TxSigId' Reason: 'The gateway is deactivated!' */
#define COM_GWINFO                                                    STD_OFF  /**< Deactivateable: 'Com_GwInfo' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGGRPMAPPINGENDIDXOFGWINFO                             STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigGrpMappingEndIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGGRPMAPPINGSTARTIDXOFGWINFO                           STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigGrpMappingStartIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGGRPMAPPINGUSEDOFGWINFO                               STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigGrpMappingUsed' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGMAPPINGENDIDXOFGWINFO                                STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigMappingEndIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGMAPPINGSTARTIDXOFGWINFO                              STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigMappingStartIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGMAPPINGUSEDOFGWINFO                                  STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigMappingUsed' Reason: 'The gateway is deactivated!' */
#define COM_GWROUTINGTIMEOUTCOUNTER                                   STD_OFF  /**< Deactivateable: 'Com_GwRoutingTimeoutCounter' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_GWSIGGRPMAPPING                                           STD_OFF  /**< Deactivateable: 'Com_GwSigGrpMapping' Reason: 'The gateway is deactivated!' */
#define COM_GWGRPSIGMAPPINGENDIDXOFGWSIGGRPMAPPING                    STD_OFF  /**< Deactivateable: 'Com_GwSigGrpMapping.GwGrpSigMappingEndIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWGRPSIGMAPPINGSTARTIDXOFGWSIGGRPMAPPING                  STD_OFF  /**< Deactivateable: 'Com_GwSigGrpMapping.GwGrpSigMappingStartIdx' Reason: 'The gateway is deactivated!' */
#define COM_TXSIGGRPIDOFGWSIGGRPMAPPING                               STD_OFF  /**< Deactivateable: 'Com_GwSigGrpMapping.TxSigGrpId' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGMAPPING                                              STD_OFF  /**< Deactivateable: 'Com_GwSigMapping' Reason: 'The gateway is deactivated!' */
#define COM_RXACCESSINFOIDXOFGWSIGMAPPING                             STD_OFF  /**< Deactivateable: 'Com_GwSigMapping.RxAccessInfoIdx' Reason: 'The gateway is deactivated!' */
#define COM_TXSIGIDOFGWSIGMAPPING                                     STD_OFF  /**< Deactivateable: 'Com_GwSigMapping.TxSigId' Reason: 'The gateway is deactivated!' */
#define COM_GWTIMEOUTINFO                                             STD_OFF  /**< Deactivateable: 'Com_GwTimeoutInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_GWROUTINGTIMEOUTFACTOROFGWTIMEOUTINFO                     STD_OFF  /**< Deactivateable: 'Com_GwTimeoutInfo.GwRoutingTimeoutFactor' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUINFOIDXOFGWTIMEOUTINFO                               STD_OFF  /**< Deactivateable: 'Com_GwTimeoutInfo.TxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_GWTXPDUDESCRIPTIONINFO                                    STD_OFF  /**< Deactivateable: 'Com_GwTxPduDescriptionInfo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GWDESCRIPTIONACCESSINFOENDIDXOFGWTXPDUDESCRIPTIONINFO     STD_OFF  /**< Deactivateable: 'Com_GwTxPduDescriptionInfo.GwDescriptionAccessInfoEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GWDESCRIPTIONACCESSINFOSTARTIDXOFGWTXPDUDESCRIPTIONINFO   STD_OFF  /**< Deactivateable: 'Com_GwTxPduDescriptionInfo.GwDescriptionAccessInfoStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_HANDLERXDEFERREDGWDESCRIPTION                             STD_OFF  /**< Deactivateable: 'Com_HandleRxDeferredGwDescription' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_HANDLERXPDUDEFERRED                                       STD_ON
#define COM_HANDLETXPDUDEFERRED                                       STD_OFF  /**< Deactivateable: 'Com_HandleTxPduDeferred' Reason: 'This array is deactivated, because no Tx notification functions for deferred signal processing are configured.' */
#define COM_IPDUGROUPINFO                                             STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSINDENDIDXOFIPDUGROUPINFO      STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.IPduGroupInfoToSubIPduGroupsIndEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSINDSTARTIDXOFIPDUGROUPINFO    STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.IPduGroupInfoToSubIPduGroupsIndStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSINDUSEDOFIPDUGROUPINFO        STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.IPduGroupInfoToSubIPduGroupsIndUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_INVALIDHNDOFIPDUGROUPINFO                                 STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.InvalidHnd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_RXPDUINFOINDENDIDXOFIPDUGROUPINFO                         STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.RxPduInfoIndEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                       STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.RxPduInfoIndStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_RXPDUINFOINDUSEDOFIPDUGROUPINFO                           STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.RxPduInfoIndUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_TXPDUINFOINDENDIDXOFIPDUGROUPINFO                         STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.TxPduInfoIndEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                       STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.TxPduInfoIndStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_TXPDUINFOINDUSEDOFIPDUGROUPINFO                           STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.TxPduInfoIndUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOOFRXPDUINFOIND                               STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfoOfRxPduInfoInd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOOFTXPDUINFOIND                               STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfoOfTxPduInfoInd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSIND                           STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfoToSubIPduGroupsInd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPSTATE                                            STD_OFF  /**< Deactivateable: 'Com_IPduGroupState' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_INITDATAHASHCODE                                          STD_OFF  /**< Deactivateable: 'Com_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define COM_INITIALIZED                                               STD_ON
#define COM_PDUGRPCNT                                                 STD_ON
#define COM_PDUGRPVECTOR                                              STD_OFF  /**< Deactivateable: 'Com_PduGrpVector' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_REPCNT                                                    STD_ON
#define COM_REPCYCLECNT                                               STD_ON
#define COM_RXACCESSINFO                                              STD_ON
#define COM_APPLTYPEOFRXACCESSINFO                                    STD_ON
#define COM_BITLENGTHOFRXACCESSINFO                                   STD_ON
#define COM_BITPOSITIONOFRXACCESSINFO                                 STD_ON
#define COM_BUFFERIDXOFRXACCESSINFO                                   STD_ON
#define COM_BUFFERUSEDOFRXACCESSINFO                                  STD_ON
#define COM_BUSACCOFRXACCESSINFO                                      STD_ON
#define COM_BYTELENGTHOFRXACCESSINFO                                  STD_ON
#define COM_BYTEPOSITIONOFRXACCESSINFO                                STD_ON
#define COM_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO         STD_ON
#define COM_CONSTVALUEARRAYBASEDINITVALUELENGTHOFRXACCESSINFO         STD_ON
#define COM_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO       STD_ON
#define COM_CONSTVALUEARRAYBASEDINITVALUEUSEDOFRXACCESSINFO           STD_ON
#define COM_CONSTVALUEARRAYBASEDINVVALUEENDIDXOFRXACCESSINFO          STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedInvValueEndIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUELENGTHOFRXACCESSINFO          STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedInvValueLength' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUESTARTIDXOFRXACCESSINFO        STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedInvValueStartIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFRXACCESSINFO            STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedInvValueUsed' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDRXDATATIMEOUTSUBSTITUTIONVALUEENDIDXOFRXACCESSINFO STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedRxDataTimeoutSubstitutionValueEndIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDRXDATATIMEOUTSUBSTITUTIONVALUELENGTHOFRXACCESSINFO STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedRxDataTimeoutSubstitutionValueLength' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDRXDATATIMEOUTSUBSTITUTIONVALUESTARTIDXOFRXACCESSINFO STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedRxDataTimeoutSubstitutionValueStartIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDRXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedRxDataTimeoutSubstitutionValueUsed' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOIDXOFRXACCESSINFO                               STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.FilterInfoIdx' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOUSEDOFRXACCESSINFO                              STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.FilterInfoUsed' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_GWINFOIDXOFRXACCESSINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.GwInfoIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWINFOUSEDOFRXACCESSINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.GwInfoUsed' Reason: 'The gateway is deactivated!' */
#define COM_INITVALUEIDXOFRXACCESSINFO                                STD_ON
#define COM_INITVALUEUSEDOFRXACCESSINFO                               STD_ON
#define COM_INVVALUEIDXOFRXACCESSINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.InvValueIdx' Reason: 'the optional indirection is deactivated because InvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVVALUEUSEDOFRXACCESSINFO                                STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.InvValueUsed' Reason: 'the optional indirection is deactivated because InvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFRXACCESSINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfRxAccessInfo is always 'false' due to this, the array is deactivated.' */
#define COM_ISGROUPSIGNALOFRXACCESSINFO                               STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.IsGroupSignal' Reason: 'the value of Com_IsGroupSignalOfRxAccessInfo is always 'false' due to this, the array is deactivated.' */
#define COM_ROUTINGBUFFERIDXOFRXACCESSINFO                            STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RoutingBufferIdx' Reason: 'The gateway is deactivated!' */
#define COM_ROUTINGBUFFERUSEDOFRXACCESSINFO                           STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RoutingBufferUsed' Reason: 'The gateway is deactivated!' */
#define COM_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO           STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxDataTimeoutSubstitutionValueIdx' Reason: 'the optional indirection is deactivated because RxDataTimeoutSubstitutionValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO          STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxDataTimeoutSubstitutionValueUsed' Reason: 'the optional indirection is deactivated because RxDataTimeoutSubstitutionValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXPDUINFOIDXOFRXACCESSINFO                                STD_ON
#define COM_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO           STD_ON
#define COM_RXSIGBUFFERARRAYBASEDBUFFERLENGTHOFRXACCESSINFO           STD_ON
#define COM_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO         STD_ON
#define COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO             STD_ON
#define COM_RXSIGBUFFERARRAYBASEDROUTINGBUFFERENDIDXOFRXACCESSINFO    STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxSigBufferArrayBasedRoutingBufferEndIdx' Reason: 'The gateway is deactivated!' */
#define COM_RXSIGBUFFERARRAYBASEDROUTINGBUFFERLENGTHOFRXACCESSINFO    STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxSigBufferArrayBasedRoutingBufferLength' Reason: 'The gateway is deactivated!' */
#define COM_RXSIGBUFFERARRAYBASEDROUTINGBUFFERSTARTIDXOFRXACCESSINFO  STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxSigBufferArrayBasedRoutingBufferStartIdx' Reason: 'The gateway is deactivated!' */
#define COM_RXSIGBUFFERARRAYBASEDROUTINGBUFFERUSEDOFRXACCESSINFO      STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxSigBufferArrayBasedRoutingBufferUsed' Reason: 'The gateway is deactivated!' */
#define COM_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO        STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxSigBufferArrayBasedShdBufferEndIdx' Reason: 'the optional indirection is deactivated because RxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGBUFFERARRAYBASEDSHDBUFFERLENGTHOFRXACCESSINFO        STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxSigBufferArrayBasedShdBufferLength' Reason: 'the optional indirection is deactivated because RxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO      STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxSigBufferArrayBasedShdBufferStartIdx' Reason: 'the optional indirection is deactivated because RxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO          STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxSigBufferArrayBasedShdBufferUsed' Reason: 'the optional indirection is deactivated because RxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOIDXOFRXACCESSINFO                               STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxTOutInfoIdx' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOUSEDOFRXACCESSINFO                              STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.RxTOutInfoUsed' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_SHDBUFFERIDXOFRXACCESSINFO                                STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ShdBufferIdx' Reason: 'the optional indirection is deactivated because ShdBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_SHDBUFFERUSEDOFRXACCESSINFO                               STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ShdBufferUsed' Reason: 'the optional indirection is deactivated because ShdBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_SIGNEXTREQUIREDOFRXACCESSINFO                             STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.SignExtRequired' Reason: 'the value of Com_SignExtRequiredOfRxAccessInfo is always 'false' due to this, the array is deactivated.' */
#define COM_STARTBYTEINPDUPOSITIONOFRXACCESSINFO                      STD_ON
#define COM_TMPBUFFERIDXOFRXACCESSINFO                                STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.TmpBufferIdx' Reason: 'the optional indirection is deactivated because TmpBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TMPBUFFERUSEDOFRXACCESSINFO                               STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.TmpBufferUsed' Reason: 'the optional indirection is deactivated because TmpBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO     STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.TmpRxShdBufferArrayBasedTmpBufferEndIdx' Reason: 'the optional indirection is deactivated because TmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERLENGTHOFRXACCESSINFO     STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.TmpRxShdBufferArrayBasedTmpBufferLength' Reason: 'the optional indirection is deactivated because TmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO   STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.TmpRxShdBufferArrayBasedTmpBufferStartIdx' Reason: 'the optional indirection is deactivated because TmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO       STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.TmpRxShdBufferArrayBasedTmpBufferUsed' Reason: 'the optional indirection is deactivated because TmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXACCESSINFOGRPSIGIND                                     STD_OFF  /**< Deactivateable: 'Com_RxAccessInfoGrpSigInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOIND                                           STD_ON
#define COM_RXACCESSINFOREPLACEGRPSIGIND                              STD_OFF  /**< Deactivateable: 'Com_RxAccessInfoReplaceGrpSigInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOREPLACESIGIND                                 STD_OFF  /**< Deactivateable: 'Com_RxAccessInfoReplaceSigInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXCBKFUNCPTR                                              STD_OFF  /**< Deactivateable: 'Com_RxCbkFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXDEADLINEMONITORINGISRLOCKCOUNTER                        STD_ON
#define COM_RXDEADLINEMONITORINGISRLOCKTHRESHOLD                      STD_OFF  /**< Deactivateable: 'Com_RxDeadlineMonitoringISRLockThreshold' Reason: 'No Rx Signals or SignalGroups with a configured timeout are present. ' */
#define COM_RXDEFPDUBUFFER                                            STD_ON
#define COM_RXDEFERREDEVENTCACHE                                      STD_OFF  /**< Deactivateable: 'Com_RxDeferredEventCache' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDeferredEventCacheSupport] is configured to 'false'' */
#define COM_RXDEFERREDFCTPTRCACHE                                     STD_OFF  /**< Deactivateable: 'Com_RxDeferredFctPtrCache' Reason: 'Deactivate cache as cache size is set to zero' */
#define COM_RXDEFERREDPROCESSINGISRLOCKCOUNTER                        STD_ON
#define COM_RXDEFERREDPROCESSINGISRLOCKTHRESHOLD                      STD_ON
#define COM_RXDLMONDIVISOR                                            STD_OFF  /**< Deactivateable: 'Com_RxDlMonDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_RXDLMONDIVISORCOUNTER                                     STD_OFF  /**< Deactivateable: 'Com_RxDlMonDivisorCounter' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_RXDYNSIGNALLENGTH                                         STD_ON
#define COM_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPS                       STD_OFF  /**< Deactivateable: 'Com_RxDynSignalTmpLengthForSignalGroups' Reason: 'No dynamic length group signals are present' */
#define COM_RXIPDUGROUPISRLOCKCOUNTER                                 STD_ON
#define COM_RXIPDUGROUPISRLOCKTHRESHOLD                               STD_ON
#define COM_RXNEXTEVENTCACHEENTY                                      STD_OFF  /**< Deactivateable: 'Com_RxNextEventCacheEnty' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDeferredEventCacheSupport] is configured to 'false'' */
#define COM_RXPDUCALLOUTFUNCPTR                                       STD_OFF  /**< Deactivateable: 'Com_RxPduCalloutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXPDUDMSTATE                                              STD_OFF  /**< Deactivateable: 'Com_RxPduDmState' Reason: 'This array is deactivated, because no Rx timeout is configured.' */
#define COM_RXPDUGRPACTIVE                                            STD_ON
#define COM_RXPDUGRPINFO                                              STD_OFF  /**< Deactivateable: 'Com_RxPduGrpInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_PDUGRPVECTORENDIDXOFRXPDUGRPINFO                          STD_OFF  /**< Deactivateable: 'Com_RxPduGrpInfo.PduGrpVectorEndIdx' Reason: 'the optional indirection is deactivated because PduGrpVectorUsedOfRxPduGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_PDUGRPVECTORSTARTIDXOFRXPDUGRPINFO                        STD_OFF  /**< Deactivateable: 'Com_RxPduGrpInfo.PduGrpVectorStartIdx' Reason: 'the optional indirection is deactivated because PduGrpVectorUsedOfRxPduGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_PDUGRPVECTORUSEDOFRXPDUGRPINFO                            STD_OFF  /**< Deactivateable: 'Com_RxPduGrpInfo.PduGrpVectorUsed' Reason: 'the optional indirection is deactivated because PduGrpVectorUsedOfRxPduGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXPDUINFO                                                 STD_ON
#define COM_DEFERREDGWMAPPINGINFOIDXOFRXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.DeferredGwMappingInfoIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_DEFERREDGWMAPPINGINFOUSEDOFRXPDUINFO                      STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.DeferredGwMappingInfoUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GWINFOENDIDXOFRXPDUINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwInfoEndIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWINFOSTARTIDXOFRXPDUINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwInfoStartIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWINFOUSEDOFRXPDUINFO                                     STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwInfoUsed' Reason: 'The gateway is deactivated!' */
#define COM_GWTXPDUDESCRIPTIONINFOENDIDXOFRXPDUINFO                   STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwTxPduDescriptionInfoEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GWTXPDUDESCRIPTIONINFOSTARTIDXOFRXPDUINFO                 STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwTxPduDescriptionInfoStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwTxPduDescriptionInfoUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_HANDLERXDEFERREDGWDESCRIPTIONIDXOFRXPDUINFO               STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.HandleRxDeferredGwDescriptionIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_HANDLERXDEFERREDGWDESCRIPTIONUSEDOFRXPDUINFO              STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.HandleRxDeferredGwDescriptionUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                         STD_ON
#define COM_HANDLERXPDUDEFERREDUSEDOFRXPDUINFO                        STD_ON
#define COM_IPDUGROUPINFOOFRXPDUINFOINDENDIDXOFRXPDUINFO              STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.IPduGroupInfoOfRxPduInfoIndEndIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFRXPDUINFOINDSTARTIDXOFRXPDUINFO            STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.IPduGroupInfoOfRxPduInfoIndStartIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFRXPDUINFOINDUSEDOFRXPDUINFO                STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.IPduGroupInfoOfRxPduInfoIndUsed' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFRXPDUINFO                                     STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfRxPduInfo is always 'false' due to this, the array is deactivated.' */
#define COM_RXACCESSINFOINDENDIDXOFRXPDUINFO                          STD_ON
#define COM_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                        STD_ON
#define COM_RXACCESSINFOINDUSEDOFRXPDUINFO                            STD_ON
#define COM_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                           STD_ON
#define COM_RXDEFPDUBUFFERLENGTHOFRXPDUINFO                           STD_ON
#define COM_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                         STD_ON
#define COM_RXDEFPDUBUFFERUSEDOFRXPDUINFO                             STD_ON
#define COM_RXPDUCALLOUTFUNCPTRIDXOFRXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxPduCalloutFuncPtrIdx' Reason: 'the optional indirection is deactivated because RxPduCalloutFuncPtrUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXPDUCALLOUTFUNCPTRUSEDOFRXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxPduCalloutFuncPtrUsed' Reason: 'the optional indirection is deactivated because RxPduCalloutFuncPtrUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO                          STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxSigGrpInfoIndEndIdx' Reason: 'the optional indirection is deactivated because RxSigGrpInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxSigGrpInfoIndStartIdx' Reason: 'the optional indirection is deactivated because RxSigGrpInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGGRPINFOINDUSEDOFRXPDUINFO                            STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxSigGrpInfoIndUsed' Reason: 'the optional indirection is deactivated because RxSigGrpInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGINFOENDIDXOFRXPDUINFO                                STD_ON
#define COM_RXSIGINFOSTARTIDXOFRXPDUINFO                              STD_ON
#define COM_RXSIGINFOUSEDOFRXPDUINFO                                  STD_ON
#define COM_RXTOUTINFOIDXOFRXPDUINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTOutInfoIdx' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOINDENDIDXOFRXPDUINFO                            STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTOutInfoIndEndIdx' Reason: 'the optional indirection is deactivated because RxTOutInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOINDSTARTIDXOFRXPDUINFO                          STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTOutInfoIndStartIdx' Reason: 'the optional indirection is deactivated because RxTOutInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOINDUSEDOFRXPDUINFO                              STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTOutInfoIndUsed' Reason: 'the optional indirection is deactivated because RxTOutInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOUSEDOFRXPDUINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTOutInfoUsed' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTPINFOIDXOFRXPDUINFO                                    STD_ON
#define COM_RXTPINFOUSEDOFRXPDUINFO                                   STD_ON
#define COM_SIGNALPROCESSINGOFRXPDUINFO                               STD_ON
#define COM_TYPEOFRXPDUINFO                                           STD_ON
#define COM_RXPDUINFOIND                                              STD_OFF  /**< Deactivateable: 'Com_RxPduInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGARRAYACCESSSIGGRPBUFFER                              STD_OFF  /**< Deactivateable: 'Com_RxSigArrayAccessSigGrpBuffer' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERARRAYBASED                                     STD_ON
#define COM_RXSIGBUFFERFLOAT32                                        STD_OFF  /**< Deactivateable: 'Com_RxSigBufferFloat32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERFLOAT64                                        STD_OFF  /**< Deactivateable: 'Com_RxSigBufferFloat64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERSINT16                                         STD_OFF  /**< Deactivateable: 'Com_RxSigBufferSInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERSINT32                                         STD_OFF  /**< Deactivateable: 'Com_RxSigBufferSInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERSINT64                                         STD_OFF  /**< Deactivateable: 'Com_RxSigBufferSInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERSINT8                                          STD_OFF  /**< Deactivateable: 'Com_RxSigBufferSInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERUINT16                                         STD_ON
#define COM_RXSIGBUFFERUINT32                                         STD_OFF  /**< Deactivateable: 'Com_RxSigBufferUInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERUINT64                                         STD_OFF  /**< Deactivateable: 'Com_RxSigBufferUInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERUINT8                                          STD_OFF  /**< Deactivateable: 'Com_RxSigBufferUInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERZEROBIT                                        STD_OFF  /**< Deactivateable: 'Com_RxSigBufferZeroBit' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGGRPINFO                                              STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_ARRAYACCESSUSEDOFRXSIGGRPINFO                             STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ArrayAccessUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUESIGGRPARRAYACCESSENDIDXOFRXSIGGRPINFO           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueSigGrpArrayAccessEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESIGGRPARRAYACCESSLENGTHOFRXSIGGRPINFO           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueSigGrpArrayAccessLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESIGGRPARRAYACCESSSTARTIDXOFRXSIGGRPINFO         STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueSigGrpArrayAccessStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESIGGRPARRAYACCESSUSEDOFRXSIGGRPINFO             STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueSigGrpArrayAccessUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEUINT8ENDIDXOFRXSIGGRPINFO                       STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueUInt8EndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEUINT8LENGTHOFRXSIGGRPINFO                       STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueUInt8Length' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEUINT8STARTIDXOFRXSIGGRPINFO                     STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueUInt8StartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEUINT8USEDOFRXSIGGRPINFO                         STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueUInt8Used' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTEREVENTOFRXSIGGRPINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.FilterEvent' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_GWINFOIDXOFRXSIGGRPINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.GwInfoIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWINFOUSEDOFRXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.GwInfoUsed' Reason: 'The gateway is deactivated!' */
#define COM_INVEVENTOFRXSIGGRPINFO                                    STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.InvEvent' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_INVALIDHNDOFRXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.InvalidHnd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOGRPSIGINDENDIDXOFRXSIGGRPINFO                 STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxAccessInfoGrpSigIndEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOGRPSIGINDSTARTIDXOFRXSIGGRPINFO               STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxAccessInfoGrpSigIndStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOGRPSIGINDUSEDOFRXSIGGRPINFO                   STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxAccessInfoGrpSigIndUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXCBKFUNCPTRACKIDXOFRXSIGGRPINFO                          STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxCbkFuncPtrAckIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXCBKFUNCPTRACKUSEDOFRXSIGGRPINFO                         STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxCbkFuncPtrAckUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXCBKFUNCPTRINVACKIDXOFRXSIGGRPINFO                       STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxCbkFuncPtrInvAckIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXCBKFUNCPTRINVACKUSEDOFRXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxCbkFuncPtrInvAckUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXPDUINFOIDXOFRXSIGGRPINFO                                STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGARRAYACCESSSIGGRPBUFFERENDIDXOFRXSIGGRPINFO          STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigArrayAccessSigGrpBufferEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGARRAYACCESSSIGGRPBUFFERLENGTHOFRXSIGGRPINFO          STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigArrayAccessSigGrpBufferLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGARRAYACCESSSIGGRPBUFFERSTARTIDXOFRXSIGGRPINFO        STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigArrayAccessSigGrpBufferStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGARRAYACCESSSIGGRPBUFFERUSEDOFRXSIGGRPINFO            STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigArrayAccessSigGrpBufferUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERUINT8ENDIDXOFRXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigBufferUInt8EndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERUINT8LENGTHOFRXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigBufferUInt8Length' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERUINT8STARTIDXOFRXSIGGRPINFO                    STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigBufferUInt8StartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERUINT8USEDOFRXSIGGRPINFO                        STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigBufferUInt8Used' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXTOUTINFOIDXOFRXSIGGRPINFO                               STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxTOutInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXTOUTINFOUSEDOFRXSIGGRPINFO                              STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxTOutInfoUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_SHDBUFFERREQUIREDOFRXSIGGRPINFO                           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ShdBufferRequired' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_SIGNALPROCESSINGOFRXSIGGRPINFO                            STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.SignalProcessing' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_STARTBYTEPOSITIONOFRXSIGGRPINFO                           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.StartBytePosition' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_UBIDXOFRXSIGGRPINFO                                       STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.UbIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_UBMASKIDXOFRXSIGGRPINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.UbMaskIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_UBMASKUSEDOFRXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.UbMaskUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_VALIDDLCOFRXSIGGRPINFO                                    STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ValidDlc' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGGRPINFOIND                                           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGINFO                                                 STD_ON
#define COM_GWINFOIDXOFRXSIGINFO                                      STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.GwInfoIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWINFOUSEDOFRXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.GwInfoUsed' Reason: 'The gateway is deactivated!' */
#define COM_RXACCESSINFOIDXOFRXSIGINFO                                STD_ON
#define COM_RXCBKFUNCPTRACKIDXOFRXSIGINFO                             STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.RxCbkFuncPtrAckIdx' Reason: 'the optional indirection is deactivated because RxCbkFuncPtrAckUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXCBKFUNCPTRACKUSEDOFRXSIGINFO                            STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.RxCbkFuncPtrAckUsed' Reason: 'the optional indirection is deactivated because RxCbkFuncPtrAckUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXCBKFUNCPTRINVACKIDXOFRXSIGINFO                          STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.RxCbkFuncPtrInvAckIdx' Reason: 'the optional indirection is deactivated because RxCbkFuncPtrInvAckUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXCBKFUNCPTRINVACKUSEDOFRXSIGINFO                         STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.RxCbkFuncPtrInvAckUsed' Reason: 'the optional indirection is deactivated because RxCbkFuncPtrInvAckUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOIDXOFRXSIGINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.RxTOutInfoIdx' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOUSEDOFRXSIGINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.RxTOutInfoUsed' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_SIGNALPROCESSINGOFRXSIGINFO                               STD_ON
#define COM_UBIDXOFRXSIGINFO                                          STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.UbIdx' Reason: 'the value of Com_UbIdxOfRxSigInfo is always 'COM_NO_UBIDXOFRXSIGINFO' due to this, the array is deactivated.' */
#define COM_UBMASKIDXOFRXSIGINFO                                      STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.UbMaskIdx' Reason: 'the optional indirection is deactivated because UbMaskUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_UBMASKUSEDOFRXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.UbMaskUsed' Reason: 'the optional indirection is deactivated because UbMaskUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_VALIDDLCOFRXSIGINFO                                       STD_ON
#define COM_RXTOUTCNT                                                 STD_OFF  /**< Deactivateable: 'Com_RxTOutCnt' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXTOUTINFO                                                STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKRXTOUTFUNCPTRINDENDIDXOFRXTOUTINFO                     STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.CbkRxTOutFuncPtrIndEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKRXTOUTFUNCPTRINDSTARTIDXOFRXTOUTINFO                   STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.CbkRxTOutFuncPtrIndStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKRXTOUTFUNCPTRINDUSEDOFRXTOUTINFO                       STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.CbkRxTOutFuncPtrIndUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FACTOROFRXTOUTINFO                                        STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.Factor' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FIRSTFACTOROFRXTOUTINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.FirstFactor' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOREPLACEGRPSIGINDENDIDXOFRXTOUTINFO            STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceGrpSigIndEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOREPLACEGRPSIGINDSTARTIDXOFRXTOUTINFO          STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceGrpSigIndStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOREPLACEGRPSIGINDUSEDOFRXTOUTINFO              STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceGrpSigIndUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOREPLACESIGINDENDIDXOFRXTOUTINFO               STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceSigIndEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOREPLACESIGINDSTARTIDXOFRXTOUTINFO             STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceSigIndStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOREPLACESIGINDUSEDOFRXTOUTINFO                 STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceSigIndUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXPDUINFOIDXOFRXTOUTINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXTOUTINFOIND                                             STD_OFF  /**< Deactivateable: 'Com_RxTOutInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXTPBUFFER                                                STD_ON
#define COM_RXTPCONNECTIONSTATE                                       STD_ON
#define COM_RXTPINFO                                                  STD_ON
#define COM_BUFFERSIZEOFRXTPINFO                                      STD_ON
#define COM_DYNAMICINITIALLENGTHOFRXTPINFO                            STD_ON
#define COM_RXACCESSINFODYNSIGIDXOFRXTPINFO                           STD_ON
#define COM_RXACCESSINFODYNSIGUSEDOFRXTPINFO                          STD_ON
#define COM_RXTPBUFFERENDIDXOFRXTPINFO                                STD_ON
#define COM_RXTPBUFFERSTARTIDXOFRXTPINFO                              STD_ON
#define COM_RXTPBUFFERUSEDOFRXTPINFO                                  STD_ON
#define COM_RXTPSDULENGTH                                             STD_ON
#define COM_RXTPWRITTENBYTESCOUNTER                                   STD_ON
#define COM_SIGGRPARRAYFILTERINFO                                     STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERMASKENDIDXOFSIGGRPARRAYFILTERINFO    STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterMaskEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERMASKLENGTHOFSIGGRPARRAYFILTERINFO    STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterMaskLength' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERMASKSTARTIDXOFSIGGRPARRAYFILTERINFO  STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterMaskStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERMASKUSEDOFSIGGRPARRAYFILTERINFO      STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterMaskUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERVALUEXENDIDXOFSIGGRPARRAYFILTERINFO  STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterValueXEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERVALUEXLENGTHOFSIGGRPARRAYFILTERINFO  STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterValueXLength' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERVALUEXSTARTIDXOFSIGGRPARRAYFILTERINFO STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterValueXStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERVALUEXUSEDOFSIGGRPARRAYFILTERINFO    STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterValueXUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_FILTERALGOOFSIGGRPARRAYFILTERINFO                         STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_OFFSETINSIGNALGROUPOFSIGGRPARRAYFILTERINFO                STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.OffsetInSignalGroup' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGRPEVENTFLAG                                           STD_OFF  /**< Deactivateable: 'Com_SigGrpEventFlag' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_SIZEOFALWAYSACTIVERXCOMIPDUS                              STD_ON
#define COM_SIZEOFALWAYSACTIVETXCOMIPDUS                              STD_ON
#define COM_SIZEOFCONSTVALUEARRAYBASED                                STD_ON
#define COM_SIZEOFCONSTVALUEUINT16                                    STD_ON
#define COM_SIZEOFCURRENTTXMODE                                       STD_ON
#define COM_SIZEOFCYCLETIMECNT                                        STD_ON
#define COM_SIZEOFCYCLICSENDREQUEST                                   STD_ON
#define COM_SIZEOFDELAYTIMECNT                                        STD_ON
#define COM_SIZEOFHANDLERXPDUDEFERRED                                 STD_ON
#define COM_SIZEOFREPCNT                                              STD_ON
#define COM_SIZEOFREPCYCLECNT                                         STD_ON
#define COM_SIZEOFRXACCESSINFO                                        STD_ON
#define COM_SIZEOFRXACCESSINFOIND                                     STD_ON
#define COM_SIZEOFRXDEFPDUBUFFER                                      STD_ON
#define COM_SIZEOFRXDYNSIGNALLENGTH                                   STD_ON
#define COM_SIZEOFRXPDUGRPACTIVE                                      STD_ON
#define COM_SIZEOFRXPDUINFO                                           STD_ON
#define COM_SIZEOFRXSIGBUFFERARRAYBASED                               STD_ON
#define COM_SIZEOFRXSIGBUFFERUINT16                                   STD_ON
#define COM_SIZEOFRXSIGINFO                                           STD_ON
#define COM_SIZEOFRXTPBUFFER                                          STD_ON
#define COM_SIZEOFRXTPCONNECTIONSTATE                                 STD_ON
#define COM_SIZEOFRXTPINFO                                            STD_ON
#define COM_SIZEOFRXTPSDULENGTH                                       STD_ON
#define COM_SIZEOFRXTPWRITTENBYTESCOUNTER                             STD_ON
#define COM_SIZEOFTMPRXBUFFER                                         STD_ON
#define COM_SIZEOFTRANSMITREQUEST                                     STD_ON
#define COM_SIZEOFTXBUFFER                                            STD_ON
#define COM_SIZEOFTXDYNSIGNALLENGTH                                   STD_ON
#define COM_SIZEOFTXMODEFALSE                                         STD_ON
#define COM_SIZEOFTXMODEINFO                                          STD_ON
#define COM_SIZEOFTXMODETRUE                                          STD_ON
#define COM_SIZEOFTXPDUGRPACTIVE                                      STD_ON
#define COM_SIZEOFTXPDUINFO                                           STD_ON
#define COM_SIZEOFTXPDUINITVALUE                                      STD_ON
#define COM_SIZEOFTXSDULENGTH                                         STD_ON
#define COM_SIZEOFTXSIGINFO                                           STD_ON
#define COM_SIZEOFTXTMPTPPDULENGTH                                    STD_ON
#define COM_SIZEOFTXTPCONNECTIONSTATE                                 STD_ON
#define COM_SIZEOFTXTPINFO                                            STD_ON
#define COM_SIZEOFTXTPSDULENGTH                                       STD_ON
#define COM_SIZEOFTXTPWRITTENBYTESCOUNTER                             STD_ON
#define COM_SOURCEDESCRIPTIONMASK                                     STD_OFF  /**< Deactivateable: 'Com_SourceDescriptionMask' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_TMPRXBUFFER                                               STD_ON
#define COM_TMPRXSHDBUFFERARRAYBASED                                  STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferArrayBased' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERFLOAT32                                     STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferFloat32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERFLOAT64                                     STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferFloat64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERSINT16                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferSInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERSINT32                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferSInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERSINT64                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferSInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERSINT8                                       STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferSInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERUINT16                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferUInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERUINT32                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferUInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERUINT64                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferUInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERUINT8                                       STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferUInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TRANSMITREQUEST                                           STD_ON
#define COM_TXBUFFER                                                  STD_ON
#define COM_TXCYCLECOUNTERDIVISOR                                     STD_OFF  /**< Deactivateable: 'Com_TxCycleCounterDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXCYCLECOUNTERDIVISORCOUNTER                              STD_OFF  /**< Deactivateable: 'Com_TxCycleCounterDivisorCounter' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXCYCLICPROCESSINGISRLOCKCOUNTER                          STD_ON
#define COM_TXCYCLICPROCESSINGISRLOCKTHRESHOLD                        STD_OFF  /**< Deactivateable: 'Com_TxCyclicProcessingISRLockThreshold' Reason: 'No Tx cyclic processing required.' */
#define COM_TXDEADLINEMONITORINGISRLOCKCOUNTER                        STD_ON
#define COM_TXDEADLINEMONITORINGISRLOCKTHRESHOLD                      STD_OFF  /**< Deactivateable: 'Com_TxDeadlineMonitoringISRLockThreshold' Reason: 'No Tx Signals or SignalGroups with a configured timeout are present. ' */
#define COM_TXDLMONDIVISOR                                            STD_OFF  /**< Deactivateable: 'Com_TxDlMonDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXDLMONDIVISORCOUNTER                                     STD_OFF  /**< Deactivateable: 'Com_TxDlMonDivisorCounter' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXDYNSIGNALLENGTH                                         STD_ON
#define COM_TXFILTERINITSTATE                                         STD_OFF  /**< Deactivateable: 'Com_TxFilterInitState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEARRAYBASED                               STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueArrayBased' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEFLOAT32                                  STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueFloat32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEFLOAT64                                  STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueFloat64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUESINT16                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueSInt16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUESINT32                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueSInt32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUESINT64                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueSInt64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUESINT8                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueSInt8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUESIGGRPARRAYACCESS                        STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueSigGrpArrayAccess' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEUINT16                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueUInt16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEUINT32                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueUInt32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEUINT64                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueUInt64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEUINT8                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueUInt8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEARRAYBASED                                STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueArrayBased' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEFLOAT32                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueFloat32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEFLOAT64                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueFloat64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUESINT16                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueSInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUESINT32                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueSInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUESINT64                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueSInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUESINT8                                     STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueSInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEUINT16                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueUInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEUINT32                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueUInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEUINT64                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueUInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEUINT8                                     STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueUInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERSTATE                                             STD_OFF  /**< Deactivateable: 'Com_TxFilterState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXIPDUGROUPISRLOCKCOUNTER                                 STD_ON
#define COM_TXIPDUGROUPISRLOCKTHRESHOLD                               STD_ON
#define COM_TXMODEFALSE                                               STD_ON
#define COM_DIRECTOFTXMODEFALSE                                       STD_ON
#define COM_PERIODICOFTXMODEFALSE                                     STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.Periodic' Reason: 'the value of Com_PeriodicOfTxModeFalse is always 'false' due to this, the array is deactivated.' */
#define COM_REPCNTOFTXMODEFALSE                                       STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.RepCnt' Reason: 'the value of Com_RepCntOfTxModeFalse is always '0' due to this, the array is deactivated.' */
#define COM_REPPERIODOFTXMODEFALSE                                    STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.RepPeriod' Reason: 'the value of Com_RepPeriodOfTxModeFalse is always '0' due to this, the array is deactivated.' */
#define COM_TIMEOFFSETOFTXMODEFALSE                                   STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.TimeOffset' Reason: 'the value of Com_TimeOffsetOfTxModeFalse is always '1' due to this, the array is deactivated.' */
#define COM_TIMEPERIODOFTXMODEFALSE                                   STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.TimePeriod' Reason: 'the value of Com_TimePeriodOfTxModeFalse is always '0' due to this, the array is deactivated.' */
#define COM_TXMODEINFO                                                STD_ON
#define COM_INITMODEOFTXMODEINFO                                      STD_ON
#define COM_INVALIDHNDOFTXMODEINFO                                    STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfTxModeInfo is always 'false' due to this, the array is deactivated.' */
#define COM_MINIMUMDELAYOFTXMODEINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.MinimumDelay' Reason: 'the value of Com_MinimumDelayOfTxModeInfo is always '0' due to this, the array is deactivated.' */
#define COM_TXFILTERINITSTATEENDIDXOFTXMODEINFO                       STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxFilterInitStateEndIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATESTARTIDXOFTXMODEINFO                     STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxFilterInitStateStartIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATEUSEDOFTXMODEINFO                         STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxFilterInitStateUsed' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXMODEFALSEIDXOFTXMODEINFO                                STD_ON
#define COM_TXMODETRUEIDXOFTXMODEINFO                                 STD_ON
#define COM_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO             STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxSigInfoFilterInitValueIndEndIdx' Reason: 'the optional indirection is deactivated because TxSigInfoFilterInitValueIndUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO           STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxSigInfoFilterInitValueIndStartIdx' Reason: 'the optional indirection is deactivated because TxSigInfoFilterInitValueIndUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGINFOFILTERINITVALUEINDUSEDOFTXMODEINFO               STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxSigInfoFilterInitValueIndUsed' Reason: 'the optional indirection is deactivated because TxSigInfoFilterInitValueIndUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXMODETRUE                                                STD_ON
#define COM_DIRECTOFTXMODETRUE                                        STD_ON
#define COM_PERIODICOFTXMODETRUE                                      STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.Periodic' Reason: 'the value of Com_PeriodicOfTxModeTrue is always 'false' due to this, the array is deactivated.' */
#define COM_REPCNTOFTXMODETRUE                                        STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.RepCnt' Reason: 'the value of Com_RepCntOfTxModeTrue is always '0' due to this, the array is deactivated.' */
#define COM_REPPERIODOFTXMODETRUE                                     STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.RepPeriod' Reason: 'the value of Com_RepPeriodOfTxModeTrue is always '0' due to this, the array is deactivated.' */
#define COM_TIMEOFFSETOFTXMODETRUE                                    STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.TimeOffset' Reason: 'the value of Com_TimeOffsetOfTxModeTrue is always '1' due to this, the array is deactivated.' */
#define COM_TIMEPERIODOFTXMODETRUE                                    STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.TimePeriod' Reason: 'the value of Com_TimePeriodOfTxModeTrue is always '0' due to this, the array is deactivated.' */
#define COM_TXPDUCALLOUTFUNCPTR                                       STD_OFF  /**< Deactivateable: 'Com_TxPduCalloutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUGRPACTIVE                                            STD_ON
#define COM_TXPDUGRPINFO                                              STD_OFF  /**< Deactivateable: 'Com_TxPduGrpInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_PDUGRPVECTORENDIDXOFTXPDUGRPINFO                          STD_OFF  /**< Deactivateable: 'Com_TxPduGrpInfo.PduGrpVectorEndIdx' Reason: 'the optional indirection is deactivated because PduGrpVectorUsedOfTxPduGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO                        STD_OFF  /**< Deactivateable: 'Com_TxPduGrpInfo.PduGrpVectorStartIdx' Reason: 'the optional indirection is deactivated because PduGrpVectorUsedOfTxPduGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_PDUGRPVECTORUSEDOFTXPDUGRPINFO                            STD_OFF  /**< Deactivateable: 'Com_TxPduGrpInfo.PduGrpVectorUsed' Reason: 'the optional indirection is deactivated because PduGrpVectorUsedOfTxPduGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUINFO                                                 STD_ON
#define COM_CANCELLATIONSUPPORTOFTXPDUINFO                            STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CancellationSupport' Reason: '/ActiveEcuC/PduR/Com[0:PduRCancelTransmit] is configured to 'false'' */
#define COM_CBKTXACKDEFFUNCPTRINDENDIDXOFTXPDUINFO                    STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckDefFuncPtrIndEndIdx' Reason: 'the optional indirection is deactivated because CbkTxAckDefFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKDEFFUNCPTRINDSTARTIDXOFTXPDUINFO                  STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckDefFuncPtrIndStartIdx' Reason: 'the optional indirection is deactivated because CbkTxAckDefFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO                      STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckDefFuncPtrIndUsed' Reason: 'the optional indirection is deactivated because CbkTxAckDefFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKIMFUNCPTRINDENDIDXOFTXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckImFuncPtrIndEndIdx' Reason: 'the optional indirection is deactivated because CbkTxAckImFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKIMFUNCPTRINDSTARTIDXOFTXPDUINFO                   STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckImFuncPtrIndStartIdx' Reason: 'the optional indirection is deactivated because CbkTxAckImFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKIMFUNCPTRINDUSEDOFTXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckImFuncPtrIndUsed' Reason: 'the optional indirection is deactivated because CbkTxAckImFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXERRFUNCPTRINDENDIDXOFTXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxErrFuncPtrIndEndIdx' Reason: 'the optional indirection is deactivated because CbkTxErrFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXERRFUNCPTRINDSTARTIDXOFTXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxErrFuncPtrIndStartIdx' Reason: 'the optional indirection is deactivated because CbkTxErrFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxErrFuncPtrIndUsed' Reason: 'the optional indirection is deactivated because CbkTxErrFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CLRUBOFTXPDUINFO                                          STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ClrUb' Reason: 'This array is deactivated, because no Tx I-PDUs with update-bits are configured.' */
#define COM_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO               STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ConstValueUInt8UbClearMaskEndIdx' Reason: 'the optional indirection is deactivated because ConstValueUInt8UbClearMaskUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO             STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ConstValueUInt8UbClearMaskStartIdx' Reason: 'the optional indirection is deactivated because ConstValueUInt8UbClearMaskUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEUINT8UBCLEARMASKUSEDOFTXPDUINFO                 STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ConstValueUInt8UbClearMaskUsed' Reason: 'the optional indirection is deactivated because ConstValueUInt8UbClearMaskUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_EXTERNALIDOFTXPDUINFO                                     STD_ON
#define COM_GWTIMEOUTINFOIDXOFTXPDUINFO                               STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.GwTimeoutInfoIdx' Reason: 'the optional indirection is deactivated because GwTimeoutInfoUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_GWTIMEOUTINFOUSEDOFTXPDUINFO                              STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.GwTimeoutInfoUsed' Reason: 'the optional indirection is deactivated because GwTimeoutInfoUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFTXPDUINFOINDENDIDXOFTXPDUINFO              STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.IPduGroupInfoOfTxPduInfoIndEndIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFTXPDUINFOINDSTARTIDXOFTXPDUINFO            STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.IPduGroupInfoOfTxPduInfoIndStartIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFTXPDUINFOINDUSEDOFTXPDUINFO                STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.IPduGroupInfoOfTxPduInfoIndUsed' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFTXPDUINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfTxPduInfo is always 'false' due to this, the array is deactivated.' */
#define COM_METADATALENGTHOFTXPDUINFO                                 STD_ON
#define COM_PDUWITHMETADATALENGTHOFTXPDUINFO                          STD_ON
#define COM_TXBUFFERENDIDXOFTXPDUINFO                                 STD_ON
#define COM_TXBUFFERLENGTHOFTXPDUINFO                                 STD_ON
#define COM_TXBUFFERMETADATAENDIDXOFTXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxBufferMetaDataEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXBUFFERMETADATALENGTHOFTXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxBufferMetaDataLength' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXBUFFERMETADATASTARTIDXOFTXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxBufferMetaDataStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXBUFFERMETADATAUSEDOFTXPDUINFO                           STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxBufferMetaDataUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXBUFFERSTARTIDXOFTXPDUINFO                               STD_ON
#define COM_TXBUFFERUSEDOFTXPDUINFO                                   STD_ON
#define COM_TXPDUCALLOUTFUNCPTRIDXOFTXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduCalloutFuncPtrIdx' Reason: 'the optional indirection is deactivated because TxPduCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUCALLOUTFUNCPTRUSEDOFTXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduCalloutFuncPtrUsed' Reason: 'the optional indirection is deactivated because TxPduCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUINITVALUEENDIDXOFTXPDUINFO                           STD_ON
#define COM_TXPDUINITVALUEMETADATAENDIDXOFTXPDUINFO                   STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduInitValueMetaDataEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXPDUINITVALUEMETADATASTARTIDXOFTXPDUINFO                 STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduInitValueMetaDataStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduInitValueMetaDataUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXPDUINITVALUESTARTIDXOFTXPDUINFO                         STD_ON
#define COM_TXPDUINITVALUEUSEDOFTXPDUINFO                             STD_ON
#define COM_TXPDUTTCALLOUTFUNCPTRIDXOFTXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduTTCalloutFuncPtrIdx' Reason: 'the optional indirection is deactivated because TxPduTTCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUTTCALLOUTFUNCPTRUSEDOFTXPDUINFO                      STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduTTCalloutFuncPtrUsed' Reason: 'the optional indirection is deactivated because TxPduTTCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGGRPINFOINDENDIDXOFTXPDUINFO                          STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxSigGrpInfoIndEndIdx' Reason: 'the optional indirection is deactivated because TxSigGrpInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxSigGrpInfoIndStartIdx' Reason: 'the optional indirection is deactivated because TxSigGrpInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGGRPINFOINDUSEDOFTXPDUINFO                            STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxSigGrpInfoIndUsed' Reason: 'the optional indirection is deactivated because TxSigGrpInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXTOUTINFOIDXOFTXPDUINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxTOutInfoIdx' Reason: 'the optional indirection is deactivated because TxTOutInfoUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXTOUTINFOUSEDOFTXPDUINFO                                 STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxTOutInfoUsed' Reason: 'the optional indirection is deactivated because TxTOutInfoUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXTPINFOIDXOFTXPDUINFO                                    STD_ON
#define COM_TXTPINFOUSEDOFTXPDUINFO                                   STD_ON
#define COM_TXPDUINFOIND                                              STD_OFF  /**< Deactivateable: 'Com_TxPduInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUINITVALUE                                            STD_ON
#define COM_TXPDUTTCALLOUTFUNCPTR                                     STD_OFF  /**< Deactivateable: 'Com_TxPduTTCalloutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPROCESSINGISRLOCKCOUNTER                                STD_ON
#define COM_TXPROCESSINGISRLOCKTHRESHOLD                              STD_ON
#define COM_TXSDULENGTH                                               STD_ON
#define COM_TXSIGGRPINFO                                              STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_ARRAYACCESSUSEDOFTXSIGGRPINFO                             STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.ArrayAccessUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_INVALIDHNDOFTXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.InvalidHnd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_PDUOFFSETOFTXSIGGRPINFO                                   STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.PduOffset' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_SIGGROUPONCHANGEOFFSETOFTXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeOffset' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGROUPONCHANGESTARTPOSITIONOFTXSIGGRPINFO               STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeStartPosition' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGROUPONCHANGEWITHOUTREPOFFSETOFTXSIGGRPINFO            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeWithoutRepOffset' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGROUPONCHANGEWITHOUTREPSTARTPOSITIONOFTXSIGGRPINFO     STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeWithoutRepStartPosition' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGRPARRAYFILTERINFOENDIDXOFTXSIGGRPINFO                 STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGrpArrayFilterInfoEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGRPARRAYFILTERINFOSTARTIDXOFTXSIGGRPINFO               STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGrpArrayFilterInfoStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGRPARRAYFILTERINFOUSEDOFTXSIGGRPINFO                   STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGrpArrayFilterInfoUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TRANSFERPROPERTYOFTXSIGGRPINFO                            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TransferProperty' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERENDIDXOFTXSIGGRPINFO                              STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxBufferEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERLENGTHOFTXSIGGRPINFO                              STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxBufferLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERSIGGRPINTXIPDUENDIDXOFTXSIGGRPINFO                STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxBufferSigGrpInTxIPDUEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERSIGGRPINTXIPDULENGTHOFTXSIGGRPINFO                STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxBufferSigGrpInTxIPDULength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERSIGGRPINTXIPDUSTARTIDXOFTXSIGGRPINFO              STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxBufferSigGrpInTxIPDUStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERSTARTIDXOFTXSIGGRPINFO                            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxBufferStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGGRPINFO                  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxBufferUbIdxInTxBufferIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERUBIDXINTXBUFFERUSEDOFTXSIGGRPINFO                 STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxBufferUbIdxInTxBufferUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERUSEDOFTXSIGGRPINFO                                STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxBufferUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITSTATEENDIDXOFTXSIGGRPINFO                     STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxFilterInitStateEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITSTATESTARTIDXOFTXSIGGRPINFO                   STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxFilterInitStateStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITSTATEUSEDOFTXSIGGRPINFO                       STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxFilterInitStateUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUINFOIDXOFTXSIGGRPINFO                                STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPMASKENDIDXOFTXSIGGRPINFO                          STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpMaskEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPMASKLENGTHOFTXSIGGRPINFO                          STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpMaskLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPMASKSTARTIDXOFTXSIGGRPINFO                        STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpMaskStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPMASKUSEDOFTXSIGGRPINFO                            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpMaskUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEENDIDXOFTXSIGGRPINFO          STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGELENGTHOFTXSIGGRPINFO          STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeLength' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGESTARTIDXOFTXSIGGRPINFO        STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEUSEDOFTXSIGGRPINFO            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPENDIDXOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPLENGTHOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepLength' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPSTARTIDXOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPUSEDOFTXSIGGRPINFO  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGINFOINVVALUEINDENDIDXOFTXSIGGRPINFO                  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigInfoInvValueIndEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGINFOINVVALUEINDSTARTIDXOFTXSIGGRPINFO                STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigInfoInvValueIndStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGINFOINVVALUEINDUSEDOFTXSIGGRPINFO                    STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigInfoInvValueIndUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_UBMASKIDXOFTXSIGGRPINFO                                   STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.UbMaskIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_UBMASKUSEDOFTXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.UbMaskUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPINFOIND                                           STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPMASK                                              STD_OFF  /**< Deactivateable: 'Com_TxSigGrpMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPONCHANGEMASK                                      STD_OFF  /**< Deactivateable: 'Com_TxSigGrpOnChangeMask' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGINFO                                                 STD_ON
#define COM_APPLTYPEOFTXSIGINFO                                       STD_ON
#define COM_BITLENGTHOFTXSIGINFO                                      STD_ON
#define COM_BITPOSITIONOFTXSIGINFO                                    STD_ON
#define COM_BUSACCOFTXSIGINFO                                         STD_ON
#define COM_BYTELENGTHOFTXSIGINFO                                     STD_ON
#define COM_BYTEPOSITIONOFTXSIGINFO                                   STD_ON
#define COM_CONSTVALUEARRAYBASEDINVVALUEENDIDXOFTXSIGINFO             STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.ConstValueArrayBasedInvValueEndIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUELENGTHOFTXSIGINFO             STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.ConstValueArrayBasedInvValueLength' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUESTARTIDXOFTXSIGINFO           STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.ConstValueArrayBasedInvValueStartIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFTXSIGINFO               STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.ConstValueArrayBasedInvValueUsed' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOIDXOFTXSIGINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.FilterInfoIdx' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOUSEDOFTXSIGINFO                                 STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.FilterInfoUsed' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINITVALUEIDXOFTXSIGINFO                             STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.FilterInitValueIdx' Reason: 'the optional indirection is deactivated because FilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINITVALUEUSEDOFTXSIGINFO                            STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.FilterInitValueUsed' Reason: 'the optional indirection is deactivated because FilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVVALUEIDXOFTXSIGINFO                                    STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.InvValueIdx' Reason: 'the optional indirection is deactivated because InvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVVALUEUSEDOFTXSIGINFO                                   STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.InvValueUsed' Reason: 'the optional indirection is deactivated because InvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFTXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfTxSigInfo is always 'false' due to this, the array is deactivated.' */
#define COM_ONCHANGEIDXOFTXSIGINFO                                    STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.OnChangeIdx' Reason: 'the optional indirection is deactivated because OnChangeUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_ONCHANGEUSEDOFTXSIGINFO                                   STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.OnChangeUsed' Reason: 'the optional indirection is deactivated because OnChangeUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_STARTBYTEINPDUPOSITIONOFTXSIGINFO                         STD_ON
#define COM_TRIGGEREDOFTXSIGINFO                                      STD_ON
#define COM_TXBUFFERENDIDXOFTXSIGINFO                                 STD_ON
#define COM_TXBUFFERLENGTHOFTXSIGINFO                                 STD_ON
#define COM_TXBUFFERSTARTIDXOFTXSIGINFO                               STD_ON
#define COM_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO                     STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxBufferUbIdxInTxBufferIdx' Reason: 'the optional indirection is deactivated because TxBufferUbIdxInTxBufferUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXBUFFERUBIDXINTXBUFFERUSEDOFTXSIGINFO                    STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxBufferUbIdxInTxBufferUsed' Reason: 'the optional indirection is deactivated because TxBufferUbIdxInTxBufferUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXBUFFERUSEDOFTXSIGINFO                                   STD_ON
#define COM_TXFILTERINITSTATEIDXOFTXSIGINFO                           STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitStateIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATEUSEDOFTXSIGINFO                          STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitStateUsed' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEENDIDXOFTXSIGINFO STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitValueArrayBasedFilterInitValueEndIdx' Reason: 'the optional indirection is deactivated because TxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUELENGTHOFTXSIGINFO STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitValueArrayBasedFilterInitValueLength' Reason: 'the optional indirection is deactivated because TxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUESTARTIDXOFTXSIGINFO STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitValueArrayBasedFilterInitValueStartIdx' Reason: 'the optional indirection is deactivated because TxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitValueArrayBasedFilterInitValueUsed' Reason: 'the optional indirection is deactivated because TxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUINFOIDXOFTXSIGINFO                                   STD_ON
#define COM_TXSIGGRPINFOIDXOFTXSIGINFO                                STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxSigGrpInfoIdx' Reason: 'the optional indirection is deactivated because TxSigGrpInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGGRPINFOUSEDOFTXSIGINFO                               STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxSigGrpInfoUsed' Reason: 'the optional indirection is deactivated because TxSigGrpInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_UBMASKIDXOFTXSIGINFO                                      STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.UbMaskIdx' Reason: 'the optional indirection is deactivated because UbMaskUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_UBMASKUSEDOFTXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.UbMaskUsed' Reason: 'the optional indirection is deactivated because UbMaskUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_WITHOUTREPOFTXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.WithoutRep' Reason: 'the value of Com_WithoutRepOfTxSigInfo is always 'false' due to this, the array is deactivated.' */
#define COM_TXSIGINFOFILTERINITVALUEIND                               STD_OFF  /**< Deactivateable: 'Com_TxSigInfoFilterInitValueInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGINFOINVVALUEIND                                      STD_OFF  /**< Deactivateable: 'Com_TxSigInfoInvValueInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXTOUTCNT                                                 STD_OFF  /**< Deactivateable: 'Com_TxTOutCnt' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXTOUTINFO                                                STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKTXTOUTFUNCPTRINDENDIDXOFTXTOUTINFO                     STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.CbkTxTOutFuncPtrIndEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXTOUTFUNCPTRINDSTARTIDXOFTXTOUTINFO                   STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.CbkTxTOutFuncPtrIndStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXTOUTFUNCPTRINDUSEDOFTXTOUTINFO                       STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.CbkTxTOutFuncPtrIndUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FACTOROFTXTOUTINFO                                        STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.Factor' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_MODEOFTXTOUTINFO                                          STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.Mode' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUINFOIDXOFTXTOUTINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.TxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXTMPTPPDULENGTH                                          STD_ON
#define COM_TXTPCONNECTIONSTATE                                       STD_ON
#define COM_TXTPINFO                                                  STD_ON
#define COM_BUFFERSIZEOFTXTPINFO                                      STD_ON
#define COM_DYNAMICINITIALLENGTHOFTXTPINFO                            STD_ON
#define COM_TXBUFFERENDIDXOFTXTPINFO                                  STD_ON
#define COM_TXBUFFERLENGTHOFTXTPINFO                                  STD_ON
#define COM_TXBUFFERSTARTIDXOFTXTPINFO                                STD_ON
#define COM_TXBUFFERUSEDOFTXTPINFO                                    STD_ON
#define COM_TXSIGINFODYNSIGIDXOFTXTPINFO                              STD_OFF  /**< Deactivateable: 'Com_TxTpInfo.TxSigInfoDynSigIdx' Reason: 'the optional indirection is deactivated because TxSigInfoDynSigUsedOfTxTpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGINFODYNSIGUSEDOFTXTPINFO                             STD_OFF  /**< Deactivateable: 'Com_TxTpInfo.TxSigInfoDynSigUsed' Reason: 'the optional indirection is deactivated because TxSigInfoDynSigUsedOfTxTpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXTPSDULENGTH                                             STD_ON
#define COM_TXTPWRITTENBYTESCOUNTER                                   STD_ON
#define COM_WAITINGFORCONFIRMATION                                    STD_OFF  /**< Deactivateable: 'Com_WaitingForConfirmation' Reason: 'This array is deactivated, because no Tx error notification functions are configured.' */
#define COM_PCCONFIG                                                  STD_ON
#define COM_ALWAYSACTIVERXCOMIPDUSOFPCCONFIG                          STD_ON
#define COM_ALWAYSACTIVETXCOMIPDUSOFPCCONFIG                          STD_ON
#define COM_CONFIGIDOFPCCONFIG                                        STD_ON
#define COM_CONSTVALUEARRAYBASEDOFPCCONFIG                            STD_ON
#define COM_CONSTVALUEUINT16OFPCCONFIG                                STD_ON
#define COM_CURRENTTXMODEOFPCCONFIG                                   STD_ON
#define COM_CYCLETIMECNTOFPCCONFIG                                    STD_ON
#define COM_CYCLICSENDREQUESTOFPCCONFIG                               STD_ON
#define COM_DELAYTIMECNTOFPCCONFIG                                    STD_ON
#define COM_FINALMAGICNUMBEROFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Com_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define COM_GATEWAYDESCRIPTIONPROCESSINGISRLOCKTHRESHOLDOFPCCONFIG    STD_OFF  /**< Deactivateable: 'Com_PCConfig.GatewayDescriptionProcessingISRLockThreshold' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_GATEWAYPROCESSINGISRLOCKCOUNTEROFPCCONFIG                 STD_ON
#define COM_GATEWAYPROCESSINGISRLOCKTHRESHOLDOFPCCONFIG               STD_OFF  /**< Deactivateable: 'Com_PCConfig.GatewayProcessingISRLockThreshold' Reason: 'Signal Gateway is not configured.' */
#define COM_HANDLERXPDUDEFERREDOFPCCONFIG                             STD_ON
#define COM_INITDATAHASHCODEOFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Com_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define COM_INITIALIZEDOFPCCONFIG                                     STD_ON
#define COM_PDUGRPCNTOFPCCONFIG                                       STD_ON
#define COM_REPCNTOFPCCONFIG                                          STD_ON
#define COM_REPCYCLECNTOFPCCONFIG                                     STD_ON
#define COM_RXACCESSINFOINDOFPCCONFIG                                 STD_ON
#define COM_RXACCESSINFOOFPCCONFIG                                    STD_ON
#define COM_RXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG              STD_ON
#define COM_RXDEADLINEMONITORINGISRLOCKTHRESHOLDOFPCCONFIG            STD_OFF  /**< Deactivateable: 'Com_PCConfig.RxDeadlineMonitoringISRLockThreshold' Reason: 'No Rx Signals or SignalGroups with a configured timeout are present. ' */
#define COM_RXDEFPDUBUFFEROFPCCONFIG                                  STD_ON
#define COM_RXDEFERREDPROCESSINGISRLOCKCOUNTEROFPCCONFIG              STD_ON
#define COM_RXDEFERREDPROCESSINGISRLOCKTHRESHOLDOFPCCONFIG            STD_ON
#define COM_RXDLMONDIVISOROFPCCONFIG                                  STD_OFF  /**< Deactivateable: 'Com_PCConfig.RxDlMonDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_RXDYNSIGNALLENGTHOFPCCONFIG                               STD_ON
#define COM_RXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                       STD_ON
#define COM_RXIPDUGROUPISRLOCKTHRESHOLDOFPCCONFIG                     STD_ON
#define COM_RXPDUGRPACTIVEOFPCCONFIG                                  STD_ON
#define COM_RXPDUINFOOFPCCONFIG                                       STD_ON
#define COM_RXSIGBUFFERARRAYBASEDOFPCCONFIG                           STD_ON
#define COM_RXSIGBUFFERUINT16OFPCCONFIG                               STD_ON
#define COM_RXSIGINFOOFPCCONFIG                                       STD_ON
#define COM_RXTPBUFFEROFPCCONFIG                                      STD_ON
#define COM_RXTPCONNECTIONSTATEOFPCCONFIG                             STD_ON
#define COM_RXTPINFOOFPCCONFIG                                        STD_ON
#define COM_RXTPSDULENGTHOFPCCONFIG                                   STD_ON
#define COM_RXTPWRITTENBYTESCOUNTEROFPCCONFIG                         STD_ON
#define COM_SIZEOFALWAYSACTIVERXCOMIPDUSOFPCCONFIG                    STD_ON
#define COM_SIZEOFALWAYSACTIVETXCOMIPDUSOFPCCONFIG                    STD_ON
#define COM_SIZEOFCONSTVALUEARRAYBASEDOFPCCONFIG                      STD_ON
#define COM_SIZEOFCONSTVALUEUINT16OFPCCONFIG                          STD_ON
#define COM_SIZEOFCURRENTTXMODEOFPCCONFIG                             STD_ON
#define COM_SIZEOFCYCLETIMECNTOFPCCONFIG                              STD_ON
#define COM_SIZEOFCYCLICSENDREQUESTOFPCCONFIG                         STD_ON
#define COM_SIZEOFDELAYTIMECNTOFPCCONFIG                              STD_ON
#define COM_SIZEOFHANDLERXPDUDEFERREDOFPCCONFIG                       STD_ON
#define COM_SIZEOFREPCNTOFPCCONFIG                                    STD_ON
#define COM_SIZEOFREPCYCLECNTOFPCCONFIG                               STD_ON
#define COM_SIZEOFRXACCESSINFOINDOFPCCONFIG                           STD_ON
#define COM_SIZEOFRXACCESSINFOOFPCCONFIG                              STD_ON
#define COM_SIZEOFRXDEFPDUBUFFEROFPCCONFIG                            STD_ON
#define COM_SIZEOFRXDYNSIGNALLENGTHOFPCCONFIG                         STD_ON
#define COM_SIZEOFRXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_SIZEOFRXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFRXSIGBUFFERARRAYBASEDOFPCCONFIG                     STD_ON
#define COM_SIZEOFRXSIGBUFFERUINT16OFPCCONFIG                         STD_ON
#define COM_SIZEOFRXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFRXTPBUFFEROFPCCONFIG                                STD_ON
#define COM_SIZEOFRXTPCONNECTIONSTATEOFPCCONFIG                       STD_ON
#define COM_SIZEOFRXTPINFOOFPCCONFIG                                  STD_ON
#define COM_SIZEOFRXTPSDULENGTHOFPCCONFIG                             STD_ON
#define COM_SIZEOFRXTPWRITTENBYTESCOUNTEROFPCCONFIG                   STD_ON
#define COM_SIZEOFTMPRXBUFFEROFPCCONFIG                               STD_ON
#define COM_SIZEOFTRANSMITREQUESTOFPCCONFIG                           STD_ON
#define COM_SIZEOFTXBUFFEROFPCCONFIG                                  STD_ON
#define COM_SIZEOFTXDYNSIGNALLENGTHOFPCCONFIG                         STD_ON
#define COM_SIZEOFTXMODEFALSEOFPCCONFIG                               STD_ON
#define COM_SIZEOFTXMODEINFOOFPCCONFIG                                STD_ON
#define COM_SIZEOFTXMODETRUEOFPCCONFIG                                STD_ON
#define COM_SIZEOFTXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_SIZEOFTXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFTXPDUINITVALUEOFPCCONFIG                            STD_ON
#define COM_SIZEOFTXSDULENGTHOFPCCONFIG                               STD_ON
#define COM_SIZEOFTXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFTXTMPTPPDULENGTHOFPCCONFIG                          STD_ON
#define COM_SIZEOFTXTPCONNECTIONSTATEOFPCCONFIG                       STD_ON
#define COM_SIZEOFTXTPINFOOFPCCONFIG                                  STD_ON
#define COM_SIZEOFTXTPSDULENGTHOFPCCONFIG                             STD_ON
#define COM_SIZEOFTXTPWRITTENBYTESCOUNTEROFPCCONFIG                   STD_ON
#define COM_TMPRXBUFFEROFPCCONFIG                                     STD_ON
#define COM_TRANSMITREQUESTOFPCCONFIG                                 STD_ON
#define COM_TXBUFFEROFPCCONFIG                                        STD_ON
#define COM_TXCYCLECOUNTERDIVISOROFPCCONFIG                           STD_OFF  /**< Deactivateable: 'Com_PCConfig.TxCycleCounterDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXCYCLICPROCESSINGISRLOCKCOUNTEROFPCCONFIG                STD_ON
#define COM_TXCYCLICPROCESSINGISRLOCKTHRESHOLDOFPCCONFIG              STD_OFF  /**< Deactivateable: 'Com_PCConfig.TxCyclicProcessingISRLockThreshold' Reason: 'No Tx cyclic processing required.' */
#define COM_TXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG              STD_ON
#define COM_TXDEADLINEMONITORINGISRLOCKTHRESHOLDOFPCCONFIG            STD_OFF  /**< Deactivateable: 'Com_PCConfig.TxDeadlineMonitoringISRLockThreshold' Reason: 'No Tx Signals or SignalGroups with a configured timeout are present. ' */
#define COM_TXDLMONDIVISOROFPCCONFIG                                  STD_OFF  /**< Deactivateable: 'Com_PCConfig.TxDlMonDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXDYNSIGNALLENGTHOFPCCONFIG                               STD_ON
#define COM_TXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                       STD_ON
#define COM_TXIPDUGROUPISRLOCKTHRESHOLDOFPCCONFIG                     STD_ON
#define COM_TXMODEFALSEOFPCCONFIG                                     STD_ON
#define COM_TXMODEINFOOFPCCONFIG                                      STD_ON
#define COM_TXMODETRUEOFPCCONFIG                                      STD_ON
#define COM_TXPDUGRPACTIVEOFPCCONFIG                                  STD_ON
#define COM_TXPDUINFOOFPCCONFIG                                       STD_ON
#define COM_TXPDUINITVALUEOFPCCONFIG                                  STD_ON
#define COM_TXPROCESSINGISRLOCKCOUNTEROFPCCONFIG                      STD_ON
#define COM_TXPROCESSINGISRLOCKTHRESHOLDOFPCCONFIG                    STD_ON
#define COM_TXSDULENGTHOFPCCONFIG                                     STD_ON
#define COM_TXSIGINFOOFPCCONFIG                                       STD_ON
#define COM_TXTMPTPPDULENGTHOFPCCONFIG                                STD_ON
#define COM_TXTPCONNECTIONSTATEOFPCCONFIG                             STD_ON
#define COM_TXTPINFOOFPCCONFIG                                        STD_ON
#define COM_TXTPSDULENGTHOFPCCONFIG                                   STD_ON
#define COM_TXTPWRITTENBYTESCOUNTEROFPCCONFIG                         STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  ComPCMinNumericValueDefines  Com Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define COM_MIN_CYCLETIMECNT                                          0u
#define COM_MIN_DELAYTIMECNT                                          0u
#define COM_MIN_GATEWAYPROCESSINGISRLOCKCOUNTER                       0u
#define COM_MIN_HANDLERXPDUDEFERRED                                   0u
#define COM_MIN_REPCNT                                                0u
#define COM_MIN_REPCYCLECNT                                           0u
#define COM_MIN_RXDEADLINEMONITORINGISRLOCKCOUNTER                    0u
#define COM_MIN_RXDEFPDUBUFFER                                        0u
#define COM_MIN_RXDEFERREDPROCESSINGISRLOCKCOUNTER                    0u
#define COM_MIN_RXDYNSIGNALLENGTH                                     0u
#define COM_MIN_RXIPDUGROUPISRLOCKCOUNTER                             0u
#define COM_MIN_RXSIGBUFFERARRAYBASED                                 0u
#define COM_MIN_RXSIGBUFFERUINT16                                     0u
#define COM_MIN_RXTPBUFFER                                            0u
#define COM_MIN_RXTPSDULENGTH                                         0u
#define COM_MIN_RXTPWRITTENBYTESCOUNTER                               0u
#define COM_MIN_TMPRXBUFFER                                           0u
#define COM_MIN_TXBUFFER                                              0u
#define COM_MIN_TXCYCLICPROCESSINGISRLOCKCOUNTER                      0u
#define COM_MIN_TXDEADLINEMONITORINGISRLOCKCOUNTER                    0u
#define COM_MIN_TXDYNSIGNALLENGTH                                     0u
#define COM_MIN_TXIPDUGROUPISRLOCKCOUNTER                             0u
#define COM_MIN_TXPROCESSINGISRLOCKCOUNTER                            0u
#define COM_MIN_TXSDULENGTH                                           0u
#define COM_MIN_TXTMPTPPDULENGTH                                      0u
#define COM_MIN_TXTPSDULENGTH                                         0u
#define COM_MIN_TXTPWRITTENBYTESCOUNTER                               0u
/** 
  \}
*/ 

/** 
  \defgroup  ComPCMaxNumericValueDefines  Com Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define COM_MAX_CYCLETIMECNT                                          255u
#define COM_MAX_DELAYTIMECNT                                          255u
#define COM_MAX_GATEWAYPROCESSINGISRLOCKCOUNTER                       65535u
#define COM_MAX_HANDLERXPDUDEFERRED                                   65535u
#define COM_MAX_REPCNT                                                255u
#define COM_MAX_REPCYCLECNT                                           255u
#define COM_MAX_RXDEADLINEMONITORINGISRLOCKCOUNTER                    65535u
#define COM_MAX_RXDEFPDUBUFFER                                        255u
#define COM_MAX_RXDEFERREDPROCESSINGISRLOCKCOUNTER                    65535u
#define COM_MAX_RXDYNSIGNALLENGTH                                     65535u
#define COM_MAX_RXIPDUGROUPISRLOCKCOUNTER                             65535u
#define COM_MAX_RXSIGBUFFERARRAYBASED                                 255u
#define COM_MAX_RXSIGBUFFERUINT16                                     65535u
#define COM_MAX_RXTPBUFFER                                            255u
#define COM_MAX_RXTPSDULENGTH                                         65535u
#define COM_MAX_RXTPWRITTENBYTESCOUNTER                               65535u
#define COM_MAX_TMPRXBUFFER                                           255u
#define COM_MAX_TXBUFFER                                              255u
#define COM_MAX_TXCYCLICPROCESSINGISRLOCKCOUNTER                      65535u
#define COM_MAX_TXDEADLINEMONITORINGISRLOCKCOUNTER                    65535u
#define COM_MAX_TXDYNSIGNALLENGTH                                     65535u
#define COM_MAX_TXIPDUGROUPISRLOCKCOUNTER                             65535u
#define COM_MAX_TXPROCESSINGISRLOCKCOUNTER                            65535u
#define COM_MAX_TXSDULENGTH                                           65535u
#define COM_MAX_TXTMPTPPDULENGTH                                      65535u
#define COM_MAX_TXTPSDULENGTH                                         65535u
#define COM_MAX_TXTPWRITTENBYTESCOUNTER                               65535u
/** 
  \}
*/ 

/** 
  \defgroup  ComPCNoReferenceDefines  Com No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define COM_NO_BUFFERIDXOFRXACCESSINFO                                255u
#define COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO      255u
#define COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO    255u
#define COM_NO_INITVALUEIDXOFRXACCESSINFO                             255u
#define COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO        65535u
#define COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO      65535u
#define COM_NO_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                      255u
#define COM_NO_RXACCESSINFOINDENDIDXOFRXPDUINFO                       255u
#define COM_NO_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                     255u
#define COM_NO_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                        65535u
#define COM_NO_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                      65535u
#define COM_NO_RXSIGINFOENDIDXOFRXPDUINFO                             255u
#define COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO                           255u
#define COM_NO_RXTPINFOIDXOFRXPDUINFO                                 255u
#define COM_NO_RXACCESSINFODYNSIGIDXOFRXTPINFO                        255u
#define COM_NO_RXTPBUFFERENDIDXOFRXTPINFO                             65535u
#define COM_NO_RXTPBUFFERSTARTIDXOFRXTPINFO                           65535u
#define COM_NO_TXBUFFERENDIDXOFTXPDUINFO                              65535u
#define COM_NO_TXBUFFERSTARTIDXOFTXPDUINFO                            65535u
#define COM_NO_TXPDUINITVALUEENDIDXOFTXPDUINFO                        65535u
#define COM_NO_TXPDUINITVALUESTARTIDXOFTXPDUINFO                      65535u
#define COM_NO_TXTPINFOIDXOFTXPDUINFO                                 255u
#define COM_NO_TXBUFFERENDIDXOFTXSIGINFO                              65535u
#define COM_NO_TXBUFFERSTARTIDXOFTXSIGINFO                            65535u
#define COM_NO_TXBUFFERENDIDXOFTXTPINFO                               65535u
#define COM_NO_TXBUFFERSTARTIDXOFTXTPINFO                             65535u
/** 
  \}
*/ 

/** 
  \defgroup  ComPCEnumExistsDefines  Com Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_FLOAT32              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_FLOAT32               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_FLOAT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_FLOAT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_FLOAT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_FLOAT32      STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_FLOAT32       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_FLOAT32                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_FLOAT64              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_FLOAT64               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_FLOAT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_FLOAT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_FLOAT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_FLOAT64      STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_FLOAT64       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_FLOAT64                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_SINT16               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT16                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT16 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT16 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT16  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT16       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT16        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_SINT16                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_SINT32               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT32                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT32  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT32       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT32        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_SINT32                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_SINT64               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT64                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT64  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT64       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT64        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_SINT64                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_SINT8                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT8                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT8 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT8  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT8   STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT8        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT8         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_SINT8                  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_UINT16               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT16                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT16 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT16 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT16  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT16       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT16        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_UINT16                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_UINT32               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT32                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT32  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT32       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT32        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_UINT32                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_UINT64               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT64                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT64  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT64       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT64        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_UINT64                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_UINT8                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT8                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT8 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT8  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT8   STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT8        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT8         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_UINT8                  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_UINT8_N              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT8_N               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT8_N STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT8_N STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT8_N STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT8_N      STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT8_N       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_UINT8_N                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_DIRECT_COPYTYPEOFGWDESCRIPTIONACCESSINFO           STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.CopyType' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_RIGHTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO       STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.CopyType' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_LEFTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO        STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.CopyType' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_BIG_ENDIAN_ENDIANNESSOFGWDESCRIPTIONACCESSINFO     STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Endianness' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_LITTLE_ENDIAN_ENDIANNESSOFGWDESCRIPTIONACCESSINFO  STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Endianness' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_IMMEDIATE_PENDING_TYPEOFGWDESCRIPTIONACCESSINFO    STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_IMMEDIATE_TRIGGERED_TYPEOFGWDESCRIPTIONACCESSINFO  STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_IMMEDIATE_TRIGGERED_ONCHANGE_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_IMMEDIATE_TRIGGERED_ONCHANGE_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_IMMEDIATE_TRIGGERED_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_DEFERRED_PENDING_TYPEOFGWDESCRIPTIONACCESSINFO     STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_DEFERRED_TRIGGERED_TYPEOFGWDESCRIPTIONACCESSINFO   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_DEFERRED_TRIGGERED_ONCHANGE_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_DEFERRED_TRIGGERED_ONCHANGE_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_DEFERRED_TRIGGERED_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] is configured to 'false'' */
#define COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO                       STD_OFF
#define COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO                       STD_OFF
#define COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO                      STD_ON
#define COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_UINT64_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO                     STD_OFF
#define COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO                   STD_ON
#define COM_EXISTS_ZEROBIT_APPLTYPEOFRXACCESSINFO                     STD_OFF
#define COM_EXISTS_FLOAT32_APPLTYPEOFRXACCESSINFO                     STD_OFF
#define COM_EXISTS_FLOAT64_APPLTYPEOFRXACCESSINFO                     STD_OFF
#define COM_EXISTS_NBIT_BUSACCOFRXACCESSINFO                          STD_ON
#define COM_EXISTS_BYTE_BUSACCOFRXACCESSINFO                          STD_OFF
#define COM_EXISTS_NBYTE_BUSACCOFRXACCESSINFO                         STD_OFF
#define COM_EXISTS_NBYTE_SW_BUSACCOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_NBITNBYTE_BUSACCOFRXACCESSINFO                     STD_ON
#define COM_EXISTS_NBITNBYTE_SW_BUSACCOFRXACCESSINFO                  STD_OFF
#define COM_EXISTS_ARRAY_BASED_BUSACCOFRXACCESSINFO                   STD_ON
#define COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO               STD_ON
#define COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXPDUINFO              STD_OFF
#define COM_EXISTS_NORMAL_TYPEOFRXPDUINFO                             STD_ON
#define COM_EXISTS_TP_TYPEOFRXPDUINFO                                 STD_ON
#define COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO            STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.SignalProcessing' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXSIGGRPINFO           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.SignalProcessing' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO               STD_ON
#define COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXSIGINFO              STD_OFF
#define COM_EXISTS_ALWAYS_FILTERALGOOFSIGGRPARRAYFILTERINFO           STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_NEVER_FILTERALGOOFSIGGRPARRAYFILTERINFO            STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFSIGGRPARRAYFILTERINFO STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFSIGGRPARRAYFILTERINFO STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFSIGGRPARRAYFILTERINFO STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFSIGGRPARRAYFILTERINFO   STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFSIGGRPARRAYFILTERINFO    STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_NONE_FILTERALGOOFSIGGRPARRAYFILTERINFO             STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_TRANSMIT_CLRUBOFTXPDUINFO                          STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ClrUb' Reason: 'This array is deactivated, because no Tx I-PDUs with update-bits are configured.' */
#define COM_EXISTS_TRIGGER_TRANSMIT_CLRUBOFTXPDUINFO                  STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ClrUb' Reason: 'This array is deactivated, because no Tx I-PDUs with update-bits are configured.' */
#define COM_EXISTS_NOT_USED_CLRUBOFTXPDUINFO                          STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ClrUb' Reason: 'This array is deactivated, because no Tx I-PDUs with update-bits are configured.' */
#define COM_EXISTS_CONFIRMATION_CLRUBOFTXPDUINFO                      STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ClrUb' Reason: 'This array is deactivated, because no Tx I-PDUs with update-bits are configured.' */
#define COM_EXISTS_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO             STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TransferProperty' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_TRIGGERED_TRANSFERPROPERTYOFTXSIGGRPINFO           STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TransferProperty' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_TRIGGERED_WITHOUT_REPETITION_TRANSFERPROPERTYOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TransferProperty' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_TRIGGERED_ON_CHANGE_TRANSFERPROPERTYOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TransferProperty' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_TRIGGERED_ON_CHANGE_WITHOUT_REPETITION_TRANSFERPROPERTYOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TransferProperty' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_UINT8_APPLTYPEOFTXSIGINFO                          STD_OFF
#define COM_EXISTS_SINT8_APPLTYPEOFTXSIGINFO                          STD_OFF
#define COM_EXISTS_UINT16_APPLTYPEOFTXSIGINFO                         STD_ON
#define COM_EXISTS_SINT16_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_UINT32_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_SINT32_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_UINT64_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_SINT64_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO                        STD_ON
#define COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO                      STD_OFF
#define COM_EXISTS_ZEROBIT_APPLTYPEOFTXSIGINFO                        STD_OFF
#define COM_EXISTS_FLOAT32_APPLTYPEOFTXSIGINFO                        STD_OFF
#define COM_EXISTS_FLOAT64_APPLTYPEOFTXSIGINFO                        STD_OFF
#define COM_EXISTS_NBIT_BUSACCOFTXSIGINFO                             STD_ON
#define COM_EXISTS_BYTE_BUSACCOFTXSIGINFO                             STD_ON
#define COM_EXISTS_NBYTE_BUSACCOFTXSIGINFO                            STD_OFF
#define COM_EXISTS_NBYTE_SW_BUSACCOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO                        STD_ON
#define COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO                     STD_OFF
#define COM_EXISTS_ARRAY_BASED_BUSACCOFTXSIGINFO                      STD_ON
#define COM_EXISTS_NORMAL_MODEOFTXTOUTINFO                            STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.Mode' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_MODEOFTXTOUTINFO                              STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.Mode' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCEnumDefines  Com Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define COM_UINT16_APPLTYPEOFRXACCESSINFO                             0x02u
#define COM_UINT8_DYN_APPLTYPEOFRXACCESSINFO                          0x09u
#define COM_NBIT_BUSACCOFRXACCESSINFO                                 0x00u
#define COM_NBITNBYTE_BUSACCOFRXACCESSINFO                            0x04u
#define COM_ARRAY_BASED_BUSACCOFRXACCESSINFO                          0x06u
#define COM_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO                      0x00u
#define COM_NORMAL_TYPEOFRXPDUINFO                                    0x00u
#define COM_TP_TYPEOFRXPDUINFO                                        0x01u
#define COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO                      0x00u
#define COM_READY_RXTPCONNECTIONSTATE                                 0x00u
#define COM_RECEPTION_STARTED_RXTPCONNECTIONSTATE                     0x01u
#define COM_COPYING_RXTPCONNECTIONSTATE                               0x02u
#define COM_WAITING_FOR_INDICATION_RXTPCONNECTIONSTATE                0x03u
#define COM_BUFFER_LOCKED_RXTPCONNECTIONSTATE                         0x04u
#define COM_UINT16_APPLTYPEOFTXSIGINFO                                0x02u
#define COM_UINT8_N_APPLTYPEOFTXSIGINFO                               0x08u
#define COM_NBIT_BUSACCOFTXSIGINFO                                    0x00u
#define COM_BYTE_BUSACCOFTXSIGINFO                                    0x01u
#define COM_NBITNBYTE_BUSACCOFTXSIGINFO                               0x04u
#define COM_ARRAY_BASED_BUSACCOFTXSIGINFO                             0x06u
#define COM_READY_TXTPCONNECTIONSTATE                                 0x00u
#define COM_TRANSMISSION_STARTED_TXTPCONNECTIONSTATE                  0x01u
#define COM_COPYING_TXTPCONNECTIONSTATE                               0x02u
#define COM_WAITING_FOR_CONFIRMATION_TXTPCONNECTIONSTATE              0x03u
#define COM_TP_ERROR_TXTPCONNECTIONSTATE                              0x04u
/** 
  \}
*/ 

/** 
  \defgroup  ComPCIsReducedToDefineDefines  Com Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define COM_ISDEF_RXPDUINFOIDXOFALWAYSACTIVERXCOMIPDUS                STD_OFF
#define COM_ISDEF_TXPDUINFOIDXOFALWAYSACTIVETXCOMIPDUS                STD_OFF
#define COM_ISDEF_CONSTVALUEARRAYBASED                                STD_OFF
#define COM_ISDEF_CONSTVALUEUINT16                                    STD_OFF
#define COM_ISDEF_APPLTYPEOFRXACCESSINFO                              STD_OFF
#define COM_ISDEF_BITLENGTHOFRXACCESSINFO                             STD_OFF
#define COM_ISDEF_BITPOSITIONOFRXACCESSINFO                           STD_OFF
#define COM_ISDEF_BUFFERIDXOFRXACCESSINFO                             STD_OFF
#define COM_ISDEF_BUFFERUSEDOFRXACCESSINFO                            STD_OFF
#define COM_ISDEF_BUSACCOFRXACCESSINFO                                STD_OFF
#define COM_ISDEF_BYTELENGTHOFRXACCESSINFO                            STD_OFF
#define COM_ISDEF_BYTEPOSITIONOFRXACCESSINFO                          STD_OFF
#define COM_ISDEF_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO   STD_OFF
#define COM_ISDEF_CONSTVALUEARRAYBASEDINITVALUELENGTHOFRXACCESSINFO   STD_OFF
#define COM_ISDEF_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO STD_OFF
#define COM_ISDEF_CONSTVALUEARRAYBASEDINITVALUEUSEDOFRXACCESSINFO     STD_OFF
#define COM_ISDEF_INITVALUEIDXOFRXACCESSINFO                          STD_OFF
#define COM_ISDEF_INITVALUEUSEDOFRXACCESSINFO                         STD_OFF
#define COM_ISDEF_RXPDUINFOIDXOFRXACCESSINFO                          STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO     STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDBUFFERLENGTHOFRXACCESSINFO     STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO   STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO       STD_OFF
#define COM_ISDEF_STARTBYTEINPDUPOSITIONOFRXACCESSINFO                STD_OFF
#define COM_ISDEF_RXACCESSINFOIND                                     STD_OFF
#define COM_ISDEF_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                   STD_OFF
#define COM_ISDEF_HANDLERXPDUDEFERREDUSEDOFRXPDUINFO                  STD_OFF
#define COM_ISDEF_RXACCESSINFOINDENDIDXOFRXPDUINFO                    STD_OFF
#define COM_ISDEF_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                  STD_OFF
#define COM_ISDEF_RXACCESSINFOINDUSEDOFRXPDUINFO                      STD_OFF
#define COM_ISDEF_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                     STD_OFF
#define COM_ISDEF_RXDEFPDUBUFFERLENGTHOFRXPDUINFO                     STD_OFF
#define COM_ISDEF_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                   STD_OFF
#define COM_ISDEF_RXDEFPDUBUFFERUSEDOFRXPDUINFO                       STD_OFF
#define COM_ISDEF_RXSIGINFOENDIDXOFRXPDUINFO                          STD_OFF
#define COM_ISDEF_RXSIGINFOSTARTIDXOFRXPDUINFO                        STD_OFF
#define COM_ISDEF_RXSIGINFOUSEDOFRXPDUINFO                            STD_OFF
#define COM_ISDEF_RXTPINFOIDXOFRXPDUINFO                              STD_OFF
#define COM_ISDEF_RXTPINFOUSEDOFRXPDUINFO                             STD_OFF
#define COM_ISDEF_SIGNALPROCESSINGOFRXPDUINFO                         STD_OFF
#define COM_ISDEF_TYPEOFRXPDUINFO                                     STD_OFF
#define COM_ISDEF_RXACCESSINFOIDXOFRXSIGINFO                          STD_OFF
#define COM_ISDEF_SIGNALPROCESSINGOFRXSIGINFO                         STD_OFF
#define COM_ISDEF_VALIDDLCOFRXSIGINFO                                 STD_OFF
#define COM_ISDEF_BUFFERSIZEOFRXTPINFO                                STD_OFF
#define COM_ISDEF_DYNAMICINITIALLENGTHOFRXTPINFO                      STD_OFF
#define COM_ISDEF_RXACCESSINFODYNSIGIDXOFRXTPINFO                     STD_OFF
#define COM_ISDEF_RXACCESSINFODYNSIGUSEDOFRXTPINFO                    STD_OFF
#define COM_ISDEF_RXTPBUFFERENDIDXOFRXTPINFO                          STD_OFF
#define COM_ISDEF_RXTPBUFFERSTARTIDXOFRXTPINFO                        STD_OFF
#define COM_ISDEF_RXTPBUFFERUSEDOFRXTPINFO                            STD_OFF
#define COM_ISDEF_DIRECTOFTXMODEFALSE                                 STD_OFF
#define COM_ISDEF_INITMODEOFTXMODEINFO                                STD_OFF
#define COM_ISDEF_TXMODEFALSEIDXOFTXMODEINFO                          STD_OFF
#define COM_ISDEF_TXMODETRUEIDXOFTXMODEINFO                           STD_OFF
#define COM_ISDEF_DIRECTOFTXMODETRUE                                  STD_OFF
#define COM_ISDEF_EXTERNALIDOFTXPDUINFO                               STD_OFF
#define COM_ISDEF_METADATALENGTHOFTXPDUINFO                           STD_OFF
#define COM_ISDEF_PDUWITHMETADATALENGTHOFTXPDUINFO                    STD_OFF
#define COM_ISDEF_TXBUFFERENDIDXOFTXPDUINFO                           STD_OFF
#define COM_ISDEF_TXBUFFERLENGTHOFTXPDUINFO                           STD_OFF
#define COM_ISDEF_TXBUFFERSTARTIDXOFTXPDUINFO                         STD_OFF
#define COM_ISDEF_TXBUFFERUSEDOFTXPDUINFO                             STD_OFF
#define COM_ISDEF_TXPDUINITVALUEENDIDXOFTXPDUINFO                     STD_OFF
#define COM_ISDEF_TXPDUINITVALUESTARTIDXOFTXPDUINFO                   STD_OFF
#define COM_ISDEF_TXPDUINITVALUEUSEDOFTXPDUINFO                       STD_OFF
#define COM_ISDEF_TXTPINFOIDXOFTXPDUINFO                              STD_OFF
#define COM_ISDEF_TXTPINFOUSEDOFTXPDUINFO                             STD_OFF
#define COM_ISDEF_TXPDUINITVALUE                                      STD_OFF
#define COM_ISDEF_APPLTYPEOFTXSIGINFO                                 STD_OFF
#define COM_ISDEF_BITLENGTHOFTXSIGINFO                                STD_OFF
#define COM_ISDEF_BITPOSITIONOFTXSIGINFO                              STD_OFF
#define COM_ISDEF_BUSACCOFTXSIGINFO                                   STD_OFF
#define COM_ISDEF_BYTELENGTHOFTXSIGINFO                               STD_OFF
#define COM_ISDEF_BYTEPOSITIONOFTXSIGINFO                             STD_OFF
#define COM_ISDEF_STARTBYTEINPDUPOSITIONOFTXSIGINFO                   STD_OFF
#define COM_ISDEF_TRIGGEREDOFTXSIGINFO                                STD_OFF
#define COM_ISDEF_TXBUFFERENDIDXOFTXSIGINFO                           STD_OFF
#define COM_ISDEF_TXBUFFERLENGTHOFTXSIGINFO                           STD_OFF
#define COM_ISDEF_TXBUFFERSTARTIDXOFTXSIGINFO                         STD_OFF
#define COM_ISDEF_TXBUFFERUSEDOFTXSIGINFO                             STD_OFF
#define COM_ISDEF_TXPDUINFOIDXOFTXSIGINFO                             STD_OFF
#define COM_ISDEF_BUFFERSIZEOFTXTPINFO                                STD_OFF
#define COM_ISDEF_DYNAMICINITIALLENGTHOFTXTPINFO                      STD_OFF
#define COM_ISDEF_TXBUFFERENDIDXOFTXTPINFO                            STD_OFF
#define COM_ISDEF_TXBUFFERLENGTHOFTXTPINFO                            STD_OFF
#define COM_ISDEF_TXBUFFERSTARTIDXOFTXTPINFO                          STD_OFF
#define COM_ISDEF_TXBUFFERUSEDOFTXTPINFO                              STD_OFF
#define COM_ISDEF_ALWAYSACTIVERXCOMIPDUSOFPCCONFIG                    STD_ON
#define COM_ISDEF_ALWAYSACTIVETXCOMIPDUSOFPCCONFIG                    STD_ON
#define COM_ISDEF_CONSTVALUEARRAYBASEDOFPCCONFIG                      STD_ON
#define COM_ISDEF_CONSTVALUEUINT16OFPCCONFIG                          STD_ON
#define COM_ISDEF_CURRENTTXMODEOFPCCONFIG                             STD_ON
#define COM_ISDEF_CYCLETIMECNTOFPCCONFIG                              STD_ON
#define COM_ISDEF_CYCLICSENDREQUESTOFPCCONFIG                         STD_ON
#define COM_ISDEF_DELAYTIMECNTOFPCCONFIG                              STD_ON
#define COM_ISDEF_GATEWAYPROCESSINGISRLOCKCOUNTEROFPCCONFIG           STD_ON
#define COM_ISDEF_HANDLERXPDUDEFERREDOFPCCONFIG                       STD_ON
#define COM_ISDEF_INITIALIZEDOFPCCONFIG                               STD_ON
#define COM_ISDEF_REPCNTOFPCCONFIG                                    STD_ON
#define COM_ISDEF_REPCYCLECNTOFPCCONFIG                               STD_ON
#define COM_ISDEF_RXACCESSINFOINDOFPCCONFIG                           STD_ON
#define COM_ISDEF_RXACCESSINFOOFPCCONFIG                              STD_ON
#define COM_ISDEF_RXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG        STD_ON
#define COM_ISDEF_RXDEFPDUBUFFEROFPCCONFIG                            STD_ON
#define COM_ISDEF_RXDEFERREDPROCESSINGISRLOCKCOUNTEROFPCCONFIG        STD_ON
#define COM_ISDEF_RXDYNSIGNALLENGTHOFPCCONFIG                         STD_ON
#define COM_ISDEF_RXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                 STD_ON
#define COM_ISDEF_RXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_ISDEF_RXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDOFPCCONFIG                     STD_ON
#define COM_ISDEF_RXSIGBUFFERUINT16OFPCCONFIG                         STD_ON
#define COM_ISDEF_RXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_RXTPBUFFEROFPCCONFIG                                STD_ON
#define COM_ISDEF_RXTPCONNECTIONSTATEOFPCCONFIG                       STD_ON
#define COM_ISDEF_RXTPINFOOFPCCONFIG                                  STD_ON
#define COM_ISDEF_RXTPSDULENGTHOFPCCONFIG                             STD_ON
#define COM_ISDEF_RXTPWRITTENBYTESCOUNTEROFPCCONFIG                   STD_ON
#define COM_ISDEF_TMPRXBUFFEROFPCCONFIG                               STD_ON
#define COM_ISDEF_TRANSMITREQUESTOFPCCONFIG                           STD_ON
#define COM_ISDEF_TXBUFFEROFPCCONFIG                                  STD_ON
#define COM_ISDEF_TXCYCLICPROCESSINGISRLOCKCOUNTEROFPCCONFIG          STD_ON
#define COM_ISDEF_TXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG        STD_ON
#define COM_ISDEF_TXDYNSIGNALLENGTHOFPCCONFIG                         STD_ON
#define COM_ISDEF_TXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                 STD_ON
#define COM_ISDEF_TXMODEFALSEOFPCCONFIG                               STD_ON
#define COM_ISDEF_TXMODEINFOOFPCCONFIG                                STD_ON
#define COM_ISDEF_TXMODETRUEOFPCCONFIG                                STD_ON
#define COM_ISDEF_TXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_ISDEF_TXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_TXPDUINITVALUEOFPCCONFIG                            STD_ON
#define COM_ISDEF_TXPROCESSINGISRLOCKCOUNTEROFPCCONFIG                STD_ON
#define COM_ISDEF_TXSDULENGTHOFPCCONFIG                               STD_ON
#define COM_ISDEF_TXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_TXTMPTPPDULENGTHOFPCCONFIG                          STD_ON
#define COM_ISDEF_TXTPCONNECTIONSTATEOFPCCONFIG                       STD_ON
#define COM_ISDEF_TXTPINFOOFPCCONFIG                                  STD_ON
#define COM_ISDEF_TXTPSDULENGTHOFPCCONFIG                             STD_ON
#define COM_ISDEF_TXTPWRITTENBYTESCOUNTEROFPCCONFIG                   STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  ComPCEqualsAlwaysToDefines  Com Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define COM_EQ2_RXPDUINFOIDXOFALWAYSACTIVERXCOMIPDUS                  
#define COM_EQ2_TXPDUINFOIDXOFALWAYSACTIVETXCOMIPDUS                  
#define COM_EQ2_CONSTVALUEARRAYBASED                                  
#define COM_EQ2_CONSTVALUEUINT16                                      
#define COM_EQ2_APPLTYPEOFRXACCESSINFO                                
#define COM_EQ2_BITLENGTHOFRXACCESSINFO                               
#define COM_EQ2_BITPOSITIONOFRXACCESSINFO                             
#define COM_EQ2_BUFFERIDXOFRXACCESSINFO                               
#define COM_EQ2_BUFFERUSEDOFRXACCESSINFO                              
#define COM_EQ2_BUSACCOFRXACCESSINFO                                  
#define COM_EQ2_BYTELENGTHOFRXACCESSINFO                              
#define COM_EQ2_BYTEPOSITIONOFRXACCESSINFO                            
#define COM_EQ2_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO     
#define COM_EQ2_CONSTVALUEARRAYBASEDINITVALUELENGTHOFRXACCESSINFO     
#define COM_EQ2_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO   
#define COM_EQ2_CONSTVALUEARRAYBASEDINITVALUEUSEDOFRXACCESSINFO       
#define COM_EQ2_INITVALUEIDXOFRXACCESSINFO                            
#define COM_EQ2_INITVALUEUSEDOFRXACCESSINFO                           
#define COM_EQ2_RXPDUINFOIDXOFRXACCESSINFO                            
#define COM_EQ2_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO       
#define COM_EQ2_RXSIGBUFFERARRAYBASEDBUFFERLENGTHOFRXACCESSINFO       
#define COM_EQ2_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO     
#define COM_EQ2_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO         
#define COM_EQ2_STARTBYTEINPDUPOSITIONOFRXACCESSINFO                  
#define COM_EQ2_RXACCESSINFOIND                                       
#define COM_EQ2_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                     
#define COM_EQ2_HANDLERXPDUDEFERREDUSEDOFRXPDUINFO                    
#define COM_EQ2_RXACCESSINFOINDENDIDXOFRXPDUINFO                      
#define COM_EQ2_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                    
#define COM_EQ2_RXACCESSINFOINDUSEDOFRXPDUINFO                        
#define COM_EQ2_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                       
#define COM_EQ2_RXDEFPDUBUFFERLENGTHOFRXPDUINFO                       
#define COM_EQ2_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                     
#define COM_EQ2_RXDEFPDUBUFFERUSEDOFRXPDUINFO                         
#define COM_EQ2_RXSIGINFOENDIDXOFRXPDUINFO                            
#define COM_EQ2_RXSIGINFOSTARTIDXOFRXPDUINFO                          
#define COM_EQ2_RXSIGINFOUSEDOFRXPDUINFO                              
#define COM_EQ2_RXTPINFOIDXOFRXPDUINFO                                
#define COM_EQ2_RXTPINFOUSEDOFRXPDUINFO                               
#define COM_EQ2_SIGNALPROCESSINGOFRXPDUINFO                           
#define COM_EQ2_TYPEOFRXPDUINFO                                       
#define COM_EQ2_RXACCESSINFOIDXOFRXSIGINFO                            
#define COM_EQ2_SIGNALPROCESSINGOFRXSIGINFO                           
#define COM_EQ2_VALIDDLCOFRXSIGINFO                                   
#define COM_EQ2_BUFFERSIZEOFRXTPINFO                                  
#define COM_EQ2_DYNAMICINITIALLENGTHOFRXTPINFO                        
#define COM_EQ2_RXACCESSINFODYNSIGIDXOFRXTPINFO                       
#define COM_EQ2_RXACCESSINFODYNSIGUSEDOFRXTPINFO                      
#define COM_EQ2_RXTPBUFFERENDIDXOFRXTPINFO                            
#define COM_EQ2_RXTPBUFFERSTARTIDXOFRXTPINFO                          
#define COM_EQ2_RXTPBUFFERUSEDOFRXTPINFO                              
#define COM_EQ2_DIRECTOFTXMODEFALSE                                   
#define COM_EQ2_INITMODEOFTXMODEINFO                                  
#define COM_EQ2_TXMODEFALSEIDXOFTXMODEINFO                            
#define COM_EQ2_TXMODETRUEIDXOFTXMODEINFO                             
#define COM_EQ2_DIRECTOFTXMODETRUE                                    
#define COM_EQ2_EXTERNALIDOFTXPDUINFO                                 
#define COM_EQ2_METADATALENGTHOFTXPDUINFO                             
#define COM_EQ2_PDUWITHMETADATALENGTHOFTXPDUINFO                      
#define COM_EQ2_TXBUFFERENDIDXOFTXPDUINFO                             
#define COM_EQ2_TXBUFFERLENGTHOFTXPDUINFO                             
#define COM_EQ2_TXBUFFERSTARTIDXOFTXPDUINFO                           
#define COM_EQ2_TXBUFFERUSEDOFTXPDUINFO                               
#define COM_EQ2_TXPDUINITVALUEENDIDXOFTXPDUINFO                       
#define COM_EQ2_TXPDUINITVALUESTARTIDXOFTXPDUINFO                     
#define COM_EQ2_TXPDUINITVALUEUSEDOFTXPDUINFO                         
#define COM_EQ2_TXTPINFOIDXOFTXPDUINFO                                
#define COM_EQ2_TXTPINFOUSEDOFTXPDUINFO                               
#define COM_EQ2_TXPDUINITVALUE                                        
#define COM_EQ2_APPLTYPEOFTXSIGINFO                                   
#define COM_EQ2_BITLENGTHOFTXSIGINFO                                  
#define COM_EQ2_BITPOSITIONOFTXSIGINFO                                
#define COM_EQ2_BUSACCOFTXSIGINFO                                     
#define COM_EQ2_BYTELENGTHOFTXSIGINFO                                 
#define COM_EQ2_BYTEPOSITIONOFTXSIGINFO                               
#define COM_EQ2_STARTBYTEINPDUPOSITIONOFTXSIGINFO                     
#define COM_EQ2_TRIGGEREDOFTXSIGINFO                                  
#define COM_EQ2_TXBUFFERENDIDXOFTXSIGINFO                             
#define COM_EQ2_TXBUFFERLENGTHOFTXSIGINFO                             
#define COM_EQ2_TXBUFFERSTARTIDXOFTXSIGINFO                           
#define COM_EQ2_TXBUFFERUSEDOFTXSIGINFO                               
#define COM_EQ2_TXPDUINFOIDXOFTXSIGINFO                               
#define COM_EQ2_BUFFERSIZEOFTXTPINFO                                  
#define COM_EQ2_DYNAMICINITIALLENGTHOFTXTPINFO                        
#define COM_EQ2_TXBUFFERENDIDXOFTXTPINFO                              
#define COM_EQ2_TXBUFFERLENGTHOFTXTPINFO                              
#define COM_EQ2_TXBUFFERSTARTIDXOFTXTPINFO                            
#define COM_EQ2_TXBUFFERUSEDOFTXTPINFO                                
#define COM_EQ2_ALWAYSACTIVERXCOMIPDUSOFPCCONFIG                      Com_AlwaysActiveRxComIPdus
#define COM_EQ2_ALWAYSACTIVETXCOMIPDUSOFPCCONFIG                      Com_AlwaysActiveTxComIPdus
#define COM_EQ2_CONSTVALUEARRAYBASEDOFPCCONFIG                        Com_ConstValueArrayBased
#define COM_EQ2_CONSTVALUEUINT16OFPCCONFIG                            Com_ConstValueUInt16
#define COM_EQ2_CURRENTTXMODEOFPCCONFIG                               Com_CurrentTxMode.raw
#define COM_EQ2_CYCLETIMECNTOFPCCONFIG                                Com_CycleTimeCnt.raw
#define COM_EQ2_CYCLICSENDREQUESTOFPCCONFIG                           Com_CyclicSendRequest.raw
#define COM_EQ2_DELAYTIMECNTOFPCCONFIG                                Com_DelayTimeCnt.raw
#define COM_EQ2_GATEWAYPROCESSINGISRLOCKCOUNTEROFPCCONFIG             (&(Com_GatewayProcessingISRLockCounter))
#define COM_EQ2_HANDLERXPDUDEFERREDOFPCCONFIG                         Com_HandleRxPduDeferred.raw
#define COM_EQ2_INITIALIZEDOFPCCONFIG                                 (&(Com_Initialized))
#define COM_EQ2_REPCNTOFPCCONFIG                                      Com_RepCnt.raw
#define COM_EQ2_REPCYCLECNTOFPCCONFIG                                 Com_RepCycleCnt.raw
#define COM_EQ2_RXACCESSINFOINDOFPCCONFIG                             Com_RxAccessInfoInd
#define COM_EQ2_RXACCESSINFOOFPCCONFIG                                Com_RxAccessInfo
#define COM_EQ2_RXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG          (&(Com_RxDeadlineMonitoringISRLockCounter))
#define COM_EQ2_RXDEFPDUBUFFEROFPCCONFIG                              Com_RxDefPduBuffer.raw
#define COM_EQ2_RXDEFERREDPROCESSINGISRLOCKCOUNTEROFPCCONFIG          (&(Com_RxDeferredProcessingISRLockCounter))
#define COM_EQ2_RXDYNSIGNALLENGTHOFPCCONFIG                           Com_RxDynSignalLength.raw
#define COM_EQ2_RXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                   (&(Com_RxIPduGroupISRLockCounter))
#define COM_EQ2_RXPDUGRPACTIVEOFPCCONFIG                              Com_RxPduGrpActive.raw
#define COM_EQ2_RXPDUINFOOFPCCONFIG                                   Com_RxPduInfo
#define COM_EQ2_RXSIGBUFFERARRAYBASEDOFPCCONFIG                       Com_RxSigBufferArrayBased.raw
#define COM_EQ2_RXSIGBUFFERUINT16OFPCCONFIG                           Com_RxSigBufferUInt16
#define COM_EQ2_RXSIGINFOOFPCCONFIG                                   Com_RxSigInfo
#define COM_EQ2_RXTPBUFFEROFPCCONFIG                                  Com_RxTpBuffer.raw
#define COM_EQ2_RXTPCONNECTIONSTATEOFPCCONFIG                         Com_RxTpConnectionState.raw
#define COM_EQ2_RXTPINFOOFPCCONFIG                                    Com_RxTpInfo
#define COM_EQ2_RXTPSDULENGTHOFPCCONFIG                               Com_RxTpSduLength.raw
#define COM_EQ2_RXTPWRITTENBYTESCOUNTEROFPCCONFIG                     Com_RxTpWrittenBytesCounter.raw
#define COM_EQ2_TMPRXBUFFEROFPCCONFIG                                 Com_TmpRxBuffer
#define COM_EQ2_TRANSMITREQUESTOFPCCONFIG                             Com_TransmitRequest.raw
#define COM_EQ2_TXBUFFEROFPCCONFIG                                    Com_TxBuffer
#define COM_EQ2_TXCYCLICPROCESSINGISRLOCKCOUNTEROFPCCONFIG            (&(Com_TxCyclicProcessingISRLockCounter))
#define COM_EQ2_TXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG          (&(Com_TxDeadlineMonitoringISRLockCounter))
#define COM_EQ2_TXDYNSIGNALLENGTHOFPCCONFIG                           Com_TxDynSignalLength.raw
#define COM_EQ2_TXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                   (&(Com_TxIPduGroupISRLockCounter))
#define COM_EQ2_TXMODEFALSEOFPCCONFIG                                 Com_TxModeFalse
#define COM_EQ2_TXMODEINFOOFPCCONFIG                                  Com_TxModeInfo
#define COM_EQ2_TXMODETRUEOFPCCONFIG                                  Com_TxModeTrue
#define COM_EQ2_TXPDUGRPACTIVEOFPCCONFIG                              Com_TxPduGrpActive.raw
#define COM_EQ2_TXPDUINFOOFPCCONFIG                                   Com_TxPduInfo
#define COM_EQ2_TXPDUINITVALUEOFPCCONFIG                              Com_TxPduInitValue
#define COM_EQ2_TXPROCESSINGISRLOCKCOUNTEROFPCCONFIG                  (&(Com_TxProcessingISRLockCounter))
#define COM_EQ2_TXSDULENGTHOFPCCONFIG                                 Com_TxSduLength.raw
#define COM_EQ2_TXSIGINFOOFPCCONFIG                                   Com_TxSigInfo
#define COM_EQ2_TXTMPTPPDULENGTHOFPCCONFIG                            Com_TxTmpTpPduLength.raw
#define COM_EQ2_TXTPCONNECTIONSTATEOFPCCONFIG                         Com_TxTpConnectionState.raw
#define COM_EQ2_TXTPINFOOFPCCONFIG                                    Com_TxTpInfo
#define COM_EQ2_TXTPSDULENGTHOFPCCONFIG                               Com_TxTpSduLength.raw
#define COM_EQ2_TXTPWRITTENBYTESCOUNTEROFPCCONFIG                     Com_TxTpWrittenBytesCounter.raw
/** 
  \}
*/ 

/** 
  \defgroup  ComPCSymbolicInitializationPointers  Com Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Com_Config_Ptr                                                NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Com' */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCInitializationSymbols  Com Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Com_Config                                                    NULL_PTR  /**< symbolic identifier which could be used to initialize 'Com */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGeneral  Com General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define COM_CHECK_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define COM_FINAL_MAGIC_NUMBER                                        0x321Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of Com */
#define COM_INDIVIDUAL_POSTBUILD                                      STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Com' is not configured to be postbuild capable. */
#define COM_INIT_DATA                                                 COM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define COM_INIT_DATA_HASH_CODE                                       -917688657  /**< the precompile constant to validate the initialization structure at initialization time of Com with a hashcode. The seed value is '0x321Eu' */
#define COM_USE_ECUM_BSW_ERROR_HOOK                                   STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define COM_USE_INIT_POINTER                                          STD_OFF  /**< STD_ON if the init pointer Com shall be used. */
/** 
  \}
*/ 



/* General */
#define COM_DEV_ERROR_DETECT                 STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComSafeBswChecks] || /ActiveEcuC/Com/ComGeneral[0:ComConfigurationUseDet] */
#define COM_DEV_ERROR_REPORT                 STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComConfigurationUseDet] */
#define COM_RETRY_FAILED_TRANSMIT_REQUESTS   STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComRetryFailedTransmitRequests] */
#define COM_IPDUCALLOUT_USEPDUINFOPTR        STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComAdvancedIPduCallouts] */

/* Optimization */
#define COM_RECEIVE_SIGNAL_MACRO_API         STD_OFF

/* API */
#define COM_COMMUNICATION_INTERFACE          STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRCommunicationInterface] */
#define COM_TRANSPORT_PROTOCOL               STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRTransportProtocol] */

#define COM_TRIGGER_TRANSMIT_API             STD_OFF  /**< /ActiveEcuC/PduR/Com[0:PduRTriggertransmit] */
#define COM_TX_CONFIRMATION_API              STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRTxConfirmation] */
#define COM_TRIGGER_IPDU_SEND_WITH_META_DATA_API    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] */
#define COM_MAIN_FUNCTION_ROUTE_SIGNALS_API  STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComSignalGateway] || /ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] */
#define COM_ENABLE_SIGNAL_GROUP_ARRAY_API    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] */

#define COM_VERSION_INFO_API                 STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComVersionInfoApi] */
#define COM_GENERATED_DESCRIPTION_ROUTING    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] */

#define COM_LMGT_MAXIPDUGROUPVECTORBYTECNT   1U
#define COM_SUPPORTED_IPDU_GROUPS            1uL  /**< /ActiveEcuC/Com/ComGeneral[0:ComSupportedIPduGroups] */

#define COM_RXIMMEDIATEFCTPTRCACHE           STD_OFF
#define COM_RXIMMEDIATEFCTPTRCACHESIZE       0U

/**
  \brief  Constants to compare floating-point values according to ISO C-99 standard.
  \details  -
    \{
*/
#define COM_FLT_EPSILON                      1E-5
#define COM_DBL_EPSILON                      1E-9
/**
  \}
*/




/**
 * \defgroup ComHandleIdsComRxSig Handle IDs of handle space ComRxSig.
 * \brief Rx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignal_AC_UC_AirCirc_e0001df6_Rx                   0u
#define ComConf_ComSignal_AC_UC_Power_level_7de4e9a1_Rx               1u
#define ComConf_ComSignal_AC_UC_TargetTemp_abfdd769_Rx                2u
#define ComConf_ComSignal_AmbTempInCar_PDU_Signal_dff5af2c_Rx         3u
#define ComConf_ComSignal_AmbTempOutCar_PDU_Signal_c27be2af_Rx        4u
#define ComConf_ComSignal_DiagRequest_ComSignal                       5u
/**\} */

/**
 * \defgroup ComHandleIdsComTxSig Handle IDs of handle space ComTxSig.
 * \brief Tx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignal_ACCompPow_b4e01f19_Tx                       0u
#define ComConf_ComSignal_ACExhaustState_8c8df521_Tx                  1u
#define ComConf_ComSignal_ACFanSpeed_PDU_NewSignal_17764525_Tx        2u
#define ComConf_ComSignal_DiagResponse_ComSignal                      3u
/**\} */







/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  ComPCGetConstantDuplicatedRootDataMacros  Com Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Com_GetAlwaysActiveRxComIPdusOfPCConfig()                     Com_AlwaysActiveRxComIPdus  /**< the pointer to Com_AlwaysActiveRxComIPdus */
#define Com_GetAlwaysActiveTxComIPdusOfPCConfig()                     Com_AlwaysActiveTxComIPdus  /**< the pointer to Com_AlwaysActiveTxComIPdus */
#define Com_GetConfigIdOfPCConfig()                                   0u  /**< DefinitionRef: /MICROSAR/Com/ComConfig/ComConfigurationId */
#define Com_GetConstValueArrayBasedOfPCConfig()                       Com_ConstValueArrayBased  /**< the pointer to Com_ConstValueArrayBased */
#define Com_GetConstValueUInt16OfPCConfig()                           Com_ConstValueUInt16  /**< the pointer to Com_ConstValueUInt16 */
#define Com_GetCurrentTxModeOfPCConfig()                              Com_CurrentTxMode.raw  /**< the pointer to Com_CurrentTxMode */
#define Com_GetCycleTimeCntOfPCConfig()                               Com_CycleTimeCnt.raw  /**< the pointer to Com_CycleTimeCnt */
#define Com_GetCyclicSendRequestOfPCConfig()                          Com_CyclicSendRequest.raw  /**< the pointer to Com_CyclicSendRequest */
#define Com_GetDelayTimeCntOfPCConfig()                               Com_DelayTimeCnt.raw  /**< the pointer to Com_DelayTimeCnt */
#define Com_GetGatewayProcessingISRLockCounterOfPCConfig()            (&(Com_GatewayProcessingISRLockCounter))  /**< the pointer to Com_GatewayProcessingISRLockCounter */
#define Com_GetHandleRxPduDeferredOfPCConfig()                        Com_HandleRxPduDeferred.raw  /**< the pointer to Com_HandleRxPduDeferred */
#define Com_GetInitializedOfPCConfig()                                (&(Com_Initialized))  /**< the pointer to Com_Initialized */
#define Com_GetPduGrpCntOfPCConfig()                                  0u
#define Com_GetRepCntOfPCConfig()                                     Com_RepCnt.raw  /**< the pointer to Com_RepCnt */
#define Com_GetRepCycleCntOfPCConfig()                                Com_RepCycleCnt.raw  /**< the pointer to Com_RepCycleCnt */
#define Com_GetRxAccessInfoIndOfPCConfig()                            Com_RxAccessInfoInd  /**< the pointer to Com_RxAccessInfoInd */
#define Com_GetRxAccessInfoOfPCConfig()                               Com_RxAccessInfo  /**< the pointer to Com_RxAccessInfo */
#define Com_GetRxDeadlineMonitoringISRLockCounterOfPCConfig()         (&(Com_RxDeadlineMonitoringISRLockCounter))  /**< the pointer to Com_RxDeadlineMonitoringISRLockCounter */
#define Com_GetRxDefPduBufferOfPCConfig()                             Com_RxDefPduBuffer.raw  /**< the pointer to Com_RxDefPduBuffer */
#define Com_GetRxDeferredProcessingISRLockCounterOfPCConfig()         (&(Com_RxDeferredProcessingISRLockCounter))  /**< the pointer to Com_RxDeferredProcessingISRLockCounter */
#define Com_GetRxDeferredProcessingISRLockThresholdOfPCConfig()       1u
#define Com_GetRxDynSignalLengthOfPCConfig()                          Com_RxDynSignalLength.raw  /**< the pointer to Com_RxDynSignalLength */
#define Com_GetRxIPduGroupISRLockCounterOfPCConfig()                  (&(Com_RxIPduGroupISRLockCounter))  /**< the pointer to Com_RxIPduGroupISRLockCounter */
#define Com_GetRxIPduGroupISRLockThresholdOfPCConfig()                1u
#define Com_GetRxPduGrpActiveOfPCConfig()                             Com_RxPduGrpActive.raw  /**< the pointer to Com_RxPduGrpActive */
#define Com_GetRxPduInfoOfPCConfig()                                  Com_RxPduInfo  /**< the pointer to Com_RxPduInfo */
#define Com_GetRxSigBufferArrayBasedOfPCConfig()                      Com_RxSigBufferArrayBased.raw  /**< the pointer to Com_RxSigBufferArrayBased */
#define Com_GetRxSigBufferUInt16OfPCConfig()                          Com_RxSigBufferUInt16  /**< the pointer to Com_RxSigBufferUInt16 */
#define Com_GetRxSigInfoOfPCConfig()                                  Com_RxSigInfo  /**< the pointer to Com_RxSigInfo */
#define Com_GetRxTpBufferOfPCConfig()                                 Com_RxTpBuffer.raw  /**< the pointer to Com_RxTpBuffer */
#define Com_GetRxTpConnectionStateOfPCConfig()                        Com_RxTpConnectionState.raw  /**< the pointer to Com_RxTpConnectionState */
#define Com_GetRxTpInfoOfPCConfig()                                   Com_RxTpInfo  /**< the pointer to Com_RxTpInfo */
#define Com_GetRxTpSduLengthOfPCConfig()                              Com_RxTpSduLength.raw  /**< the pointer to Com_RxTpSduLength */
#define Com_GetRxTpWrittenBytesCounterOfPCConfig()                    Com_RxTpWrittenBytesCounter.raw  /**< the pointer to Com_RxTpWrittenBytesCounter */
#define Com_GetSizeOfAlwaysActiveRxComIPdusOfPCConfig()               4u  /**< the number of accomplishable value elements in Com_AlwaysActiveRxComIPdus */
#define Com_GetSizeOfAlwaysActiveTxComIPdusOfPCConfig()               2u  /**< the number of accomplishable value elements in Com_AlwaysActiveTxComIPdus */
#define Com_GetSizeOfConstValueArrayBasedOfPCConfig()                 1u  /**< the number of accomplishable value elements in Com_ConstValueArrayBased */
#define Com_GetSizeOfConstValueUInt16OfPCConfig()                     1u  /**< the number of accomplishable value elements in Com_ConstValueUInt16 */
#define Com_GetSizeOfHandleRxPduDeferredOfPCConfig()                  4u  /**< the number of accomplishable value elements in Com_HandleRxPduDeferred */
#define Com_GetSizeOfRxAccessInfoIndOfPCConfig()                      6u  /**< the number of accomplishable value elements in Com_RxAccessInfoInd */
#define Com_GetSizeOfRxAccessInfoOfPCConfig()                         6u  /**< the number of accomplishable value elements in Com_RxAccessInfo */
#define Com_GetSizeOfRxDefPduBufferOfPCConfig()                       4119u  /**< the number of accomplishable value elements in Com_RxDefPduBuffer */
#define Com_GetSizeOfRxPduInfoOfPCConfig()                            4u  /**< the number of accomplishable value elements in Com_RxPduInfo */
#define Com_GetSizeOfRxSigBufferArrayBasedOfPCConfig()                4095u  /**< the number of accomplishable value elements in Com_RxSigBufferArrayBased */
#define Com_GetSizeOfRxSigBufferUInt16OfPCConfig()                    5u  /**< the number of accomplishable value elements in Com_RxSigBufferUInt16 */
#define Com_GetSizeOfRxSigInfoOfPCConfig()                            6u  /**< the number of accomplishable value elements in Com_RxSigInfo */
#define Com_GetSizeOfRxTpBufferOfPCConfig()                           4095u  /**< the number of accomplishable value elements in Com_RxTpBuffer */
#define Com_GetSizeOfRxTpInfoOfPCConfig()                             1u  /**< the number of accomplishable value elements in Com_RxTpInfo */
#define Com_GetSizeOfTmpRxBufferOfPCConfig()                          4095u  /**< the number of accomplishable value elements in Com_TmpRxBuffer */
#define Com_GetSizeOfTxBufferOfPCConfig()                             4103u  /**< the number of accomplishable value elements in Com_TxBuffer */
#define Com_GetSizeOfTxModeFalseOfPCConfig()                          1u  /**< the number of accomplishable value elements in Com_TxModeFalse */
#define Com_GetSizeOfTxModeInfoOfPCConfig()                           2u  /**< the number of accomplishable value elements in Com_TxModeInfo */
#define Com_GetSizeOfTxModeTrueOfPCConfig()                           1u  /**< the number of accomplishable value elements in Com_TxModeTrue */
#define Com_GetSizeOfTxPduInfoOfPCConfig()                            2u  /**< the number of accomplishable value elements in Com_TxPduInfo */
#define Com_GetSizeOfTxPduInitValueOfPCConfig()                       4103u  /**< the number of accomplishable value elements in Com_TxPduInitValue */
#define Com_GetSizeOfTxSigInfoOfPCConfig()                            4u  /**< the number of accomplishable value elements in Com_TxSigInfo */
#define Com_GetSizeOfTxTpInfoOfPCConfig()                             1u  /**< the number of accomplishable value elements in Com_TxTpInfo */
#define Com_GetTmpRxBufferOfPCConfig()                                Com_TmpRxBuffer  /**< the pointer to Com_TmpRxBuffer */
#define Com_GetTransmitRequestOfPCConfig()                            Com_TransmitRequest.raw  /**< the pointer to Com_TransmitRequest */
#define Com_GetTxBufferOfPCConfig()                                   Com_TxBuffer  /**< the pointer to Com_TxBuffer */
#define Com_GetTxCyclicProcessingISRLockCounterOfPCConfig()           (&(Com_TxCyclicProcessingISRLockCounter))  /**< the pointer to Com_TxCyclicProcessingISRLockCounter */
#define Com_GetTxDeadlineMonitoringISRLockCounterOfPCConfig()         (&(Com_TxDeadlineMonitoringISRLockCounter))  /**< the pointer to Com_TxDeadlineMonitoringISRLockCounter */
#define Com_GetTxDynSignalLengthOfPCConfig()                          Com_TxDynSignalLength.raw  /**< the pointer to Com_TxDynSignalLength */
#define Com_GetTxIPduGroupISRLockCounterOfPCConfig()                  (&(Com_TxIPduGroupISRLockCounter))  /**< the pointer to Com_TxIPduGroupISRLockCounter */
#define Com_GetTxIPduGroupISRLockThresholdOfPCConfig()                1u
#define Com_GetTxModeFalseOfPCConfig()                                Com_TxModeFalse  /**< the pointer to Com_TxModeFalse */
#define Com_GetTxModeInfoOfPCConfig()                                 Com_TxModeInfo  /**< the pointer to Com_TxModeInfo */
#define Com_GetTxModeTrueOfPCConfig()                                 Com_TxModeTrue  /**< the pointer to Com_TxModeTrue */
#define Com_GetTxPduGrpActiveOfPCConfig()                             Com_TxPduGrpActive.raw  /**< the pointer to Com_TxPduGrpActive */
#define Com_GetTxPduInfoOfPCConfig()                                  Com_TxPduInfo  /**< the pointer to Com_TxPduInfo */
#define Com_GetTxPduInitValueOfPCConfig()                             Com_TxPduInitValue  /**< the pointer to Com_TxPduInitValue */
#define Com_GetTxProcessingISRLockCounterOfPCConfig()                 (&(Com_TxProcessingISRLockCounter))  /**< the pointer to Com_TxProcessingISRLockCounter */
#define Com_GetTxProcessingISRLockThresholdOfPCConfig()               1u
#define Com_GetTxSduLengthOfPCConfig()                                Com_TxSduLength.raw  /**< the pointer to Com_TxSduLength */
#define Com_GetTxSigInfoOfPCConfig()                                  Com_TxSigInfo  /**< the pointer to Com_TxSigInfo */
#define Com_GetTxTmpTpPduLengthOfPCConfig()                           Com_TxTmpTpPduLength.raw  /**< the pointer to Com_TxTmpTpPduLength */
#define Com_GetTxTpConnectionStateOfPCConfig()                        Com_TxTpConnectionState.raw  /**< the pointer to Com_TxTpConnectionState */
#define Com_GetTxTpInfoOfPCConfig()                                   Com_TxTpInfo  /**< the pointer to Com_TxTpInfo */
#define Com_GetTxTpSduLengthOfPCConfig()                              Com_TxTpSduLength.raw  /**< the pointer to Com_TxTpSduLength */
#define Com_GetTxTpWrittenBytesCounterOfPCConfig()                    Com_TxTpWrittenBytesCounter.raw  /**< the pointer to Com_TxTpWrittenBytesCounter */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetDuplicatedRootDataMacros  Com Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Com_GetSizeOfCurrentTxModeOfPCConfig()                        Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_CurrentTxMode */
#define Com_GetSizeOfCycleTimeCntOfPCConfig()                         Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_CycleTimeCnt */
#define Com_GetSizeOfCyclicSendRequestOfPCConfig()                    Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_CyclicSendRequest */
#define Com_GetSizeOfDelayTimeCntOfPCConfig()                         Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_DelayTimeCnt */
#define Com_GetSizeOfRepCntOfPCConfig()                               Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RepCnt */
#define Com_GetSizeOfRepCycleCntOfPCConfig()                          Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RepCycleCnt */
#define Com_GetSizeOfRxDynSignalLengthOfPCConfig()                    Com_GetSizeOfRxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxDynSignalLength */
#define Com_GetSizeOfRxPduGrpActiveOfPCConfig()                       Com_GetSizeOfRxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxPduGrpActive */
#define Com_GetSizeOfRxTpConnectionStateOfPCConfig()                  Com_GetSizeOfRxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxTpConnectionState */
#define Com_GetSizeOfRxTpSduLengthOfPCConfig()                        Com_GetSizeOfRxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxTpSduLength */
#define Com_GetSizeOfRxTpWrittenBytesCounterOfPCConfig()              Com_GetSizeOfRxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxTpWrittenBytesCounter */
#define Com_GetSizeOfTransmitRequestOfPCConfig()                      Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TransmitRequest */
#define Com_GetSizeOfTxDynSignalLengthOfPCConfig()                    Com_GetSizeOfTxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxDynSignalLength */
#define Com_GetSizeOfTxPduGrpActiveOfPCConfig()                       Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxPduGrpActive */
#define Com_GetSizeOfTxSduLengthOfPCConfig()                          Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxSduLength */
#define Com_GetSizeOfTxTmpTpPduLengthOfPCConfig()                     Com_GetSizeOfTxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxTmpTpPduLength */
#define Com_GetSizeOfTxTpConnectionStateOfPCConfig()                  Com_GetSizeOfTxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxTpConnectionState */
#define Com_GetSizeOfTxTpSduLengthOfPCConfig()                        Com_GetSizeOfTxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxTpSduLength */
#define Com_GetSizeOfTxTpWrittenBytesCounterOfPCConfig()              Com_GetSizeOfTxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxTpWrittenBytesCounter */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetDataMacros  Com Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Com_GetConstValueArrayBased(Index)                            (Com_GetConstValueArrayBasedOfPCConfig()[(Index)])
#define Com_GetConstValueUInt16(Index)                                (Com_GetConstValueUInt16OfPCConfig()[(Index)])
#define Com_IsCurrentTxMode(Index)                                    ((Com_GetCurrentTxModeOfPCConfig()[(Index)]) != FALSE)
#define Com_GetCycleTimeCnt(Index)                                    (Com_GetCycleTimeCntOfPCConfig()[(Index)])
#define Com_IsCyclicSendRequest(Index)                                ((Com_GetCyclicSendRequestOfPCConfig()[(Index)]) != FALSE)
#define Com_GetDelayTimeCnt(Index)                                    (Com_GetDelayTimeCntOfPCConfig()[(Index)])
#define Com_GetGatewayProcessingISRLockCounter()                      ((*(Com_GetGatewayProcessingISRLockCounterOfPCConfig())))
#define Com_GetHandleRxPduDeferred(Index)                             (Com_GetHandleRxPduDeferredOfPCConfig()[(Index)])
#define Com_IsInitialized()                                           (((*(Com_GetInitializedOfPCConfig()))) != FALSE)
#define Com_GetRepCnt(Index)                                          (Com_GetRepCntOfPCConfig()[(Index)])
#define Com_GetRepCycleCnt(Index)                                     (Com_GetRepCycleCntOfPCConfig()[(Index)])
#define Com_GetApplTypeOfRxAccessInfo(Index)                          (Com_GetRxAccessInfoOfPCConfig()[(Index)].ApplTypeOfRxAccessInfo)
#define Com_GetBitLengthOfRxAccessInfo(Index)                         (Com_GetRxAccessInfoOfPCConfig()[(Index)].BitLengthOfRxAccessInfo)
#define Com_GetBitPositionOfRxAccessInfo(Index)                       (Com_GetRxAccessInfoOfPCConfig()[(Index)].BitPositionOfRxAccessInfo)
#define Com_GetBufferIdxOfRxAccessInfo(Index)                         (Com_GetRxAccessInfoOfPCConfig()[(Index)].BufferIdxOfRxAccessInfo)
#define Com_GetBusAccOfRxAccessInfo(Index)                            (Com_GetRxAccessInfoOfPCConfig()[(Index)].BusAccOfRxAccessInfo)
#define Com_GetByteLengthOfRxAccessInfo(Index)                        (Com_GetRxAccessInfoOfPCConfig()[(Index)].ByteLengthOfRxAccessInfo)
#define Com_GetConstValueArrayBasedInitValueEndIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].ConstValueArrayBasedInitValueEndIdxOfRxAccessInfo)
#define Com_GetConstValueArrayBasedInitValueStartIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].ConstValueArrayBasedInitValueStartIdxOfRxAccessInfo)
#define Com_GetInitValueIdxOfRxAccessInfo(Index)                      (Com_GetRxAccessInfoOfPCConfig()[(Index)].InitValueIdxOfRxAccessInfo)
#define Com_IsInitValueUsedOfRxAccessInfo(Index)                      ((Com_GetRxAccessInfoOfPCConfig()[(Index)].InitValueUsedOfRxAccessInfo) != FALSE)
#define Com_GetRxPduInfoIdxOfRxAccessInfo(Index)                      (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxPduInfoIdxOfRxAccessInfo)
#define Com_GetRxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo)
#define Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo)
#define Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(Index)    ((Com_GetRxAccessInfoOfPCConfig()[(Index)].RxSigBufferArrayBasedBufferUsedOfRxAccessInfo) != FALSE)
#define Com_GetStartByteInPduPositionOfRxAccessInfo(Index)            (Com_GetRxAccessInfoOfPCConfig()[(Index)].StartByteInPduPositionOfRxAccessInfo)
#define Com_GetRxAccessInfoInd(Index)                                 (Com_GetRxAccessInfoIndOfPCConfig()[(Index)])
#define Com_GetRxDeadlineMonitoringISRLockCounter()                   ((*(Com_GetRxDeadlineMonitoringISRLockCounterOfPCConfig())))
#define Com_GetRxDefPduBuffer(Index)                                  (Com_GetRxDefPduBufferOfPCConfig()[(Index)])
#define Com_GetRxDeferredProcessingISRLockCounter()                   ((*(Com_GetRxDeferredProcessingISRLockCounterOfPCConfig())))
#define Com_GetRxDynSignalLength(Index)                               (Com_GetRxDynSignalLengthOfPCConfig()[(Index)])
#define Com_GetRxIPduGroupISRLockCounter()                            ((*(Com_GetRxIPduGroupISRLockCounterOfPCConfig())))
#define Com_IsRxPduGrpActive(Index)                                   ((Com_GetRxPduGrpActiveOfPCConfig()[(Index)]) != FALSE)
#define Com_IsRxAccessInfoIndUsedOfRxPduInfo(Index)                   ((Com_GetRxPduInfoOfPCConfig()[(Index)].RxAccessInfoIndUsedOfRxPduInfo) != FALSE)
#define Com_GetRxDefPduBufferEndIdxOfRxPduInfo(Index)                 (Com_GetRxPduInfoOfPCConfig()[(Index)].RxDefPduBufferEndIdxOfRxPduInfo)
#define Com_GetRxDefPduBufferStartIdxOfRxPduInfo(Index)               (Com_GetRxPduInfoOfPCConfig()[(Index)].RxDefPduBufferStartIdxOfRxPduInfo)
#define Com_GetRxSigInfoEndIdxOfRxPduInfo(Index)                      (Com_GetRxPduInfoOfPCConfig()[(Index)].RxSigInfoEndIdxOfRxPduInfo)
#define Com_GetRxTpInfoIdxOfRxPduInfo(Index)                          (Com_GetRxPduInfoOfPCConfig()[(Index)].RxTpInfoIdxOfRxPduInfo)
#define Com_GetSignalProcessingOfRxPduInfo(Index)                     (Com_GetRxPduInfoOfPCConfig()[(Index)].SignalProcessingOfRxPduInfo)
#define Com_GetTypeOfRxPduInfo(Index)                                 (Com_GetRxPduInfoOfPCConfig()[(Index)].TypeOfRxPduInfo)
#define Com_GetRxSigBufferArrayBased(Index)                           (Com_GetRxSigBufferArrayBasedOfPCConfig()[(Index)])
#define Com_GetRxSigBufferUInt16(Index)                               (Com_GetRxSigBufferUInt16OfPCConfig()[(Index)])
#define Com_GetRxAccessInfoIdxOfRxSigInfo(Index)                      (Com_GetRxSigInfoOfPCConfig()[(Index)].RxAccessInfoIdxOfRxSigInfo)
#define Com_GetSignalProcessingOfRxSigInfo(Index)                     (Com_GetRxSigInfoOfPCConfig()[(Index)].SignalProcessingOfRxSigInfo)
#define Com_GetValidDlcOfRxSigInfo(Index)                             (Com_GetRxSigInfoOfPCConfig()[(Index)].ValidDlcOfRxSigInfo)
#define Com_GetRxTpBuffer(Index)                                      (Com_GetRxTpBufferOfPCConfig()[(Index)])
#define Com_GetRxTpConnectionState(Index)                             (Com_GetRxTpConnectionStateOfPCConfig()[(Index)])
#define Com_IsRxTpBufferUsedOfRxTpInfo(Index)                         ((Com_GetRxTpInfoOfPCConfig()[(Index)].RxTpBufferUsedOfRxTpInfo) != FALSE)
#define Com_GetRxTpSduLength(Index)                                   (Com_GetRxTpSduLengthOfPCConfig()[(Index)])
#define Com_GetRxTpWrittenBytesCounter(Index)                         (Com_GetRxTpWrittenBytesCounterOfPCConfig()[(Index)])
#define Com_GetTmpRxBuffer(Index)                                     (Com_GetTmpRxBufferOfPCConfig()[(Index)])
#define Com_IsTransmitRequest(Index)                                  ((Com_GetTransmitRequestOfPCConfig()[(Index)]) != FALSE)
#define Com_GetTxBuffer(Index)                                        (Com_GetTxBufferOfPCConfig()[(Index)])
#define Com_GetTxCyclicProcessingISRLockCounter()                     ((*(Com_GetTxCyclicProcessingISRLockCounterOfPCConfig())))
#define Com_GetTxDeadlineMonitoringISRLockCounter()                   ((*(Com_GetTxDeadlineMonitoringISRLockCounterOfPCConfig())))
#define Com_GetTxDynSignalLength(Index)                               (Com_GetTxDynSignalLengthOfPCConfig()[(Index)])
#define Com_GetTxIPduGroupISRLockCounter()                            ((*(Com_GetTxIPduGroupISRLockCounterOfPCConfig())))
#define Com_IsDirectOfTxModeFalse(Index)                              ((Com_GetTxModeFalseOfPCConfig()[(Index)].DirectOfTxModeFalse) != FALSE)
#define Com_IsInitModeOfTxModeInfo(Index)                             ((Com_GetTxModeInfoOfPCConfig()[(Index)].InitModeOfTxModeInfo) != FALSE)
#define Com_GetTxModeTrueIdxOfTxModeInfo(Index)                       (Com_GetTxModeInfoOfPCConfig()[(Index)].TxModeTrueIdxOfTxModeInfo)
#define Com_IsDirectOfTxModeTrue(Index)                               ((Com_GetTxModeTrueOfPCConfig()[(Index)].DirectOfTxModeTrue) != FALSE)
#define Com_IsTxPduGrpActive(Index)                                   ((Com_GetTxPduGrpActiveOfPCConfig()[(Index)]) != FALSE)
#define Com_GetMetaDataLengthOfTxPduInfo(Index)                       (Com_GetTxPduInfoOfPCConfig()[(Index)].MetaDataLengthOfTxPduInfo)
#define Com_GetTxBufferLengthOfTxPduInfo(Index)                       (Com_GetTxPduInfoOfPCConfig()[(Index)].TxBufferLengthOfTxPduInfo)
#define Com_GetTxPduInitValueEndIdxOfTxPduInfo(Index)                 (Com_GetTxPduInfoOfPCConfig()[(Index)].TxPduInitValueEndIdxOfTxPduInfo)
#define Com_GetTxPduInitValueStartIdxOfTxPduInfo(Index)               (Com_GetTxPduInfoOfPCConfig()[(Index)].TxPduInitValueStartIdxOfTxPduInfo)
#define Com_IsTxPduInitValueUsedOfTxPduInfo(Index)                    ((Com_GetTxPduInfoOfPCConfig()[(Index)].TxPduInitValueUsedOfTxPduInfo) != FALSE)
#define Com_GetTxTpInfoIdxOfTxPduInfo(Index)                          (Com_GetTxPduInfoOfPCConfig()[(Index)].TxTpInfoIdxOfTxPduInfo)
#define Com_GetTxPduInitValue(Index)                                  (Com_GetTxPduInitValueOfPCConfig()[(Index)])
#define Com_GetTxProcessingISRLockCounter()                           ((*(Com_GetTxProcessingISRLockCounterOfPCConfig())))
#define Com_GetTxSduLength(Index)                                     (Com_GetTxSduLengthOfPCConfig()[(Index)])
#define Com_GetApplTypeOfTxSigInfo(Index)                             (Com_GetTxSigInfoOfPCConfig()[(Index)].ApplTypeOfTxSigInfo)
#define Com_GetBitLengthOfTxSigInfo(Index)                            (Com_GetTxSigInfoOfPCConfig()[(Index)].BitLengthOfTxSigInfo)
#define Com_GetBitPositionOfTxSigInfo(Index)                          (Com_GetTxSigInfoOfPCConfig()[(Index)].BitPositionOfTxSigInfo)
#define Com_GetBusAccOfTxSigInfo(Index)                               (Com_GetTxSigInfoOfPCConfig()[(Index)].BusAccOfTxSigInfo)
#define Com_GetByteLengthOfTxSigInfo(Index)                           (Com_GetTxSigInfoOfPCConfig()[(Index)].ByteLengthOfTxSigInfo)
#define Com_GetStartByteInPduPositionOfTxSigInfo(Index)               (Com_GetTxSigInfoOfPCConfig()[(Index)].StartByteInPduPositionOfTxSigInfo)
#define Com_GetTxBufferEndIdxOfTxSigInfo(Index)                       (Com_GetTxSigInfoOfPCConfig()[(Index)].TxBufferEndIdxOfTxSigInfo)
#define Com_GetTxBufferStartIdxOfTxSigInfo(Index)                     (Com_GetTxSigInfoOfPCConfig()[(Index)].TxBufferStartIdxOfTxSigInfo)
#define Com_GetTxPduInfoIdxOfTxSigInfo(Index)                         (Com_GetTxSigInfoOfPCConfig()[(Index)].TxPduInfoIdxOfTxSigInfo)
#define Com_GetTxTmpTpPduLength(Index)                                (Com_GetTxTmpTpPduLengthOfPCConfig()[(Index)])
#define Com_GetTxTpConnectionState(Index)                             (Com_GetTxTpConnectionStateOfPCConfig()[(Index)])
#define Com_GetTxTpSduLength(Index)                                   (Com_GetTxTpSduLengthOfPCConfig()[(Index)])
#define Com_GetTxTpWrittenBytesCounter(Index)                         (Com_GetTxTpWrittenBytesCounterOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetDeduplicatedDataMacros  Com Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Com_GetRxPduInfoIdxOfAlwaysActiveRxComIPdus(Index)            ((Com_RxPduInfoIdxOfAlwaysActiveRxComIPdusType)((Index)))  /**< the index of the 1:1 relation pointing to Com_RxPduInfo */
#define Com_GetTxPduInfoIdxOfAlwaysActiveTxComIPdus(Index)            ((Com_TxPduInfoIdxOfAlwaysActiveTxComIPdusType)((Index)))  /**< the index of the 1:1 relation pointing to Com_TxPduInfo */
#define Com_GetConfigId()                                             Com_GetConfigIdOfPCConfig()
#define Com_GetPduGrpCnt()                                            Com_GetPduGrpCntOfPCConfig()
#define Com_IsBufferUsedOfRxAccessInfo(Index)                         Com_IsInitValueUsedOfRxAccessInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64 */
#define Com_GetBytePositionOfRxAccessInfo(Index)                      Com_GetStartByteInPduPositionOfRxAccessInfo(Index)  /**< Little endian byte position of the signal or group signal within the I-PDU. */
#define Com_GetConstValueArrayBasedInitValueLengthOfRxAccessInfo(Index) ((Com_ConstValueArrayBasedInitValueLengthOfRxAccessInfoType)((Com_GetConstValueArrayBasedInitValueEndIdxOfRxAccessInfo(Index) - Com_GetConstValueArrayBasedInitValueStartIdxOfRxAccessInfo(Index))))  /**< the number of relations pointing to Com_ConstValueArrayBased */
#define Com_IsConstValueArrayBasedInitValueUsedOfRxAccessInfo(Index)  Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_ConstValueArrayBased */
#define Com_GetRxSigBufferArrayBasedBufferLengthOfRxAccessInfo(Index) ((Com_RxSigBufferArrayBasedBufferLengthOfRxAccessInfoType)((Com_GetRxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo(Index) - Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(Index))))  /**< the number of relations pointing to Com_RxSigBufferArrayBased */
#define Com_GetRxDeferredProcessingISRLockThreshold()                 Com_GetRxDeferredProcessingISRLockThresholdOfPCConfig()
#define Com_GetRxIPduGroupISRLockThreshold()                          Com_GetRxIPduGroupISRLockThresholdOfPCConfig()
#define Com_GetHandleRxPduDeferredIdxOfRxPduInfo(Index)               ((Com_HandleRxPduDeferredIdxOfRxPduInfoType)((Index)))  /**< the index of the 0:1 relation pointing to Com_HandleRxPduDeferred */
#define Com_IsHandleRxPduDeferredUsedOfRxPduInfo(Index)               Com_IsRxAccessInfoIndUsedOfRxPduInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_HandleRxPduDeferred */
#define Com_GetRxAccessInfoIndEndIdxOfRxPduInfo(Index)                Com_GetRxSigInfoEndIdxOfRxPduInfo(Index)  /**< the end index of the 0:n relation pointing to Com_RxAccessInfoInd */
#define Com_GetRxAccessInfoIndStartIdxOfRxPduInfo(Index)              ((Com_RxAccessInfoIndStartIdxOfRxPduInfoType)((Index)))  /**< the start index of the 0:n relation pointing to Com_RxAccessInfoInd */
#define Com_GetRxDefPduBufferLengthOfRxPduInfo(Index)                 ((Com_RxDefPduBufferLengthOfRxPduInfoType)((Com_GetRxDefPduBufferEndIdxOfRxPduInfo(Index) - Com_GetRxDefPduBufferStartIdxOfRxPduInfo(Index))))  /**< the number of relations pointing to Com_RxDefPduBuffer */
#define Com_IsRxDefPduBufferUsedOfRxPduInfo(Index)                    Com_IsRxAccessInfoIndUsedOfRxPduInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxDefPduBuffer */
#define Com_GetRxSigInfoStartIdxOfRxPduInfo(Index)                    ((Com_RxSigInfoStartIdxOfRxPduInfoType)((Index)))  /**< the start index of the 0:n relation pointing to Com_RxSigInfo */
#define Com_IsRxSigInfoUsedOfRxPduInfo(Index)                         Com_IsRxAccessInfoIndUsedOfRxPduInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigInfo */
#define Com_IsRxTpInfoUsedOfRxPduInfo(Index)                          (((boolean)(Com_GetRxTpInfoIdxOfRxPduInfo(Index) != COM_NO_RXTPINFOIDXOFRXPDUINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxTpInfo */
#define Com_GetBufferSizeOfRxTpInfo(Index)                            ((Com_BufferSizeOfRxTpInfoType)((((Com_BufferSizeOfRxTpInfoType)(Index)) + 4095u)))
#define Com_GetDynamicInitialLengthOfRxTpInfo(Index)                  ((Com_DynamicInitialLengthOfRxTpInfoType)((((Com_DynamicInitialLengthOfRxTpInfoType)(Index)) + 1u)))
#define Com_GetRxAccessInfoDynSigIdxOfRxTpInfo(Index)                 ((Com_RxAccessInfoDynSigIdxOfRxTpInfoType)((((Com_RxAccessInfoDynSigIdxOfRxTpInfoType)(Index)) + 5u)))  /**< the index of the 0:1 relation pointing to Com_RxAccessInfo */
#define Com_IsRxAccessInfoDynSigUsedOfRxTpInfo(Index)                 Com_IsRxTpBufferUsedOfRxTpInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxAccessInfo */
#define Com_GetRxTpBufferEndIdxOfRxTpInfo(Index)                      ((Com_RxTpBufferEndIdxOfRxTpInfoType)((((Com_RxTpBufferEndIdxOfRxTpInfoType)(Index)) + 4095u)))  /**< the end index of the 0:n relation pointing to Com_RxTpBuffer */
#define Com_GetRxTpBufferStartIdxOfRxTpInfo(Index)                    ((Com_RxTpBufferStartIdxOfRxTpInfoType)((Index)))  /**< the start index of the 0:n relation pointing to Com_RxTpBuffer */
#define Com_GetSizeOfAlwaysActiveRxComIPdus()                         Com_GetSizeOfAlwaysActiveRxComIPdusOfPCConfig()
#define Com_GetSizeOfAlwaysActiveTxComIPdus()                         Com_GetSizeOfAlwaysActiveTxComIPdusOfPCConfig()
#define Com_GetSizeOfConstValueArrayBased()                           Com_GetSizeOfConstValueArrayBasedOfPCConfig()
#define Com_GetSizeOfConstValueUInt16()                               Com_GetSizeOfConstValueUInt16OfPCConfig()
#define Com_GetSizeOfCurrentTxMode()                                  Com_GetSizeOfCurrentTxModeOfPCConfig()
#define Com_GetSizeOfCycleTimeCnt()                                   Com_GetSizeOfCycleTimeCntOfPCConfig()
#define Com_GetSizeOfCyclicSendRequest()                              Com_GetSizeOfCyclicSendRequestOfPCConfig()
#define Com_GetSizeOfDelayTimeCnt()                                   Com_GetSizeOfDelayTimeCntOfPCConfig()
#define Com_GetSizeOfHandleRxPduDeferred()                            Com_GetSizeOfHandleRxPduDeferredOfPCConfig()
#define Com_GetSizeOfRepCnt()                                         Com_GetSizeOfRepCntOfPCConfig()
#define Com_GetSizeOfRepCycleCnt()                                    Com_GetSizeOfRepCycleCntOfPCConfig()
#define Com_GetSizeOfRxAccessInfo()                                   Com_GetSizeOfRxAccessInfoOfPCConfig()
#define Com_GetSizeOfRxAccessInfoInd()                                Com_GetSizeOfRxAccessInfoIndOfPCConfig()
#define Com_GetSizeOfRxDefPduBuffer()                                 Com_GetSizeOfRxDefPduBufferOfPCConfig()
#define Com_GetSizeOfRxDynSignalLength()                              Com_GetSizeOfRxDynSignalLengthOfPCConfig()
#define Com_GetSizeOfRxPduGrpActive()                                 Com_GetSizeOfRxPduGrpActiveOfPCConfig()
#define Com_GetSizeOfRxPduInfo()                                      Com_GetSizeOfRxPduInfoOfPCConfig()
#define Com_GetSizeOfRxSigBufferArrayBased()                          Com_GetSizeOfRxSigBufferArrayBasedOfPCConfig()
#define Com_GetSizeOfRxSigBufferUInt16()                              Com_GetSizeOfRxSigBufferUInt16OfPCConfig()
#define Com_GetSizeOfRxSigInfo()                                      Com_GetSizeOfRxSigInfoOfPCConfig()
#define Com_GetSizeOfRxTpBuffer()                                     Com_GetSizeOfRxTpBufferOfPCConfig()
#define Com_GetSizeOfRxTpConnectionState()                            Com_GetSizeOfRxTpConnectionStateOfPCConfig()
#define Com_GetSizeOfRxTpInfo()                                       Com_GetSizeOfRxTpInfoOfPCConfig()
#define Com_GetSizeOfRxTpSduLength()                                  Com_GetSizeOfRxTpSduLengthOfPCConfig()
#define Com_GetSizeOfRxTpWrittenBytesCounter()                        Com_GetSizeOfRxTpWrittenBytesCounterOfPCConfig()
#define Com_GetSizeOfTmpRxBuffer()                                    Com_GetSizeOfTmpRxBufferOfPCConfig()
#define Com_GetSizeOfTransmitRequest()                                Com_GetSizeOfTransmitRequestOfPCConfig()
#define Com_GetSizeOfTxBuffer()                                       Com_GetSizeOfTxBufferOfPCConfig()
#define Com_GetSizeOfTxDynSignalLength()                              Com_GetSizeOfTxDynSignalLengthOfPCConfig()
#define Com_GetSizeOfTxModeFalse()                                    Com_GetSizeOfTxModeFalseOfPCConfig()
#define Com_GetSizeOfTxModeInfo()                                     Com_GetSizeOfTxModeInfoOfPCConfig()
#define Com_GetSizeOfTxModeTrue()                                     Com_GetSizeOfTxModeTrueOfPCConfig()
#define Com_GetSizeOfTxPduGrpActive()                                 Com_GetSizeOfTxPduGrpActiveOfPCConfig()
#define Com_GetSizeOfTxPduInfo()                                      Com_GetSizeOfTxPduInfoOfPCConfig()
#define Com_GetSizeOfTxPduInitValue()                                 Com_GetSizeOfTxPduInitValueOfPCConfig()
#define Com_GetSizeOfTxSduLength()                                    Com_GetSizeOfTxSduLengthOfPCConfig()
#define Com_GetSizeOfTxSigInfo()                                      Com_GetSizeOfTxSigInfoOfPCConfig()
#define Com_GetSizeOfTxTmpTpPduLength()                               Com_GetSizeOfTxTmpTpPduLengthOfPCConfig()
#define Com_GetSizeOfTxTpConnectionState()                            Com_GetSizeOfTxTpConnectionStateOfPCConfig()
#define Com_GetSizeOfTxTpInfo()                                       Com_GetSizeOfTxTpInfoOfPCConfig()
#define Com_GetSizeOfTxTpSduLength()                                  Com_GetSizeOfTxTpSduLengthOfPCConfig()
#define Com_GetSizeOfTxTpWrittenBytesCounter()                        Com_GetSizeOfTxTpWrittenBytesCounterOfPCConfig()
#define Com_GetTxIPduGroupISRLockThreshold()                          Com_GetTxIPduGroupISRLockThresholdOfPCConfig()
#define Com_GetTxModeFalseIdxOfTxModeInfo(Index)                      Com_GetTxModeTrueIdxOfTxModeInfo(Index)  /**< the index of the 1:1 relation pointing to Com_TxModeFalse */
#define Com_GetExternalIdOfTxPduInfo(Index)                           ((Com_ExternalIdOfTxPduInfoType)((Index)))  /**< External ID used to call PduR_ComTransmit(). */
#define Com_GetPduWithMetaDataLengthOfTxPduInfo(Index)                Com_GetTxBufferLengthOfTxPduInfo(Index)  /**< Length of Pdu with MetaData. */
#define Com_GetTxBufferEndIdxOfTxPduInfo(Index)                       Com_GetTxPduInitValueEndIdxOfTxPduInfo(Index)  /**< the end index of the 0:n relation pointing to Com_TxBuffer */
#define Com_GetTxBufferStartIdxOfTxPduInfo(Index)                     Com_GetTxPduInitValueStartIdxOfTxPduInfo(Index)  /**< the start index of the 0:n relation pointing to Com_TxBuffer */
#define Com_IsTxBufferUsedOfTxPduInfo(Index)                          Com_IsTxPduInitValueUsedOfTxPduInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxBuffer */
#define Com_IsTxTpInfoUsedOfTxPduInfo(Index)                          (((boolean)(Com_GetTxTpInfoIdxOfTxPduInfo(Index) != COM_NO_TXTPINFOIDXOFTXPDUINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxTpInfo */
#define Com_GetTxProcessingISRLockThreshold()                         Com_GetTxProcessingISRLockThresholdOfPCConfig()
#define Com_GetBytePositionOfTxSigInfo(Index)                         Com_GetStartByteInPduPositionOfTxSigInfo(Index)  /**< Little endian byte position of the signal or group signal within the I-PDU. */
#define Com_IsTriggeredOfTxSigInfo(Index)                             (((boolean)(Com_GetApplTypeOfTxSigInfo(Index) == COM_UINT8_N_APPLTYPEOFTXSIGINFO)) != FALSE)  /**< TRUE if signal or group signal has any 'TRIGGERED_*' transfer property. */
#define Com_GetTxBufferLengthOfTxSigInfo(Index)                       ((Com_TxBufferLengthOfTxSigInfoType)((Com_GetTxBufferEndIdxOfTxSigInfo(Index) - Com_GetTxBufferStartIdxOfTxSigInfo(Index))))  /**< the number of relations pointing to Com_TxBuffer */
#define Com_IsTxBufferUsedOfTxSigInfo(Index)                          (((boolean)(Com_GetTxBufferLengthOfTxSigInfo(Index) != 0u)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxBuffer */
#define Com_GetBufferSizeOfTxTpInfo(Index)                            ((Com_BufferSizeOfTxTpInfoType)((((Com_BufferSizeOfTxTpInfoType)(Index)) + 4095u)))
#define Com_GetDynamicInitialLengthOfTxTpInfo(Index)                  ((Com_DynamicInitialLengthOfTxTpInfoType)((Index)))
#define Com_GetTxBufferEndIdxOfTxTpInfo(Index)                        ((Com_TxBufferEndIdxOfTxTpInfoType)((((Com_TxBufferEndIdxOfTxTpInfoType)(Index)) + 4103u)))  /**< the end index of the 0:n relation pointing to Com_TxBuffer */
#define Com_GetTxBufferLengthOfTxTpInfo(Index)                        ((Com_TxBufferLengthOfTxTpInfoType)((((Com_TxBufferLengthOfTxTpInfoType)(Index)) + 4095u)))  /**< the number of relations pointing to Com_TxBuffer */
#define Com_GetTxBufferStartIdxOfTxTpInfo(Index)                      ((Com_TxBufferStartIdxOfTxTpInfoType)((((Com_TxBufferStartIdxOfTxTpInfoType)(Index)) + 8u)))  /**< the start index of the 0:n relation pointing to Com_TxBuffer */
#define Com_IsTxBufferUsedOfTxTpInfo(Index)                           (((boolean)(Com_GetTxBufferLengthOfTxTpInfo(Index) != 0u)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxBuffer */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCSetDataMacros  Com Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Com_SetCurrentTxMode(Index, Value)                            Com_GetCurrentTxModeOfPCConfig()[(Index)] = (Value)
#define Com_SetCycleTimeCnt(Index, Value)                             Com_GetCycleTimeCntOfPCConfig()[(Index)] = (Value)
#define Com_SetCyclicSendRequest(Index, Value)                        Com_GetCyclicSendRequestOfPCConfig()[(Index)] = (Value)
#define Com_SetDelayTimeCnt(Index, Value)                             Com_GetDelayTimeCntOfPCConfig()[(Index)] = (Value)
#define Com_SetGatewayProcessingISRLockCounter(Value)                 (*(Com_GetGatewayProcessingISRLockCounterOfPCConfig())) = (Value)
#define Com_SetHandleRxPduDeferred(Index, Value)                      Com_GetHandleRxPduDeferredOfPCConfig()[(Index)] = (Value)
#define Com_SetInitialized(Value)                                     (*(Com_GetInitializedOfPCConfig())) = (Value)
#define Com_SetRepCnt(Index, Value)                                   Com_GetRepCntOfPCConfig()[(Index)] = (Value)
#define Com_SetRepCycleCnt(Index, Value)                              Com_GetRepCycleCntOfPCConfig()[(Index)] = (Value)
#define Com_SetRxDeadlineMonitoringISRLockCounter(Value)              (*(Com_GetRxDeadlineMonitoringISRLockCounterOfPCConfig())) = (Value)
#define Com_SetRxDefPduBuffer(Index, Value)                           Com_GetRxDefPduBufferOfPCConfig()[(Index)] = (Value)
#define Com_SetRxDeferredProcessingISRLockCounter(Value)              (*(Com_GetRxDeferredProcessingISRLockCounterOfPCConfig())) = (Value)
#define Com_SetRxDynSignalLength(Index, Value)                        Com_GetRxDynSignalLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetRxIPduGroupISRLockCounter(Value)                       (*(Com_GetRxIPduGroupISRLockCounterOfPCConfig())) = (Value)
#define Com_SetRxPduGrpActive(Index, Value)                           Com_GetRxPduGrpActiveOfPCConfig()[(Index)] = (Value)
#define Com_SetRxSigBufferArrayBased(Index, Value)                    Com_GetRxSigBufferArrayBasedOfPCConfig()[(Index)] = (Value)
#define Com_SetRxSigBufferUInt16(Index, Value)                        Com_GetRxSigBufferUInt16OfPCConfig()[(Index)] = (Value)
#define Com_SetRxTpBuffer(Index, Value)                               Com_GetRxTpBufferOfPCConfig()[(Index)] = (Value)
#define Com_SetRxTpConnectionState(Index, Value)                      Com_GetRxTpConnectionStateOfPCConfig()[(Index)] = (Value)
#define Com_SetRxTpSduLength(Index, Value)                            Com_GetRxTpSduLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetRxTpWrittenBytesCounter(Index, Value)                  Com_GetRxTpWrittenBytesCounterOfPCConfig()[(Index)] = (Value)
#define Com_SetTmpRxBuffer(Index, Value)                              Com_GetTmpRxBufferOfPCConfig()[(Index)] = (Value)
#define Com_SetTransmitRequest(Index, Value)                          Com_GetTransmitRequestOfPCConfig()[(Index)] = (Value)
#define Com_SetTxBuffer(Index, Value)                                 Com_GetTxBufferOfPCConfig()[(Index)] = (Value)
#define Com_SetTxCyclicProcessingISRLockCounter(Value)                (*(Com_GetTxCyclicProcessingISRLockCounterOfPCConfig())) = (Value)
#define Com_SetTxDeadlineMonitoringISRLockCounter(Value)              (*(Com_GetTxDeadlineMonitoringISRLockCounterOfPCConfig())) = (Value)
#define Com_SetTxDynSignalLength(Index, Value)                        Com_GetTxDynSignalLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetTxIPduGroupISRLockCounter(Value)                       (*(Com_GetTxIPduGroupISRLockCounterOfPCConfig())) = (Value)
#define Com_SetTxPduGrpActive(Index, Value)                           Com_GetTxPduGrpActiveOfPCConfig()[(Index)] = (Value)
#define Com_SetTxProcessingISRLockCounter(Value)                      (*(Com_GetTxProcessingISRLockCounterOfPCConfig())) = (Value)
#define Com_SetTxSduLength(Index, Value)                              Com_GetTxSduLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetTxTmpTpPduLength(Index, Value)                         Com_GetTxTmpTpPduLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetTxTpConnectionState(Index, Value)                      Com_GetTxTpConnectionStateOfPCConfig()[(Index)] = (Value)
#define Com_SetTxTpSduLength(Index, Value)                            Com_GetTxTpSduLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetTxTpWrittenBytesCounter(Index, Value)                  Com_GetTxTpWrittenBytesCounterOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetAddressOfDataMacros  Com Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define Com_GetAddrConstValueArrayBased(Index)                        (&Com_GetConstValueArrayBased(Index))
#define Com_GetAddrConstValueUInt16(Index)                            (&Com_GetConstValueUInt16(Index))
#define Com_GetAddrRxDefPduBuffer(Index)                              (&Com_GetRxDefPduBuffer(Index))
#define Com_GetAddrRxSigBufferArrayBased(Index)                       (&Com_GetRxSigBufferArrayBased(Index))
#define Com_GetAddrRxSigBufferUInt16(Index)                           (&Com_GetRxSigBufferUInt16(Index))
#define Com_GetAddrRxTpBuffer(Index)                                  (&Com_GetRxTpBuffer(Index))
#define Com_GetAddrTmpRxBuffer(Index)                                 (&Com_GetTmpRxBuffer(Index))
#define Com_GetAddrTxBuffer(Index)                                    (&Com_GetTxBuffer(Index))
#define Com_GetAddrTxPduInitValue(Index)                              (&Com_GetTxPduInitValue(Index))
/** 
  \}
*/ 

/** 
  \defgroup  ComPCHasMacros  Com Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Com_HasAlwaysActiveRxComIPdus()                               (TRUE != FALSE)
#define Com_HasRxPduInfoIdxOfAlwaysActiveRxComIPdus()                 (TRUE != FALSE)
#define Com_HasAlwaysActiveTxComIPdus()                               (TRUE != FALSE)
#define Com_HasTxPduInfoIdxOfAlwaysActiveTxComIPdus()                 (TRUE != FALSE)
#define Com_HasConfigId()                                             (TRUE != FALSE)
#define Com_HasConstValueArrayBased()                                 (TRUE != FALSE)
#define Com_HasConstValueUInt16()                                     (TRUE != FALSE)
#define Com_HasCurrentTxMode()                                        (TRUE != FALSE)
#define Com_HasCycleTimeCnt()                                         (TRUE != FALSE)
#define Com_HasCyclicSendRequest()                                    (TRUE != FALSE)
#define Com_HasDelayTimeCnt()                                         (TRUE != FALSE)
#define Com_HasGatewayProcessingISRLockCounter()                      (TRUE != FALSE)
#define Com_HasHandleRxPduDeferred()                                  (TRUE != FALSE)
#define Com_HasInitialized()                                          (TRUE != FALSE)
#define Com_HasPduGrpCnt()                                            (TRUE != FALSE)
#define Com_HasRepCnt()                                               (TRUE != FALSE)
#define Com_HasRepCycleCnt()                                          (TRUE != FALSE)
#define Com_HasRxAccessInfo()                                         (TRUE != FALSE)
#define Com_HasApplTypeOfRxAccessInfo()                               (TRUE != FALSE)
#define Com_HasBitLengthOfRxAccessInfo()                              (TRUE != FALSE)
#define Com_HasBitPositionOfRxAccessInfo()                            (TRUE != FALSE)
#define Com_HasBufferIdxOfRxAccessInfo()                              (TRUE != FALSE)
#define Com_HasBufferUsedOfRxAccessInfo()                             (TRUE != FALSE)
#define Com_HasBusAccOfRxAccessInfo()                                 (TRUE != FALSE)
#define Com_HasByteLengthOfRxAccessInfo()                             (TRUE != FALSE)
#define Com_HasBytePositionOfRxAccessInfo()                           (TRUE != FALSE)
#define Com_HasConstValueArrayBasedInitValueEndIdxOfRxAccessInfo()    (TRUE != FALSE)
#define Com_HasConstValueArrayBasedInitValueLengthOfRxAccessInfo()    (TRUE != FALSE)
#define Com_HasConstValueArrayBasedInitValueStartIdxOfRxAccessInfo()  (TRUE != FALSE)
#define Com_HasConstValueArrayBasedInitValueUsedOfRxAccessInfo()      (TRUE != FALSE)
#define Com_HasInitValueIdxOfRxAccessInfo()                           (TRUE != FALSE)
#define Com_HasInitValueUsedOfRxAccessInfo()                          (TRUE != FALSE)
#define Com_HasRxPduInfoIdxOfRxAccessInfo()                           (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo()      (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedBufferLengthOfRxAccessInfo()      (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo()    (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedBufferUsedOfRxAccessInfo()        (TRUE != FALSE)
#define Com_HasStartByteInPduPositionOfRxAccessInfo()                 (TRUE != FALSE)
#define Com_HasRxAccessInfoInd()                                      (TRUE != FALSE)
#define Com_HasRxDeadlineMonitoringISRLockCounter()                   (TRUE != FALSE)
#define Com_HasRxDefPduBuffer()                                       (TRUE != FALSE)
#define Com_HasRxDeferredProcessingISRLockCounter()                   (TRUE != FALSE)
#define Com_HasRxDeferredProcessingISRLockThreshold()                 (TRUE != FALSE)
#define Com_HasRxDynSignalLength()                                    (TRUE != FALSE)
#define Com_HasRxIPduGroupISRLockCounter()                            (TRUE != FALSE)
#define Com_HasRxIPduGroupISRLockThreshold()                          (TRUE != FALSE)
#define Com_HasRxPduGrpActive()                                       (TRUE != FALSE)
#define Com_HasRxPduInfo()                                            (TRUE != FALSE)
#define Com_HasHandleRxPduDeferredIdxOfRxPduInfo()                    (TRUE != FALSE)
#define Com_HasHandleRxPduDeferredUsedOfRxPduInfo()                   (TRUE != FALSE)
#define Com_HasRxAccessInfoIndEndIdxOfRxPduInfo()                     (TRUE != FALSE)
#define Com_HasRxAccessInfoIndStartIdxOfRxPduInfo()                   (TRUE != FALSE)
#define Com_HasRxAccessInfoIndUsedOfRxPduInfo()                       (TRUE != FALSE)
#define Com_HasRxDefPduBufferEndIdxOfRxPduInfo()                      (TRUE != FALSE)
#define Com_HasRxDefPduBufferLengthOfRxPduInfo()                      (TRUE != FALSE)
#define Com_HasRxDefPduBufferStartIdxOfRxPduInfo()                    (TRUE != FALSE)
#define Com_HasRxDefPduBufferUsedOfRxPduInfo()                        (TRUE != FALSE)
#define Com_HasRxSigInfoEndIdxOfRxPduInfo()                           (TRUE != FALSE)
#define Com_HasRxSigInfoStartIdxOfRxPduInfo()                         (TRUE != FALSE)
#define Com_HasRxSigInfoUsedOfRxPduInfo()                             (TRUE != FALSE)
#define Com_HasRxTpInfoIdxOfRxPduInfo()                               (TRUE != FALSE)
#define Com_HasRxTpInfoUsedOfRxPduInfo()                              (TRUE != FALSE)
#define Com_HasSignalProcessingOfRxPduInfo()                          (TRUE != FALSE)
#define Com_HasTypeOfRxPduInfo()                                      (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBased()                                (TRUE != FALSE)
#define Com_HasRxSigBufferUInt16()                                    (TRUE != FALSE)
#define Com_HasRxSigInfo()                                            (TRUE != FALSE)
#define Com_HasRxAccessInfoIdxOfRxSigInfo()                           (TRUE != FALSE)
#define Com_HasSignalProcessingOfRxSigInfo()                          (TRUE != FALSE)
#define Com_HasValidDlcOfRxSigInfo()                                  (TRUE != FALSE)
#define Com_HasRxTpBuffer()                                           (TRUE != FALSE)
#define Com_HasRxTpConnectionState()                                  (TRUE != FALSE)
#define Com_HasRxTpInfo()                                             (TRUE != FALSE)
#define Com_HasBufferSizeOfRxTpInfo()                                 (TRUE != FALSE)
#define Com_HasDynamicInitialLengthOfRxTpInfo()                       (TRUE != FALSE)
#define Com_HasRxAccessInfoDynSigIdxOfRxTpInfo()                      (TRUE != FALSE)
#define Com_HasRxAccessInfoDynSigUsedOfRxTpInfo()                     (TRUE != FALSE)
#define Com_HasRxTpBufferEndIdxOfRxTpInfo()                           (TRUE != FALSE)
#define Com_HasRxTpBufferStartIdxOfRxTpInfo()                         (TRUE != FALSE)
#define Com_HasRxTpBufferUsedOfRxTpInfo()                             (TRUE != FALSE)
#define Com_HasRxTpSduLength()                                        (TRUE != FALSE)
#define Com_HasRxTpWrittenBytesCounter()                              (TRUE != FALSE)
#define Com_HasSizeOfAlwaysActiveRxComIPdus()                         (TRUE != FALSE)
#define Com_HasSizeOfAlwaysActiveTxComIPdus()                         (TRUE != FALSE)
#define Com_HasSizeOfConstValueArrayBased()                           (TRUE != FALSE)
#define Com_HasSizeOfConstValueUInt16()                               (TRUE != FALSE)
#define Com_HasSizeOfCurrentTxMode()                                  (TRUE != FALSE)
#define Com_HasSizeOfCycleTimeCnt()                                   (TRUE != FALSE)
#define Com_HasSizeOfCyclicSendRequest()                              (TRUE != FALSE)
#define Com_HasSizeOfDelayTimeCnt()                                   (TRUE != FALSE)
#define Com_HasSizeOfHandleRxPduDeferred()                            (TRUE != FALSE)
#define Com_HasSizeOfRepCnt()                                         (TRUE != FALSE)
#define Com_HasSizeOfRepCycleCnt()                                    (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfo()                                   (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoInd()                                (TRUE != FALSE)
#define Com_HasSizeOfRxDefPduBuffer()                                 (TRUE != FALSE)
#define Com_HasSizeOfRxDynSignalLength()                              (TRUE != FALSE)
#define Com_HasSizeOfRxPduGrpActive()                                 (TRUE != FALSE)
#define Com_HasSizeOfRxPduInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferArrayBased()                          (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferUInt16()                              (TRUE != FALSE)
#define Com_HasSizeOfRxSigInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfRxTpBuffer()                                     (TRUE != FALSE)
#define Com_HasSizeOfRxTpConnectionState()                            (TRUE != FALSE)
#define Com_HasSizeOfRxTpInfo()                                       (TRUE != FALSE)
#define Com_HasSizeOfRxTpSduLength()                                  (TRUE != FALSE)
#define Com_HasSizeOfRxTpWrittenBytesCounter()                        (TRUE != FALSE)
#define Com_HasSizeOfTmpRxBuffer()                                    (TRUE != FALSE)
#define Com_HasSizeOfTransmitRequest()                                (TRUE != FALSE)
#define Com_HasSizeOfTxBuffer()                                       (TRUE != FALSE)
#define Com_HasSizeOfTxDynSignalLength()                              (TRUE != FALSE)
#define Com_HasSizeOfTxModeFalse()                                    (TRUE != FALSE)
#define Com_HasSizeOfTxModeInfo()                                     (TRUE != FALSE)
#define Com_HasSizeOfTxModeTrue()                                     (TRUE != FALSE)
#define Com_HasSizeOfTxPduGrpActive()                                 (TRUE != FALSE)
#define Com_HasSizeOfTxPduInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfTxPduInitValue()                                 (TRUE != FALSE)
#define Com_HasSizeOfTxSduLength()                                    (TRUE != FALSE)
#define Com_HasSizeOfTxSigInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfTxTmpTpPduLength()                               (TRUE != FALSE)
#define Com_HasSizeOfTxTpConnectionState()                            (TRUE != FALSE)
#define Com_HasSizeOfTxTpInfo()                                       (TRUE != FALSE)
#define Com_HasSizeOfTxTpSduLength()                                  (TRUE != FALSE)
#define Com_HasSizeOfTxTpWrittenBytesCounter()                        (TRUE != FALSE)
#define Com_HasTmpRxBuffer()                                          (TRUE != FALSE)
#define Com_HasTransmitRequest()                                      (TRUE != FALSE)
#define Com_HasTxBuffer()                                             (TRUE != FALSE)
#define Com_HasTxCyclicProcessingISRLockCounter()                     (TRUE != FALSE)
#define Com_HasTxDeadlineMonitoringISRLockCounter()                   (TRUE != FALSE)
#define Com_HasTxDynSignalLength()                                    (TRUE != FALSE)
#define Com_HasTxIPduGroupISRLockCounter()                            (TRUE != FALSE)
#define Com_HasTxIPduGroupISRLockThreshold()                          (TRUE != FALSE)
#define Com_HasTxModeFalse()                                          (TRUE != FALSE)
#define Com_HasDirectOfTxModeFalse()                                  (TRUE != FALSE)
#define Com_HasTxModeInfo()                                           (TRUE != FALSE)
#define Com_HasInitModeOfTxModeInfo()                                 (TRUE != FALSE)
#define Com_HasTxModeFalseIdxOfTxModeInfo()                           (TRUE != FALSE)
#define Com_HasTxModeTrueIdxOfTxModeInfo()                            (TRUE != FALSE)
#define Com_HasTxModeTrue()                                           (TRUE != FALSE)
#define Com_HasDirectOfTxModeTrue()                                   (TRUE != FALSE)
#define Com_HasTxPduGrpActive()                                       (TRUE != FALSE)
#define Com_HasTxPduInfo()                                            (TRUE != FALSE)
#define Com_HasExternalIdOfTxPduInfo()                                (TRUE != FALSE)
#define Com_HasMetaDataLengthOfTxPduInfo()                            (TRUE != FALSE)
#define Com_HasPduWithMetaDataLengthOfTxPduInfo()                     (TRUE != FALSE)
#define Com_HasTxBufferEndIdxOfTxPduInfo()                            (TRUE != FALSE)
#define Com_HasTxBufferLengthOfTxPduInfo()                            (TRUE != FALSE)
#define Com_HasTxBufferStartIdxOfTxPduInfo()                          (TRUE != FALSE)
#define Com_HasTxBufferUsedOfTxPduInfo()                              (TRUE != FALSE)
#define Com_HasTxPduInitValueEndIdxOfTxPduInfo()                      (TRUE != FALSE)
#define Com_HasTxPduInitValueStartIdxOfTxPduInfo()                    (TRUE != FALSE)
#define Com_HasTxPduInitValueUsedOfTxPduInfo()                        (TRUE != FALSE)
#define Com_HasTxTpInfoIdxOfTxPduInfo()                               (TRUE != FALSE)
#define Com_HasTxTpInfoUsedOfTxPduInfo()                              (TRUE != FALSE)
#define Com_HasTxPduInitValue()                                       (TRUE != FALSE)
#define Com_HasTxProcessingISRLockCounter()                           (TRUE != FALSE)
#define Com_HasTxProcessingISRLockThreshold()                         (TRUE != FALSE)
#define Com_HasTxSduLength()                                          (TRUE != FALSE)
#define Com_HasTxSigInfo()                                            (TRUE != FALSE)
#define Com_HasApplTypeOfTxSigInfo()                                  (TRUE != FALSE)
#define Com_HasBitLengthOfTxSigInfo()                                 (TRUE != FALSE)
#define Com_HasBitPositionOfTxSigInfo()                               (TRUE != FALSE)
#define Com_HasBusAccOfTxSigInfo()                                    (TRUE != FALSE)
#define Com_HasByteLengthOfTxSigInfo()                                (TRUE != FALSE)
#define Com_HasBytePositionOfTxSigInfo()                              (TRUE != FALSE)
#define Com_HasStartByteInPduPositionOfTxSigInfo()                    (TRUE != FALSE)
#define Com_HasTriggeredOfTxSigInfo()                                 (TRUE != FALSE)
#define Com_HasTxBufferEndIdxOfTxSigInfo()                            (TRUE != FALSE)
#define Com_HasTxBufferLengthOfTxSigInfo()                            (TRUE != FALSE)
#define Com_HasTxBufferStartIdxOfTxSigInfo()                          (TRUE != FALSE)
#define Com_HasTxBufferUsedOfTxSigInfo()                              (TRUE != FALSE)
#define Com_HasTxPduInfoIdxOfTxSigInfo()                              (TRUE != FALSE)
#define Com_HasTxTmpTpPduLength()                                     (TRUE != FALSE)
#define Com_HasTxTpConnectionState()                                  (TRUE != FALSE)
#define Com_HasTxTpInfo()                                             (TRUE != FALSE)
#define Com_HasBufferSizeOfTxTpInfo()                                 (TRUE != FALSE)
#define Com_HasDynamicInitialLengthOfTxTpInfo()                       (TRUE != FALSE)
#define Com_HasTxBufferEndIdxOfTxTpInfo()                             (TRUE != FALSE)
#define Com_HasTxBufferLengthOfTxTpInfo()                             (TRUE != FALSE)
#define Com_HasTxBufferStartIdxOfTxTpInfo()                           (TRUE != FALSE)
#define Com_HasTxBufferUsedOfTxTpInfo()                               (TRUE != FALSE)
#define Com_HasTxTpSduLength()                                        (TRUE != FALSE)
#define Com_HasTxTpWrittenBytesCounter()                              (TRUE != FALSE)
#define Com_HasPCConfig()                                             (TRUE != FALSE)
#define Com_HasAlwaysActiveRxComIPdusOfPCConfig()                     (TRUE != FALSE)
#define Com_HasAlwaysActiveTxComIPdusOfPCConfig()                     (TRUE != FALSE)
#define Com_HasConfigIdOfPCConfig()                                   (TRUE != FALSE)
#define Com_HasConstValueArrayBasedOfPCConfig()                       (TRUE != FALSE)
#define Com_HasConstValueUInt16OfPCConfig()                           (TRUE != FALSE)
#define Com_HasCurrentTxModeOfPCConfig()                              (TRUE != FALSE)
#define Com_HasCycleTimeCntOfPCConfig()                               (TRUE != FALSE)
#define Com_HasCyclicSendRequestOfPCConfig()                          (TRUE != FALSE)
#define Com_HasDelayTimeCntOfPCConfig()                               (TRUE != FALSE)
#define Com_HasGatewayProcessingISRLockCounterOfPCConfig()            (TRUE != FALSE)
#define Com_HasHandleRxPduDeferredOfPCConfig()                        (TRUE != FALSE)
#define Com_HasInitializedOfPCConfig()                                (TRUE != FALSE)
#define Com_HasPduGrpCntOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasRepCntOfPCConfig()                                     (TRUE != FALSE)
#define Com_HasRepCycleCntOfPCConfig()                                (TRUE != FALSE)
#define Com_HasRxAccessInfoIndOfPCConfig()                            (TRUE != FALSE)
#define Com_HasRxAccessInfoOfPCConfig()                               (TRUE != FALSE)
#define Com_HasRxDeadlineMonitoringISRLockCounterOfPCConfig()         (TRUE != FALSE)
#define Com_HasRxDefPduBufferOfPCConfig()                             (TRUE != FALSE)
#define Com_HasRxDeferredProcessingISRLockCounterOfPCConfig()         (TRUE != FALSE)
#define Com_HasRxDeferredProcessingISRLockThresholdOfPCConfig()       (TRUE != FALSE)
#define Com_HasRxDynSignalLengthOfPCConfig()                          (TRUE != FALSE)
#define Com_HasRxIPduGroupISRLockCounterOfPCConfig()                  (TRUE != FALSE)
#define Com_HasRxIPduGroupISRLockThresholdOfPCConfig()                (TRUE != FALSE)
#define Com_HasRxPduGrpActiveOfPCConfig()                             (TRUE != FALSE)
#define Com_HasRxPduInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedOfPCConfig()                      (TRUE != FALSE)
#define Com_HasRxSigBufferUInt16OfPCConfig()                          (TRUE != FALSE)
#define Com_HasRxSigInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasRxTpBufferOfPCConfig()                                 (TRUE != FALSE)
#define Com_HasRxTpConnectionStateOfPCConfig()                        (TRUE != FALSE)
#define Com_HasRxTpInfoOfPCConfig()                                   (TRUE != FALSE)
#define Com_HasRxTpSduLengthOfPCConfig()                              (TRUE != FALSE)
#define Com_HasRxTpWrittenBytesCounterOfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfAlwaysActiveRxComIPdusOfPCConfig()               (TRUE != FALSE)
#define Com_HasSizeOfAlwaysActiveTxComIPdusOfPCConfig()               (TRUE != FALSE)
#define Com_HasSizeOfConstValueArrayBasedOfPCConfig()                 (TRUE != FALSE)
#define Com_HasSizeOfConstValueUInt16OfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfCurrentTxModeOfPCConfig()                        (TRUE != FALSE)
#define Com_HasSizeOfCycleTimeCntOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfCyclicSendRequestOfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfDelayTimeCntOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfHandleRxPduDeferredOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfRepCntOfPCConfig()                               (TRUE != FALSE)
#define Com_HasSizeOfRepCycleCntOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoIndOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfRxDefPduBufferOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfRxDynSignalLengthOfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfRxPduGrpActiveOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfRxPduInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferArrayBasedOfPCConfig()                (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferUInt16OfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfRxSigInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfRxTpBufferOfPCConfig()                           (TRUE != FALSE)
#define Com_HasSizeOfRxTpConnectionStateOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfRxTpInfoOfPCConfig()                             (TRUE != FALSE)
#define Com_HasSizeOfRxTpSduLengthOfPCConfig()                        (TRUE != FALSE)
#define Com_HasSizeOfRxTpWrittenBytesCounterOfPCConfig()              (TRUE != FALSE)
#define Com_HasSizeOfTmpRxBufferOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfTransmitRequestOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfTxBufferOfPCConfig()                             (TRUE != FALSE)
#define Com_HasSizeOfTxDynSignalLengthOfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfTxModeFalseOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfTxModeInfoOfPCConfig()                           (TRUE != FALSE)
#define Com_HasSizeOfTxModeTrueOfPCConfig()                           (TRUE != FALSE)
#define Com_HasSizeOfTxPduGrpActiveOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfTxPduInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfTxPduInitValueOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfTxSduLengthOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfTxSigInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfTxTmpTpPduLengthOfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfTxTpConnectionStateOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfTxTpInfoOfPCConfig()                             (TRUE != FALSE)
#define Com_HasSizeOfTxTpSduLengthOfPCConfig()                        (TRUE != FALSE)
#define Com_HasSizeOfTxTpWrittenBytesCounterOfPCConfig()              (TRUE != FALSE)
#define Com_HasTmpRxBufferOfPCConfig()                                (TRUE != FALSE)
#define Com_HasTransmitRequestOfPCConfig()                            (TRUE != FALSE)
#define Com_HasTxBufferOfPCConfig()                                   (TRUE != FALSE)
#define Com_HasTxCyclicProcessingISRLockCounterOfPCConfig()           (TRUE != FALSE)
#define Com_HasTxDeadlineMonitoringISRLockCounterOfPCConfig()         (TRUE != FALSE)
#define Com_HasTxDynSignalLengthOfPCConfig()                          (TRUE != FALSE)
#define Com_HasTxIPduGroupISRLockCounterOfPCConfig()                  (TRUE != FALSE)
#define Com_HasTxIPduGroupISRLockThresholdOfPCConfig()                (TRUE != FALSE)
#define Com_HasTxModeFalseOfPCConfig()                                (TRUE != FALSE)
#define Com_HasTxModeInfoOfPCConfig()                                 (TRUE != FALSE)
#define Com_HasTxModeTrueOfPCConfig()                                 (TRUE != FALSE)
#define Com_HasTxPduGrpActiveOfPCConfig()                             (TRUE != FALSE)
#define Com_HasTxPduInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasTxPduInitValueOfPCConfig()                             (TRUE != FALSE)
#define Com_HasTxProcessingISRLockCounterOfPCConfig()                 (TRUE != FALSE)
#define Com_HasTxProcessingISRLockThresholdOfPCConfig()               (TRUE != FALSE)
#define Com_HasTxSduLengthOfPCConfig()                                (TRUE != FALSE)
#define Com_HasTxSigInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasTxTmpTpPduLengthOfPCConfig()                           (TRUE != FALSE)
#define Com_HasTxTpConnectionStateOfPCConfig()                        (TRUE != FALSE)
#define Com_HasTxTpInfoOfPCConfig()                                   (TRUE != FALSE)
#define Com_HasTxTpSduLengthOfPCConfig()                              (TRUE != FALSE)
#define Com_HasTxTpWrittenBytesCounterOfPCConfig()                    (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  ComPCIncrementDataMacros  Com Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Com_IncCycleTimeCnt(Index)                                    Com_GetCycleTimeCnt(Index)++
#define Com_IncDelayTimeCnt(Index)                                    Com_GetDelayTimeCnt(Index)++
#define Com_IncGatewayProcessingISRLockCounter()                      Com_GetGatewayProcessingISRLockCounter()++
#define Com_IncHandleRxPduDeferred(Index)                             Com_GetHandleRxPduDeferred(Index)++
#define Com_IncRepCnt(Index)                                          Com_GetRepCnt(Index)++
#define Com_IncRepCycleCnt(Index)                                     Com_GetRepCycleCnt(Index)++
#define Com_IncRxDeadlineMonitoringISRLockCounter()                   Com_GetRxDeadlineMonitoringISRLockCounter()++
#define Com_IncRxDefPduBuffer(Index)                                  Com_GetRxDefPduBuffer(Index)++
#define Com_IncRxDeferredProcessingISRLockCounter()                   Com_GetRxDeferredProcessingISRLockCounter()++
#define Com_IncRxDynSignalLength(Index)                               Com_GetRxDynSignalLength(Index)++
#define Com_IncRxIPduGroupISRLockCounter()                            Com_GetRxIPduGroupISRLockCounter()++
#define Com_IncRxSigBufferArrayBased(Index)                           Com_GetRxSigBufferArrayBased(Index)++
#define Com_IncRxSigBufferUInt16(Index)                               Com_GetRxSigBufferUInt16(Index)++
#define Com_IncRxTpBuffer(Index)                                      Com_GetRxTpBuffer(Index)++
#define Com_IncRxTpSduLength(Index)                                   Com_GetRxTpSduLength(Index)++
#define Com_IncRxTpWrittenBytesCounter(Index)                         Com_GetRxTpWrittenBytesCounter(Index)++
#define Com_IncTmpRxBuffer(Index)                                     Com_GetTmpRxBuffer(Index)++
#define Com_IncTxBuffer(Index)                                        Com_GetTxBuffer(Index)++
#define Com_IncTxCyclicProcessingISRLockCounter()                     Com_GetTxCyclicProcessingISRLockCounter()++
#define Com_IncTxDeadlineMonitoringISRLockCounter()                   Com_GetTxDeadlineMonitoringISRLockCounter()++
#define Com_IncTxDynSignalLength(Index)                               Com_GetTxDynSignalLength(Index)++
#define Com_IncTxIPduGroupISRLockCounter()                            Com_GetTxIPduGroupISRLockCounter()++
#define Com_IncTxProcessingISRLockCounter()                           Com_GetTxProcessingISRLockCounter()++
#define Com_IncTxSduLength(Index)                                     Com_GetTxSduLength(Index)++
#define Com_IncTxTmpTpPduLength(Index)                                Com_GetTxTmpTpPduLength(Index)++
#define Com_IncTxTpSduLength(Index)                                   Com_GetTxTpSduLength(Index)++
#define Com_IncTxTpWrittenBytesCounter(Index)                         Com_GetTxTpWrittenBytesCounter(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  ComPCDecrementDataMacros  Com Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Com_DecCycleTimeCnt(Index)                                    Com_GetCycleTimeCnt(Index)--
#define Com_DecDelayTimeCnt(Index)                                    Com_GetDelayTimeCnt(Index)--
#define Com_DecGatewayProcessingISRLockCounter()                      Com_GetGatewayProcessingISRLockCounter()--
#define Com_DecHandleRxPduDeferred(Index)                             Com_GetHandleRxPduDeferred(Index)--
#define Com_DecRepCnt(Index)                                          Com_GetRepCnt(Index)--
#define Com_DecRepCycleCnt(Index)                                     Com_GetRepCycleCnt(Index)--
#define Com_DecRxDeadlineMonitoringISRLockCounter()                   Com_GetRxDeadlineMonitoringISRLockCounter()--
#define Com_DecRxDefPduBuffer(Index)                                  Com_GetRxDefPduBuffer(Index)--
#define Com_DecRxDeferredProcessingISRLockCounter()                   Com_GetRxDeferredProcessingISRLockCounter()--
#define Com_DecRxDynSignalLength(Index)                               Com_GetRxDynSignalLength(Index)--
#define Com_DecRxIPduGroupISRLockCounter()                            Com_GetRxIPduGroupISRLockCounter()--
#define Com_DecRxSigBufferArrayBased(Index)                           Com_GetRxSigBufferArrayBased(Index)--
#define Com_DecRxSigBufferUInt16(Index)                               Com_GetRxSigBufferUInt16(Index)--
#define Com_DecRxTpBuffer(Index)                                      Com_GetRxTpBuffer(Index)--
#define Com_DecRxTpSduLength(Index)                                   Com_GetRxTpSduLength(Index)--
#define Com_DecRxTpWrittenBytesCounter(Index)                         Com_GetRxTpWrittenBytesCounter(Index)--
#define Com_DecTmpRxBuffer(Index)                                     Com_GetTmpRxBuffer(Index)--
#define Com_DecTxBuffer(Index)                                        Com_GetTxBuffer(Index)--
#define Com_DecTxCyclicProcessingISRLockCounter()                     Com_GetTxCyclicProcessingISRLockCounter()--
#define Com_DecTxDeadlineMonitoringISRLockCounter()                   Com_GetTxDeadlineMonitoringISRLockCounter()--
#define Com_DecTxDynSignalLength(Index)                               Com_GetTxDynSignalLength(Index)--
#define Com_DecTxIPduGroupISRLockCounter()                            Com_GetTxIPduGroupISRLockCounter()--
#define Com_DecTxProcessingISRLockCounter()                           Com_GetTxProcessingISRLockCounter()--
#define Com_DecTxSduLength(Index)                                     Com_GetTxSduLength(Index)--
#define Com_DecTxTmpTpPduLength(Index)                                Com_GetTxTmpTpPduLength(Index)--
#define Com_DecTxTpSduLength(Index)                                   Com_GetTxTpSduLength(Index)--
#define Com_DecTxTpWrittenBytesCounter(Index)                         Com_GetTxTpWrittenBytesCounter(Index)--
/** 
  \}
*/ 

  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  ComPCIterableTypes  Com Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Com_AlwaysActiveRxComIPdus */
typedef uint8_least Com_AlwaysActiveRxComIPdusIterType;

/**   \brief  type used to iterate Com_AlwaysActiveTxComIPdus */
typedef uint8_least Com_AlwaysActiveTxComIPdusIterType;

/**   \brief  type used to iterate Com_ConstValueArrayBased */
typedef uint8_least Com_ConstValueArrayBasedIterType;

/**   \brief  type used to iterate Com_ConstValueUInt16 */
typedef uint8_least Com_ConstValueUInt16IterType;

/**   \brief  type used to iterate Com_HandleRxPduDeferred */
typedef uint8_least Com_HandleRxPduDeferredIterType;

/**   \brief  type used to iterate Com_RxAccessInfo */
typedef uint8_least Com_RxAccessInfoIterType;

/**   \brief  type used to iterate Com_RxAccessInfoInd */
typedef uint8_least Com_RxAccessInfoIndIterType;

/**   \brief  type used to iterate Com_RxDefPduBuffer */
typedef uint16_least Com_RxDefPduBufferIterType;

/**   \brief  type used to iterate Com_RxPduInfo */
typedef uint8_least Com_RxPduInfoIterType;

/**   \brief  type used to iterate Com_RxSigBufferArrayBased */
typedef uint16_least Com_RxSigBufferArrayBasedIterType;

/**   \brief  type used to iterate Com_RxSigBufferUInt16 */
typedef uint8_least Com_RxSigBufferUInt16IterType;

/**   \brief  type used to iterate Com_RxSigInfo */
typedef uint8_least Com_RxSigInfoIterType;

/**   \brief  type used to iterate Com_RxTpBuffer */
typedef uint16_least Com_RxTpBufferIterType;

/**   \brief  type used to iterate Com_RxTpInfo */
typedef uint8_least Com_RxTpInfoIterType;

/**   \brief  type used to iterate Com_TmpRxBuffer */
typedef uint16_least Com_TmpRxBufferIterType;

/**   \brief  type used to iterate Com_TxBuffer */
typedef uint16_least Com_TxBufferIterType;

/**   \brief  type used to iterate Com_TxModeFalse */
typedef uint8_least Com_TxModeFalseIterType;

/**   \brief  type used to iterate Com_TxModeInfo */
typedef uint8_least Com_TxModeInfoIterType;

/**   \brief  type used to iterate Com_TxModeTrue */
typedef uint8_least Com_TxModeTrueIterType;

/**   \brief  type used to iterate Com_TxPduInfo */
typedef uint8_least Com_TxPduInfoIterType;

/**   \brief  type used to iterate Com_TxPduInitValue */
typedef uint16_least Com_TxPduInitValueIterType;

/**   \brief  type used to iterate Com_TxSigInfo */
typedef uint8_least Com_TxSigInfoIterType;

/**   \brief  type used to iterate Com_TxTpInfo */
typedef uint8_least Com_TxTpInfoIterType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCIterableTypesWithSizeRelations  Com Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Com_CurrentTxMode */
typedef Com_TxPduInfoIterType Com_CurrentTxModeIterType;

/**   \brief  type used to iterate Com_CycleTimeCnt */
typedef Com_TxPduInfoIterType Com_CycleTimeCntIterType;

/**   \brief  type used to iterate Com_CyclicSendRequest */
typedef Com_TxPduInfoIterType Com_CyclicSendRequestIterType;

/**   \brief  type used to iterate Com_DelayTimeCnt */
typedef Com_TxPduInfoIterType Com_DelayTimeCntIterType;

/**   \brief  type used to iterate Com_RepCnt */
typedef Com_TxPduInfoIterType Com_RepCntIterType;

/**   \brief  type used to iterate Com_RepCycleCnt */
typedef Com_TxPduInfoIterType Com_RepCycleCntIterType;

/**   \brief  type used to iterate Com_RxDynSignalLength */
typedef Com_RxTpInfoIterType Com_RxDynSignalLengthIterType;

/**   \brief  type used to iterate Com_RxPduGrpActive */
typedef Com_RxPduInfoIterType Com_RxPduGrpActiveIterType;

/**   \brief  type used to iterate Com_RxTpConnectionState */
typedef Com_RxTpInfoIterType Com_RxTpConnectionStateIterType;

/**   \brief  type used to iterate Com_RxTpSduLength */
typedef Com_RxTpInfoIterType Com_RxTpSduLengthIterType;

/**   \brief  type used to iterate Com_RxTpWrittenBytesCounter */
typedef Com_RxTpInfoIterType Com_RxTpWrittenBytesCounterIterType;

/**   \brief  type used to iterate Com_TransmitRequest */
typedef Com_TxPduInfoIterType Com_TransmitRequestIterType;

/**   \brief  type used to iterate Com_TxDynSignalLength */
typedef Com_TxTpInfoIterType Com_TxDynSignalLengthIterType;

/**   \brief  type used to iterate Com_TxPduGrpActive */
typedef Com_TxPduInfoIterType Com_TxPduGrpActiveIterType;

/**   \brief  type used to iterate Com_TxSduLength */
typedef Com_TxPduInfoIterType Com_TxSduLengthIterType;

/**   \brief  type used to iterate Com_TxTmpTpPduLength */
typedef Com_TxTpInfoIterType Com_TxTmpTpPduLengthIterType;

/**   \brief  type used to iterate Com_TxTpConnectionState */
typedef Com_TxTpInfoIterType Com_TxTpConnectionStateIterType;

/**   \brief  type used to iterate Com_TxTpSduLength */
typedef Com_TxTpInfoIterType Com_TxTpSduLengthIterType;

/**   \brief  type used to iterate Com_TxTpWrittenBytesCounter */
typedef Com_TxTpInfoIterType Com_TxTpWrittenBytesCounterIterType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCValueTypes  Com Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Com_RxPduInfoIdxOfAlwaysActiveRxComIPdus */
typedef uint8 Com_RxPduInfoIdxOfAlwaysActiveRxComIPdusType;

/**   \brief  value based type definition for Com_TxPduInfoIdxOfAlwaysActiveTxComIPdus */
typedef uint8 Com_TxPduInfoIdxOfAlwaysActiveTxComIPdusType;

/**   \brief  value based type definition for Com_ConfigId */
typedef uint8 Com_ConfigIdType;

/**   \brief  value based type definition for Com_ConstValueArrayBased */
typedef uint8 Com_ConstValueArrayBasedType;

/**   \brief  value based type definition for Com_ConstValueUInt16 */
typedef uint16 Com_ConstValueUInt16Type;

/**   \brief  value based type definition for Com_CurrentTxMode */
typedef boolean Com_CurrentTxModeType;

/**   \brief  value based type definition for Com_CycleTimeCnt */
typedef uint8 Com_CycleTimeCntType;

/**   \brief  value based type definition for Com_CyclicSendRequest */
typedef boolean Com_CyclicSendRequestType;

/**   \brief  value based type definition for Com_DelayTimeCnt */
typedef uint8 Com_DelayTimeCntType;

/**   \brief  value based type definition for Com_GatewayProcessingISRLockCounter */
typedef uint16 Com_GatewayProcessingISRLockCounterType;

/**   \brief  value based type definition for Com_HandleRxPduDeferred */
typedef PduLengthType Com_HandleRxPduDeferredType;

/**   \brief  value based type definition for Com_Initialized */
typedef boolean Com_InitializedType;

/**   \brief  value based type definition for Com_PduGrpCnt */
typedef uint8 Com_PduGrpCntType;

/**   \brief  value based type definition for Com_RepCnt */
typedef uint8 Com_RepCntType;

/**   \brief  value based type definition for Com_RepCycleCnt */
typedef uint8 Com_RepCycleCntType;

/**   \brief  value based type definition for Com_ApplTypeOfRxAccessInfo */
typedef uint8 Com_ApplTypeOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BitLengthOfRxAccessInfo */
typedef uint16 Com_BitLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BitPositionOfRxAccessInfo */
typedef uint8 Com_BitPositionOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BufferIdxOfRxAccessInfo */
typedef uint8 Com_BufferIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BufferUsedOfRxAccessInfo */
typedef boolean Com_BufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BusAccOfRxAccessInfo */
typedef uint8 Com_BusAccOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ByteLengthOfRxAccessInfo */
typedef uint16 Com_ByteLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BytePositionOfRxAccessInfo */
typedef uint8 Com_BytePositionOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ConstValueArrayBasedInitValueEndIdxOfRxAccessInfo */
typedef uint8 Com_ConstValueArrayBasedInitValueEndIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ConstValueArrayBasedInitValueLengthOfRxAccessInfo */
typedef uint8 Com_ConstValueArrayBasedInitValueLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ConstValueArrayBasedInitValueStartIdxOfRxAccessInfo */
typedef uint8 Com_ConstValueArrayBasedInitValueStartIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ConstValueArrayBasedInitValueUsedOfRxAccessInfo */
typedef boolean Com_ConstValueArrayBasedInitValueUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_InitValueIdxOfRxAccessInfo */
typedef uint8 Com_InitValueIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_InitValueUsedOfRxAccessInfo */
typedef boolean Com_InitValueUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxPduInfoIdxOfRxAccessInfo */
typedef uint8 Com_RxPduInfoIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo */
typedef uint16 Com_RxSigBufferArrayBasedBufferEndIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedBufferLengthOfRxAccessInfo */
typedef uint16 Com_RxSigBufferArrayBasedBufferLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo */
typedef uint16 Com_RxSigBufferArrayBasedBufferStartIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedBufferUsedOfRxAccessInfo */
typedef boolean Com_RxSigBufferArrayBasedBufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_StartByteInPduPositionOfRxAccessInfo */
typedef uint8 Com_StartByteInPduPositionOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoInd */
typedef uint8 Com_RxAccessInfoIndType;

/**   \brief  value based type definition for Com_RxDeadlineMonitoringISRLockCounter */
typedef uint16 Com_RxDeadlineMonitoringISRLockCounterType;

/**   \brief  value based type definition for Com_RxDefPduBuffer */
typedef uint8 Com_RxDefPduBufferType;

/**   \brief  value based type definition for Com_RxDeferredProcessingISRLockCounter */
typedef uint16 Com_RxDeferredProcessingISRLockCounterType;

/**   \brief  value based type definition for Com_RxDeferredProcessingISRLockThreshold */
typedef uint8 Com_RxDeferredProcessingISRLockThresholdType;

/**   \brief  value based type definition for Com_RxDynSignalLength */
typedef PduLengthType Com_RxDynSignalLengthType;

/**   \brief  value based type definition for Com_RxIPduGroupISRLockCounter */
typedef uint16 Com_RxIPduGroupISRLockCounterType;

/**   \brief  value based type definition for Com_RxIPduGroupISRLockThreshold */
typedef uint8 Com_RxIPduGroupISRLockThresholdType;

/**   \brief  value based type definition for Com_RxPduGrpActive */
typedef boolean Com_RxPduGrpActiveType;

/**   \brief  value based type definition for Com_HandleRxPduDeferredIdxOfRxPduInfo */
typedef uint8 Com_HandleRxPduDeferredIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_HandleRxPduDeferredUsedOfRxPduInfo */
typedef boolean Com_HandleRxPduDeferredUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoIndEndIdxOfRxPduInfo */
typedef uint8 Com_RxAccessInfoIndEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoIndStartIdxOfRxPduInfo */
typedef uint8 Com_RxAccessInfoIndStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoIndUsedOfRxPduInfo */
typedef boolean Com_RxAccessInfoIndUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferEndIdxOfRxPduInfo */
typedef uint16 Com_RxDefPduBufferEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferLengthOfRxPduInfo */
typedef uint16 Com_RxDefPduBufferLengthOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferStartIdxOfRxPduInfo */
typedef uint16 Com_RxDefPduBufferStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferUsedOfRxPduInfo */
typedef boolean Com_RxDefPduBufferUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigInfoEndIdxOfRxPduInfo */
typedef uint8 Com_RxSigInfoEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigInfoStartIdxOfRxPduInfo */
typedef uint8 Com_RxSigInfoStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigInfoUsedOfRxPduInfo */
typedef boolean Com_RxSigInfoUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxTpInfoIdxOfRxPduInfo */
typedef uint8 Com_RxTpInfoIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxTpInfoUsedOfRxPduInfo */
typedef boolean Com_RxTpInfoUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_SignalProcessingOfRxPduInfo */
typedef uint8 Com_SignalProcessingOfRxPduInfoType;

/**   \brief  value based type definition for Com_TypeOfRxPduInfo */
typedef uint8 Com_TypeOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBased */
typedef uint8 Com_RxSigBufferArrayBasedType;

/**   \brief  value based type definition for Com_RxSigBufferUInt16 */
typedef uint16 Com_RxSigBufferUInt16Type;

/**   \brief  value based type definition for Com_RxAccessInfoIdxOfRxSigInfo */
typedef uint8 Com_RxAccessInfoIdxOfRxSigInfoType;

/**   \brief  value based type definition for Com_SignalProcessingOfRxSigInfo */
typedef uint8 Com_SignalProcessingOfRxSigInfoType;

/**   \brief  value based type definition for Com_ValidDlcOfRxSigInfo */
typedef uint8 Com_ValidDlcOfRxSigInfoType;

/**   \brief  value based type definition for Com_RxTpBuffer */
typedef uint8 Com_RxTpBufferType;

/**   \brief  value based type definition for Com_RxTpConnectionState */
typedef uint8 Com_RxTpConnectionStateType;

/**   \brief  value based type definition for Com_BufferSizeOfRxTpInfo */
typedef uint16 Com_BufferSizeOfRxTpInfoType;

/**   \brief  value based type definition for Com_DynamicInitialLengthOfRxTpInfo */
typedef uint8 Com_DynamicInitialLengthOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoDynSigIdxOfRxTpInfo */
typedef uint8 Com_RxAccessInfoDynSigIdxOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoDynSigUsedOfRxTpInfo */
typedef boolean Com_RxAccessInfoDynSigUsedOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxTpBufferEndIdxOfRxTpInfo */
typedef uint16 Com_RxTpBufferEndIdxOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxTpBufferStartIdxOfRxTpInfo */
typedef uint16 Com_RxTpBufferStartIdxOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxTpBufferUsedOfRxTpInfo */
typedef boolean Com_RxTpBufferUsedOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxTpSduLength */
typedef PduLengthType Com_RxTpSduLengthType;

/**   \brief  value based type definition for Com_RxTpWrittenBytesCounter */
typedef PduLengthType Com_RxTpWrittenBytesCounterType;

/**   \brief  value based type definition for Com_SizeOfAlwaysActiveRxComIPdus */
typedef uint8 Com_SizeOfAlwaysActiveRxComIPdusType;

/**   \brief  value based type definition for Com_SizeOfAlwaysActiveTxComIPdus */
typedef uint8 Com_SizeOfAlwaysActiveTxComIPdusType;

/**   \brief  value based type definition for Com_SizeOfConstValueArrayBased */
typedef uint8 Com_SizeOfConstValueArrayBasedType;

/**   \brief  value based type definition for Com_SizeOfConstValueUInt16 */
typedef uint8 Com_SizeOfConstValueUInt16Type;

/**   \brief  value based type definition for Com_SizeOfCurrentTxMode */
typedef uint8 Com_SizeOfCurrentTxModeType;

/**   \brief  value based type definition for Com_SizeOfCycleTimeCnt */
typedef uint8 Com_SizeOfCycleTimeCntType;

/**   \brief  value based type definition for Com_SizeOfCyclicSendRequest */
typedef uint8 Com_SizeOfCyclicSendRequestType;

/**   \brief  value based type definition for Com_SizeOfDelayTimeCnt */
typedef uint8 Com_SizeOfDelayTimeCntType;

/**   \brief  value based type definition for Com_SizeOfHandleRxPduDeferred */
typedef uint8 Com_SizeOfHandleRxPduDeferredType;

/**   \brief  value based type definition for Com_SizeOfRepCnt */
typedef uint8 Com_SizeOfRepCntType;

/**   \brief  value based type definition for Com_SizeOfRepCycleCnt */
typedef uint8 Com_SizeOfRepCycleCntType;

/**   \brief  value based type definition for Com_SizeOfRxAccessInfo */
typedef uint8 Com_SizeOfRxAccessInfoType;

/**   \brief  value based type definition for Com_SizeOfRxAccessInfoInd */
typedef uint8 Com_SizeOfRxAccessInfoIndType;

/**   \brief  value based type definition for Com_SizeOfRxDefPduBuffer */
typedef uint16 Com_SizeOfRxDefPduBufferType;

/**   \brief  value based type definition for Com_SizeOfRxDynSignalLength */
typedef uint8 Com_SizeOfRxDynSignalLengthType;

/**   \brief  value based type definition for Com_SizeOfRxPduGrpActive */
typedef uint8 Com_SizeOfRxPduGrpActiveType;

/**   \brief  value based type definition for Com_SizeOfRxPduInfo */
typedef uint8 Com_SizeOfRxPduInfoType;

/**   \brief  value based type definition for Com_SizeOfRxSigBufferArrayBased */
typedef uint16 Com_SizeOfRxSigBufferArrayBasedType;

/**   \brief  value based type definition for Com_SizeOfRxSigBufferUInt16 */
typedef uint8 Com_SizeOfRxSigBufferUInt16Type;

/**   \brief  value based type definition for Com_SizeOfRxSigInfo */
typedef uint8 Com_SizeOfRxSigInfoType;

/**   \brief  value based type definition for Com_SizeOfRxTpBuffer */
typedef uint16 Com_SizeOfRxTpBufferType;

/**   \brief  value based type definition for Com_SizeOfRxTpConnectionState */
typedef uint8 Com_SizeOfRxTpConnectionStateType;

/**   \brief  value based type definition for Com_SizeOfRxTpInfo */
typedef uint8 Com_SizeOfRxTpInfoType;

/**   \brief  value based type definition for Com_SizeOfRxTpSduLength */
typedef uint8 Com_SizeOfRxTpSduLengthType;

/**   \brief  value based type definition for Com_SizeOfRxTpWrittenBytesCounter */
typedef uint8 Com_SizeOfRxTpWrittenBytesCounterType;

/**   \brief  value based type definition for Com_SizeOfTmpRxBuffer */
typedef uint16 Com_SizeOfTmpRxBufferType;

/**   \brief  value based type definition for Com_SizeOfTransmitRequest */
typedef uint8 Com_SizeOfTransmitRequestType;

/**   \brief  value based type definition for Com_SizeOfTxBuffer */
typedef uint16 Com_SizeOfTxBufferType;

/**   \brief  value based type definition for Com_SizeOfTxDynSignalLength */
typedef uint8 Com_SizeOfTxDynSignalLengthType;

/**   \brief  value based type definition for Com_SizeOfTxModeFalse */
typedef uint8 Com_SizeOfTxModeFalseType;

/**   \brief  value based type definition for Com_SizeOfTxModeInfo */
typedef uint8 Com_SizeOfTxModeInfoType;

/**   \brief  value based type definition for Com_SizeOfTxModeTrue */
typedef uint8 Com_SizeOfTxModeTrueType;

/**   \brief  value based type definition for Com_SizeOfTxPduGrpActive */
typedef uint8 Com_SizeOfTxPduGrpActiveType;

/**   \brief  value based type definition for Com_SizeOfTxPduInfo */
typedef uint8 Com_SizeOfTxPduInfoType;

/**   \brief  value based type definition for Com_SizeOfTxPduInitValue */
typedef uint16 Com_SizeOfTxPduInitValueType;

/**   \brief  value based type definition for Com_SizeOfTxSduLength */
typedef uint8 Com_SizeOfTxSduLengthType;

/**   \brief  value based type definition for Com_SizeOfTxSigInfo */
typedef uint8 Com_SizeOfTxSigInfoType;

/**   \brief  value based type definition for Com_SizeOfTxTmpTpPduLength */
typedef uint8 Com_SizeOfTxTmpTpPduLengthType;

/**   \brief  value based type definition for Com_SizeOfTxTpConnectionState */
typedef uint8 Com_SizeOfTxTpConnectionStateType;

/**   \brief  value based type definition for Com_SizeOfTxTpInfo */
typedef uint8 Com_SizeOfTxTpInfoType;

/**   \brief  value based type definition for Com_SizeOfTxTpSduLength */
typedef uint8 Com_SizeOfTxTpSduLengthType;

/**   \brief  value based type definition for Com_SizeOfTxTpWrittenBytesCounter */
typedef uint8 Com_SizeOfTxTpWrittenBytesCounterType;

/**   \brief  value based type definition for Com_TmpRxBuffer */
typedef uint8 Com_TmpRxBufferType;

/**   \brief  value based type definition for Com_TransmitRequest */
typedef boolean Com_TransmitRequestType;

/**   \brief  value based type definition for Com_TxBuffer */
typedef uint8 Com_TxBufferType;

/**   \brief  value based type definition for Com_TxCyclicProcessingISRLockCounter */
typedef uint16 Com_TxCyclicProcessingISRLockCounterType;

/**   \brief  value based type definition for Com_TxDeadlineMonitoringISRLockCounter */
typedef uint16 Com_TxDeadlineMonitoringISRLockCounterType;

/**   \brief  value based type definition for Com_TxDynSignalLength */
typedef PduLengthType Com_TxDynSignalLengthType;

/**   \brief  value based type definition for Com_TxIPduGroupISRLockCounter */
typedef uint16 Com_TxIPduGroupISRLockCounterType;

/**   \brief  value based type definition for Com_TxIPduGroupISRLockThreshold */
typedef uint8 Com_TxIPduGroupISRLockThresholdType;

/**   \brief  value based type definition for Com_DirectOfTxModeFalse */
typedef boolean Com_DirectOfTxModeFalseType;

/**   \brief  value based type definition for Com_InitModeOfTxModeInfo */
typedef boolean Com_InitModeOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxModeFalseIdxOfTxModeInfo */
typedef uint8 Com_TxModeFalseIdxOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxModeTrueIdxOfTxModeInfo */
typedef uint8 Com_TxModeTrueIdxOfTxModeInfoType;

/**   \brief  value based type definition for Com_DirectOfTxModeTrue */
typedef boolean Com_DirectOfTxModeTrueType;

/**   \brief  value based type definition for Com_TxPduGrpActive */
typedef boolean Com_TxPduGrpActiveType;

/**   \brief  value based type definition for Com_ExternalIdOfTxPduInfo */
typedef uint8 Com_ExternalIdOfTxPduInfoType;

/**   \brief  value based type definition for Com_MetaDataLengthOfTxPduInfo */
typedef uint8 Com_MetaDataLengthOfTxPduInfoType;

/**   \brief  value based type definition for Com_PduWithMetaDataLengthOfTxPduInfo */
typedef uint16 Com_PduWithMetaDataLengthOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferEndIdxOfTxPduInfo */
typedef uint16 Com_TxBufferEndIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferLengthOfTxPduInfo */
typedef uint16 Com_TxBufferLengthOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferStartIdxOfTxPduInfo */
typedef uint16 Com_TxBufferStartIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferUsedOfTxPduInfo */
typedef boolean Com_TxBufferUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueEndIdxOfTxPduInfo */
typedef uint16 Com_TxPduInitValueEndIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueStartIdxOfTxPduInfo */
typedef uint16 Com_TxPduInitValueStartIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueUsedOfTxPduInfo */
typedef boolean Com_TxPduInitValueUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxTpInfoIdxOfTxPduInfo */
typedef uint8 Com_TxTpInfoIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxTpInfoUsedOfTxPduInfo */
typedef boolean Com_TxTpInfoUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValue */
typedef uint8 Com_TxPduInitValueType;

/**   \brief  value based type definition for Com_TxProcessingISRLockCounter */
typedef uint16 Com_TxProcessingISRLockCounterType;

/**   \brief  value based type definition for Com_TxProcessingISRLockThreshold */
typedef uint8 Com_TxProcessingISRLockThresholdType;

/**   \brief  value based type definition for Com_TxSduLength */
typedef PduLengthType Com_TxSduLengthType;

/**   \brief  value based type definition for Com_ApplTypeOfTxSigInfo */
typedef uint8 Com_ApplTypeOfTxSigInfoType;

/**   \brief  value based type definition for Com_BitLengthOfTxSigInfo */
typedef uint16 Com_BitLengthOfTxSigInfoType;

/**   \brief  value based type definition for Com_BitPositionOfTxSigInfo */
typedef uint8 Com_BitPositionOfTxSigInfoType;

/**   \brief  value based type definition for Com_BusAccOfTxSigInfo */
typedef uint8 Com_BusAccOfTxSigInfoType;

/**   \brief  value based type definition for Com_ByteLengthOfTxSigInfo */
typedef uint16 Com_ByteLengthOfTxSigInfoType;

/**   \brief  value based type definition for Com_BytePositionOfTxSigInfo */
typedef uint8 Com_BytePositionOfTxSigInfoType;

/**   \brief  value based type definition for Com_StartByteInPduPositionOfTxSigInfo */
typedef uint8 Com_StartByteInPduPositionOfTxSigInfoType;

/**   \brief  value based type definition for Com_TriggeredOfTxSigInfo */
typedef boolean Com_TriggeredOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxBufferEndIdxOfTxSigInfo */
typedef uint16 Com_TxBufferEndIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxBufferLengthOfTxSigInfo */
typedef uint16 Com_TxBufferLengthOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxBufferStartIdxOfTxSigInfo */
typedef uint16 Com_TxBufferStartIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxBufferUsedOfTxSigInfo */
typedef boolean Com_TxBufferUsedOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxPduInfoIdxOfTxSigInfo */
typedef uint8 Com_TxPduInfoIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxTmpTpPduLength */
typedef PduLengthType Com_TxTmpTpPduLengthType;

/**   \brief  value based type definition for Com_TxTpConnectionState */
typedef uint8 Com_TxTpConnectionStateType;

/**   \brief  value based type definition for Com_BufferSizeOfTxTpInfo */
typedef uint16 Com_BufferSizeOfTxTpInfoType;

/**   \brief  value based type definition for Com_DynamicInitialLengthOfTxTpInfo */
typedef uint8 Com_DynamicInitialLengthOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxBufferEndIdxOfTxTpInfo */
typedef uint16 Com_TxBufferEndIdxOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxBufferLengthOfTxTpInfo */
typedef uint16 Com_TxBufferLengthOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxBufferStartIdxOfTxTpInfo */
typedef uint16 Com_TxBufferStartIdxOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxBufferUsedOfTxTpInfo */
typedef boolean Com_TxBufferUsedOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxTpSduLength */
typedef PduLengthType Com_TxTpSduLengthType;

/**   \brief  value based type definition for Com_TxTpWrittenBytesCounter */
typedef PduLengthType Com_TxTpWrittenBytesCounterType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  ComPCStructTypes  Com Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Com_AlwaysActiveRxComIPdus */
typedef struct sCom_AlwaysActiveRxComIPdusType
{
  uint8 Com_AlwaysActiveRxComIPdusNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_AlwaysActiveRxComIPdusType;

/**   \brief  type used in Com_AlwaysActiveTxComIPdus */
typedef struct sCom_AlwaysActiveTxComIPdusType
{
  uint8 Com_AlwaysActiveTxComIPdusNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_AlwaysActiveTxComIPdusType;

/**   \brief  type used in Com_RxAccessInfo */
typedef struct sCom_RxAccessInfoType
{
  Com_BitLengthOfRxAccessInfoType BitLengthOfRxAccessInfo;  /**< Bit length of the signal or group signal. */
  Com_ByteLengthOfRxAccessInfoType ByteLengthOfRxAccessInfo;  /**< Byte length of the signal or group signal. */
  Com_RxSigBufferArrayBasedBufferEndIdxOfRxAccessInfoType RxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo;  /**< the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased */
  Com_RxSigBufferArrayBasedBufferStartIdxOfRxAccessInfoType RxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo;  /**< the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased */
  Com_InitValueUsedOfRxAccessInfoType InitValueUsedOfRxAccessInfo;  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
  Com_RxSigBufferArrayBasedBufferUsedOfRxAccessInfoType RxSigBufferArrayBasedBufferUsedOfRxAccessInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigBufferArrayBased */
  Com_ApplTypeOfRxAccessInfoType ApplTypeOfRxAccessInfo;  /**< Application data type. */
  Com_BitPositionOfRxAccessInfoType BitPositionOfRxAccessInfo;  /**< Little endian bit position of the signal or group signal within the I-PDU. */
  Com_BufferIdxOfRxAccessInfoType BufferIdxOfRxAccessInfo;  /**< the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64 */
  Com_BusAccOfRxAccessInfoType BusAccOfRxAccessInfo;  /**< BUS access algorithm for signal or group signal packing / un-packing. */
  Com_ConstValueArrayBasedInitValueEndIdxOfRxAccessInfoType ConstValueArrayBasedInitValueEndIdxOfRxAccessInfo;  /**< the end index of the 0:n relation pointing to Com_ConstValueArrayBased */
  Com_ConstValueArrayBasedInitValueStartIdxOfRxAccessInfoType ConstValueArrayBasedInitValueStartIdxOfRxAccessInfo;  /**< the start index of the 0:n relation pointing to Com_ConstValueArrayBased */
  Com_InitValueIdxOfRxAccessInfoType InitValueIdxOfRxAccessInfo;  /**< the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
  Com_RxPduInfoIdxOfRxAccessInfoType RxPduInfoIdxOfRxAccessInfo;  /**< the index of the 1:1 relation pointing to Com_RxPduInfo */
  Com_StartByteInPduPositionOfRxAccessInfoType StartByteInPduPositionOfRxAccessInfo;  /**< Start Byte position of the signal or group signal within the I-PDU. */
} Com_RxAccessInfoType;

/**   \brief  type used in Com_RxPduInfo */
typedef struct sCom_RxPduInfoType
{
  Com_RxDefPduBufferEndIdxOfRxPduInfoType RxDefPduBufferEndIdxOfRxPduInfo;  /**< the end index of the 0:n relation pointing to Com_RxDefPduBuffer */
  Com_RxDefPduBufferStartIdxOfRxPduInfoType RxDefPduBufferStartIdxOfRxPduInfo;  /**< the start index of the 0:n relation pointing to Com_RxDefPduBuffer */
  Com_RxAccessInfoIndUsedOfRxPduInfoType RxAccessInfoIndUsedOfRxPduInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd */
  Com_RxSigInfoEndIdxOfRxPduInfoType RxSigInfoEndIdxOfRxPduInfo;  /**< the end index of the 0:n relation pointing to Com_RxSigInfo */
  Com_RxTpInfoIdxOfRxPduInfoType RxTpInfoIdxOfRxPduInfo;  /**< the index of the 0:1 relation pointing to Com_RxTpInfo */
  Com_SignalProcessingOfRxPduInfoType SignalProcessingOfRxPduInfo;  /**< Defines whether rx Pdu is processed in DEFERRED or IMMEDIATE fashion. */
  Com_TypeOfRxPduInfoType TypeOfRxPduInfo;  /**< Defines whether rx Pdu is a NORMAL or TP IPdu. */
} Com_RxPduInfoType;

/**   \brief  type used in Com_RxSigInfo */
typedef struct sCom_RxSigInfoType
{
  Com_RxAccessInfoIdxOfRxSigInfoType RxAccessInfoIdxOfRxSigInfo;  /**< the index of the 1:1 relation pointing to Com_RxAccessInfo */
  Com_SignalProcessingOfRxSigInfoType SignalProcessingOfRxSigInfo;
  Com_ValidDlcOfRxSigInfoType ValidDlcOfRxSigInfo;  /**< Minimum length of PDU required to completely receive the signal or signal group. */
} Com_RxSigInfoType;

/**   \brief  type used in Com_RxTpInfo */
typedef struct sCom_RxTpInfoType
{
  Com_RxTpBufferUsedOfRxTpInfoType RxTpBufferUsedOfRxTpInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxTpBuffer */
} Com_RxTpInfoType;

/**   \brief  type used in Com_TxModeFalse */
typedef struct sCom_TxModeFalseType
{
  Com_DirectOfTxModeFalseType DirectOfTxModeFalse;  /**< TRUE if transmission mode contains a direct part. */
} Com_TxModeFalseType;

/**   \brief  type used in Com_TxModeInfo */
typedef struct sCom_TxModeInfoType
{
  Com_InitModeOfTxModeInfoType InitModeOfTxModeInfo;  /**< Initial transmission mode selector of the Tx I-PDU. */
  Com_TxModeTrueIdxOfTxModeInfoType TxModeTrueIdxOfTxModeInfo;  /**< the index of the 1:1 relation pointing to Com_TxModeTrue */
} Com_TxModeInfoType;

/**   \brief  type used in Com_TxModeTrue */
typedef struct sCom_TxModeTrueType
{
  Com_DirectOfTxModeTrueType DirectOfTxModeTrue;  /**< TRUE if transmission mode contains a direct part. */
} Com_TxModeTrueType;

/**   \brief  type used in Com_TxPduInfo */
typedef struct sCom_TxPduInfoType
{
  Com_TxBufferLengthOfTxPduInfoType TxBufferLengthOfTxPduInfo;  /**< the number of relations pointing to Com_TxBuffer */
  Com_TxPduInitValueEndIdxOfTxPduInfoType TxPduInitValueEndIdxOfTxPduInfo;  /**< the end index of the 0:n relation pointing to Com_TxPduInitValue */
  Com_TxPduInitValueStartIdxOfTxPduInfoType TxPduInitValueStartIdxOfTxPduInfo;  /**< the start index of the 0:n relation pointing to Com_TxPduInitValue */
  Com_TxPduInitValueUsedOfTxPduInfoType TxPduInitValueUsedOfTxPduInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue */
  Com_MetaDataLengthOfTxPduInfoType MetaDataLengthOfTxPduInfo;  /**< Length of MetaData. */
  Com_TxTpInfoIdxOfTxPduInfoType TxTpInfoIdxOfTxPduInfo;  /**< the index of the 0:1 relation pointing to Com_TxTpInfo */
} Com_TxPduInfoType;

/**   \brief  type used in Com_TxSigInfo */
typedef struct sCom_TxSigInfoType
{
  Com_BitLengthOfTxSigInfoType BitLengthOfTxSigInfo;  /**< Bit length of the signal or group signal. */
  Com_ByteLengthOfTxSigInfoType ByteLengthOfTxSigInfo;  /**< Byte length of the signal or group signal. */
  Com_TxBufferEndIdxOfTxSigInfoType TxBufferEndIdxOfTxSigInfo;  /**< the end index of the 0:n relation pointing to Com_TxBuffer */
  Com_TxBufferStartIdxOfTxSigInfoType TxBufferStartIdxOfTxSigInfo;  /**< the start index of the 0:n relation pointing to Com_TxBuffer */
  Com_ApplTypeOfTxSigInfoType ApplTypeOfTxSigInfo;  /**< Application data type. */
  Com_BitPositionOfTxSigInfoType BitPositionOfTxSigInfo;  /**< Little endian bit position of the signal or group signal within the I-PDU. */
  Com_BusAccOfTxSigInfoType BusAccOfTxSigInfo;  /**< BUS access algorithm for signal or group signal packing / un-packing. */
  Com_StartByteInPduPositionOfTxSigInfoType StartByteInPduPositionOfTxSigInfo;  /**< Start Byte position of the signal or group signal within the I-PDU. */
  Com_TxPduInfoIdxOfTxSigInfoType TxPduInfoIdxOfTxSigInfo;  /**< the index of the 1:1 relation pointing to Com_TxPduInfo */
} Com_TxSigInfoType;

/**   \brief  type used in Com_TxTpInfo */
typedef struct sCom_TxTpInfoType
{
  uint8 Com_TxTpInfoNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_TxTpInfoType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCSymbolicStructTypes  Com Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to Com_CurrentTxMode */
typedef struct Com_CurrentTxModeStructSTag
{
  Com_CurrentTxModeType ACFanSpeed_PDU_9dd02bc4_Tx;
  Com_CurrentTxModeType DiagResponse;
} Com_CurrentTxModeStructSType;

/**   \brief  type to be used as symbolic data element access to Com_CycleTimeCnt */
typedef struct Com_CycleTimeCntStructSTag
{
  Com_CycleTimeCntType ACFanSpeed_PDU_9dd02bc4_Tx;
  Com_CycleTimeCntType DiagResponse;
} Com_CycleTimeCntStructSType;

/**   \brief  type to be used as symbolic data element access to Com_CyclicSendRequest */
typedef struct Com_CyclicSendRequestStructSTag
{
  Com_CyclicSendRequestType ACFanSpeed_PDU_9dd02bc4_Tx;
  Com_CyclicSendRequestType DiagResponse;
} Com_CyclicSendRequestStructSType;

/**   \brief  type to be used as symbolic data element access to Com_DelayTimeCnt */
typedef struct Com_DelayTimeCntStructSTag
{
  Com_DelayTimeCntType ACFanSpeed_PDU_9dd02bc4_Tx;
  Com_DelayTimeCntType DiagResponse;
} Com_DelayTimeCntStructSType;

/**   \brief  type to be used as symbolic data element access to Com_HandleRxPduDeferred */
typedef struct Com_HandleRxPduDeferredStructSTag
{
  Com_HandleRxPduDeferredType AmbTempInCar_PDU_5a566260_Rx;
  Com_HandleRxPduDeferredType AmbTempOutCar_PDU_dccc009c_Rx;
  Com_HandleRxPduDeferredType DiagRequest;
  Com_HandleRxPduDeferredType UserControls_PDU_5c89b54e_Rx;
} Com_HandleRxPduDeferredStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RepCnt */
typedef struct Com_RepCntStructSTag
{
  Com_RepCntType ACFanSpeed_PDU_9dd02bc4_Tx;
  Com_RepCntType DiagResponse;
} Com_RepCntStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RepCycleCnt */
typedef struct Com_RepCycleCntStructSTag
{
  Com_RepCycleCntType ACFanSpeed_PDU_9dd02bc4_Tx;
  Com_RepCycleCntType DiagResponse;
} Com_RepCycleCntStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxDefPduBuffer */
typedef struct Com_RxDefPduBufferStructSTag
{
  Com_RxDefPduBufferType AmbTempInCar_PDU_5a566260_Rx[8];
  Com_RxDefPduBufferType AmbTempOutCar_PDU_dccc009c_Rx[8];
  Com_RxDefPduBufferType DiagRequest[4095];
  Com_RxDefPduBufferType UserControls_PDU_5c89b54e_Rx[8];
} Com_RxDefPduBufferStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxDynSignalLength */
typedef struct Com_RxDynSignalLengthStructSTag
{
  Com_RxDynSignalLengthType DiagRequest;
} Com_RxDynSignalLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxPduGrpActive */
typedef struct Com_RxPduGrpActiveStructSTag
{
  Com_RxPduGrpActiveType AmbTempInCar_PDU_5a566260_Rx;
  Com_RxPduGrpActiveType AmbTempOutCar_PDU_dccc009c_Rx;
  Com_RxPduGrpActiveType DiagRequest;
  Com_RxPduGrpActiveType UserControls_PDU_5c89b54e_Rx;
} Com_RxPduGrpActiveStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxSigBufferArrayBased */
typedef struct Com_RxSigBufferArrayBasedStructSTag
{
  Com_RxSigBufferArrayBasedType DiagRequest_ComSignal[4095];
} Com_RxSigBufferArrayBasedStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxTpBuffer */
typedef struct Com_RxTpBufferStructSTag
{
  Com_RxTpBufferType DiagRequest[4095];
} Com_RxTpBufferStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxTpConnectionState */
typedef struct Com_RxTpConnectionStateStructSTag
{
  Com_RxTpConnectionStateType DiagRequest;
} Com_RxTpConnectionStateStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxTpSduLength */
typedef struct Com_RxTpSduLengthStructSTag
{
  Com_RxTpSduLengthType DiagRequest;
} Com_RxTpSduLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxTpWrittenBytesCounter */
typedef struct Com_RxTpWrittenBytesCounterStructSTag
{
  Com_RxTpWrittenBytesCounterType DiagRequest;
} Com_RxTpWrittenBytesCounterStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TransmitRequest */
typedef struct Com_TransmitRequestStructSTag
{
  Com_TransmitRequestType ACFanSpeed_PDU_9dd02bc4_Tx;
  Com_TransmitRequestType DiagResponse;
} Com_TransmitRequestStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxDynSignalLength */
typedef struct Com_TxDynSignalLengthStructSTag
{
  Com_TxDynSignalLengthType DiagResponse;
} Com_TxDynSignalLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxPduGrpActive */
typedef struct Com_TxPduGrpActiveStructSTag
{
  Com_TxPduGrpActiveType ACFanSpeed_PDU_9dd02bc4_Tx;
  Com_TxPduGrpActiveType DiagResponse;
} Com_TxPduGrpActiveStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxSduLength */
typedef struct Com_TxSduLengthStructSTag
{
  Com_TxSduLengthType ACFanSpeed_PDU_9dd02bc4_Tx;
  Com_TxSduLengthType DiagResponse;
} Com_TxSduLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxTmpTpPduLength */
typedef struct Com_TxTmpTpPduLengthStructSTag
{
  Com_TxTmpTpPduLengthType DiagResponse;
} Com_TxTmpTpPduLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxTpConnectionState */
typedef struct Com_TxTpConnectionStateStructSTag
{
  Com_TxTpConnectionStateType DiagResponse;
} Com_TxTpConnectionStateStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxTpSduLength */
typedef struct Com_TxTpSduLengthStructSTag
{
  Com_TxTpSduLengthType DiagResponse;
} Com_TxTpSduLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxTpWrittenBytesCounter */
typedef struct Com_TxTpWrittenBytesCounterStructSTag
{
  Com_TxTpWrittenBytesCounterType DiagResponse;
} Com_TxTpWrittenBytesCounterStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCUnionIndexAndSymbolTypes  Com Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access Com_CurrentTxMode in an index and symbol based style. */
typedef union Com_CurrentTxModeUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_CurrentTxModeType raw[2];
  Com_CurrentTxModeStructSType str;
} Com_CurrentTxModeUType;

/**   \brief  type to access Com_CycleTimeCnt in an index and symbol based style. */
typedef union Com_CycleTimeCntUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_CycleTimeCntType raw[2];
  Com_CycleTimeCntStructSType str;
} Com_CycleTimeCntUType;

/**   \brief  type to access Com_CyclicSendRequest in an index and symbol based style. */
typedef union Com_CyclicSendRequestUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_CyclicSendRequestType raw[2];
  Com_CyclicSendRequestStructSType str;
} Com_CyclicSendRequestUType;

/**   \brief  type to access Com_DelayTimeCnt in an index and symbol based style. */
typedef union Com_DelayTimeCntUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_DelayTimeCntType raw[2];
  Com_DelayTimeCntStructSType str;
} Com_DelayTimeCntUType;

/**   \brief  type to access Com_HandleRxPduDeferred in an index and symbol based style. */
typedef union Com_HandleRxPduDeferredUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_HandleRxPduDeferredType raw[4];
  Com_HandleRxPduDeferredStructSType str;
} Com_HandleRxPduDeferredUType;

/**   \brief  type to access Com_RepCnt in an index and symbol based style. */
typedef union Com_RepCntUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_RepCntType raw[2];
  Com_RepCntStructSType str;
} Com_RepCntUType;

/**   \brief  type to access Com_RepCycleCnt in an index and symbol based style. */
typedef union Com_RepCycleCntUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_RepCycleCntType raw[2];
  Com_RepCycleCntStructSType str;
} Com_RepCycleCntUType;

/**   \brief  type to access Com_RxDefPduBuffer in an index and symbol based style. */
typedef union Com_RxDefPduBufferUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_RxDefPduBufferType raw[4119];
  Com_RxDefPduBufferStructSType str;
} Com_RxDefPduBufferUType;

/**   \brief  type to access Com_RxDynSignalLength in an index and symbol based style. */
typedef union Com_RxDynSignalLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_RxDynSignalLengthType raw[1];
  Com_RxDynSignalLengthStructSType str;
} Com_RxDynSignalLengthUType;

/**   \brief  type to access Com_RxPduGrpActive in an index and symbol based style. */
typedef union Com_RxPduGrpActiveUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_RxPduGrpActiveType raw[4];
  Com_RxPduGrpActiveStructSType str;
} Com_RxPduGrpActiveUType;

/**   \brief  type to access Com_RxSigBufferArrayBased in an index and symbol based style. */
typedef union Com_RxSigBufferArrayBasedUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_RxSigBufferArrayBasedType raw[4095];
  Com_RxSigBufferArrayBasedStructSType str;
} Com_RxSigBufferArrayBasedUType;

/**   \brief  type to access Com_RxTpBuffer in an index and symbol based style. */
typedef union Com_RxTpBufferUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_RxTpBufferType raw[4095];
  Com_RxTpBufferStructSType str;
} Com_RxTpBufferUType;

/**   \brief  type to access Com_RxTpConnectionState in an index and symbol based style. */
typedef union Com_RxTpConnectionStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_RxTpConnectionStateType raw[1];
  Com_RxTpConnectionStateStructSType str;
} Com_RxTpConnectionStateUType;

/**   \brief  type to access Com_RxTpSduLength in an index and symbol based style. */
typedef union Com_RxTpSduLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_RxTpSduLengthType raw[1];
  Com_RxTpSduLengthStructSType str;
} Com_RxTpSduLengthUType;

/**   \brief  type to access Com_RxTpWrittenBytesCounter in an index and symbol based style. */
typedef union Com_RxTpWrittenBytesCounterUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_RxTpWrittenBytesCounterType raw[1];
  Com_RxTpWrittenBytesCounterStructSType str;
} Com_RxTpWrittenBytesCounterUType;

/**   \brief  type to access Com_TransmitRequest in an index and symbol based style. */
typedef union Com_TransmitRequestUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_TransmitRequestType raw[2];
  Com_TransmitRequestStructSType str;
} Com_TransmitRequestUType;

/**   \brief  type to access Com_TxDynSignalLength in an index and symbol based style. */
typedef union Com_TxDynSignalLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_TxDynSignalLengthType raw[1];
  Com_TxDynSignalLengthStructSType str;
} Com_TxDynSignalLengthUType;

/**   \brief  type to access Com_TxPduGrpActive in an index and symbol based style. */
typedef union Com_TxPduGrpActiveUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_TxPduGrpActiveType raw[2];
  Com_TxPduGrpActiveStructSType str;
} Com_TxPduGrpActiveUType;

/**   \brief  type to access Com_TxSduLength in an index and symbol based style. */
typedef union Com_TxSduLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_TxSduLengthType raw[2];
  Com_TxSduLengthStructSType str;
} Com_TxSduLengthUType;

/**   \brief  type to access Com_TxTmpTpPduLength in an index and symbol based style. */
typedef union Com_TxTmpTpPduLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_TxTmpTpPduLengthType raw[1];
  Com_TxTmpTpPduLengthStructSType str;
} Com_TxTmpTpPduLengthUType;

/**   \brief  type to access Com_TxTpConnectionState in an index and symbol based style. */
typedef union Com_TxTpConnectionStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_TxTpConnectionStateType raw[1];
  Com_TxTpConnectionStateStructSType str;
} Com_TxTpConnectionStateUType;

/**   \brief  type to access Com_TxTpSduLength in an index and symbol based style. */
typedef union Com_TxTpSduLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_TxTpSduLengthType raw[1];
  Com_TxTpSduLengthStructSType str;
} Com_TxTpSduLengthUType;

/**   \brief  type to access Com_TxTpWrittenBytesCounter in an index and symbol based style. */
typedef union Com_TxTpWrittenBytesCounterUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Com_TxTpWrittenBytesCounterType raw[1];
  Com_TxTpWrittenBytesCounterStructSType str;
} Com_TxTpWrittenBytesCounterUType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCRootPointerTypes  Com Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to Com_AlwaysActiveRxComIPdus */
typedef P2CONST(Com_AlwaysActiveRxComIPdusType, TYPEDEF, COM_CONST) Com_AlwaysActiveRxComIPdusPtrType;

/**   \brief  type used to point to Com_AlwaysActiveTxComIPdus */
typedef P2CONST(Com_AlwaysActiveTxComIPdusType, TYPEDEF, COM_CONST) Com_AlwaysActiveTxComIPdusPtrType;

/**   \brief  type used to point to Com_ConstValueArrayBased */
typedef P2CONST(Com_ConstValueArrayBasedType, TYPEDEF, COM_CONST) Com_ConstValueArrayBasedPtrType;

/**   \brief  type used to point to Com_ConstValueUInt16 */
typedef P2CONST(Com_ConstValueUInt16Type, TYPEDEF, COM_CONST) Com_ConstValueUInt16PtrType;

/**   \brief  type used to point to Com_CurrentTxMode */
typedef P2VAR(Com_CurrentTxModeType, TYPEDEF, COM_VAR_NOINIT) Com_CurrentTxModePtrType;

/**   \brief  type used to point to Com_CycleTimeCnt */
typedef P2VAR(Com_CycleTimeCntType, TYPEDEF, COM_VAR_NOINIT) Com_CycleTimeCntPtrType;

/**   \brief  type used to point to Com_CyclicSendRequest */
typedef P2VAR(Com_CyclicSendRequestType, TYPEDEF, COM_VAR_NOINIT) Com_CyclicSendRequestPtrType;

/**   \brief  type used to point to Com_DelayTimeCnt */
typedef P2VAR(Com_DelayTimeCntType, TYPEDEF, COM_VAR_NOINIT) Com_DelayTimeCntPtrType;

/**   \brief  type used to point to Com_GatewayProcessingISRLockCounter */
typedef P2VAR(Com_GatewayProcessingISRLockCounterType, TYPEDEF, COM_VAR_NOINIT) Com_GatewayProcessingISRLockCounterPtrType;

/**   \brief  type used to point to Com_HandleRxPduDeferred */
typedef P2VAR(Com_HandleRxPduDeferredType, TYPEDEF, COM_VAR_NOINIT) Com_HandleRxPduDeferredPtrType;

/**   \brief  type used to point to Com_Initialized */
typedef P2VAR(Com_InitializedType, TYPEDEF, COM_VAR_ZERO_INIT) Com_InitializedPtrType;

/**   \brief  type used to point to Com_RepCnt */
typedef P2VAR(Com_RepCntType, TYPEDEF, COM_VAR_NOINIT) Com_RepCntPtrType;

/**   \brief  type used to point to Com_RepCycleCnt */
typedef P2VAR(Com_RepCycleCntType, TYPEDEF, COM_VAR_NOINIT) Com_RepCycleCntPtrType;

/**   \brief  type used to point to Com_RxAccessInfo */
typedef P2CONST(Com_RxAccessInfoType, TYPEDEF, COM_CONST) Com_RxAccessInfoPtrType;

/**   \brief  type used to point to Com_RxAccessInfoInd */
typedef P2CONST(Com_RxAccessInfoIndType, TYPEDEF, COM_CONST) Com_RxAccessInfoIndPtrType;

/**   \brief  type used to point to Com_RxDeadlineMonitoringISRLockCounter */
typedef P2VAR(Com_RxDeadlineMonitoringISRLockCounterType, TYPEDEF, COM_VAR_NOINIT) Com_RxDeadlineMonitoringISRLockCounterPtrType;

/**   \brief  type used to point to Com_RxDefPduBuffer */
typedef P2VAR(Com_RxDefPduBufferType, TYPEDEF, COM_VAR_NOINIT) Com_RxDefPduBufferPtrType;

/**   \brief  type used to point to Com_RxDeferredProcessingISRLockCounter */
typedef P2VAR(Com_RxDeferredProcessingISRLockCounterType, TYPEDEF, COM_VAR_NOINIT) Com_RxDeferredProcessingISRLockCounterPtrType;

/**   \brief  type used to point to Com_RxDynSignalLength */
typedef P2VAR(Com_RxDynSignalLengthType, TYPEDEF, COM_VAR_NOINIT) Com_RxDynSignalLengthPtrType;

/**   \brief  type used to point to Com_RxIPduGroupISRLockCounter */
typedef P2VAR(Com_RxIPduGroupISRLockCounterType, TYPEDEF, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounterPtrType;

/**   \brief  type used to point to Com_RxPduGrpActive */
typedef P2VAR(Com_RxPduGrpActiveType, TYPEDEF, COM_VAR_NOINIT) Com_RxPduGrpActivePtrType;

/**   \brief  type used to point to Com_RxPduInfo */
typedef P2CONST(Com_RxPduInfoType, TYPEDEF, COM_CONST) Com_RxPduInfoPtrType;

/**   \brief  type used to point to Com_RxSigBufferArrayBased */
typedef P2VAR(Com_RxSigBufferArrayBasedType, TYPEDEF, COM_VAR_NOINIT) Com_RxSigBufferArrayBasedPtrType;

/**   \brief  type used to point to Com_RxSigBufferUInt16 */
typedef P2VAR(Com_RxSigBufferUInt16Type, TYPEDEF, COM_VAR_NOINIT) Com_RxSigBufferUInt16PtrType;

/**   \brief  type used to point to Com_RxSigInfo */
typedef P2CONST(Com_RxSigInfoType, TYPEDEF, COM_CONST) Com_RxSigInfoPtrType;

/**   \brief  type used to point to Com_RxTpBuffer */
typedef P2VAR(Com_RxTpBufferType, TYPEDEF, COM_VAR_NOINIT) Com_RxTpBufferPtrType;

/**   \brief  type used to point to Com_RxTpConnectionState */
typedef P2VAR(Com_RxTpConnectionStateType, TYPEDEF, COM_VAR_NOINIT) Com_RxTpConnectionStatePtrType;

/**   \brief  type used to point to Com_RxTpInfo */
typedef P2CONST(Com_RxTpInfoType, TYPEDEF, COM_CONST) Com_RxTpInfoPtrType;

/**   \brief  type used to point to Com_RxTpSduLength */
typedef P2VAR(Com_RxTpSduLengthType, TYPEDEF, COM_VAR_NOINIT) Com_RxTpSduLengthPtrType;

/**   \brief  type used to point to Com_RxTpWrittenBytesCounter */
typedef P2VAR(Com_RxTpWrittenBytesCounterType, TYPEDEF, COM_VAR_NOINIT) Com_RxTpWrittenBytesCounterPtrType;

/**   \brief  type used to point to Com_TmpRxBuffer */
typedef P2VAR(Com_TmpRxBufferType, TYPEDEF, COM_VAR_NOINIT) Com_TmpRxBufferPtrType;

/**   \brief  type used to point to Com_TransmitRequest */
typedef P2VAR(Com_TransmitRequestType, TYPEDEF, COM_VAR_NOINIT) Com_TransmitRequestPtrType;

/**   \brief  type used to point to Com_TxBuffer */
typedef P2VAR(Com_TxBufferType, TYPEDEF, COM_VAR_NOINIT) Com_TxBufferPtrType;

/**   \brief  type used to point to Com_TxCyclicProcessingISRLockCounter */
typedef P2VAR(Com_TxCyclicProcessingISRLockCounterType, TYPEDEF, COM_VAR_NOINIT) Com_TxCyclicProcessingISRLockCounterPtrType;

/**   \brief  type used to point to Com_TxDeadlineMonitoringISRLockCounter */
typedef P2VAR(Com_TxDeadlineMonitoringISRLockCounterType, TYPEDEF, COM_VAR_NOINIT) Com_TxDeadlineMonitoringISRLockCounterPtrType;

/**   \brief  type used to point to Com_TxDynSignalLength */
typedef P2VAR(Com_TxDynSignalLengthType, TYPEDEF, COM_VAR_NOINIT) Com_TxDynSignalLengthPtrType;

/**   \brief  type used to point to Com_TxIPduGroupISRLockCounter */
typedef P2VAR(Com_TxIPduGroupISRLockCounterType, TYPEDEF, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounterPtrType;

/**   \brief  type used to point to Com_TxModeFalse */
typedef P2CONST(Com_TxModeFalseType, TYPEDEF, COM_CONST) Com_TxModeFalsePtrType;

/**   \brief  type used to point to Com_TxModeInfo */
typedef P2CONST(Com_TxModeInfoType, TYPEDEF, COM_CONST) Com_TxModeInfoPtrType;

/**   \brief  type used to point to Com_TxModeTrue */
typedef P2CONST(Com_TxModeTrueType, TYPEDEF, COM_CONST) Com_TxModeTruePtrType;

/**   \brief  type used to point to Com_TxPduGrpActive */
typedef P2VAR(Com_TxPduGrpActiveType, TYPEDEF, COM_VAR_NOINIT) Com_TxPduGrpActivePtrType;

/**   \brief  type used to point to Com_TxPduInfo */
typedef P2CONST(Com_TxPduInfoType, TYPEDEF, COM_CONST) Com_TxPduInfoPtrType;

/**   \brief  type used to point to Com_TxPduInitValue */
typedef P2CONST(Com_TxPduInitValueType, TYPEDEF, COM_CONST) Com_TxPduInitValuePtrType;

/**   \brief  type used to point to Com_TxProcessingISRLockCounter */
typedef P2VAR(Com_TxProcessingISRLockCounterType, TYPEDEF, COM_VAR_NOINIT) Com_TxProcessingISRLockCounterPtrType;

/**   \brief  type used to point to Com_TxSduLength */
typedef P2VAR(Com_TxSduLengthType, TYPEDEF, COM_VAR_NOINIT) Com_TxSduLengthPtrType;

/**   \brief  type used to point to Com_TxSigInfo */
typedef P2CONST(Com_TxSigInfoType, TYPEDEF, COM_CONST) Com_TxSigInfoPtrType;

/**   \brief  type used to point to Com_TxTmpTpPduLength */
typedef P2VAR(Com_TxTmpTpPduLengthType, TYPEDEF, COM_VAR_NOINIT) Com_TxTmpTpPduLengthPtrType;

/**   \brief  type used to point to Com_TxTpConnectionState */
typedef P2VAR(Com_TxTpConnectionStateType, TYPEDEF, COM_VAR_NOINIT) Com_TxTpConnectionStatePtrType;

/**   \brief  type used to point to Com_TxTpInfo */
typedef P2CONST(Com_TxTpInfoType, TYPEDEF, COM_CONST) Com_TxTpInfoPtrType;

/**   \brief  type used to point to Com_TxTpSduLength */
typedef P2VAR(Com_TxTpSduLengthType, TYPEDEF, COM_VAR_NOINIT) Com_TxTpSduLengthPtrType;

/**   \brief  type used to point to Com_TxTpWrittenBytesCounter */
typedef P2VAR(Com_TxTpWrittenBytesCounterType, TYPEDEF, COM_VAR_NOINIT) Com_TxTpWrittenBytesCounterPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCRootValueTypes  Com Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Com_PCConfig */
typedef struct sCom_PCConfigType
{
  uint8 Com_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_PCConfigType;

typedef Com_PCConfigType Com_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Com_ConstValueArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueArrayBased
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_ConstValueArrayBasedType, COM_CONST) Com_ConstValueArrayBased[1];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_ConstValueUInt16Type, COM_CONST) Com_ConstValueUInt16[1];
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                                  Description
  BitLength                                Bit length of the signal or group signal.
  ByteLength                               Byte length of the signal or group signal.
  RxSigBufferArrayBasedBufferEndIdx        the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedBufferStartIdx      the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  InitValueUsed                            TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxSigBufferArrayBasedBufferUsed          TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigBufferArrayBased
  ApplType                                 Application data type.
  BitPosition                              Little endian bit position of the signal or group signal within the I-PDU.
  BufferIdx                                the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  BusAcc                                   BUS access algorithm for signal or group signal packing / un-packing.
  ConstValueArrayBasedInitValueEndIdx      the end index of the 0:n relation pointing to Com_ConstValueArrayBased
  ConstValueArrayBasedInitValueStartIdx    the start index of the 0:n relation pointing to Com_ConstValueArrayBased
  InitValueIdx                             the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxPduInfoIdx                             the index of the 1:1 relation pointing to Com_RxPduInfo
  StartByteInPduPosition                   Start Byte position of the signal or group signal within the I-PDU.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[6];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_RxAccessInfoIndType, COM_CONST) Com_RxAccessInfoInd[6];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                   Description
  RxDefPduBufferEndIdx      the end index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxDefPduBufferStartIdx    the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxAccessInfoIndUsed       TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd
  RxSigInfoEndIdx           the end index of the 0:n relation pointing to Com_RxSigInfo
  RxTpInfoIdx               the index of the 0:1 relation pointing to Com_RxTpInfo
  SignalProcessing          Defines whether rx Pdu is processed in DEFERRED or IMMEDIATE fashion.
  Type                      Defines whether rx Pdu is a NORMAL or TP IPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[4];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigInfo
  \brief  Contains all relevant information for Rx signals.
  \details
  Element             Description
  RxAccessInfoIdx     the index of the 1:1 relation pointing to Com_RxAccessInfo
  SignalProcessing
  ValidDlc            Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[6];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxTpInfo
  \brief  Contains all relevant information for Tx Tp I-PDUs.
  \details
  Element           Description
  RxTpBufferUsed    TRUE, if the 0:n relation has 1 relation pointing to Com_RxTpBuffer
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_RxTpInfoType, COM_CONST) Com_RxTpInfo[1];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeFalse
**********************************************************************************************************************/
/** 
  \var    Com_TxModeFalse
  \brief  Contains all relevant information for transmission mode false.
  \details
  Element    Description
  Direct     TRUE if transmission mode contains a direct part.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_TxModeFalseType, COM_CONST) Com_TxModeFalse[1];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element          Description
  InitMode         Initial transmission mode selector of the Tx I-PDU.
  TxModeTrueIdx    the index of the 1:1 relation pointing to Com_TxModeTrue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[2];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element    Description
  Direct     TRUE if transmission mode contains a direct part.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[1];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfo
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                   Description
  TxBufferLength            the number of relations pointing to Com_TxBuffer
  TxPduInitValueEndIdx      the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx    the start index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue
  MetaDataLength            Length of MetaData.
  TxTpInfoIdx               the index of the 0:1 relation pointing to Com_TxTpInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[2];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[4103];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals.
  \details
  Element                   Description
  BitLength                 Bit length of the signal or group signal.
  ByteLength                Byte length of the signal or group signal.
  TxBufferEndIdx            the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx          the start index of the 0:n relation pointing to Com_TxBuffer
  ApplType                  Application data type.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TxPduInfoIdx              the index of the 1:1 relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[4];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_CurrentTxModeUType, COM_VAR_NOINIT) Com_CurrentTxMode;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_CycleTimeCntUType, COM_VAR_NOINIT) Com_CycleTimeCnt;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_CyclicSendRequestUType, COM_VAR_NOINIT) Com_CyclicSendRequest;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_DelayTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_DelayTimeCnt
  \brief  Current counter value of minimum delay counter.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_DelayTimeCntUType, COM_VAR_NOINIT) Com_DelayTimeCnt;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_GatewayProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_GatewayProcessingISRLockCounterType, COM_VAR_NOINIT) Com_GatewayProcessingISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_HandleRxPduDeferredUType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized;
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCnt
  \brief  Current repetition counter value for replication of transmission requests plus one initial transmit.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RepCntUType, COM_VAR_NOINIT) Com_RepCnt;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCycleCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCycleCnt
  \brief  Current counter value of repetition period for replication of transmission requests.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RepCycleCntUType, COM_VAR_NOINIT) Com_RepCycleCnt;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_RxDeadlineMonitoringISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxDefPduBufferUType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxDeferredProcessingISRLockCounterType, COM_VAR_NOINIT) Com_RxDeferredProcessingISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDynSignalLength
**********************************************************************************************************************/
/** 
  \var    Com_RxDynSignalLength
  \brief  This var Array contains the calculated length of dynamic length signals.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxDynSignalLengthUType, COM_VAR_NOINIT) Com_RxDynSignalLength;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxPduGrpActiveUType, COM_VAR_NOINIT) Com_RxPduGrpActive;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferArrayBased
  \brief  Rx Signal and Group Signal Buffer. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxSigBufferArrayBasedUType, COM_VAR_NOINIT) Com_RxSigBufferArrayBased;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt16
  \brief  Rx Signal and Group Signal Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxSigBufferUInt16Type, COM_VAR_NOINIT) Com_RxSigBufferUInt16[5];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTpBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxTpBuffer
  \brief  This var Array contains the Tp Buffers.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxTpBufferUType, COM_VAR_NOINIT) Com_RxTpBuffer;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTpConnectionState
**********************************************************************************************************************/
/** 
  \var    Com_RxTpConnectionState
  \brief  This var Array indicates the Tp connection state.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxTpConnectionStateUType, COM_VAR_NOINIT) Com_RxTpConnectionState;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTpSduLength
**********************************************************************************************************************/
/** 
  \var    Com_RxTpSduLength
  \brief  This var Array contains the Sdu Length of a Tp connection.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxTpSduLengthUType, COM_VAR_NOINIT) Com_RxTpSduLength;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTpWrittenBytesCounter
**********************************************************************************************************************/
/** 
  \var    Com_RxTpWrittenBytesCounter
  \brief  This var Array contains the number of written bytes of a Tp connection.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_RxTpWrittenBytesCounterUType, COM_VAR_NOINIT) Com_RxTpWrittenBytesCounter;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxBuffer
  \brief  Temporary buffer for Rx UINT8_N and UINT8_DYN signals.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TmpRxBufferType, COM_VAR_NOINIT) Com_TmpRxBuffer[4095];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TransmitRequestUType, COM_VAR_NOINIT) Com_TransmitRequest;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[4103];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxCyclicProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxCyclicProcessingISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_TxDeadlineMonitoringISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDynSignalLength
**********************************************************************************************************************/
/** 
  \var    Com_TxDynSignalLength
  \brief  This var Array contains the length of dynamic length signals.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxDynSignalLengthUType, COM_VAR_NOINIT) Com_TxDynSignalLength;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxPduGrpActiveUType, COM_VAR_NOINIT) Com_TxPduGrpActive;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxProcessingISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxSduLengthUType, COM_VAR_NOINIT) Com_TxSduLength;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTmpTpPduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxTmpTpPduLength
  \brief  This var Array contains the calculated length of the dynamic length pdu.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxTmpTpPduLengthUType, COM_VAR_NOINIT) Com_TxTmpTpPduLength;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTpConnectionState
**********************************************************************************************************************/
/** 
  \var    Com_TxTpConnectionState
  \brief  This var Array indicates the Tp connection state.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxTpConnectionStateUType, COM_VAR_NOINIT) Com_TxTpConnectionState;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTpSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxTpSduLength
  \brief  This var Array contains the Sdu Length of a Tp connection.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxTpSduLengthUType, COM_VAR_NOINIT) Com_TxTpSduLength;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTpWrittenBytesCounter
**********************************************************************************************************************/
/** 
  \var    Com_TxTpWrittenBytesCounter
  \brief  This var Array contains the number of written bytes of a Tp connection.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Com_TxTpWrittenBytesCounterUType, COM_VAR_NOINIT) Com_TxTpWrittenBytesCounter;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */



/**********************************************************************************************************************
  RECEIVE MACRO API
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* User Config File Start */

/* User Config File End */


#endif  /* COM_CFG_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cfg.h
**********************************************************************************************************************/

