/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2019 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  CanIf.h
 *        \brief  CAN Interface header file.
 *
 *      \details  This file contains the declaration of the public APIs and global data of the AUTOSAR 
 *                CAN Interface module.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Ruediger Naas                 visrna        Vector Informatik GmbH
 *  Eugen Stripling               visseu        Vector Informatik GmbH
 *  Torsten Kercher               vistkr        Vector Informatik GmbH
 *  Carsten Gauglitz              visgaz        Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  05.00.00  2012-06-26  visrna  ESCAN00060132 Support ASR 4.0 Rev 3
 *                        visrna  ESCAN00058639 AR4-94: Wake-up validation optionally only via NM PDUs CanIfPublicWakeupCheckValidByNM
 *                        visrna  ESCAN00058642 AR4-95: Provide CanTrcv according ASR 4, Asynchronous Transceiver Mode Changes
 *  05.01.00  2012-12-07  visseu  -             No changes, only generator version adapted
 *  05.02.00  2013-04-04  visrna  ESCAN00066285 Remove MSR features: CANIF_ASYNCH_TRCV_HANDLING and CANIF_TRCV_WAKEUPSTATETRANSITION
 *                                ESCAN00066378 Todo: Remove CRC check
 *                                ESCAN00066382 Reduce the runtime of CanIf_Transmit
 *                                ESCAN00066390 ASR4: Data inversion occurs older data set is send after newer one
 *                                ESCAN00066400 TransceiverModeIndication callout notifies wrong Transceiver ID 
 *                                ESCAN00065289 Support *_WAKF - PDU modes according to ASR3.2.2 CanIf-SWS
 *                                ESCAN00066416 Basic CAN TxPdu must be cancelled both in queue and in CAN driver
 *                                ESCAN00066419 Service ID for APIs CanIf_CheckBaudrate is wrong
 *                                ESCAN00065052 AR4-315: Support IF CancelTransmit
 *                                ESCAN00066485 Remove potential implicitly cast
 *                                ESCAN00064304 AR4-325: Implement Post-Build Loadable
 *                                ESCAN00066564 Compiler warning: '=' : conversion from 'int ' to 'unsigned char ', possible loss of data
 *                                ESCAN00066734 Changed handling for return value of function CanIf_SetPduMode()
 *                                ESCAN00066898 Compiler error: Undefined type CanIf_CanTrcv_CheckWakeFlagFctType/CanIf_CanTrcv_ClearTrcvWufFlagFctType
 *  06.00.00  2013-05-21  visrna  ESCAN00067470 Type of variable queueElementIdx is changed from signed to unsigned
 *            2013-07-12  visseu  ESCAN00068982 Generator version check shall check against the generator compatibility version
 *            2013-09-06  visrna  ESCAN00068768 AR4-307: J1939 support, mask based ranges, dynamic PDUs
 *                        visrna  ESCAN00068790 AR4-438: Dynamic address lookup table
 *                        visrna  ESCAN00069108 AR4-397: CANFD Mode 1 (8 Byte Payload)
 *                        visrna  ESCAN00070536 AR4-450: Usage of section PBCFG in PB files
 *            2013-10-16  visrna  -             Misra deviations added
 *            2013-10-17  visrna  ESCAN00071205 Compiler warning: conversion from 'int' to 'uint8', possible loss of data
 *                        visrna  ESCAN00069358 Adapt the behaviour of feature "CANIF_PUBLIC_TX_CONFIRM_POLLING_SUPPORT"
 *  06.00.01  2013-11-13  visrna  ESCAN00071722 J1939 only: Unbalanced call of CANIF_EXCLUSIVE_AREA_4
 *  06.01.00  2013-12-11  visrna  ESCAN00072582 Changes for MISRA compliance
 *                        visrna  ESCAN00072625 Wrong Rx notification during message reception / Endless loop
 *            2013-12-16  visseu  ESCAN00072681 Adapt the transceiver handling in order to comply with changes done for fix of ESCAN00072448
 *            2014-01-10  visseu  ESCAN00072894 Remove feature CANIF_BUSOFF_RECOVERY_API
 *            2014-01-14  visrna  ESCAN00072958 Runtime optimization queue handling if Bitqueue is active
 *            2014-02-05  visseu  ESCAN00073448 It is not possible to measure runtime of CanIf_ClearTrcvWufFlag() by using of hook macros
 *            2014-03-10  visseu  ESCAN00074166 Compiler warning: potentially uninitialized local variable 'endPos' used
 *  06.02.00  2013-12-19  visseu  ESCAN00070548 AR4-345: Implement PF4_PostBuildSelectable
 *  06.03.00  2014-04-01  visseu  ESCAN00074690 Support generated code provided by ComStackLib
 *            2014-04-26  visseu  ESCAN00075242 CanFd - Extensions
 *            2014-05-12  visrna  ESCAN00075463 Remove feature behind the switch: CANIF_DYNAMIC_TX_DLC
 *            2014-05-23  visrna  ESCAN00064668 Compiler warning: cast truncates constant value
 *            2014-05-23  visrna  ESCAN00075868 CAN message is sent with wrong CAN identifier (only Post-build loadable)
 *  06.03.01  2014-06-24  visrna  ESCAN00076404 Range messages will not be received
 *            2014-06-25  visseu  ESCAN00076432 DET CANIF_E_PARAM_DLC is thrown if a FD message is received with DLC > 8
 *  06.04.00  2014-07-07  visrna  ESCAN00076359 AR4-712 - Multiple CAN driver support
 *            2014-07-07  visrna  ESCAN00076273 RQST from unknown addresses are forwarded to J1939Rm
 *            2014-07-07  visrna  ESCAN00076786 DET function is called with wrong parameter
 *            2014-07-08  visrna  ESCAN00076798 Wrong source address will be coded into CAN ID during reception
 *            2014-07-22  visrna  ESCAN00077282 AR4-720: Support CAN FD Mode 2 for communication and diagnostics
 *            2014-08-25  visseu  ESCAN00077324 Description of API CanIf_GetVersionInfo() is wrong
 *            2014-08-25  visseu  ESCAN00078027 AR4-698: Post-Build Selectable (Identity Manager)
 *            2014-10-23  visrna  ESCAN00079059 Wakeup validation does not work correct
 *  06.05.00  2014-11-24  visrna  ESCAN00079651 Cyclic and unexpected sleep and wakeup of the ECU
 *            2014-11-26  visrna  ESCAN00079714 FEAT-516: Fixing CanIf address translation tables for multi-channel usage
 *            2015-02-02  visseu  ESCAN00080994 Compiler error: "CanIf_CtrlJ1939DynAddrSupport" is undefined
 *  06.06.00  2015-01-30  visrna  ESCAN00079793 FEAT-63: Support CAN-FD Mode 2 for communication and diagnostics
 *            2015-02-09  visrna  ESCAN00081123 Check the size of the type "Can_IdType" for the function CanIf_Init()
 *            2015-03-18  visrna  ESCAN00081889 Linker error: Undefined symbol "CanIf_Configuration"
 *            2015-03-23  visseu  ESCAN00081918 Transmission is not stopped, if invalid SA or DA is detected
 *            2015-03-24  visseu  ESCAN00082033 DET CANIF_E_PARAM_TRCV is thrown / CAN channel is NOT set to sleep / ECU shuts down during execution / unpredictable behaviour
 *            2015-03-25  visseu  ESCAN00082045 MISRA deviation: MISRA-C:2004 Rule 19.10, 14.03
 *  06.07.00  2015-03-26  visseu  ESCAN00080296 FEAT-427: SafeBSW Step I
 *            2015-04-14  visseu  ESCAN00082421 DET CANIF_E_UNINIT is thrown with wrong API ID
 *            2015-04-22  visseu  ESCAN00082610 Add one controller optimization
 *            2015-05-13  visseu  ESCAN00082717 FEAT-366: Resolve Beta ES_CANs (Release of J1939 modules and features)
 *            2015-06-08  visrna  ESCAN00083256 Add direct check of TransceiverId in case of transceiver mapping enabled
 *            2015-06-09  visrna  ESCAN00083271 DET Check for passed channel initialization does not work
 *            2015-06-12  visrna  ESCAN00083289 [Only Multiple CAN driver] CAN channel does NOT wakeup / DET CAN_E_PARAM_CONTROLLER is thrown
 *            2015-07-10  visrna  ESCAN00081784 FEAT-1275: SafeBSW Step 2
 *            2015-07-10  visrna  ESCAN00083685 Usage of FD-Rx-PDUS with data length > 8 bytes and with meta data does NOT work
 *            2015-07-20  visrna  ESCAN00083435 FEAT-1379: Use VStdLib copy  function
 *            2015-08-05  visrna  ESCAN00084372 Changes for MISRA compliance
 *  06.07.01  2015-08-13  visrna  ESCAN00084490 Compiler warning:'CanTxPduId' : unreferenced formal parameter
 *            2015-08-14  visrna  ESCAN00084547 Changes for MISRA compliance
 *  06.08.00  2015-09-14  visseu  ESCAN00085193 In case of reception the ECU behaves unexpectedly
 *            2015-09-15  visseu  ESCAN00084557 Changes for SafeBSW
 *  06.09.00  2015-09-15  visseu  -              FEAT-1372: Support Java 8 and R14 CFG5 Breaking Changes
 *            2015-11-09  visrna  ESCAN00084184 Wrong value of Address Acknowledged in byte 5 of ACKM
 *            2015-11-10  visrna  ESCAN00086369 Compiler error: missing file Det.h
 *            2015-11-26  visrna  ESCAN00086059 FEAT-1429: Gateway Optimization
 *            2015-11-26  visrna  ESCAN00085941 EcuMValidationTimeout can not be used for invalid wakeup detection (RfC 57883)
 *  06.09.01  2016-01-13  visseu  ESCAN00087440 Compiler error: syntax error C2143 / C2059 missing ')' before '{' / syntax error : ')'
 *  06.09.02  2016-01-18  visrna  ESCAN00087530 Only FIFO queue handling:  'Access violation' at address x in CanIf_ClearQueue
 *  06.09.03  2016-01-26  visseu  ESCAN00087755 BasicCAN message is NOT received /  reported as wrong Rx-PDU to upper layer
 *  06.10.00  2016-01-16  visrna  ESCAN00087802 FEAT-1688: SafeBSW Step 4
 *                        visseu
 *            2016-02-03  visrna  ESCAN00088072 DET "CANIF_E_INVALID_DOUBLEHASH_CALC" occurs unexpectedly
 *            2016-01-18  visrna  ESCAN00087535 Potential not captured NULL pointer access
 *            2016-02-22  visrna  ESCAN00088265 FEAT-598: Extended RAM Check
 *            2016-03-15  visrna  ESCAN00088887 [Only Multiple CAN driver]: BasicCAN-Tx-PDU is lost in case of CAN-hardware object is busy
 *  06.10.01  2016-05-11  visrna  ESCAN00089949 Additional changes regarding  FEAT-1688: SafeBSW Step 4
 *            2016-06-02  visrna  ESCAN00089811 Compiler warning: 'readIdx/txFifoQueueBaseStartIdx/counter' : unreferenced local variable
 *  06.11.00  2016-06-23  visseu  ESCAN00090492 FEAT-1914: Data checksum
 *            2016-07-05  visrna  ESCAN00080803 BETA version - the BSW module has a feature with BETA state (FEAT-19 (AR4-397), FEAT-63)
 *            2016-07-05  visrna  ESCAN00087418 BETA version - the BSW module has a feature with BETA state (FEAT-1429)
 *            2016-07-05  visrna  ESCAN00089593 FEAT-1513: Release of CAN-FD
 *            2016-07-05  visrna  ESCAN00090296 ECU does NOT wakeup / DET: ECUM_E_UNKNOWN_WAKEUP_SOURCE occurs
 *            2016-07-26  visrna  ESCAN00090991 CanIf_TransceiverUpToLowMap is accessed with index value that is not checked against the bounds of CanIf_TransceiverUpToLowMap
 *  06.11.01  2016-08-03  visrna  ESCAN00091306 Rework of COV comments for safe release
 *  06.12.00  2016-09-15  visrna  ESCAN00091870 FEAT-2076: PnTxFilter shall only be active on a ECU that is actively waking up the Network
 *            2016-09-27  visrna  ESCAN00091556 FEAT-2024: Support simultaneous CAN/CAN and DoIP/CAN diagnostic routing via CAN-IF
 *            2016-10-13  visrna  ESCAN00092230 FEAT-2004: Release of FEAT-912 (Support of several CAN Drivers in one ECU configuration)
 *            2016-10-13  visrna  ESCAN00092232 Change countermeasure of SBSW_CANIF_20 from saturation to runtime check
 *            2016-10-20  visrna  ESCAN00092426 J1939 dynamic addressing only: Transmission of CAN Tx messages fails
 *            2016-10-28  visrna  ESCAN00092590 Compiler error: eSdu is not a member of the structure
 *            2016-11-15  visrna  ESCAN00092808 MISRA deviation: MISRA-C:2004 Rule 16.4 (1330, 1334)
 *            2016-11-21  visrna  ESCAN00092915 Development error check removed
 *  06.12.01  2016-11-24  visrna  ESCAN00092992 MISRA-C:2004 message 3356, 3359, 6030, 3201 added; Coverage comments fixed; DD comment fixed; reworks from last review
 *  06.12.02  2016-12-19  visrna  ESCAN00093362 Hook function "CanIfHook_OnEnd_CanIf_SetPduReceptionMode()" will never be called
 *            2017-01-09  visseu  ESCAN00093454 Improve description of parameter "id" of API: CanIf_SetPduReceptionMode
 *            2017-02-07  visrna  ESCAN00092932 Correct DoubleHash search in case of 2x RxPDUs with same CanId are configured
 *            2017-02-07  visrna  ESCAN00093769 DET Check for: "Is CanIf initialized or not" does not work
 *            2017-02-07  visrna  ESCAN00093796 DET CANIF_E_PARAM_CONTROLLERID is thrown but API returns E_OK
 *            2017-02-07  visrna  ESCAN00093809 CanIf_CancelTransmit(): The converted value of "CanTxPduId" is not checked against CanIf_GetSizeOfTxPduConfig()
 *            2017-02-07  visrna  ESCAN00093811 CanIf_SetDynamicTxId(): The converted value of "CanTxPduId" is not checked against CanIf_GetSizeOfTxPduConfig()
 *  06.13.00  2017-02-16  visrna  ESCAN00093923 FEAT-2140: TMC Checksum - Release feature FEAT-1914
 *            2017-02-16  visrna  ESCAN00094025 Sum up parameter of one type into one table
 *            2017-02-28  visrna  ESCAN00067237 Compiler warning: large type was implicitly cast to small type
 *            2017-03-07  visrna  ESCAN00093689 Improve description of flag "\param"
 *  06.14.00  2017-08-04  visseu  ESCAN00096180 FEAT-2946 - Supporting 3rd party communication MCAL CAN driver according to AR 4.2
 *  06.14.01  2017-08-10  visseu  ESCAN00096246 Compiler warning: C4100: 'CanId' : unreferenced formal parameter
 *  06.15.00  2018-02-01  vistkr  ESCAN00098247 Modify DET Check in "CanIf_SetDynamicTxId()"
 *  06.16.00  2018-02-21  vistkr  STORYC-3880   Extend CanIfRxPduUserRxIndicationType
 *  06.16.01  2018-05-03  visgaz  ESCAN00099183 A Gateway routes an incoming CAN FD frame to a CAN FD subnet as CAN2.0 frame.
 *  06.17.00  2018-07-31  visgaz  STORYC-580    Solve ToDos
 *                                STORYC-6069   Improvements and maintenance
 *                                ESCAN00091343 Compiler warning: warning C4310: cast truncates constant value
 *                                ESCAN00091340 Compiler warning: cast truncates constant value
 *                                ESCAN00100176 Compiler warning: cast truncates constant value
 *  06.18.00  2018-10-29  visgaz  STORYC-6847   MISRA-C:2012: If_AsrIfCan
 *                                STORYC-7095   Adapt to new template
 *  06.19.00  2018-11-29  visgaz  STORYC-7176   Remove Parameter CanIfMultipleBasicCANTxObjects
 *            2019-01-21          STORYC-7275   Support of AUTOSAR Bus Mirroring in CanIf
 *                                STORYC-4900   Support of 64bit Plattforms - If_AsrIfCan
 *            2019-02-01          STORYC-7574   Remove MD_MSR_AutosarBoolean in static code
 *********************************************************************************************************************/
 #if !defined (CANIF_H)
 # define CANIF_H

/* \trace SPEC-5285 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

# include "CanIf_Cfg.h"

/* \trace SPEC-5204 */
/* CanIf_Types.h  is included by CanIf_Cfg.h */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Version of CAN Interface module */
# define CANIF_SW_MAJOR_VERSION                    0x06u
# define CANIF_SW_MINOR_VERSION                    0x19u   
# define CANIF_SW_PATCH_VERSION                    0x00u

/* Autosar release version */
# define CANIF_AR_RELEASE_MAJOR_VERSION            0x04u
# define CANIF_AR_RELEASE_MINOR_VERSION            0x00u
# define CANIF_AR_RELEASE_REVISION_VERSION         0x03u

# define CANIF_API_MAJOR_VERSION                   CANIF_SW_MAJOR_VERSION
# define CANIF_API_MINOR_VERSION                   CANIF_SW_MINOR_VERSION
# define CANIF_API_PATCH_VERSION                   CANIF_SW_PATCH_VERSION

/* ##V_CFG_MANAGEMENT ##CQProject : If_AsrIfCan CQComponent : Implementation */
# define IF_ASRIFCAN_VERSION                       ((CANIF_SW_MAJOR_VERSION << 8u) | CANIF_SW_MINOR_VERSION)
# define IF_ASRIFCAN_RELEASE_VERSION               CANIF_SW_PATCH_VERSION

/* ----- GenData compatibility version ----- */
# define CANIF_GENDATA_COMPATIBILITY_VERSION       0x0212u

/* ----- Checksum compatibility version ----- */
# define CANIF_DATACHECKSUM_COMPATIBILITY_VERSION  0x0101u

/* ----- Magic number ----- */
# define CANIF_MAGIC_NUMBER                        CANIF_FINAL_MAGIC_NUMBER

/* ----- CAN Id Mask ----- */
# define CANIF_EXT_CANID_MASK                      0x80000000u

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

# if (CANIF_DEV_ERROR_DETECT == STD_ON)
/* \trace SPEC-1967 */
#  define CanIf_Det_ReportError(APIID, ErrorCode)  ((void)Det_ReportError(CANIF_MODULE_ID, 0, (APIID), (ErrorCode))) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
# else
#  define CanIf_Det_ReportError(APIID, ErrorCode)
# endif

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
 
# if !defined (CANIF_LOCAL) /* COV_CANIF_REDEFINITION_PROTECTION */
#  define CANIF_LOCAL static
# endif

# if !defined (CANIF_LOCAL_INLINE) /* COV_CANIF_REDEFINITION_PROTECTION */
#  define CANIF_LOCAL_INLINE LOCAL_INLINE
# endif

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define CANIF_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/************************************************************************************************************
 *  CanIf_InitMemory()
 ***********************************************************************************************************/
/*! \brief         Sets the CanIf to the state: uninitialized.
 *  \details       This function has to be called before any other API of CanIf is called.
 *  \param[in]     -
 *  \pre           -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        -
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_InitMemory(void);


/************************************************************************************************************
 *  CanIf_Init()
 ***********************************************************************************************************/
/*! \brief         Initializes the CanIf module.
 *  \details       -
 *  \param[in]     ConfigPtr - Pointer to the CanIf_Config structure.
 *                 If multiple configurations are available, the active configuration can be selected by using
 *                 the related CanIf_Config_<IdentityName> structure.
 *  \pre           The function CanIf_InitMemory() must be called before the function CanIf_Init() is called.
 *                 This function must be called before any other service functionality of CanIf.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        -
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_Init(P2CONST(CanIf_ConfigType, AUTOMATIC, CANIF_XCFG) ConfigPtr);


/************************************************************************************************************
 *  CanIf_SetControllerMode()
 ***********************************************************************************************************/
/*! \brief         Requests a mode transition of a CAN channel.
 *  \details       -
 *  \param[in]     ControllerId   : Index of the CAN channel to which API call has to be applied.
 *                 ControllerMode : Mode to which the CAN channel state has to be changed.
 *  \return        E_OK     : The request to change the mode to ControllerMode accepted.
 *                 E_NOT_OK : The request to change the mode to ControllerMode rejected.
 *  \pre           CAN interrupts are not disabled (especially necessary in case of transition to SLEEP)
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \config        -
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_SetControllerMode(uint8 ControllerId, CanIf_ControllerModeType ControllerMode);


/************************************************************************************************************
 *  CanIf_GetControllerMode()
 ***********************************************************************************************************/
/*! \brief         Returns the current mode of a CAN channel.
 *  \details       -
 *  \param[in]     ControllerId      : Index of the CAN channel to which API call has to be applied.
 *                 ControllerModePtr : Pointer to variable where the actual controller mode has to be stored.
 *  \return        E_OK     : Request of controller mode succeeded.
 *                 E_NOT_OK : Request of controller mode failed.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        -
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_GetControllerMode(uint8 ControllerId, P2VAR(CanIf_ControllerModeType, AUTOMATIC, CANIF_APPL_STATE_VAR) ControllerModePtr);


/* \trace SPEC-1831, SPEC-1228, SPEC-1931, SPEC-1235 */
/************************************************************************************************************
 *  CanIf_Transmit()
 ***********************************************************************************************************/
/*! \brief         Initiates transmission of a Tx-message.
 *  \details       -
 *  \param[in]     CanTxPduId : Handle of Tx-PDU which shall be transmitted.
 *                 PduInfoPtr : Data of Tx-PDU which shall be transmitted.
 *  \return        E_OK     : The request to transmit a Tx-PDU accepted.
 *                 E_NOT_OK : The request to transmit a Tx-PDU rejected.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE (only for a different CanTxPduId)
 *  \synchronous   TRUE
 *  \config        -
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_Transmit(PduIdType CanTxPduId, P2CONST(PduInfoType, AUTOMATIC, CANIF_APPL_MSG_VAR) PduInfoPtr);


/************************************************************************************************************
 *  CanIf_SetPduMode()
 ***********************************************************************************************************/
/*! \brief         Sets PDU mode of a CAN channel.
 *  \details       -
 *  \param[in]     ControllerId : Index of the CAN channel to which API call has to be applied.
 *                 PduModeRequest : PDU mode which shall be set.
 *  \return        E_OK     : The PDU mode transition executed.
 *                 E_NOT_OK : The PDU mode transition failed.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        -
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_SetPduMode(uint8 ControllerId, CanIf_PduSetModeType PduModeRequest);


/************************************************************************************************************
 *  CanIf_GetPduMode()
 ***********************************************************************************************************/
/*! \brief         Returns the current PDU mode of a CAN channel.
 *  \details       -
 *  \param[in]     ControllerId : Index of the CAN channel to which API call has to be applied.
 *                 PduModePtr   : Pointer to variable where the actual PDU mode has to be stored.
 *  \return        E_OK     : Request of PDU mode succeeded.
 *                 E_NOT_OK : Request of PDU mode failed.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        -
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_GetPduMode(uint8 ControllerId, P2VAR(CanIf_PduGetModeType, AUTOMATIC, CANIF_APPL_STATE_VAR) PduModePtr);


# if (CANIF_VERSION_INFO_API == STD_ON)
/************************************************************************************************************
 *  CanIf_GetVersionInfo()
 ***********************************************************************************************************/
/*! \brief         Returns version information: vendor ID, AUTOSAR module ID and SW version of the component.
 *  \details       The versions are BCD-coded.
 *  \param[in]     VersionInfo: Pointer to variable where the version information shall be stored.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_VERSION_INFO_API == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, CANIF_APPL_VAR) VersionInfo);
# endif


# if (CANIF_TRCV_HANDLING == STD_ON)
/************************************************************************************************************
 *  CanIf_SetTrcvMode()
 ***********************************************************************************************************/
/*! \brief         Sets the mode of a transceiver channel.
 *  \details       -
 *  \param[in]     TransceiverId: Index of the transceiver channel to which API call has to be applied.
 *  \param[in]     TransceiverMode: Requested transceiver mode
 *  \return        E_OK: success
 *                 E_NOT_OK: fail
 *  \pre           -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE for each CAN transceiver which is configured synchronous else FALSE
 *  \config        CANIF_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_SetTrcvMode(uint8 TransceiverId, CanTrcv_TrcvModeType TransceiverMode);


/************************************************************************************************************
 *  CanIf_GetTrcvMode()
 ***********************************************************************************************************/
/*! \brief         Returns the current transceiver mode of a transceiver channel.
 *  \details       -
 *  \param[in]     TransceiverId: Index of the transceiver channel to which API call has to be applied.
 *  \param[in]     TransceiverModePtr: Pointer to variable where the transceiver mode shall be stored
 *  \return        E_OK: success
 *                 E_NOT_OK: fail
 *  \pre           -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_GetTrcvMode(P2VAR(CanTrcv_TrcvModeType, AUTOMATIC, CANIF_APPL_STATE_VAR) TransceiverModePtr, uint8 TransceiverId);


/************************************************************************************************************
 *  CanIf_GetTrcvWakeupReason()
 ***********************************************************************************************************/
/*! \brief         Returns the wake-up reason of a transceiver channel.
 *  \details       -
 *  \param[in]     TransceiverId: Index of the transceiver channel to which API call has to be applied.
 *  \param[in]     TrcvWuReasonPtr: Pointer to variable where the wake-up reason shall be stored
 *  \return        E_OK: success
 *                 E_NOT_OK: fail
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_GetTrcvWakeupReason(uint8 TransceiverId, P2VAR(CanTrcv_TrcvWakeupReasonType, AUTOMATIC, CANIF_APPL_STATE_VAR) TrcvWuReasonPtr);


/************************************************************************************************************
 *  CanIf_SetTrcvWakeupMode()
 ***********************************************************************************************************/
/*! \brief         Sets the transceiver wake-up mode.
 *  \details       Possible wake-up modes: enable, disable, clear
 *  \param[in]     TransceiverId: Index of the transceiver channel to which API call has to be applied.
 *  \param[in]     TrcvWakeupMode: The wake-up mode to be set
 *  \return        E_OK: success
 *                 E_NOT_OK: fail
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_SetTrcvWakeupMode(uint8 TransceiverId, CanTrcv_TrcvWakeupModeType TrcvWakeupMode);


/************************************************************************************************************
 *  CanIf_TrcvModeIndication()
 ***********************************************************************************************************/
/*! \brief         Indicates a transceiver mode transition.
 *  \details       -
 *  \param[in]     TransceiverId: Index of the transceiver channel which state has been transitioned.
 *  \param[in]     TransceiverMode: Mode to which the CAN transceiver transitioned.
  *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_TrcvModeIndication(uint8 TransceiverId, CanTrcv_TrcvModeType TransceiverMode);


#  if (CANIF_PN_TRCV_HANDLING == STD_ON)
/************************************************************************************************************
 *  CanIf_ConfirmPnAvailability()
 ***********************************************************************************************************/
/*! \brief         Indicates that transceiver channel is running in PN communication mode.
 *  \details       -
 *  \param[in]     TransceiverId: Index of the transceiver channel which has confirmed the PN availability.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_TRCV_HANDLING == STD_ON and CANIF_PN_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_ConfirmPnAvailability(uint8 TransceiverId);


/************************************************************************************************************
 *  CanIf_ClearTrcvWufFlagIndication()
 ***********************************************************************************************************/
/*! \brief         Indicates that the transceiver has cleared the wake-up events.
 *  \details       -
 *  \param[in]     TransceiverId: Index of the transceiver channel which WUF flag was cleared.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_TRCV_HANDLING == STD_ON and CANIF_PN_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_ClearTrcvWufFlagIndication(uint8 TransceiverId);


/************************************************************************************************************
 *  CanIf_CheckTrcvWakeFlagIndication()
 ***********************************************************************************************************/
/*! \brief         Indicates that the transceiver channel has checked wake-up events.
 *  \details       -
 *  \param[in]     TransceiverId: Index of the transceiver channel which has detected a wake-up.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_TRCV_HANDLING == STD_ON and CANIF_PN_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_CheckTrcvWakeFlagIndication(uint8 TransceiverId);


/************************************************************************************************************
 *  CanIf_ClearTrcvWufFlag()
 ***********************************************************************************************************/
/*! \brief         Requests a transceiver channel to clear the wake-up events.
 *  \details       -
 *  \param[in]     TransceiverId: Index of the transceiver channel which WUF flag shall be cleared.
 *  \return        E_OK: success
 *                 E_NOT_OK: fail
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE for each CAN transceiver which is configured synchronous else FALSE
 *  \config        CANIF_TRCV_HANDLING == STD_ON and CANIF_PN_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_ClearTrcvWufFlag(uint8 TransceiverId);


/************************************************************************************************************
 *  CanIf_CheckTrcvWakeFlag()
 ***********************************************************************************************************/
/*! \brief         Requests a transceiver channel to check for wake-up events.
 *  \details       -
 *  \param[in]     TransceiverId: Index of the transceiver channel which wake flag shall be checked.
 *  \return        E_OK: success
 *                 E_NOT_OK: fail
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE for each CAN transceiver which is configured synchronous else FALSE
 *  \config        CANIF_TRCV_HANDLING == STD_ON and CANIF_PN_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_CheckTrcvWakeFlag(uint8 TransceiverId);
#  endif /* (CANIF_PN_TRCV_HANDLING == STD_ON) */
# endif /* (CANIF_TRCV_HANDLING == STD_ON) */


# if (CANIF_WAKEUP_SUPPORT == STD_ON)
/************************************************************************************************************
 *  CanIf_CheckWakeup()
 ***********************************************************************************************************/
/*! \brief         Requests the underlying CAN / transceiver channels to check for wake-up events.
 *  \details       -
 *  \param[in]     WakeupSource: wake-up source which shall be checked
 *  \return        E_OK: Request was accepted
 *                 E_NOT_OK: Request was not accepted
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_TRCV_HANDLING == STD_ON and CANIF_PN_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_CheckWakeup(EcuM_WakeupSourceType WakeupSource);
# endif


# if ((CANIF_WAKEUP_SUPPORT == STD_ON) && (CANIF_WAKEUP_VALIDATION == STD_ON))
/************************************************************************************************************
 *  CanIf_CheckValidation()
 ***********************************************************************************************************/
/*! \brief         Checks if a Rx-message was received since the last wake-up event.
 *  \details       If a Rx message was received since the last wake-up event the function configured by
 *                 parameter CanIfDispatchUserValidateWakeupEventName is called.
 *  \param[in]     WakeupSource: Wake-up source which shall be checked
 *  \return        E_OK: Request was accepted
 *                 E_NOT_OK: Request was not accepted
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_TRCV_HANDLING == STD_ON and CANIF_PN_TRCV_HANDLING == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_CheckValidation(EcuM_WakeupSourceType WakeupSource);
# endif


# if(CANIF_SETDYNAMICTXID_API == STD_ON)
/************************************************************************************************************
 *  CanIf_SetDynamicTxId()
 ***********************************************************************************************************/
/*! \brief         Reconfigures the CAN identifier of the requested Tx-message.
 *  \details       -
 *  \param[in]     CanTxPduId: Handle of Tx-message which CAN identifier shall be modified.
 *  \param[in]     CanId: CAN identifier which shall be set for Tx message (CanTxPduId)
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_SETDYNAMICTXID_API == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_SetDynamicTxId(PduIdType CanTxPduId, Can_IdType CanId);
# endif


/* NON AUTOSAR API functions */

/* Cancelation of TxPDUs */
/* Std_ReturnType CanIf_CancelTransmit(PduIdType CanTxPduId); */
# if (CANIF_CANCEL_SUPPORT_API == STD_ON)
/************************************************************************************************************
 *  CanIf_CancelTransmit()
 ***********************************************************************************************************/
/*! \brief         Initiates the cancellation of a Tx-message.
 *  \details       -
 *  \param[in]     CanTxPduId: ID of Tx-PDU which shall be canceled.
 *  \return        E_OK: Request was accepted
 *                 E_NOT_OK: Request was not accepted
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_CANCEL_SUPPORT_API == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_CancelTransmit(PduIdType CanTxPduId);
# endif


/************************************************************************************************************
 *  CanIf_ControllerModeIndication()
 ***********************************************************************************************************/
/*! \brief         Notifies a mode state transition of a CAN channel.
 *  \details       -
 *  \param[in]     ControllerId: CAN channel where the mode transition happened
 *  \param[in]     ControllerMode: Mode to which the CAN channel transitioned
  *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE only for different CAN channels (ControllerId)
 *  \synchronous   TRUE
 *  \config        -
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_ControllerModeIndication(uint8 ControllerId, CanIf_ControllerModeType ControllerMode);


# if (CANIF_PUBLIC_TX_CONFIRM_POLLING_SUPPORT == STD_ON)
/************************************************************************************************************
 *  CanIf_GetTxConfirmationState()
 ***********************************************************************************************************/
/*! \brief         Reports if any Tx-confirmation has occurred for a CAN channel since it's last start.
 *  \details       -
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied.
 *  \return        CANIF_NO_NOTIFICATION: No transmit event occurred for the requested CAN channel
 *                 CANIF_TX_RX_NOTIFICATION: The requested CAN channel has successfully transmitted any message
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_PUBLIC_TX_CONFIRM_POLLING_SUPPORT == STD_ON
***********************************************************************************************************/
FUNC(CanIf_NotifStatusType, CANIF_CODE) CanIf_GetTxConfirmationState(uint8 ControllerId);
# endif


# if (CANIF_CHANGE_BAUDRATE_SUPPORT == STD_ON)
/************************************************************************************************************
 *  CanIf_CheckBaudrate()
 ***********************************************************************************************************/
/*! \brief         Checks if a CAN channel supports a certain baudrate.
 *  \details       -
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied
    \param[in]     Baudrate: Baudrate to check [kbps]
 *  \return        E_OK:     Baudrate supported by the CAN Controller
 *                 E_NOT_OK: Baudrate not supported / invalid CAN controller
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_CHANGE_BAUDRATE_SUPPORT == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_CheckBaudrate(uint8 ControllerId, CONST(uint16, CANIF_CONST) Baudrate);


/************************************************************************************************************
 *  CanIf_ChangeBaudrate()
 ***********************************************************************************************************/
/*! \brief         Requests to change the baudrate of a CAN channel.
 *  \details       If possible please use the API CanIf_SetBaudrate() instead of this one.
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied
    \param[in]     Baudrate: Requested baudrate [kbps]
 *  \return        E_OK:     Request accepted, baudrate change started
 *                 E_NOT_OK: Request not accepted
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_CHANGE_BAUDRATE_SUPPORT == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_ChangeBaudrate(uint8 ControllerId, CONST(uint16, CANIF_CONST) Baudrate);
# endif


# if (CANIF_SET_BAUDRATE_API == STD_ON)
/************************************************************************************************************
 *  CanIf_SetBaudrate()
 ***********************************************************************************************************/
/*! \brief         Requests to set the baudrate configuration a CAN channel.
 *  \details       -
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied
    \param[in]     BaudRateConfigID: References a baud rate configuration by ID
 *  \return        E_OK:     Request accepted, baud rate change started
 *                 E_NOT_OK: Request not accepted
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_SET_BAUDRATE_API == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_SetBaudrate(uint8 ControllerId, uint16 BaudRateConfigID);
# endif


# if (CANIF_J1939_DYN_ADDR_SUPPORT != CANIF_J1939_DYN_ADDR_DISABLED) /* COV_CANIF_UNSUPPORTED_J1939_DYN_ADDR */
#  if (CANIF_EXTENDEDID_SUPPORT == STD_ON) 
/************************************************************************************************************
 *  CanIf_SetAddressTableEntry()
 ***********************************************************************************************************/
/*! \brief         Sets up the relation between internal and external address.
 *  \details       This API is used in a J1939 environment.
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied
 *  \param[in]     intAddr: J1939 internal address
 *  \param[in]     busAddr: J1939 bus address
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_J1939_DYN_ADDR_SUPPORT != CANIF_J1939_DYN_ADDR_DISABLED
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_SetAddressTableEntry(uint8 ControllerId, uint8 intAddr, uint8 busAddr);


/************************************************************************************************************
 *  CanIf_ResetAddressTableEntry()
 ***********************************************************************************************************/
/*! \brief         Resets one relation between internal and external address.
 *  \details       This API is used in a J1939 environment.
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied
 *  \param[in]     intAddr: J1939 internal address
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_J1939_DYN_ADDR_SUPPORT != CANIF_J1939_DYN_ADDR_DISABLED
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_ResetAddressTableEntry(uint8 ControllerId, uint8 intAddr);
#  endif
# endif /* (CANIF_J1939_DYN_ADDR_SUPPORT != CANIF_J1939_DYN_ADDR_DISABLED) && (CANIF_EXTENDEDID_SUPPORT == STD_ON) */


# if (CANIF_EXTENDED_RAM_CHECK_SUPPORT == STD_ON)
/************************************************************************************************************
 *  CanIf_RamCheckCorruptMailbox()
 ***********************************************************************************************************/
/*! \brief         Is called by CAN driver if RAM check detects a corrupt mailbox.
 *  \details       The CanIf notifies the application if a corrupt mailbox is reported
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied
 *  \param[in]     HwHandle: Index of the hardware object to which the API call has to be applied
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_EXTENDED_RAM_CHECK_SUPPORT == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_RamCheckCorruptMailbox(uint8 ControllerId, CanIf_HwHandleType HwHandle);

  
/************************************************************************************************************
 *  CanIf_RamCheckCorruptController()
 ***********************************************************************************************************/
/*! \brief         Is called by CAN driver if RAM check detects a corrupt CAN channel.
 *  \details       The CanIf notifies the application if a corrupt CAN channel is reported
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_EXTENDED_RAM_CHECK_SUPPORT == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_RamCheckCorruptController(uint8 ControllerId);
 
 
/************************************************************************************************************
 *  CanIf_RamCheckExecute()
 ***********************************************************************************************************/
/*! \brief         Executes the RAM check.
 *  \details       -
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_EXTENDED_RAM_CHECK_SUPPORT == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_RamCheckExecute(uint8 ControllerId);
 
 
/************************************************************************************************************
 *  CanIf_RamCheckEnableMailbox()
 ***********************************************************************************************************/
/*! \brief         Reactivates a mailbox after it was deactivated by RAM check.
 *  \details       -
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied
 *  \param[in]     HwHandle: Index of the hardware object to which the API call has to be applied
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_EXTENDED_RAM_CHECK_SUPPORT == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_RamCheckEnableMailbox(uint8 ControllerId, CanIf_HwHandleType HwHandle);  
 
 
/************************************************************************************************************
 *  CanIf_RamCheckEnableController()
 ***********************************************************************************************************/
/*! \brief         Reactivates a controller after it was deactivated by RAM check.
 *  \details       -
 *  \param[in]     ControllerId: Index of the CAN channel to which API call has to be applied
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CANIF_EXTENDED_RAM_CHECK_SUPPORT == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_RamCheckEnableController(uint8 ControllerId);
# endif  /* (CANIF_EXTENDED_RAM_CHECK_SUPPORT == STD_ON) */


# if (CANIF_DATA_CHECKSUM_TX_SUPPORT == STD_ON)
/************************************************************************************************************
 *  CanIf_TransmitSubDataChecksumTxAppend()
 ***********************************************************************************************************/
/*! \brief         Appends a checksum to the TX data.
 *  \details       This API is called in context in which the consistency of all passed parameters is ensured. 
 *                 Hence no further protection is required within.
 *  \param[in]     txPduInfoPtr (read-only): Pointer to Tx-PDU-parameters: CAN identifier, data length, data.
 *  \param[in]     txPduDataWithChecksumPtr: Pointer to data buffer where the data of Tx-PDU incl. the checksum shall be stored in.
 *                 The data checksum PDU is transmitted with data stored in this buffer.
 *                 Note: Parameter "txPduDataWithChecksumPtr" may only be written with index >= 0 and < CANIF_CFG_MAXTXDLC_PLUS_DATACHECKSUM 
 *                 (see file CanIf_Cfg.h). The length of data can not be changed hence the checksum must only be added 
 *                 within valid data-length of the Tx-PDU which is given by range: 0 - (txPduInfoPtr->length - 1).
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_DATA_CHECKSUM_TX_SUPPORT == STD_ON
***********************************************************************************************************/
FUNC(void, CANIF_CODE) CanIf_TransmitSubDataChecksumTxAppend(P2CONST(Can_PduType, AUTOMATIC, CANIF_VAR_STACK) txPduInfoPtr, P2VAR(uint8, AUTOMATIC, CANIF_VAR_STACK) txPduDataWithChecksumPtr);
# endif /* (CANIF_DATA_CHECKSUM_TX_SUPPORT == STD_ON) */


# if (CANIF_DATA_CHECKSUM_RX_SUPPORT == STD_ON)
/************************************************************************************************************
 *  CanIf_RxIndicationSubDataChecksumRxVerify()
 ***********************************************************************************************************/
/*! \brief         Checks if the checksum of a received PDU is correct.
 *  \details       This API is called in context in which the consistency of all passed parameters is ensured. Hence
 *                 no further protection is required within.
 *  \param[in]     CanIfRxPduId: CanIf-internal unique handle ID of Rx-PDU
 *  \param[in]     CanId: CAN identifier of received Rx-PDU
 *  \param[in]     CanDlc: Data length of received Rx-PDU
 *  \param[in]     CanSduPtr: Pointer to data of received Rx-PDU
 *  \return        E_OK: Verification of checksum passed. In this case the Rx-PDU is forwarded to upper layer.
 *                 E_NOT_OK: Verification of checksum failed. In this case the Rx-PDU is discarded and NOT forwarded to upper layer.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_DATA_CHECKSUM_RX_SUPPORT == STD_ON
***********************************************************************************************************/
FUNC(Std_ReturnType, CANIF_CODE) CanIf_RxIndicationSubDataChecksumRxVerify(PduIdType CanIfRxPduId, Can_IdType CanId, uint8 CanDlc, P2CONST(uint8, AUTOMATIC, CANIF_CBK_DRV_VAR)CanSduPtr);
# endif /* (CANIF_DATA_CHECKSUM_RX_SUPPORT == STD_ON) */


# if (CANIF_SET_PDU_RECEPTION_MODE_SUPPORT == STD_ON)
/************************************************************************************************************
 *  CanIf_SetPduReceptionMode()
 ***********************************************************************************************************/
/*! \brief         Sets the reception mode of a Rx-PDU.
 *  \details       With this API the upper layer may influence on which PDU ID a CAN ID is received,
 *                 respective if a CAN ID is received at all.
 *  \param[in]     id: The handle of Rx-PDU whose reception mode shall be changed.
 *  \param[in]     mode: The reception mode which shall be set. Following reception modes are possible:
 *                 1) CANIF_RMT_IGNORE_CONTINUE: In case of a match the received Rx-PDU is not forwarded to configured
 *                 upper layer and the search for a potential match continues.
 *                 2) CANIF_RMT_RECEIVE_STOP: In case of a match the received Rx-PDU is forwarded to configured upper
 *                 layer.
 *  \return        E_OK: Service request accepted, reception mode was changed. 
 *                 E_NOT_OK: Service request not accepted, reception mode was not changed.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE for different handles
 *  \synchronous   TRUE
 *  \config        CANIF_SET_PDU_RECEPTION_MODE_SUPPORT == STD_ON
***********************************************************************************************************/  
FUNC(Std_ReturnType, CANIF_CODE) CanIf_SetPduReceptionMode(PduIdType id, CanIf_ReceptionModeType mode);
# endif


# if (CANIF_BUS_MIRRORING_SUPPORT == STD_ON)
/************************************************************************************************************
 *  CanIf_GetControllerErrorState()
 ***********************************************************************************************************/
/*! \brief         Returns the current error state of a CAN controller.
 *  \details       -
 *  \param[in]     ControllerId: Abstracted CanIf ControllerId assigned to a CAN controller from which
 *                               the error state is requested.
 *  \param[in]     ErrorStatePtr: Pointer to a memory location, where the error state of the CAN controller 
 *                                will be stored.
 *  \return        E_OK: Error state request has been accepted; current error state is stored at ErrorStatePtr.
 *                 E_NOT_OK: Error state request has not been accepted.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE only for different CAN controllers (ControllerId)
 *  \synchronous   TRUE
 *  \config        CANIF_BUS_MIRRORING_SUPPORT == STD_ON
***********************************************************************************************************/  
FUNC(Std_ReturnType, CANIF_CODE) CanIf_GetControllerErrorState(uint8 ControllerId, P2VAR(Can_ErrorStateType, AUTOMATIC, CANIF_APPL_STATE_VAR) ErrorStatePtr);


/************************************************************************************************************
 *  CanIf_GetControllerRxErrorCounter()
 ***********************************************************************************************************/
/*! \brief         Returns the current Rx error counter of a CAN controller.
 *  \details       -
 *  \param[in]     ControllerId: Abstracted CanIf ControllerId assigned to a CAN controller from which the
 *                               Rx error counter is requested.
 *  \param[in]     RxErrorCounterPtr: Pointer to a memory location, where the current Rx error counter of the 
 *                                    CAN controller will be stored.
 *  \return        E_OK: Rx error counter request has been accepted; current Rx error counter is 
 *                       stored at RxErrorCounterPtr.
 *                 E_NOT_OK: Rx error counter request has not been accepted.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE only for different CAN controllers (ControllerId)
 *  \synchronous   TRUE
 *  \config        CANIF_BUS_MIRRORING_SUPPORT == STD_ON
***********************************************************************************************************/  
FUNC(Std_ReturnType, CANIF_CODE) CanIf_GetControllerRxErrorCounter(uint8 ControllerId, P2VAR(uint8, AUTOMATIC, CANIF_APPL_STATE_VAR) RxErrorCounterPtr);


/************************************************************************************************************
 *  CanIf_GetControllerTxErrorCounter()
 ***********************************************************************************************************/
/*! \brief         Returns the current Tx error counter of a CAN controller.
 *  \details       -
 *  \param[in]     ControllerId: Abstracted CanIf ControllerId assigned to a CAN controller from which the 
 *                               Tx error counter is requested.
 *  \param[in]     TxErrorCounterPtr: Pointer to a memory location, where the current Tx error counter of the 
 *                                    CAN controller will be stored.
 *  \return        E_OK: Tx error counter request has been accepted; current Tx error counter is 
 *                       stored at TxErrorCounterPtr.
 *                 E_NOT_OK: Tx error counter request has not been accepted.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE only for different CAN controllers (ControllerId)
 *  \synchronous   TRUE
 *  \config        CANIF_BUS_MIRRORING_SUPPORT == STD_ON
***********************************************************************************************************/  
FUNC(Std_ReturnType, CANIF_CODE) CanIf_GetControllerTxErrorCounter(uint8 ControllerId, P2VAR(uint8, AUTOMATIC, CANIF_APPL_STATE_VAR) TxErrorCounterPtr);


/************************************************************************************************************
 *  CanIf_EnableBusMirroring()
 ***********************************************************************************************************/
/*! \brief         Enables or disables mirroring for a CAN controller.
 *  \details       -
 *  \param[in]     ControllerId: Abstracted CanIf ControllerId assigned to a CAN controller for which 
 *                               mirroring shall be enabled or disabled.
 *  \param[in]     MirroringActive: TRUE: Mirroring will be enabled to report each successful received or 
 *                                        transmitted CAN frame on the given CAN controller to the Mirror module.
 *                                  FALSE: Mirroring will be disabled to not report received or transmitted 
 *                                         CAN frame on the given CAN controller to the Mirror module.
 *  \return        E_OK: Mirroring change request has been accepted; mirroring was changed for the 
 *                       given CAN controller.
 *                 E_NOT_OK: Mirroring change request has not been accepted; mirroring was not changed for the 
 *                           given CAN controller.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CANIF_BUS_MIRRORING_SUPPORT == STD_ON
***********************************************************************************************************/  
FUNC(Std_ReturnType, CANIF_CODE) CanIf_EnableBusMirroring(uint8 ControllerId, boolean MirroringActive);
#endif /* CANIF_BUS_MIRRORING_SUPPORT == STD_ON */


# define CANIF_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/
 
# define CANIF_START_SEC_CONST_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(uint8, CANIF_CONST) CanIf_MainVersion;
extern CONST(uint8, CANIF_CONST) CanIf_SubVersion;
extern CONST(uint8, CANIF_CONST) CanIf_ReleaseVersion;

# define CANIF_STOP_SEC_CONST_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



# if (CANIF_USE_INIT_POINTER == STD_ON)

#  define CANIF_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern P2CONST(CanIf_ConfigType, CANIF_VAR_INIT, CANIF_XCFG) CanIf_ConfigDataPtr; /* UREQ00035484 */

#  define CANIF_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
# endif /* CANIF_USE_INIT_POINTER == STD_ON */

#endif /* CANIF_H */

/**********************************************************************************************************************
 *  EXCLUSIVE AREAS
 **********************************************************************************************************************/
 
/*! 
* \exclusivearea CANIF_EXCLUSIVE_AREA_0
* Ensures consistency while modifying/changing the CanInterface controller mode.
* \protects the status variable for the CanIf controller mode.
* \usedin CanIf_SetControllerMode().
* \exclude call of: CanIf_Init, CanIf_InitMemory, CanIf_Transmit, CanIf_CancelTransmit, CanIf_CancelTxNotification, CanIf_CancelTxConfirmation, CanIf_SetControllerMode,
*                   CanIf_SetPduMode, CanIf_TxConfirmation, CanIf_ControllerBusOff.
* \length SHORT Calls Can_SetControllerMode() and CanIf_ClearQueue().
* \endexclusivearea
*
* \exclusivearea CANIF_EXCLUSIVE_AREA_1
* Ensures the consistency of transmit queue.
* \protects the access to Tx-queue at all.
* \usedin CanIf_CancelTxConfirmation, CanIf_CancelTransmit, CanIf_ClearQueue().
* \exclude call of CanIf_Init, CanIf_ControllerBusOff, CanIf_Transmit, CanIf_CancelTransmit, CanIf_CancelTxNotification, CanIf_CancelTxConfirmation, CanIf_SetPduMode, CanIf_TxConfirmation, CanIf_SetControllerMode.
* \length SHORT No calls inside.
* \endexclusivearea
*
* \exclusivearea CANIF_EXCLUSIVE_AREA_2
* Ensures the consistency of transmit queue and mode handling.
* \protects the access to Tx-queue at all, PDU mode and controller mode.
* \usedin CanIf_TxConfirmation, CanIf_CancelTxConfirmation, CanIf_CancelTxNotification. 
* \exclude call of: CanIf_Init, CanIf_TxConfirmation, CanIf_ControllerBusOff, CanIf_Transmit, CanIf_CancelTransmit, CanIf_CancelTxNotification, CanIf_CancelTxConfirmation, 
*                   CanIf_SetControllerMode, CanIf_SetPduMode.
* \length MEDIUM Calls CanIf_TxQueueTreatment().
* \endexclusivearea
*
* \exclusivearea CANIF_EXCLUSIVE_AREA_3
* Ensures the consistency of transmit queue and mode handling.
* \protects the access to Tx-queue at all and controller mode.
* \usedin CanIf_SetPduMode.
* \exclude call of CanIf_Init, CanIf_SetPduMode, CanIf_Transmit, CanIf_CancelTransmit, CanIf_CancelTxNotification, CanIf_CancelTxConfirmation,
*                  CanIf_SetControllerMode, CanIf_TxConfirmation, CanIf_ControllerBusOff.
* \length SHORT Calls CanIf_ClearQueue().
* \endexclusivearea
*
* \exclusivearea CANIF_EXCLUSIVE_AREA_4
* Ensures the consistency while transmission.
* \protects the access to Tx-queue at all, Can_Write() must NOT be called reetrant for the same channel.
* \usedin CanIf_Transmit.
* \exclude call of CanIf_Init, CanIf_Transmit, CanIf_CancelTransmit, CanIf_SetControllerMode, CanIf_ControllerBusOff,
*                  CanIf_CancelTxNotification, CanIf_CancelTxConfirmation, CanIf_SetPduMode, CanIf_TxConfirmation, CanIf_SetAddressTableEntry, CanIf_ResetAddressTableEntry.
* \length MEDIUM Calls Can_Write().
* \endexclusivearea
*
* \exclusivearea CANIF_EXCLUSIVE_AREA_5
* Ensures the consistency of the dynamic CAN identifier.
* \protects the variable with the dynamic Tx ID.
* \usedin CanIf_SetDynamicTxId.
* \exclude call of CanIf_Transmit, CanIf_Init.
* \length SHORT No calls inside.
* \endexclusivearea
*
* \exclusivearea CANIF_EXCLUSIVE_AREA_6
* Ensures the consistency of the dynamic J1939 addressing indirection.
* \protects J1939RXADDR_LOOKUP, J1939TXADDR_LOOKUP.
* \usedin CanIf_SetAddressTableEntry, CanIf_ResetAddressTableEntry.
* \exclude CanIf_Init, CanIf_Transmit, CanIf_RxIndication, CanIf_SetAddressTableEntry, CanIf_ResetAddressTableEntry.
* \length SHORT No calls inside.
* \endexclusivearea
*
* \exclusivearea CANIF_EXCLUSIVE_AREA_7
* Ensures the consistent usage of the dynamic J1939 addressing informations.
* \protects the source and destination addresses if J1939 addressing is used.
* \usedin CanIf_RxIndication.
* \exclude CanIf_Init, CanIf_SetAddressTableEntry, CanIf_ResetAddressTableEntry.
* \length SHORT No calls inside.
* \endexclusivearea
*/

/**********************************************************************************************************************
 *  END OF FILE: CanIf.h
 *********************************************************************************************************************/
