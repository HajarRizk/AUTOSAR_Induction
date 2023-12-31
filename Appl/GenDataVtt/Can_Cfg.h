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
 *            Module: Can
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Delphi Deutschland GmbH
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC-397 B-Step
 *    License Scope : The usage is restricted to CBD1800285_D02
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Can_Cfg.h
 *   Generation Time: 2023-08-16 18:17:03
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

/* -----------------------------------------------------------------------------
    Generator Info
 ----------------------------------------------------------------------------- 
  Name:     MICROSAR Canoeemu VTTCan driver Generator
  Version:  4.04.00
  MSN:      Can
  Origin:   CAN
  Descrip:  MICROSAR Can driver generator
  JavaPack: com.vector.cfg.gen.DrvCan_CanoeemuCanoeAsr
 ----------------------------------------------------------------------------- */

#if !defined(CAN_CFG_H)
#define CAN_CFG_H

/* CAN222, CAN389, CAN365, CAN366, CAN367 */
/* CAN022, CAN047, CAN388, CAN397, CAN390, CAN392  */

/* PRQA S 0779 EOF */ /* MD_MSR_Rule5.2 */

/* -----------------------------------------------------------------------------
    Includes
 ----------------------------------------------------------------------------- */

#include "ComStack_Types.h"

#include "Can_GeneralTypes.h" /* CAN435 */

#if defined (CAN_LCFG_SOURCE) || defined (C_DRV_INTERNAL) /* ESCAN00070085 */
# include "Os.h"
#endif

/* -----------------------------------------------------------------------------
    General Switches for CAN module
 ----------------------------------------------------------------------------- */

#ifndef CAN_USE_DUMMY_STATEMENT
#define CAN_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatement */
#endif
#ifndef CAN_DUMMY_STATEMENT
#define CAN_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CAN_DUMMY_STATEMENT_CONST
#define CAN_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CAN_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CAN_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CAN_ATOMIC_VARIABLE_ACCESS
#define CAN_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CAN_CPU_AURIXPLUSS
#define CAN_CPU_AURIXPLUSS
#endif
#ifndef CAN_PROCESSOR_TC397_STEPB
#define CAN_PROCESSOR_TC397_STEPB
#endif
#ifndef CAN_COMP_GNU
#define CAN_COMP_GNU
#endif
#ifndef CAN_GEN_GENERATOR_MSR
#define CAN_GEN_GENERATOR_MSR
#endif
#ifndef CAN_CPUTYPE_BITORDER_LSB2MSB
#define CAN_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef CAN_CONFIGURATION_VARIANT_PRECOMPILE
#define CAN_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CAN_CONFIGURATION_VARIANT_LINKTIME
#define CAN_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CAN_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CAN_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CAN_CONFIGURATION_VARIANT
#define CAN_CONFIGURATION_VARIANT CAN_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CAN_POSTBUILD_VARIANT_SUPPORT
#define CAN_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* -----------------------------------------------------------------------------
    General Switches from old v_cfg.h
 ----------------------------------------------------------------------------- */
#if !defined(V_GEN_GENERATOR5)
# define V_GEN_GENERATOR5 /* need by LL */
#endif
#if !defined(V_ENABLE_CAN_ASR_ABSTRACTION)
# define V_ENABLE_CAN_ASR_ABSTRACTION /* ATK */
#endif
#define CAN_GEN_COM_STACK_LIB

#if !defined( V_OSTYPE_AUTOSAR )
# define V_OSTYPE_AUTOSAR
#endif

#if (CPU_TYPE == CPU_TYPE_32)
# if !defined( C_CPUTYPE_32BIT )
#  define C_CPUTYPE_32BIT
# endif
#endif
#if (CPU_TYPE == CPU_TYPE_16)
# if !defined( C_CPUTYPE_16BIT )
#  define C_CPUTYPE_16BIT
# endif
#endif
#if (CPU_TYPE == CPU_TYPE_8)
# if !defined( C_CPUTYPE_8BIT )
#  define C_CPUTYPE_8BIT
# endif
#endif
#if (CPU_BIT_ORDER == LSB_FIRST)
# if !defined( C_CPUTYPE_BITORDER_LSB2MSB )
#  define C_CPUTYPE_BITORDER_LSB2MSB
# endif
#endif
#if (CPU_BIT_ORDER == MSB_FIRST)
# if !defined( C_CPUTYPE_BITORDER_MSB2LSB )
#  define C_CPUTYPE_BITORDER_MSB2LSB
# endif
#endif
#if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
# if !defined( C_CPUTYPE_LITTLEENDIAN )
#  define C_CPUTYPE_LITTLEENDIAN
# endif
#endif
#if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
# if !defined( C_CPUTYPE_BIGENDIAN )
#  define C_CPUTYPE_BIGENDIAN
# endif
#endif

#if !defined( V_DISABLE_USE_DUMMY_FUNCTIONS )
# define V_DISABLE_USE_DUMMY_FUNCTIONS
#endif
#if !defined( V_DISABLE_USE_DUMMY_STATEMENT )
# define V_DISABLE_USE_DUMMY_STATEMENT
#endif

#if !defined( V_CPU_CANOE )
# define V_CPU_CANOE
#endif

#if !defined( C_PROCESSOR_VECTOR_CANCARD )
# define C_PROCESSOR_VECTOR_CANCARD
#endif
#if !defined( V_PROCESSOR_VECTOR_CANCARD )
# define V_PROCESSOR_VECTOR_CANCARD
#endif

#if !defined( C_COMP_ANSI_CANOE )
# define C_COMP_ANSI_CANOE
#endif
#if !defined( V_COMP_ANSI )
# define V_COMP_ANSI
#endif
#if !defined( V_COMP_ANSI_CANOE )
# define V_COMP_ANSI_CANOE
#endif

#if !defined( V_SUPPRESS_EXTENDED_VERSION_CHECK )
# define V_SUPPRESS_EXTENDED_VERSION_CHECK
#endif

/* -----------------------------------------------------------------------------
    Version defines
 ----------------------------------------------------------------------------- */

/* CAN024, CAN023 */
#define CAN_ASR_VERSION              0x0400u
#define CAN_GEN_BASE_CFG5_VERSION    0x0103u
#define CAN_GEN_BASESASR_VERSION     0x0407u
#define CAN_GEN_CanoeemuCanoeAsr_VERSION              0x0102u
#define CAN_MICROSAR_VERSION         CAN_MSR403

/* -----------------------------------------------------------------------------
    Hardcoded defines
 ----------------------------------------------------------------------------- */

#define CAN_INSTANCE_ID           0

#define CAN_RX_BASICCAN_TYPE                 0u
#define CAN_RX_FULLCAN_TYPE                  1u
#define CAN_TX_BASICCAN_TYPE                 2u
#define CAN_TX_FULLCAN_TYPE                  3u
#define CAN_UNUSED_CAN_TYPE                  4u
#define CAN_TX_BASICCAN_MUX_TYPE             5u
#define CAN_TX_BASICCAN_FIFO_TYPE            6u

#define CAN_INTERRUPT                        0u
#define CAN_POLLING                          1u

#define kCanChannelNotUsed                     CAN_NO_CANIFCHANNELID 

#define CAN_NONE                             0u
/* RAM check (also  none) */
#define CAN_NOTIFY_ISSUE                     1u
#define CAN_NOTIFY_MAILBOX                   2u
#define CAN_EXTENDED                         3u
/* Interrupt lock (also  none) */
#define CAN_DRIVER                           1u
#define CAN_APPL                             2u
#define CAN_BOTH                             3u
/* Overrun Notification (als none,appl) */
#define CAN_DET                              1u
/* CAN FD Support */
#define CAN_BRS                              1u
#define CAN_FULL                             2u
/* CAN FD Configuration */
#define CAN_FD_RXONLY                        2u /* FD Baudrate exist (RX) */
#define CAN_FD_RXTX                          1u /* FD Baudrate also used for TX */
/* Generic Confirmation */
#define CAN_API1                             1u
#define CAN_API2                             2u

#define CAN_OS_TICK2MS(tick)     OS_TICKS2MS_UnusedCounter((tick))     /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#define CAN_OS_COUNTER_ID        UnusedCounter

/* -----------------------------------------------------------------------------
    Defines / Switches
 ----------------------------------------------------------------------------- */

/* Version and Issue detection */
#define CAN_VERSION_INFO_API                 STD_OFF   /* CAN106_Conf */
#define CAN_DEV_ERROR_DETECT                 STD_ON   /* CAN064_Conf */
#define CAN_DEV_ERROR_REPORT                 STD_ON
#define CAN_SAFE_BSW                         STD_OFF

/* Interrupt / Polling */
#define CAN_TX_PROCESSING                    CAN_POLLING   /* CAN318_Conf */
#define CAN_RX_PROCESSING                    CAN_POLLING   /* CAN317_Conf */
#define CAN_BUSOFF_PROCESSING                CAN_POLLING   /* CAN314_Conf */
#define CAN_WAKEUP_PROCESSING                CAN_POLLING   /* CAN319_Conf */
#define CAN_INDIVIDUAL_PROCESSING            STD_OFF
#define CAN_INTERRUPT_USED                   STD_OFF
#define CAN_NESTED_INTERRUPTS                STD_OFF
#define C_ENABLE_OSEK_OS_INTCAT2
#define C_DISABLE_ISRVOID
#define CAN_INTLOCK                          CAN_DRIVER

/* Tx Handling */
#define CAN_MULTIPLEXED_TX_MAX               1u
#define CAN_CANCEL_SUPPORT_API               STD_OFF
#define CAN_TRANSMIT_BUFFER                  STD_ON
#define CAN_MULTIPLEXED_TRANSMISSION         STD_OFF   /* CAN095_Conf */
#define CAN_TX_HW_FIFO                       STD_OFF
#define CAN_HW_TRANSMIT_CANCELLATION         STD_OFF   /* CAN069_Conf */
#define CAN_IDENTICAL_ID_CANCELLATION        STD_OFF   /* CAN378_Conf */
#define CAN_MULTIPLE_BASICCAN_TX             STD_OFF

/* Rx Handling */
#define CAN_MULTIPLE_BASICCAN                STD_OFF
#define CAN_RX_QUEUE                         STD_OFF
#define CAN_OVERRUN_NOTIFICATION             CAN_DET

/* Sleep Wakeup */
#define CAN_SLEEP_SUPPORT                    STD_ON
#define CAN_WAKEUP_SUPPORT                   STD_OFF   /* CAN330_Conf */

/* Hardware loop check */
#define CAN_HARDWARE_CANCELLATION            STD_OFF
#define CAN_TIMEOUT_DURATION                 10uL   /* CAN113_Conf */
#define CAN_LOOP_MAX                         2u

/* Appl calls */
#define CAN_HW_LOOP_SUPPORT_API              STD_OFF
#define CAN_GENERIC_PRECOPY                  STD_OFF
#define CAN_GENERIC_CONFIRMATION             STD_OFF
#define CAN_GENERIC_PRETRANSMIT              STD_OFF
#define CAN_USE_OS_INTERRUPT_CONTROL         STD_OFF

/* Optimization */
#define CAN_RX_FULLCAN_OBJECTS               STD_OFF
#define CAN_TX_FULLCAN_OBJECTS               STD_OFF
#define CAN_RX_BASICCAN_OBJECTS              STD_ON
#define CAN_EXTENDED_ID                      STD_OFF
#define CAN_MIXED_ID                         STD_OFF
#define CAN_ONE_CONTROLLER_OPTIMIZATION      STD_ON
#define CAN_CHANGE_BAUDRATE_API              STD_OFF   /* CAN460_Conf */
#define CAN_FD_HW_BUFFER_OPTIMIZATION        STD_OFF

/* CAN FD */
#define CAN_SET_BAUDRATE_API                 STD_OFF   /* CAN482_Conf */
#define CAN_FD_SUPPORT                       CAN_NONE

/* Other */
#define CAN_COMMON_CAN                       STD_OFF
#define CAN_RAM_CHECK                        CAN_NONE
#define CAN_REINIT_START                     STD_OFF
#define CAN_GET_STATUS                       STD_OFF
#define CAN_RUNTIME_MEASUREMENT_SUPPORT      STD_OFF
#define CAN_PROTECTED_MODE                   STD_OFF
#define CAN_MIRROR_MODE                      STD_OFF
#define CAN_SILENT_MODE                      STD_OFF
#define CAN_CHECK_WAKEUP_CAN_RET_TYPE        STD_OFF
/* -----------------------------------------------------------------------------
    Channel And Mailbox
 ----------------------------------------------------------------------------- */
#ifndef C_DRV_INTERNAL
# ifndef kCanNumberOfChannels
#  define kCanNumberOfChannels               1u
# endif
# ifndef kCanNumberOfHwChannels
#  define kCanNumberOfHwChannels             1u
# endif
#endif
#ifndef kCanNumberOfUsedChannels /* ATK only */
# define kCanNumberOfUsedChannels            1u
#endif

#define kCanPhysToLogChannelIndex_0 

#define kCanNumberOfPhysChannels             1u

/* -----------------------------------------------------------------------------
    Symbolic Name Values for Controller, HardwareObject and Baudrates
 ----------------------------------------------------------------------------- */
/* These definitions can change at Link-time and Post-build configuration time. Use them wisely. */



/**
 * \defgroup CanHandleIdsactivated Handle IDs of handle space activated.
 * \brief controllers by CanControllerActivation
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define CanConf_CanController_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 0u
/**\} */
#define CanConf_Connector_eJAD_AC_ECU_5f730b4d60fd8937_17d2a688_Tx 0u
#define CanConf_Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx 1u

#define CanConf_ControllerBaudrateConfig_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728_CanControllerBaudrateConfig 0u

#define CanConf_MemorySection_Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 0u



/* -----------------------------------------------------------------------------
    Types
 ----------------------------------------------------------------------------- */
/* HW specific BEGIN */
/* HW specific Pre Can Config H file */

#define CAN_VTT_DRIVER


#define CAN_MAX_MAILBOX  250u
#define CAN_MAX_BCAN_MAILBOX  20u

typedef VAR(uint8, CAN_VAR_NOINIT) tCanLLCanIntOld;

/* stucture of the CAN message objects */
typedef struct Can_MsgDataStructTag
{
  uint32 IdRaw;
  uint8 DlcRaw;
  uint8 DataFld[8];
} Can_MsgDataStructType;

/* emulated Rx/Tx CAN object */
typedef struct Can_ObjectTag
{
  Can_MsgDataStructType mMsg;        /* message data */
  uint8             mIsFree;     /* indication, if buffer is in use or is free */
  uint8             mCanOverrun; /* overrun flag for emulation hardware for Rx */
  uint8             mCanCancel;  /* CancelInHw request for Tx */
  uint8             mIsPending;  /* indication, if message object is pending (Rx,Tx) */
  uint8             mObjType;    /* Type of Object: CAN_MSGOBJ_TX, CAN_MSGOBJ_RXFULL, CAN_MSGOBJ_RXBASIC, CAN_MSGOBJ_UNUSED */
} Can_ObjectType;


/* data type of the emulated CAN Controller */
typedef struct Can_ControllerTag
{
  Can_ObjectType  MsgObj[CAN_MAX_MAILBOX]; /* Rx or Tx-Msg Objects */
  uint32      ErrCode;       /* controller error code from canoe (BusOff, Errorpassiv, ...) */
  uint8       ErrCntTx;      /* Tx error counter */
  uint8       ErrCntRx;      /* Rx error counter */
  uint8       Mode;          /* CAN_MODE_STOP, CAN_MODE_START, CAN_MODE_SLEEP */
  uint8       IntEnable;     /* Interrupt enabled: CAN_INT_RX, CAN_INT_TX, CAN_INT_ERR, CAN_INT_WAKEUP */
  uint8       HighVoltageMode;
  uint8       BusOffNotify;  /* call busoff notification only once per busoff */
  uint8       WakeupPending; /* handling of Wakeup should be done */
  uint8       ErrorPending;  /* handling of Error should be done */
  uint8       BCanWrittenPointer[CAN_MAX_BCAN_MAILBOX]; /* Index of a BasicCANs FIFO element that is last used by reception */
} Can_ControllerType;

/* !HW specific Pre Can Config H file */ 
/* HW specific END */ 

typedef VAR(uint8, TYPEDEF) CanChannelHandle;

#if defined (CAN_LCFG_SOURCE) || defined (C_DRV_INTERNAL)
typedef TickType Can_ExternalTickType;
#else
typedef uint32 Can_ExternalTickType;
#endif

typedef VAR(Can_ExternalTickType, TYPEDEF) Can_LoopTimeout_dim_type[CAN_LOOP_MAX+1u];




/* -----------------------------------------------------------------------------
    CONST Declarations
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    VAR Declarations
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    Hw specific
 ----------------------------------------------------------------------------- */
/* HW specific BEGIN */
/* HW specific global H file */

typedef uint8 Can_BusNameType[20]; 

/* !HW specific global H file */
/* HW specific END */


/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/* Can_GlobalConfig: CAN354_Conf */
/* Can_ConfigType: CAN413 */

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanPCDataSwitches  Can Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_ACTIVESENDOBJECT                                          STD_ON
#define CAN_PDUOFACTIVESENDOBJECT                                     STD_ON
#define CAN_STATEOFACTIVESENDOBJECT                                   STD_ON
#define CAN_BASEDLL_GENERATORVERSION                                  STD_ON
#define CAN_CANIFCHANNELID                                            STD_ON
#define CAN_CONTROLLERCONFIG                                          STD_ON
#define CAN_BUSNAMEOFCONTROLLERCONFIG                                 STD_ON
#define CAN_CANCONTROLLERDEFAULTBAUDRATEIDXOFCONTROLLERCONFIG         STD_ON
#define CAN_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG            STD_ON
#define CAN_MAILBOXRXBASICENDIDXOFCONTROLLERCONFIG                    STD_ON
#define CAN_MAILBOXRXBASICLENGTHOFCONTROLLERCONFIG                    STD_ON
#define CAN_MAILBOXRXBASICSTARTIDXOFCONTROLLERCONFIG                  STD_ON
#define CAN_MAILBOXRXBASICUSEDOFCONTROLLERCONFIG                      STD_ON
#define CAN_MAILBOXRXFULLENDIDXOFCONTROLLERCONFIG                     STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.MailboxRxFullEndIdx' Reason: 'the optional indirection is deactivated because MailboxRxFullUsedOfControllerConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_MAILBOXRXFULLLENGTHOFCONTROLLERCONFIG                     STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.MailboxRxFullLength' Reason: 'the optional indirection is deactivated because MailboxRxFullUsedOfControllerConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_MAILBOXRXFULLSTARTIDXOFCONTROLLERCONFIG                   STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.MailboxRxFullStartIdx' Reason: 'the optional indirection is deactivated because MailboxRxFullUsedOfControllerConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_MAILBOXRXFULLUSEDOFCONTROLLERCONFIG                       STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.MailboxRxFullUsed' Reason: 'the optional indirection is deactivated because MailboxRxFullUsedOfControllerConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_MAILBOXTXBASICENDIDXOFCONTROLLERCONFIG                    STD_ON
#define CAN_MAILBOXTXBASICLENGTHOFCONTROLLERCONFIG                    STD_ON
#define CAN_MAILBOXTXBASICSTARTIDXOFCONTROLLERCONFIG                  STD_ON
#define CAN_MAILBOXTXBASICUSEDOFCONTROLLERCONFIG                      STD_ON
#define CAN_MAILBOXTXFULLENDIDXOFCONTROLLERCONFIG                     STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.MailboxTxFullEndIdx' Reason: 'the optional indirection is deactivated because MailboxTxFullUsedOfControllerConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_MAILBOXTXFULLLENGTHOFCONTROLLERCONFIG                     STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.MailboxTxFullLength' Reason: 'the optional indirection is deactivated because MailboxTxFullUsedOfControllerConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_MAILBOXTXFULLSTARTIDXOFCONTROLLERCONFIG                   STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.MailboxTxFullStartIdx' Reason: 'the optional indirection is deactivated because MailboxTxFullUsedOfControllerConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_MAILBOXTXFULLUSEDOFCONTROLLERCONFIG                       STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.MailboxTxFullUsed' Reason: 'the optional indirection is deactivated because MailboxTxFullUsedOfControllerConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_MAILBOXUNUSEDENDIDXOFCONTROLLERCONFIG                     STD_ON
#define CAN_MAILBOXUNUSEDLENGTHOFCONTROLLERCONFIG                     STD_ON
#define CAN_MAILBOXUNUSEDSTARTIDXOFCONTROLLERCONFIG                   STD_ON
#define CAN_MAILBOXUNUSEDUSEDOFCONTROLLERCONFIG                       STD_ON
#define CAN_RXBASICHWSTARTOFCONTROLLERCONFIG                          STD_ON
#define CAN_RXBASICHWSTOPOFCONTROLLERCONFIG                           STD_ON
#define CAN_RXFULLHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_RXFULLHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_TXBASICHWSTARTOFCONTROLLERCONFIG                          STD_ON
#define CAN_TXBASICHWSTOPOFCONTROLLERCONFIG                           STD_ON
#define CAN_TXFULLHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_TXFULLHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_UNUSEDHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_UNUSEDHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_CONTROLLERDATA                                            STD_ON
#define CAN_BUSOFFTRANSITIONREQUESTOFCONTROLLERDATA                   STD_ON
#define CAN_CANINTERRUPTCOUNTEROFCONTROLLERDATA                       STD_ON
#define CAN_CANINTERRUPTOLDSTATUSOFCONTROLLERDATA                     STD_ON
#define CAN_ISBUSOFFOFCONTROLLERDATA                                  STD_ON
#define CAN_LASTINITOBJECTOFCONTROLLERDATA                            STD_ON
#define CAN_LOGSTATUSOFCONTROLLERDATA                                 STD_ON
#define CAN_LOOPTIMEOUTOFCONTROLLERDATA                               STD_ON
#define CAN_MODETRANSITIONREQUESTOFCONTROLLERDATA                     STD_ON
#define CAN_RAMCHECKTRANSITIONREQUESTOFCONTROLLERDATA                 STD_ON
#define CAN_RXMSGOFCONTROLLERDATA                                     STD_ON
#define CAN_GCANCONTROLLEROFCONTROLLERDATA                            STD_ON
#define CAN_FILTER                                                    STD_ON
#define CAN_BCANHWIDXOFFILTER                                         STD_ON
#define CAN_BCANHWSIZEOFFILTER                                        STD_ON
#define CAN_BCANLOGIDXOFFILTER                                        STD_ON
#define CAN_CODEOFFILTER                                              STD_ON
#define CAN_MASKOFFILTER                                              STD_ON
#define CAN_FILTERSTARTIDX                                            STD_ON
#define CAN_FINALMAGICNUMBER                                          STD_OFF  /**< Deactivateable: 'Can_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITDATAHASHCODE                                          STD_OFF  /**< Deactivateable: 'Can_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITOBJECT                                                STD_ON
#define CAN_ARBBAUDRATEOFINITOBJECT                                   STD_ON
#define CAN_ARBSAMOFINITOBJECT                                        STD_ON
#define CAN_ARBSJWOFINITOBJECT                                        STD_ON
#define CAN_ARBTSEG1OFINITOBJECT                                      STD_ON
#define CAN_ARBTSEG2OFINITOBJECT                                      STD_ON
#define CAN_DBRBAUDRATEOFINITOBJECT                                   STD_ON
#define CAN_DBRSAMOFINITOBJECT                                        STD_ON
#define CAN_DBRSJWOFINITOBJECT                                        STD_ON
#define CAN_DBRTSEG1OFINITOBJECT                                      STD_ON
#define CAN_DBRTSEG2OFINITOBJECT                                      STD_ON
#define CAN_INITOBJECTBAUDRATE                                        STD_ON
#define CAN_INITOBJECTSTARTINDEX                                      STD_ON
#define CAN_MAILBOX                                                   STD_ON
#define CAN_ACTIVESENDOBJECTOFMAILBOX                                 STD_ON
#define CAN_CONTROLLERCONFIGIDXOFMAILBOX                              STD_ON
#define CAN_HWHANDLEOFMAILBOX                                         STD_ON
#define CAN_IDVALUEOFMAILBOX                                          STD_ON
#define CAN_ISINDIVPOLLINGOFMAILBOX                                   STD_ON
#define CAN_MAILBOXSIZEOFMAILBOX                                      STD_ON
#define CAN_MAILBOXTYPEOFMAILBOX                                      STD_ON
#define CAN_MAXDATALENOFMAILBOX                                       STD_ON
#define CAN_MEMORYSECTIONSINDEXOFMAILBOX                              STD_ON
#define CAN_MEMORYSECTIONINFO                                         STD_ON
#define CAN_MEMORYSECTIONSTARTOFMEMORYSECTIONINFO                     STD_ON
#define CAN_MEMORYSTARTADDRESSOFMEMORYSECTIONINFO                     STD_ON
#define CAN_MEMORYSECTIONOBJECTS                                      STD_ON
#define CAN_HWHANDLEOFMEMORYSECTIONOBJECTS                            STD_ON
#define CAN_ISINDIVPOLLINGOFMEMORYSECTIONOBJECTS                      STD_ON
#define CAN_MAILBOXELEMENTOFMEMORYSECTIONOBJECTS                      STD_ON
#define CAN_MAILBOXHANDLEOFMEMORYSECTIONOBJECTS                       STD_ON
#define CAN_PLATFORMDLL_GENERATORVERSION                              STD_ON
#define CAN_SIZEOFACTIVESENDOBJECT                                    STD_ON
#define CAN_SIZEOFCANIFCHANNELID                                      STD_ON
#define CAN_SIZEOFCONTROLLERCONFIG                                    STD_ON
#define CAN_SIZEOFCONTROLLERDATA                                      STD_ON
#define CAN_SIZEOFFILTER                                              STD_ON
#define CAN_SIZEOFFILTERSTARTIDX                                      STD_ON
#define CAN_SIZEOFINITOBJECT                                          STD_ON
#define CAN_SIZEOFINITOBJECTBAUDRATE                                  STD_ON
#define CAN_SIZEOFINITOBJECTSTARTINDEX                                STD_ON
#define CAN_SIZEOFMAILBOX                                             STD_ON
#define CAN_SIZEOFMEMORYSECTIONINFO                                   STD_ON
#define CAN_SIZEOFMEMORYSECTIONOBJECTS                                STD_ON
#define CAN_PCCONFIG                                                  STD_ON
#define CAN_ACTIVESENDOBJECTOFPCCONFIG                                STD_ON
#define CAN_BASEDLL_GENERATORVERSIONOFPCCONFIG                        STD_ON
#define CAN_CANIFCHANNELIDOFPCCONFIG                                  STD_ON
#define CAN_CONTROLLERCONFIGOFPCCONFIG                                STD_ON
#define CAN_CONTROLLERDATAOFPCCONFIG                                  STD_ON
#define CAN_FILTEROFPCCONFIG                                          STD_ON
#define CAN_FILTERSTARTIDXOFPCCONFIG                                  STD_ON
#define CAN_FINALMAGICNUMBEROFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Can_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITDATAHASHCODEOFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Can_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITOBJECTBAUDRATEOFPCCONFIG                              STD_ON
#define CAN_INITOBJECTOFPCCONFIG                                      STD_ON
#define CAN_INITOBJECTSTARTINDEXOFPCCONFIG                            STD_ON
#define CAN_MAILBOXOFPCCONFIG                                         STD_ON
#define CAN_MEMORYSECTIONINFOOFPCCONFIG                               STD_ON
#define CAN_MEMORYSECTIONOBJECTSOFPCCONFIG                            STD_ON
#define CAN_PLATFORMDLL_GENERATORVERSIONOFPCCONFIG                    STD_ON
#define CAN_SIZEOFACTIVESENDOBJECTOFPCCONFIG                          STD_ON
#define CAN_SIZEOFCANIFCHANNELIDOFPCCONFIG                            STD_ON
#define CAN_SIZEOFCONTROLLERCONFIGOFPCCONFIG                          STD_ON
#define CAN_SIZEOFCONTROLLERDATAOFPCCONFIG                            STD_ON
#define CAN_SIZEOFFILTEROFPCCONFIG                                    STD_ON
#define CAN_SIZEOFFILTERSTARTIDXOFPCCONFIG                            STD_ON
#define CAN_SIZEOFINITOBJECTBAUDRATEOFPCCONFIG                        STD_ON
#define CAN_SIZEOFINITOBJECTOFPCCONFIG                                STD_ON
#define CAN_SIZEOFINITOBJECTSTARTINDEXOFPCCONFIG                      STD_ON
#define CAN_SIZEOFMAILBOXOFPCCONFIG                                   STD_ON
#define CAN_SIZEOFMEMORYSECTIONINFOOFPCCONFIG                         STD_ON
#define CAN_SIZEOFMEMORYSECTIONOBJECTSOFPCCONFIG                      STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanPCMinNumericValueDefines  Can Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define CAN_MIN_PDUOFACTIVESENDOBJECT                                 0u
#define CAN_MIN_STATEOFACTIVESENDOBJECT                               0u
#define CAN_MIN_BUSOFFTRANSITIONREQUESTOFCONTROLLERDATA               0u
#define CAN_MIN_CANINTERRUPTCOUNTEROFCONTROLLERDATA                   0u
#define CAN_MIN_LASTINITOBJECTOFCONTROLLERDATA                        0u
#define CAN_MIN_LOGSTATUSOFCONTROLLERDATA                             0u
#define CAN_MIN_MODETRANSITIONREQUESTOFCONTROLLERDATA                 0u
#define CAN_MIN_RAMCHECKTRANSITIONREQUESTOFCONTROLLERDATA             0u
/** 
  \}
*/ 

/** 
  \defgroup  CanPCMaxNumericValueDefines  Can Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define CAN_MAX_PDUOFACTIVESENDOBJECT                                 255u
#define CAN_MAX_STATEOFACTIVESENDOBJECT                               65535u
#define CAN_MAX_BUSOFFTRANSITIONREQUESTOFCONTROLLERDATA               255u
#define CAN_MAX_CANINTERRUPTCOUNTEROFCONTROLLERDATA                   255u
#define CAN_MAX_LASTINITOBJECTOFCONTROLLERDATA                        255u
#define CAN_MAX_LOGSTATUSOFCONTROLLERDATA                             255u
#define CAN_MAX_MODETRANSITIONREQUESTOFCONTROLLERDATA                 255u
#define CAN_MAX_RAMCHECKTRANSITIONREQUESTOFCONTROLLERDATA             255u
/** 
  \}
*/ 

/** 
  \defgroup  CanPCNoReferenceDefines  Can No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CAN_NO_CANIFCHANNELID                                         255u
#define CAN_NO_CANCONTROLLERDEFAULTBAUDRATEIDXOFCONTROLLERCONFIG      255u
#define CAN_NO_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG         65535u
#define CAN_NO_MAILBOXRXBASICENDIDXOFCONTROLLERCONFIG                 255u
#define CAN_NO_MAILBOXRXBASICSTARTIDXOFCONTROLLERCONFIG               255u
#define CAN_NO_MAILBOXTXBASICENDIDXOFCONTROLLERCONFIG                 255u
#define CAN_NO_MAILBOXTXBASICSTARTIDXOFCONTROLLERCONFIG               255u
#define CAN_NO_MAILBOXUNUSEDENDIDXOFCONTROLLERCONFIG                  255u
#define CAN_NO_MAILBOXUNUSEDSTARTIDXOFCONTROLLERCONFIG                255u
#define CAN_NO_RXBASICHWSTARTOFCONTROLLERCONFIG                       255u
#define CAN_NO_RXBASICHWSTOPOFCONTROLLERCONFIG                        255u
#define CAN_NO_RXFULLHWSTARTOFCONTROLLERCONFIG                        255u
#define CAN_NO_RXFULLHWSTOPOFCONTROLLERCONFIG                         255u
#define CAN_NO_TXBASICHWSTARTOFCONTROLLERCONFIG                       255u
#define CAN_NO_TXBASICHWSTOPOFCONTROLLERCONFIG                        255u
#define CAN_NO_TXFULLHWSTARTOFCONTROLLERCONFIG                        255u
#define CAN_NO_TXFULLHWSTOPOFCONTROLLERCONFIG                         255u
#define CAN_NO_UNUSEDHWSTARTOFCONTROLLERCONFIG                        255u
#define CAN_NO_UNUSEDHWSTOPOFCONTROLLERCONFIG                         255u
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEnumExistsDefines  Can Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define CAN_EXISTS_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX              STD_ON
#define CAN_EXISTS_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_OFF
#define CAN_EXISTS_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX              STD_ON
#define CAN_EXISTS_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_OFF
#define CAN_EXISTS_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_ON
#define CAN_EXISTS_TX_BASICCAN_MUX_TYPE_MAILBOXTYPEOFMAILBOX          STD_OFF
#define CAN_EXISTS_TX_BASICCAN_FIFO_TYPE_MAILBOXTYPEOFMAILBOX         STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEnumDefines  Can Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX                     0x00u
#define CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX                     0x02u
#define CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX                      0x04u
/** 
  \}
*/ 

/** 
  \defgroup  CanPCIsReducedToDefineDefines  Can Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CAN_ISDEF_CANIFCHANNELID                                      STD_OFF
#define CAN_ISDEF_BUSNAMEOFCONTROLLERCONFIG                           STD_OFF
#define CAN_ISDEF_CANCONTROLLERDEFAULTBAUDRATEIDXOFCONTROLLERCONFIG   STD_OFF
#define CAN_ISDEF_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG      STD_OFF
#define CAN_ISDEF_MAILBOXRXBASICENDIDXOFCONTROLLERCONFIG              STD_OFF
#define CAN_ISDEF_MAILBOXRXBASICLENGTHOFCONTROLLERCONFIG              STD_OFF
#define CAN_ISDEF_MAILBOXRXBASICSTARTIDXOFCONTROLLERCONFIG            STD_OFF
#define CAN_ISDEF_MAILBOXRXBASICUSEDOFCONTROLLERCONFIG                STD_OFF
#define CAN_ISDEF_MAILBOXTXBASICENDIDXOFCONTROLLERCONFIG              STD_OFF
#define CAN_ISDEF_MAILBOXTXBASICLENGTHOFCONTROLLERCONFIG              STD_OFF
#define CAN_ISDEF_MAILBOXTXBASICSTARTIDXOFCONTROLLERCONFIG            STD_OFF
#define CAN_ISDEF_MAILBOXTXBASICUSEDOFCONTROLLERCONFIG                STD_OFF
#define CAN_ISDEF_MAILBOXUNUSEDENDIDXOFCONTROLLERCONFIG               STD_OFF
#define CAN_ISDEF_MAILBOXUNUSEDLENGTHOFCONTROLLERCONFIG               STD_OFF
#define CAN_ISDEF_MAILBOXUNUSEDSTARTIDXOFCONTROLLERCONFIG             STD_OFF
#define CAN_ISDEF_MAILBOXUNUSEDUSEDOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_RXBASICHWSTARTOFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_RXBASICHWSTOPOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_RXFULLHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_RXFULLHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_TXBASICHWSTARTOFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_TXBASICHWSTOPOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_TXFULLHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_TXFULLHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_UNUSEDHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_UNUSEDHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_BCANHWIDXOFFILTER                                   STD_OFF
#define CAN_ISDEF_BCANHWSIZEOFFILTER                                  STD_OFF
#define CAN_ISDEF_BCANLOGIDXOFFILTER                                  STD_OFF
#define CAN_ISDEF_CODEOFFILTER                                        STD_OFF
#define CAN_ISDEF_MASKOFFILTER                                        STD_OFF
#define CAN_ISDEF_FILTERSTARTIDX                                      STD_OFF
#define CAN_ISDEF_ARBBAUDRATEOFINITOBJECT                             STD_OFF
#define CAN_ISDEF_ARBSAMOFINITOBJECT                                  STD_OFF
#define CAN_ISDEF_ARBSJWOFINITOBJECT                                  STD_OFF
#define CAN_ISDEF_ARBTSEG1OFINITOBJECT                                STD_OFF
#define CAN_ISDEF_ARBTSEG2OFINITOBJECT                                STD_OFF
#define CAN_ISDEF_DBRBAUDRATEOFINITOBJECT                             STD_OFF
#define CAN_ISDEF_DBRSAMOFINITOBJECT                                  STD_OFF
#define CAN_ISDEF_DBRSJWOFINITOBJECT                                  STD_OFF
#define CAN_ISDEF_DBRTSEG1OFINITOBJECT                                STD_OFF
#define CAN_ISDEF_DBRTSEG2OFINITOBJECT                                STD_OFF
#define CAN_ISDEF_INITOBJECTBAUDRATE                                  STD_OFF
#define CAN_ISDEF_INITOBJECTSTARTINDEX                                STD_OFF
#define CAN_ISDEF_ACTIVESENDOBJECTOFMAILBOX                           STD_OFF
#define CAN_ISDEF_CONTROLLERCONFIGIDXOFMAILBOX                        STD_OFF
#define CAN_ISDEF_HWHANDLEOFMAILBOX                                   STD_OFF
#define CAN_ISDEF_IDVALUEOFMAILBOX                                    STD_OFF
#define CAN_ISDEF_ISINDIVPOLLINGOFMAILBOX                             STD_OFF
#define CAN_ISDEF_MAILBOXSIZEOFMAILBOX                                STD_OFF
#define CAN_ISDEF_MAILBOXTYPEOFMAILBOX                                STD_OFF
#define CAN_ISDEF_MAXDATALENOFMAILBOX                                 STD_OFF
#define CAN_ISDEF_MEMORYSECTIONSINDEXOFMAILBOX                        STD_OFF
#define CAN_ISDEF_MEMORYSECTIONSTARTOFMEMORYSECTIONINFO               STD_OFF
#define CAN_ISDEF_MEMORYSTARTADDRESSOFMEMORYSECTIONINFO               STD_OFF
#define CAN_ISDEF_HWHANDLEOFMEMORYSECTIONOBJECTS                      STD_OFF
#define CAN_ISDEF_ISINDIVPOLLINGOFMEMORYSECTIONOBJECTS                STD_OFF
#define CAN_ISDEF_MAILBOXELEMENTOFMEMORYSECTIONOBJECTS                STD_OFF
#define CAN_ISDEF_MAILBOXHANDLEOFMEMORYSECTIONOBJECTS                 STD_OFF
#define CAN_ISDEF_ACTIVESENDOBJECTOFPCCONFIG                          STD_ON
#define CAN_ISDEF_CANIFCHANNELIDOFPCCONFIG                            STD_ON
#define CAN_ISDEF_CONTROLLERCONFIGOFPCCONFIG                          STD_ON
#define CAN_ISDEF_CONTROLLERDATAOFPCCONFIG                            STD_ON
#define CAN_ISDEF_FILTEROFPCCONFIG                                    STD_ON
#define CAN_ISDEF_FILTERSTARTIDXOFPCCONFIG                            STD_ON
#define CAN_ISDEF_INITOBJECTBAUDRATEOFPCCONFIG                        STD_ON
#define CAN_ISDEF_INITOBJECTOFPCCONFIG                                STD_ON
#define CAN_ISDEF_INITOBJECTSTARTINDEXOFPCCONFIG                      STD_ON
#define CAN_ISDEF_MAILBOXOFPCCONFIG                                   STD_ON
#define CAN_ISDEF_MEMORYSECTIONINFOOFPCCONFIG                         STD_ON
#define CAN_ISDEF_MEMORYSECTIONOBJECTSOFPCCONFIG                      STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEqualsAlwaysToDefines  Can Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CAN_EQ2_CANIFCHANNELID                                        
#define CAN_EQ2_BUSNAMEOFCONTROLLERCONFIG                             
#define CAN_EQ2_CANCONTROLLERDEFAULTBAUDRATEIDXOFCONTROLLERCONFIG     
#define CAN_EQ2_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG        
#define CAN_EQ2_MAILBOXRXBASICENDIDXOFCONTROLLERCONFIG                
#define CAN_EQ2_MAILBOXRXBASICLENGTHOFCONTROLLERCONFIG                
#define CAN_EQ2_MAILBOXRXBASICSTARTIDXOFCONTROLLERCONFIG              
#define CAN_EQ2_MAILBOXRXBASICUSEDOFCONTROLLERCONFIG                  
#define CAN_EQ2_MAILBOXTXBASICENDIDXOFCONTROLLERCONFIG                
#define CAN_EQ2_MAILBOXTXBASICLENGTHOFCONTROLLERCONFIG                
#define CAN_EQ2_MAILBOXTXBASICSTARTIDXOFCONTROLLERCONFIG              
#define CAN_EQ2_MAILBOXTXBASICUSEDOFCONTROLLERCONFIG                  
#define CAN_EQ2_MAILBOXUNUSEDENDIDXOFCONTROLLERCONFIG                 
#define CAN_EQ2_MAILBOXUNUSEDLENGTHOFCONTROLLERCONFIG                 
#define CAN_EQ2_MAILBOXUNUSEDSTARTIDXOFCONTROLLERCONFIG               
#define CAN_EQ2_MAILBOXUNUSEDUSEDOFCONTROLLERCONFIG                   
#define CAN_EQ2_RXBASICHWSTARTOFCONTROLLERCONFIG                      
#define CAN_EQ2_RXBASICHWSTOPOFCONTROLLERCONFIG                       
#define CAN_EQ2_RXFULLHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_RXFULLHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_TXBASICHWSTARTOFCONTROLLERCONFIG                      
#define CAN_EQ2_TXBASICHWSTOPOFCONTROLLERCONFIG                       
#define CAN_EQ2_TXFULLHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_TXFULLHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_UNUSEDHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_UNUSEDHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_BCANHWIDXOFFILTER                                     
#define CAN_EQ2_BCANHWSIZEOFFILTER                                    
#define CAN_EQ2_BCANLOGIDXOFFILTER                                    
#define CAN_EQ2_CODEOFFILTER                                          
#define CAN_EQ2_MASKOFFILTER                                          
#define CAN_EQ2_FILTERSTARTIDX                                        
#define CAN_EQ2_ARBBAUDRATEOFINITOBJECT                               
#define CAN_EQ2_ARBSAMOFINITOBJECT                                    
#define CAN_EQ2_ARBSJWOFINITOBJECT                                    
#define CAN_EQ2_ARBTSEG1OFINITOBJECT                                  
#define CAN_EQ2_ARBTSEG2OFINITOBJECT                                  
#define CAN_EQ2_DBRBAUDRATEOFINITOBJECT                               
#define CAN_EQ2_DBRSAMOFINITOBJECT                                    
#define CAN_EQ2_DBRSJWOFINITOBJECT                                    
#define CAN_EQ2_DBRTSEG1OFINITOBJECT                                  
#define CAN_EQ2_DBRTSEG2OFINITOBJECT                                  
#define CAN_EQ2_INITOBJECTBAUDRATE                                    
#define CAN_EQ2_INITOBJECTSTARTINDEX                                  
#define CAN_EQ2_ACTIVESENDOBJECTOFMAILBOX                             
#define CAN_EQ2_CONTROLLERCONFIGIDXOFMAILBOX                          
#define CAN_EQ2_HWHANDLEOFMAILBOX                                     
#define CAN_EQ2_IDVALUEOFMAILBOX                                      
#define CAN_EQ2_ISINDIVPOLLINGOFMAILBOX                               
#define CAN_EQ2_MAILBOXSIZEOFMAILBOX                                  
#define CAN_EQ2_MAILBOXTYPEOFMAILBOX                                  
#define CAN_EQ2_MAXDATALENOFMAILBOX                                   
#define CAN_EQ2_MEMORYSECTIONSINDEXOFMAILBOX                          
#define CAN_EQ2_MEMORYSECTIONSTARTOFMEMORYSECTIONINFO                 
#define CAN_EQ2_MEMORYSTARTADDRESSOFMEMORYSECTIONINFO                 
#define CAN_EQ2_HWHANDLEOFMEMORYSECTIONOBJECTS                        
#define CAN_EQ2_ISINDIVPOLLINGOFMEMORYSECTIONOBJECTS                  
#define CAN_EQ2_MAILBOXELEMENTOFMEMORYSECTIONOBJECTS                  
#define CAN_EQ2_MAILBOXHANDLEOFMEMORYSECTIONOBJECTS                   
#define CAN_EQ2_ACTIVESENDOBJECTOFPCCONFIG                            Can_ActiveSendObject
#define CAN_EQ2_CANIFCHANNELIDOFPCCONFIG                              Can_CanIfChannelId
#define CAN_EQ2_CONTROLLERCONFIGOFPCCONFIG                            Can_ControllerConfig
#define CAN_EQ2_CONTROLLERDATAOFPCCONFIG                              Can_ControllerData
#define CAN_EQ2_FILTEROFPCCONFIG                                      Can_Filter
#define CAN_EQ2_FILTERSTARTIDXOFPCCONFIG                              Can_FilterStartIdx
#define CAN_EQ2_INITOBJECTBAUDRATEOFPCCONFIG                          Can_InitObjectBaudrate
#define CAN_EQ2_INITOBJECTOFPCCONFIG                                  Can_InitObject
#define CAN_EQ2_INITOBJECTSTARTINDEXOFPCCONFIG                        Can_InitObjectStartIndex
#define CAN_EQ2_MAILBOXOFPCCONFIG                                     Can_Mailbox
#define CAN_EQ2_MEMORYSECTIONINFOOFPCCONFIG                           Can_MemorySectionInfo
#define CAN_EQ2_MEMORYSECTIONOBJECTSOFPCCONFIG                        Can_MemorySectionObjects
/** 
  \}
*/ 

/** 
  \defgroup  CanPCSymbolicInitializationPointers  Can Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Can_Config_Ptr                                                NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Can' */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCInitializationSymbols  Can Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Can_Config                                                    NULL_PTR  /**< symbolic identifier which could be used to initialize 'Can */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGeneral  Can General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CAN_CHECK_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CAN_FINAL_MAGIC_NUMBER                                        0x501Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of Can */
#define CAN_INDIVIDUAL_POSTBUILD                                      STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Can' is not configured to be postbuild capable. */
#define CAN_INIT_DATA                                                 CAN_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CAN_INIT_DATA_HASH_CODE                                       -1893185136  /**< the precompile constant to validate the initialization structure at initialization time of Can with a hashcode. The seed value is '0x501Eu' */
#define CAN_USE_ECUM_BSW_ERROR_HOOK                                   STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CAN_USE_INIT_POINTER                                          STD_OFF  /**< STD_ON if the init pointer Can shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanLTDataSwitches  Can Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_LTCONFIG                                                  STD_OFF  /**< Deactivateable: 'Can_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanPBDataSwitches  Can Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_PBCONFIG                                                  STD_OFF  /**< Deactivateable: 'Can_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CAN_LTCONFIGIDXOFPBCONFIG                                     STD_OFF  /**< Deactivateable: 'Can_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CAN_PCCONFIGIDXOFPBCONFIG                                     STD_OFF  /**< Deactivateable: 'Can_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



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
  \defgroup  CanPCGetConstantDuplicatedRootDataMacros  Can Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Can_GetActiveSendObjectOfPCConfig()                           Can_ActiveSendObject  /**< the pointer to Can_ActiveSendObject */
#define Can_GetBaseDll_GeneratorVersionOfPCConfig()                   0x0103u
#define Can_GetCanIfChannelIdOfPCConfig()                             Can_CanIfChannelId  /**< the pointer to Can_CanIfChannelId */
#define Can_GetControllerConfigOfPCConfig()                           Can_ControllerConfig  /**< the pointer to Can_ControllerConfig */
#define Can_GetControllerDataOfPCConfig()                             Can_ControllerData  /**< the pointer to Can_ControllerData */
#define Can_GetFilterOfPCConfig()                                     Can_Filter  /**< the pointer to Can_Filter */
#define Can_GetFilterStartIdxOfPCConfig()                             Can_FilterStartIdx  /**< the pointer to Can_FilterStartIdx */
#define Can_GetInitObjectBaudrateOfPCConfig()                         Can_InitObjectBaudrate  /**< the pointer to Can_InitObjectBaudrate */
#define Can_GetInitObjectOfPCConfig()                                 Can_InitObject  /**< the pointer to Can_InitObject */
#define Can_GetInitObjectStartIndexOfPCConfig()                       Can_InitObjectStartIndex  /**< the pointer to Can_InitObjectStartIndex */
#define Can_GetMailboxOfPCConfig()                                    Can_Mailbox  /**< the pointer to Can_Mailbox */
#define Can_GetMemorySectionInfoOfPCConfig()                          Can_MemorySectionInfo  /**< the pointer to Can_MemorySectionInfo */
#define Can_GetMemorySectionObjectsOfPCConfig()                       Can_MemorySectionObjects  /**< the pointer to Can_MemorySectionObjects */
#define Can_GetPlatformDll_GeneratorVersionOfPCConfig()               0x0102u
#define Can_GetSizeOfActiveSendObjectOfPCConfig()                     1u  /**< the number of accomplishable value elements in Can_ActiveSendObject */
#define Can_GetSizeOfCanIfChannelIdOfPCConfig()                       1u  /**< the number of accomplishable value elements in Can_CanIfChannelId */
#define Can_GetSizeOfControllerConfigOfPCConfig()                     1u  /**< the number of accomplishable value elements in Can_ControllerConfig */
#define Can_GetSizeOfFilterOfPCConfig()                               1u  /**< the number of accomplishable value elements in Can_Filter */
#define Can_GetSizeOfFilterStartIdxOfPCConfig()                       2u  /**< the number of accomplishable value elements in Can_FilterStartIdx */
#define Can_GetSizeOfInitObjectBaudrateOfPCConfig()                   1u  /**< the number of accomplishable value elements in Can_InitObjectBaudrate */
#define Can_GetSizeOfInitObjectOfPCConfig()                           1u  /**< the number of accomplishable value elements in Can_InitObject */
#define Can_GetSizeOfInitObjectStartIndexOfPCConfig()                 2u  /**< the number of accomplishable value elements in Can_InitObjectStartIndex */
#define Can_GetSizeOfMailboxOfPCConfig()                              3u  /**< the number of accomplishable value elements in Can_Mailbox */
#define Can_GetSizeOfMemorySectionInfoOfPCConfig()                    1u  /**< the number of accomplishable value elements in Can_MemorySectionInfo */
#define Can_GetSizeOfMemorySectionObjectsOfPCConfig()                 250u  /**< the number of accomplishable value elements in Can_MemorySectionObjects */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetDuplicatedRootDataMacros  Can Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Can_GetSizeOfControllerDataOfPCConfig()                       Can_GetSizeOfControllerConfigOfPCConfig()  /**< the number of accomplishable value elements in Can_ControllerData */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetDataMacros  Can Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Can_GetPduOfActiveSendObject(Index)                           (Can_GetActiveSendObjectOfPCConfig()[(Index)].PduOfActiveSendObject)
#define Can_GetStateOfActiveSendObject(Index)                         (Can_GetActiveSendObjectOfPCConfig()[(Index)].StateOfActiveSendObject)
#define Can_GetCanIfChannelId(Index)                                  (Can_GetCanIfChannelIdOfPCConfig()[(Index)])
#define Can_GetBusNameOfControllerConfig(Index)                       (Can_GetControllerConfigOfPCConfig()[(Index)].BusNameOfControllerConfig)
#define Can_GetCanControllerDefaultBaudrateIdxOfControllerConfig(Index) (Can_GetControllerConfigOfPCConfig()[(Index)].CanControllerDefaultBaudrateIdxOfControllerConfig)
#define Can_GetCanControllerDefaultBaudrateOfControllerConfig(Index)  (Can_GetControllerConfigOfPCConfig()[(Index)].CanControllerDefaultBaudrateOfControllerConfig)
#define Can_GetMailboxRxBasicEndIdxOfControllerConfig(Index)          (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxRxBasicEndIdxOfControllerConfig)
#define Can_GetMailboxRxBasicLengthOfControllerConfig(Index)          (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxRxBasicLengthOfControllerConfig)
#define Can_GetMailboxRxBasicStartIdxOfControllerConfig(Index)        (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxRxBasicStartIdxOfControllerConfig)
#define Can_GetMailboxTxBasicEndIdxOfControllerConfig(Index)          (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxTxBasicEndIdxOfControllerConfig)
#define Can_GetMailboxTxBasicLengthOfControllerConfig(Index)          (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxTxBasicLengthOfControllerConfig)
#define Can_GetMailboxTxBasicStartIdxOfControllerConfig(Index)        (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxTxBasicStartIdxOfControllerConfig)
#define Can_GetMailboxUnusedEndIdxOfControllerConfig(Index)           (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxUnusedEndIdxOfControllerConfig)
#define Can_GetMailboxUnusedLengthOfControllerConfig(Index)           (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxUnusedLengthOfControllerConfig)
#define Can_GetMailboxUnusedStartIdxOfControllerConfig(Index)         (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxUnusedStartIdxOfControllerConfig)
#define Can_GetRxBasicHwStartOfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHwStartOfControllerConfig)
#define Can_GetRxBasicHwStopOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHwStopOfControllerConfig)
#define Can_GetRxFullHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHwStartOfControllerConfig)
#define Can_GetRxFullHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHwStopOfControllerConfig)
#define Can_GetTxBasicHwStartOfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHwStartOfControllerConfig)
#define Can_GetTxBasicHwStopOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHwStopOfControllerConfig)
#define Can_GetTxFullHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHwStartOfControllerConfig)
#define Can_GetTxFullHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHwStopOfControllerConfig)
#define Can_GetUnusedHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHwStartOfControllerConfig)
#define Can_GetUnusedHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHwStopOfControllerConfig)
#define Can_GetBusOffTransitionRequestOfControllerData(Index)         (Can_GetControllerDataOfPCConfig()[(Index)].BusOffTransitionRequestOfControllerData)
#define Can_GetCanInterruptCounterOfControllerData(Index)             (Can_GetControllerDataOfPCConfig()[(Index)].CanInterruptCounterOfControllerData)
#define Can_GetCanInterruptOldStatusOfControllerData(Index)           (Can_GetControllerDataOfPCConfig()[(Index)].CanInterruptOldStatusOfControllerData)
#define Can_IsIsBusOffOfControllerData(Index)                         ((Can_GetControllerDataOfPCConfig()[(Index)].IsBusOffOfControllerData) != FALSE)
#define Can_GetLastInitObjectOfControllerData(Index)                  (Can_GetControllerDataOfPCConfig()[(Index)].LastInitObjectOfControllerData)
#define Can_GetLogStatusOfControllerData(Index)                       (Can_GetControllerDataOfPCConfig()[(Index)].LogStatusOfControllerData)
#define Can_GetLoopTimeoutOfControllerData(Index)                     (Can_GetControllerDataOfPCConfig()[(Index)].LoopTimeoutOfControllerData)
#define Can_GetModeTransitionRequestOfControllerData(Index)           (Can_GetControllerDataOfPCConfig()[(Index)].ModeTransitionRequestOfControllerData)
#define Can_GetRamCheckTransitionRequestOfControllerData(Index)       (Can_GetControllerDataOfPCConfig()[(Index)].RamCheckTransitionRequestOfControllerData)
#define Can_GetRxMsgOfControllerData(Index)                           (Can_GetControllerDataOfPCConfig()[(Index)].RxMsgOfControllerData)
#define Can_GetgCanControllerOfControllerData(Index)                  (Can_GetControllerDataOfPCConfig()[(Index)].gCanControllerOfControllerData)
#define Can_GetBCanHwIdxOfFilter(Index)                               (Can_GetFilterOfPCConfig()[(Index)].BCanHwIdxOfFilter)
#define Can_GetBCanHwSizeOfFilter(Index)                              (Can_GetFilterOfPCConfig()[(Index)].BCanHwSizeOfFilter)
#define Can_GetBCanLogIdxOfFilter(Index)                              (Can_GetFilterOfPCConfig()[(Index)].BCanLogIdxOfFilter)
#define Can_GetCodeOfFilter(Index)                                    (Can_GetFilterOfPCConfig()[(Index)].CodeOfFilter)
#define Can_GetMaskOfFilter(Index)                                    (Can_GetFilterOfPCConfig()[(Index)].MaskOfFilter)
#define Can_GetFilterStartIdx(Index)                                  (Can_GetFilterStartIdxOfPCConfig()[(Index)])
#define Can_GetarbBaudrateOfInitObject(Index)                         (Can_GetInitObjectOfPCConfig()[(Index)].arbBaudrateOfInitObject)
#define Can_GetarbSamOfInitObject(Index)                              (Can_GetInitObjectOfPCConfig()[(Index)].arbSamOfInitObject)
#define Can_GetarbSjwOfInitObject(Index)                              (Can_GetInitObjectOfPCConfig()[(Index)].arbSjwOfInitObject)
#define Can_GetarbTseg1OfInitObject(Index)                            (Can_GetInitObjectOfPCConfig()[(Index)].arbTseg1OfInitObject)
#define Can_GetarbTseg2OfInitObject(Index)                            (Can_GetInitObjectOfPCConfig()[(Index)].arbTseg2OfInitObject)
#define Can_GetdbrBaudrateOfInitObject(Index)                         (Can_GetInitObjectOfPCConfig()[(Index)].dbrBaudrateOfInitObject)
#define Can_GetdbrSamOfInitObject(Index)                              (Can_GetInitObjectOfPCConfig()[(Index)].dbrSamOfInitObject)
#define Can_GetdbrSjwOfInitObject(Index)                              (Can_GetInitObjectOfPCConfig()[(Index)].dbrSjwOfInitObject)
#define Can_GetdbrTseg1OfInitObject(Index)                            (Can_GetInitObjectOfPCConfig()[(Index)].dbrTseg1OfInitObject)
#define Can_GetdbrTseg2OfInitObject(Index)                            (Can_GetInitObjectOfPCConfig()[(Index)].dbrTseg2OfInitObject)
#define Can_GetInitObjectBaudrate(Index)                              (Can_GetInitObjectBaudrateOfPCConfig()[(Index)])
#define Can_GetInitObjectStartIndex(Index)                            (Can_GetInitObjectStartIndexOfPCConfig()[(Index)])
#define Can_GetActiveSendObjectOfMailbox(Index)                       (Can_GetMailboxOfPCConfig()[(Index)].ActiveSendObjectOfMailbox)
#define Can_GetControllerConfigIdxOfMailbox(Index)                    (Can_GetMailboxOfPCConfig()[(Index)].ControllerConfigIdxOfMailbox)
#define Can_GetHwHandleOfMailbox(Index)                               (Can_GetMailboxOfPCConfig()[(Index)].HwHandleOfMailbox)
#define Can_GetIDValueOfMailbox(Index)                                (Can_GetMailboxOfPCConfig()[(Index)].IDValueOfMailbox)
#define Can_IsIsIndivPollingOfMailbox(Index)                          ((Can_GetMailboxOfPCConfig()[(Index)].IsIndivPollingOfMailbox) != FALSE)
#define Can_GetMailboxSizeOfMailbox(Index)                            (Can_GetMailboxOfPCConfig()[(Index)].MailboxSizeOfMailbox)
#define Can_GetMailboxTypeOfMailbox(Index)                            (Can_GetMailboxOfPCConfig()[(Index)].MailboxTypeOfMailbox)
#define Can_GetMaxDataLenOfMailbox(Index)                             (Can_GetMailboxOfPCConfig()[(Index)].MaxDataLenOfMailbox)
#define Can_GetMemorySectionsIndexOfMailbox(Index)                    (Can_GetMailboxOfPCConfig()[(Index)].MemorySectionsIndexOfMailbox)
#define Can_GetMemorySectionStartOfMemorySectionInfo(Index)           (Can_GetMemorySectionInfoOfPCConfig()[(Index)].MemorySectionStartOfMemorySectionInfo)
#define Can_GetMemoryStartAddressOfMemorySectionInfo(Index)           (Can_GetMemorySectionInfoOfPCConfig()[(Index)].MemoryStartAddressOfMemorySectionInfo)
#define Can_GetHwHandleOfMemorySectionObjects(Index)                  (Can_GetMemorySectionObjectsOfPCConfig()[(Index)].HwHandleOfMemorySectionObjects)
#define Can_IsIsIndivPollingOfMemorySectionObjects(Index)             ((Can_GetMemorySectionObjectsOfPCConfig()[(Index)].IsIndivPollingOfMemorySectionObjects) != FALSE)
#define Can_GetMailboxElementOfMemorySectionObjects(Index)            (Can_GetMemorySectionObjectsOfPCConfig()[(Index)].MailboxElementOfMemorySectionObjects)
#define Can_GetMailboxHandleOfMemorySectionObjects(Index)             (Can_GetMemorySectionObjectsOfPCConfig()[(Index)].MailboxHandleOfMemorySectionObjects)
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetDeduplicatedDataMacros  Can Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Can_GetBaseDll_GeneratorVersion()                             Can_GetBaseDll_GeneratorVersionOfPCConfig()
#define Can_IsMailboxRxBasicUsedOfControllerConfig(Index)             (((boolean)(Can_GetMailboxRxBasicLengthOfControllerConfig(Index) != 0u)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Can_Mailbox */
#define Can_IsMailboxTxBasicUsedOfControllerConfig(Index)             (((boolean)(Can_GetMailboxTxBasicLengthOfControllerConfig(Index) != 0u)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Can_Mailbox */
#define Can_IsMailboxUnusedUsedOfControllerConfig(Index)              (((boolean)(Can_GetMailboxUnusedLengthOfControllerConfig(Index) != 0u)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Can_Mailbox */
#define Can_GetPlatformDll_GeneratorVersion()                         Can_GetPlatformDll_GeneratorVersionOfPCConfig()
#define Can_GetSizeOfActiveSendObject()                               Can_GetSizeOfActiveSendObjectOfPCConfig()
#define Can_GetSizeOfCanIfChannelId()                                 Can_GetSizeOfCanIfChannelIdOfPCConfig()
#define Can_GetSizeOfControllerConfig()                               Can_GetSizeOfControllerConfigOfPCConfig()
#define Can_GetSizeOfControllerData()                                 Can_GetSizeOfControllerDataOfPCConfig()
#define Can_GetSizeOfFilter()                                         Can_GetSizeOfFilterOfPCConfig()
#define Can_GetSizeOfFilterStartIdx()                                 Can_GetSizeOfFilterStartIdxOfPCConfig()
#define Can_GetSizeOfInitObject()                                     Can_GetSizeOfInitObjectOfPCConfig()
#define Can_GetSizeOfInitObjectBaudrate()                             Can_GetSizeOfInitObjectBaudrateOfPCConfig()
#define Can_GetSizeOfInitObjectStartIndex()                           Can_GetSizeOfInitObjectStartIndexOfPCConfig()
#define Can_GetSizeOfMailbox()                                        Can_GetSizeOfMailboxOfPCConfig()
#define Can_GetSizeOfMemorySectionInfo()                              Can_GetSizeOfMemorySectionInfoOfPCConfig()
#define Can_GetSizeOfMemorySectionObjects()                           Can_GetSizeOfMemorySectionObjectsOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  CanPCSetDataMacros  Can Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Can_SetPduOfActiveSendObject(Index, Value)                    Can_GetActiveSendObjectOfPCConfig()[(Index)].PduOfActiveSendObject = (Value)
#define Can_SetStateOfActiveSendObject(Index, Value)                  Can_GetActiveSendObjectOfPCConfig()[(Index)].StateOfActiveSendObject = (Value)
#define Can_SetBusOffTransitionRequestOfControllerData(Index, Value)  Can_GetControllerDataOfPCConfig()[(Index)].BusOffTransitionRequestOfControllerData = (Value)
#define Can_SetCanInterruptCounterOfControllerData(Index, Value)      Can_GetControllerDataOfPCConfig()[(Index)].CanInterruptCounterOfControllerData = (Value)
#define Can_SetCanInterruptOldStatusOfControllerData(Index, Value)    Can_GetControllerDataOfPCConfig()[(Index)].CanInterruptOldStatusOfControllerData = (Value)
#define Can_SetIsBusOffOfControllerData(Index, Value)                 Can_GetControllerDataOfPCConfig()[(Index)].IsBusOffOfControllerData = (Value)
#define Can_SetLastInitObjectOfControllerData(Index, Value)           Can_GetControllerDataOfPCConfig()[(Index)].LastInitObjectOfControllerData = (Value)
#define Can_SetLogStatusOfControllerData(Index, Value)                Can_GetControllerDataOfPCConfig()[(Index)].LogStatusOfControllerData = (Value)
#define Can_SetLoopTimeoutOfControllerData(Index, Value)              Can_GetControllerDataOfPCConfig()[(Index)].LoopTimeoutOfControllerData = (Value)
#define Can_SetModeTransitionRequestOfControllerData(Index, Value)    Can_GetControllerDataOfPCConfig()[(Index)].ModeTransitionRequestOfControllerData = (Value)
#define Can_SetRamCheckTransitionRequestOfControllerData(Index, Value) Can_GetControllerDataOfPCConfig()[(Index)].RamCheckTransitionRequestOfControllerData = (Value)
#define Can_SetRxMsgOfControllerData(Index, Value)                    Can_GetControllerDataOfPCConfig()[(Index)].RxMsgOfControllerData = (Value)
#define Can_SetgCanControllerOfControllerData(Index, Value)           Can_GetControllerDataOfPCConfig()[(Index)].gCanControllerOfControllerData = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanPCHasMacros  Can Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Can_HasActiveSendObject()                                     (TRUE != FALSE)
#define Can_HasPduOfActiveSendObject()                                (TRUE != FALSE)
#define Can_HasStateOfActiveSendObject()                              (TRUE != FALSE)
#define Can_HasBaseDll_GeneratorVersion()                             (TRUE != FALSE)
#define Can_HasCanIfChannelId()                                       (TRUE != FALSE)
#define Can_HasControllerConfig()                                     (TRUE != FALSE)
#define Can_HasBusNameOfControllerConfig()                            (TRUE != FALSE)
#define Can_HasCanControllerDefaultBaudrateIdxOfControllerConfig()    (TRUE != FALSE)
#define Can_HasCanControllerDefaultBaudrateOfControllerConfig()       (TRUE != FALSE)
#define Can_HasMailboxRxBasicEndIdxOfControllerConfig()               (TRUE != FALSE)
#define Can_HasMailboxRxBasicLengthOfControllerConfig()               (TRUE != FALSE)
#define Can_HasMailboxRxBasicStartIdxOfControllerConfig()             (TRUE != FALSE)
#define Can_HasMailboxRxBasicUsedOfControllerConfig()                 (TRUE != FALSE)
#define Can_HasMailboxTxBasicEndIdxOfControllerConfig()               (TRUE != FALSE)
#define Can_HasMailboxTxBasicLengthOfControllerConfig()               (TRUE != FALSE)
#define Can_HasMailboxTxBasicStartIdxOfControllerConfig()             (TRUE != FALSE)
#define Can_HasMailboxTxBasicUsedOfControllerConfig()                 (TRUE != FALSE)
#define Can_HasMailboxUnusedEndIdxOfControllerConfig()                (TRUE != FALSE)
#define Can_HasMailboxUnusedLengthOfControllerConfig()                (TRUE != FALSE)
#define Can_HasMailboxUnusedStartIdxOfControllerConfig()              (TRUE != FALSE)
#define Can_HasMailboxUnusedUsedOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasRxBasicHwStartOfControllerConfig()                     (TRUE != FALSE)
#define Can_HasRxBasicHwStopOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasRxFullHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasRxFullHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasTxBasicHwStartOfControllerConfig()                     (TRUE != FALSE)
#define Can_HasTxBasicHwStopOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasTxFullHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasTxFullHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasUnusedHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasUnusedHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasControllerData()                                       (TRUE != FALSE)
#define Can_HasBusOffTransitionRequestOfControllerData()              (TRUE != FALSE)
#define Can_HasCanInterruptCounterOfControllerData()                  (TRUE != FALSE)
#define Can_HasCanInterruptOldStatusOfControllerData()                (TRUE != FALSE)
#define Can_HasIsBusOffOfControllerData()                             (TRUE != FALSE)
#define Can_HasLastInitObjectOfControllerData()                       (TRUE != FALSE)
#define Can_HasLogStatusOfControllerData()                            (TRUE != FALSE)
#define Can_HasLoopTimeoutOfControllerData()                          (TRUE != FALSE)
#define Can_HasModeTransitionRequestOfControllerData()                (TRUE != FALSE)
#define Can_HasRamCheckTransitionRequestOfControllerData()            (TRUE != FALSE)
#define Can_HasRxMsgOfControllerData()                                (TRUE != FALSE)
#define Can_HasgCanControllerOfControllerData()                       (TRUE != FALSE)
#define Can_HasFilter()                                               (TRUE != FALSE)
#define Can_HasBCanHwIdxOfFilter()                                    (TRUE != FALSE)
#define Can_HasBCanHwSizeOfFilter()                                   (TRUE != FALSE)
#define Can_HasBCanLogIdxOfFilter()                                   (TRUE != FALSE)
#define Can_HasCodeOfFilter()                                         (TRUE != FALSE)
#define Can_HasMaskOfFilter()                                         (TRUE != FALSE)
#define Can_HasFilterStartIdx()                                       (TRUE != FALSE)
#define Can_HasInitObject()                                           (TRUE != FALSE)
#define Can_HasarbBaudrateOfInitObject()                              (TRUE != FALSE)
#define Can_HasarbSamOfInitObject()                                   (TRUE != FALSE)
#define Can_HasarbSjwOfInitObject()                                   (TRUE != FALSE)
#define Can_HasarbTseg1OfInitObject()                                 (TRUE != FALSE)
#define Can_HasarbTseg2OfInitObject()                                 (TRUE != FALSE)
#define Can_HasdbrBaudrateOfInitObject()                              (TRUE != FALSE)
#define Can_HasdbrSamOfInitObject()                                   (TRUE != FALSE)
#define Can_HasdbrSjwOfInitObject()                                   (TRUE != FALSE)
#define Can_HasdbrTseg1OfInitObject()                                 (TRUE != FALSE)
#define Can_HasdbrTseg2OfInitObject()                                 (TRUE != FALSE)
#define Can_HasInitObjectBaudrate()                                   (TRUE != FALSE)
#define Can_HasInitObjectStartIndex()                                 (TRUE != FALSE)
#define Can_HasMailbox()                                              (TRUE != FALSE)
#define Can_HasActiveSendObjectOfMailbox()                            (TRUE != FALSE)
#define Can_HasControllerConfigIdxOfMailbox()                         (TRUE != FALSE)
#define Can_HasHwHandleOfMailbox()                                    (TRUE != FALSE)
#define Can_HasIDValueOfMailbox()                                     (TRUE != FALSE)
#define Can_HasIsIndivPollingOfMailbox()                              (TRUE != FALSE)
#define Can_HasMailboxSizeOfMailbox()                                 (TRUE != FALSE)
#define Can_HasMailboxTypeOfMailbox()                                 (TRUE != FALSE)
#define Can_HasMaxDataLenOfMailbox()                                  (TRUE != FALSE)
#define Can_HasMemorySectionsIndexOfMailbox()                         (TRUE != FALSE)
#define Can_HasMemorySectionInfo()                                    (TRUE != FALSE)
#define Can_HasMemorySectionStartOfMemorySectionInfo()                (TRUE != FALSE)
#define Can_HasMemoryStartAddressOfMemorySectionInfo()                (TRUE != FALSE)
#define Can_HasMemorySectionObjects()                                 (TRUE != FALSE)
#define Can_HasHwHandleOfMemorySectionObjects()                       (TRUE != FALSE)
#define Can_HasIsIndivPollingOfMemorySectionObjects()                 (TRUE != FALSE)
#define Can_HasMailboxElementOfMemorySectionObjects()                 (TRUE != FALSE)
#define Can_HasMailboxHandleOfMemorySectionObjects()                  (TRUE != FALSE)
#define Can_HasPlatformDll_GeneratorVersion()                         (TRUE != FALSE)
#define Can_HasSizeOfActiveSendObject()                               (TRUE != FALSE)
#define Can_HasSizeOfCanIfChannelId()                                 (TRUE != FALSE)
#define Can_HasSizeOfControllerConfig()                               (TRUE != FALSE)
#define Can_HasSizeOfControllerData()                                 (TRUE != FALSE)
#define Can_HasSizeOfFilter()                                         (TRUE != FALSE)
#define Can_HasSizeOfFilterStartIdx()                                 (TRUE != FALSE)
#define Can_HasSizeOfInitObject()                                     (TRUE != FALSE)
#define Can_HasSizeOfInitObjectBaudrate()                             (TRUE != FALSE)
#define Can_HasSizeOfInitObjectStartIndex()                           (TRUE != FALSE)
#define Can_HasSizeOfMailbox()                                        (TRUE != FALSE)
#define Can_HasSizeOfMemorySectionInfo()                              (TRUE != FALSE)
#define Can_HasSizeOfMemorySectionObjects()                           (TRUE != FALSE)
#define Can_HasPCConfig()                                             (TRUE != FALSE)
#define Can_HasActiveSendObjectOfPCConfig()                           (TRUE != FALSE)
#define Can_HasBaseDll_GeneratorVersionOfPCConfig()                   (TRUE != FALSE)
#define Can_HasCanIfChannelIdOfPCConfig()                             (TRUE != FALSE)
#define Can_HasControllerConfigOfPCConfig()                           (TRUE != FALSE)
#define Can_HasControllerDataOfPCConfig()                             (TRUE != FALSE)
#define Can_HasFilterOfPCConfig()                                     (TRUE != FALSE)
#define Can_HasFilterStartIdxOfPCConfig()                             (TRUE != FALSE)
#define Can_HasInitObjectBaudrateOfPCConfig()                         (TRUE != FALSE)
#define Can_HasInitObjectOfPCConfig()                                 (TRUE != FALSE)
#define Can_HasInitObjectStartIndexOfPCConfig()                       (TRUE != FALSE)
#define Can_HasMailboxOfPCConfig()                                    (TRUE != FALSE)
#define Can_HasMemorySectionInfoOfPCConfig()                          (TRUE != FALSE)
#define Can_HasMemorySectionObjectsOfPCConfig()                       (TRUE != FALSE)
#define Can_HasPlatformDll_GeneratorVersionOfPCConfig()               (TRUE != FALSE)
#define Can_HasSizeOfActiveSendObjectOfPCConfig()                     (TRUE != FALSE)
#define Can_HasSizeOfCanIfChannelIdOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfControllerConfigOfPCConfig()                     (TRUE != FALSE)
#define Can_HasSizeOfControllerDataOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfFilterOfPCConfig()                               (TRUE != FALSE)
#define Can_HasSizeOfFilterStartIdxOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfInitObjectBaudrateOfPCConfig()                   (TRUE != FALSE)
#define Can_HasSizeOfInitObjectOfPCConfig()                           (TRUE != FALSE)
#define Can_HasSizeOfInitObjectStartIndexOfPCConfig()                 (TRUE != FALSE)
#define Can_HasSizeOfMailboxOfPCConfig()                              (TRUE != FALSE)
#define Can_HasSizeOfMemorySectionInfoOfPCConfig()                    (TRUE != FALSE)
#define Can_HasSizeOfMemorySectionObjectsOfPCConfig()                 (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanPCIncrementDataMacros  Can Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Can_IncPduOfActiveSendObject(Index)                           Can_GetPduOfActiveSendObject(Index)++
#define Can_IncStateOfActiveSendObject(Index)                         Can_GetStateOfActiveSendObject(Index)++
#define Can_IncBusOffTransitionRequestOfControllerData(Index)         Can_GetBusOffTransitionRequestOfControllerData(Index)++
#define Can_IncCanInterruptCounterOfControllerData(Index)             Can_GetCanInterruptCounterOfControllerData(Index)++
#define Can_IncCanInterruptOldStatusOfControllerData(Index)           Can_GetCanInterruptOldStatusOfControllerData(Index)++
#define Can_IncLastInitObjectOfControllerData(Index)                  Can_GetLastInitObjectOfControllerData(Index)++
#define Can_IncLogStatusOfControllerData(Index)                       Can_GetLogStatusOfControllerData(Index)++
#define Can_IncLoopTimeoutOfControllerData(Index)                     Can_GetLoopTimeoutOfControllerData(Index)++
#define Can_IncModeTransitionRequestOfControllerData(Index)           Can_GetModeTransitionRequestOfControllerData(Index)++
#define Can_IncRamCheckTransitionRequestOfControllerData(Index)       Can_GetRamCheckTransitionRequestOfControllerData(Index)++
#define Can_IncRxMsgOfControllerData(Index)                           Can_GetRxMsgOfControllerData(Index)++
#define Can_IncgCanControllerOfControllerData(Index)                  Can_GetgCanControllerOfControllerData(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  CanPCDecrementDataMacros  Can Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Can_DecPduOfActiveSendObject(Index)                           Can_GetPduOfActiveSendObject(Index)--
#define Can_DecStateOfActiveSendObject(Index)                         Can_GetStateOfActiveSendObject(Index)--
#define Can_DecBusOffTransitionRequestOfControllerData(Index)         Can_GetBusOffTransitionRequestOfControllerData(Index)--
#define Can_DecCanInterruptCounterOfControllerData(Index)             Can_GetCanInterruptCounterOfControllerData(Index)--
#define Can_DecCanInterruptOldStatusOfControllerData(Index)           Can_GetCanInterruptOldStatusOfControllerData(Index)--
#define Can_DecLastInitObjectOfControllerData(Index)                  Can_GetLastInitObjectOfControllerData(Index)--
#define Can_DecLogStatusOfControllerData(Index)                       Can_GetLogStatusOfControllerData(Index)--
#define Can_DecLoopTimeoutOfControllerData(Index)                     Can_GetLoopTimeoutOfControllerData(Index)--
#define Can_DecModeTransitionRequestOfControllerData(Index)           Can_GetModeTransitionRequestOfControllerData(Index)--
#define Can_DecRamCheckTransitionRequestOfControllerData(Index)       Can_GetRamCheckTransitionRequestOfControllerData(Index)--
#define Can_DecRxMsgOfControllerData(Index)                           Can_GetRxMsgOfControllerData(Index)--
#define Can_DecgCanControllerOfControllerData(Index)                  Can_GetgCanControllerOfControllerData(Index)--
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

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
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
  \defgroup  CanPCIterableTypes  Can Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Can_ActiveSendObject */
typedef uint8_least Can_ActiveSendObjectIterType;

/**   \brief  type used to iterate Can_CanIfChannelId */
typedef uint8_least Can_CanIfChannelIdIterType;

/**   \brief  type used to iterate Can_ControllerConfig */
typedef uint8_least Can_ControllerConfigIterType;

/**   \brief  type used to iterate Can_Filter */
typedef uint8_least Can_FilterIterType;

/**   \brief  type used to iterate Can_FilterStartIdx */
typedef uint8_least Can_FilterStartIdxIterType;

/**   \brief  type used to iterate Can_InitObject */
typedef uint8_least Can_InitObjectIterType;

/**   \brief  type used to iterate Can_InitObjectBaudrate */
typedef uint8_least Can_InitObjectBaudrateIterType;

/**   \brief  type used to iterate Can_InitObjectStartIndex */
typedef uint8_least Can_InitObjectStartIndexIterType;

/**   \brief  type used to iterate Can_Mailbox */
typedef uint8_least Can_MailboxIterType;

/**   \brief  type used to iterate Can_MemorySectionInfo */
typedef uint8_least Can_MemorySectionInfoIterType;

/**   \brief  type used to iterate Can_MemorySectionObjects */
typedef uint8_least Can_MemorySectionObjectsIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCIterableTypesWithSizeRelations  Can Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Can_ControllerData */
typedef Can_ControllerConfigIterType Can_ControllerDataIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCValueTypes  Can Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Can_PduOfActiveSendObject */
typedef PduIdType Can_PduOfActiveSendObjectType;

/**   \brief  value based type definition for Can_StateOfActiveSendObject */
typedef uint16 Can_StateOfActiveSendObjectType;

/**   \brief  value based type definition for Can_BaseDll_GeneratorVersion */
typedef uint16 Can_BaseDll_GeneratorVersionType;

/**   \brief  value based type definition for Can_CanIfChannelId */
typedef uint8 Can_CanIfChannelIdType;

/**   \brief  value based type definition for Can_CanControllerDefaultBaudrateIdxOfControllerConfig */
typedef uint8 Can_CanControllerDefaultBaudrateIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_CanControllerDefaultBaudrateOfControllerConfig */
typedef uint16 Can_CanControllerDefaultBaudrateOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxBasicEndIdxOfControllerConfig */
typedef uint8 Can_MailboxRxBasicEndIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxBasicLengthOfControllerConfig */
typedef uint8 Can_MailboxRxBasicLengthOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxBasicStartIdxOfControllerConfig */
typedef uint8 Can_MailboxRxBasicStartIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxBasicUsedOfControllerConfig */
typedef boolean Can_MailboxRxBasicUsedOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxBasicEndIdxOfControllerConfig */
typedef uint8 Can_MailboxTxBasicEndIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxBasicLengthOfControllerConfig */
typedef uint8 Can_MailboxTxBasicLengthOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxBasicStartIdxOfControllerConfig */
typedef uint8 Can_MailboxTxBasicStartIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxBasicUsedOfControllerConfig */
typedef boolean Can_MailboxTxBasicUsedOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxUnusedEndIdxOfControllerConfig */
typedef uint8 Can_MailboxUnusedEndIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxUnusedLengthOfControllerConfig */
typedef uint8 Can_MailboxUnusedLengthOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxUnusedStartIdxOfControllerConfig */
typedef uint8 Can_MailboxUnusedStartIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxUnusedUsedOfControllerConfig */
typedef boolean Can_MailboxUnusedUsedOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHwStartOfControllerConfig */
typedef uint8 Can_RxBasicHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHwStopOfControllerConfig */
typedef uint8 Can_RxBasicHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHwStartOfControllerConfig */
typedef uint8 Can_RxFullHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHwStopOfControllerConfig */
typedef uint8 Can_RxFullHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHwStartOfControllerConfig */
typedef uint8 Can_TxBasicHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHwStopOfControllerConfig */
typedef uint8 Can_TxBasicHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHwStartOfControllerConfig */
typedef uint8 Can_TxFullHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHwStopOfControllerConfig */
typedef uint8 Can_TxFullHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHwStartOfControllerConfig */
typedef uint8 Can_UnusedHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHwStopOfControllerConfig */
typedef uint8 Can_UnusedHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_BusOffTransitionRequestOfControllerData */
typedef uint8 Can_BusOffTransitionRequestOfControllerDataType;

/**   \brief  value based type definition for Can_CanInterruptCounterOfControllerData */
typedef uint8 Can_CanInterruptCounterOfControllerDataType;

/**   \brief  value based type definition for Can_IsBusOffOfControllerData */
typedef boolean Can_IsBusOffOfControllerDataType;

/**   \brief  value based type definition for Can_LastInitObjectOfControllerData */
typedef uint8 Can_LastInitObjectOfControllerDataType;

/**   \brief  value based type definition for Can_LogStatusOfControllerData */
typedef uint8 Can_LogStatusOfControllerDataType;

/**   \brief  value based type definition for Can_ModeTransitionRequestOfControllerData */
typedef uint8 Can_ModeTransitionRequestOfControllerDataType;

/**   \brief  value based type definition for Can_RamCheckTransitionRequestOfControllerData */
typedef uint8 Can_RamCheckTransitionRequestOfControllerDataType;

/**   \brief  value based type definition for Can_BCanHwIdxOfFilter */
typedef uint8 Can_BCanHwIdxOfFilterType;

/**   \brief  value based type definition for Can_BCanHwSizeOfFilter */
typedef uint8 Can_BCanHwSizeOfFilterType;

/**   \brief  value based type definition for Can_BCanLogIdxOfFilter */
typedef uint8 Can_BCanLogIdxOfFilterType;

/**   \brief  value based type definition for Can_CodeOfFilter */
typedef uint8 Can_CodeOfFilterType;

/**   \brief  value based type definition for Can_MaskOfFilter */
typedef uint32 Can_MaskOfFilterType;

/**   \brief  value based type definition for Can_FilterStartIdx */
typedef uint8 Can_FilterStartIdxType;

/**   \brief  value based type definition for Can_arbBaudrateOfInitObject */
typedef uint32 Can_arbBaudrateOfInitObjectType;

/**   \brief  value based type definition for Can_arbSamOfInitObject */
typedef uint8 Can_arbSamOfInitObjectType;

/**   \brief  value based type definition for Can_arbSjwOfInitObject */
typedef uint8 Can_arbSjwOfInitObjectType;

/**   \brief  value based type definition for Can_arbTseg1OfInitObject */
typedef uint8 Can_arbTseg1OfInitObjectType;

/**   \brief  value based type definition for Can_arbTseg2OfInitObject */
typedef uint8 Can_arbTseg2OfInitObjectType;

/**   \brief  value based type definition for Can_dbrBaudrateOfInitObject */
typedef uint8 Can_dbrBaudrateOfInitObjectType;

/**   \brief  value based type definition for Can_dbrSamOfInitObject */
typedef uint8 Can_dbrSamOfInitObjectType;

/**   \brief  value based type definition for Can_dbrSjwOfInitObject */
typedef uint8 Can_dbrSjwOfInitObjectType;

/**   \brief  value based type definition for Can_dbrTseg1OfInitObject */
typedef uint8 Can_dbrTseg1OfInitObjectType;

/**   \brief  value based type definition for Can_dbrTseg2OfInitObject */
typedef uint8 Can_dbrTseg2OfInitObjectType;

/**   \brief  value based type definition for Can_InitObjectBaudrate */
typedef uint16 Can_InitObjectBaudrateType;

/**   \brief  value based type definition for Can_InitObjectStartIndex */
typedef uint8 Can_InitObjectStartIndexType;

/**   \brief  value based type definition for Can_ActiveSendObjectOfMailbox */
typedef uint8 Can_ActiveSendObjectOfMailboxType;

/**   \brief  value based type definition for Can_ControllerConfigIdxOfMailbox */
typedef uint8 Can_ControllerConfigIdxOfMailboxType;

/**   \brief  value based type definition for Can_HwHandleOfMailbox */
typedef uint8 Can_HwHandleOfMailboxType;

/**   \brief  value based type definition for Can_IDValueOfMailbox */
typedef uint8 Can_IDValueOfMailboxType;

/**   \brief  value based type definition for Can_IsIndivPollingOfMailbox */
typedef boolean Can_IsIndivPollingOfMailboxType;

/**   \brief  value based type definition for Can_MailboxSizeOfMailbox */
typedef uint8 Can_MailboxSizeOfMailboxType;

/**   \brief  value based type definition for Can_MailboxTypeOfMailbox */
typedef uint8 Can_MailboxTypeOfMailboxType;

/**   \brief  value based type definition for Can_MaxDataLenOfMailbox */
typedef uint8 Can_MaxDataLenOfMailboxType;

/**   \brief  value based type definition for Can_MemorySectionsIndexOfMailbox */
typedef uint8 Can_MemorySectionsIndexOfMailboxType;

/**   \brief  value based type definition for Can_MemorySectionStartOfMemorySectionInfo */
typedef uint8 Can_MemorySectionStartOfMemorySectionInfoType;

/**   \brief  value based type definition for Can_MemoryStartAddressOfMemorySectionInfo */
typedef uint32 Can_MemoryStartAddressOfMemorySectionInfoType;

/**   \brief  value based type definition for Can_HwHandleOfMemorySectionObjects */
typedef uint8 Can_HwHandleOfMemorySectionObjectsType;

/**   \brief  value based type definition for Can_IsIndivPollingOfMemorySectionObjects */
typedef boolean Can_IsIndivPollingOfMemorySectionObjectsType;

/**   \brief  value based type definition for Can_MailboxElementOfMemorySectionObjects */
typedef uint8 Can_MailboxElementOfMemorySectionObjectsType;

/**   \brief  value based type definition for Can_MailboxHandleOfMemorySectionObjects */
typedef uint8 Can_MailboxHandleOfMemorySectionObjectsType;

/**   \brief  value based type definition for Can_PlatformDll_GeneratorVersion */
typedef uint16 Can_PlatformDll_GeneratorVersionType;

/**   \brief  value based type definition for Can_SizeOfActiveSendObject */
typedef uint8 Can_SizeOfActiveSendObjectType;

/**   \brief  value based type definition for Can_SizeOfCanIfChannelId */
typedef uint8 Can_SizeOfCanIfChannelIdType;

/**   \brief  value based type definition for Can_SizeOfControllerConfig */
typedef uint8 Can_SizeOfControllerConfigType;

/**   \brief  value based type definition for Can_SizeOfControllerData */
typedef uint8 Can_SizeOfControllerDataType;

/**   \brief  value based type definition for Can_SizeOfFilter */
typedef uint8 Can_SizeOfFilterType;

/**   \brief  value based type definition for Can_SizeOfFilterStartIdx */
typedef uint8 Can_SizeOfFilterStartIdxType;

/**   \brief  value based type definition for Can_SizeOfInitObject */
typedef uint8 Can_SizeOfInitObjectType;

/**   \brief  value based type definition for Can_SizeOfInitObjectBaudrate */
typedef uint8 Can_SizeOfInitObjectBaudrateType;

/**   \brief  value based type definition for Can_SizeOfInitObjectStartIndex */
typedef uint8 Can_SizeOfInitObjectStartIndexType;

/**   \brief  value based type definition for Can_SizeOfMailbox */
typedef uint8 Can_SizeOfMailboxType;

/**   \brief  value based type definition for Can_SizeOfMemorySectionInfo */
typedef uint8 Can_SizeOfMemorySectionInfoType;

/**   \brief  value based type definition for Can_SizeOfMemorySectionObjects */
typedef uint8 Can_SizeOfMemorySectionObjectsType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanPCStructTypes  Can Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Can_ActiveSendObject */
typedef struct sCan_ActiveSendObjectType
{
  Can_StateOfActiveSendObjectType StateOfActiveSendObject;  /**< send state like cancelled or send activ */
  Can_PduOfActiveSendObjectType PduOfActiveSendObject;  /**< buffered PduId for confirmation or cancellation */
} Can_ActiveSendObjectType;

/**   \brief  type used in Can_ControllerConfig */
typedef struct sCan_ControllerConfigType
{
  Can_CanControllerDefaultBaudrateOfControllerConfigType CanControllerDefaultBaudrateOfControllerConfig;
  Can_CanControllerDefaultBaudrateIdxOfControllerConfigType CanControllerDefaultBaudrateIdxOfControllerConfig;
  Can_MailboxRxBasicEndIdxOfControllerConfigType MailboxRxBasicEndIdxOfControllerConfig;  /**< the end index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxRxBasicLengthOfControllerConfigType MailboxRxBasicLengthOfControllerConfig;  /**< the number of relations pointing to Can_Mailbox */
  Can_MailboxRxBasicStartIdxOfControllerConfigType MailboxRxBasicStartIdxOfControllerConfig;  /**< the start index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxTxBasicEndIdxOfControllerConfigType MailboxTxBasicEndIdxOfControllerConfig;  /**< the end index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxTxBasicLengthOfControllerConfigType MailboxTxBasicLengthOfControllerConfig;  /**< the number of relations pointing to Can_Mailbox */
  Can_MailboxTxBasicStartIdxOfControllerConfigType MailboxTxBasicStartIdxOfControllerConfig;  /**< the start index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxUnusedEndIdxOfControllerConfigType MailboxUnusedEndIdxOfControllerConfig;  /**< the end index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxUnusedLengthOfControllerConfigType MailboxUnusedLengthOfControllerConfig;  /**< the number of relations pointing to Can_Mailbox */
  Can_MailboxUnusedStartIdxOfControllerConfigType MailboxUnusedStartIdxOfControllerConfig;  /**< the start index of the 0:n relation pointing to Can_Mailbox */
  Can_RxBasicHwStartOfControllerConfigType RxBasicHwStartOfControllerConfig;
  Can_RxBasicHwStopOfControllerConfigType RxBasicHwStopOfControllerConfig;
  Can_RxFullHwStartOfControllerConfigType RxFullHwStartOfControllerConfig;
  Can_RxFullHwStopOfControllerConfigType RxFullHwStopOfControllerConfig;
  Can_TxBasicHwStartOfControllerConfigType TxBasicHwStartOfControllerConfig;
  Can_TxBasicHwStopOfControllerConfigType TxBasicHwStopOfControllerConfig;
  Can_TxFullHwStartOfControllerConfigType TxFullHwStartOfControllerConfig;
  Can_TxFullHwStopOfControllerConfigType TxFullHwStopOfControllerConfig;
  Can_UnusedHwStartOfControllerConfigType UnusedHwStartOfControllerConfig;
  Can_UnusedHwStopOfControllerConfigType UnusedHwStopOfControllerConfig;
  Can_BusNameType BusNameOfControllerConfig;  /**< controller to hardware mapping */
} Can_ControllerConfigType;

/**   \brief  type used in Can_ControllerData */
typedef struct sCan_ControllerDataType
{
  Can_BusOffTransitionRequestOfControllerDataType BusOffTransitionRequestOfControllerData;  /**< CAN state request for each controller: ContinueBusOffRecovery=0x00, FinishBusOffRecovery=0x01 */
  Can_CanInterruptCounterOfControllerDataType CanInterruptCounterOfControllerData;  /**< CAN interrupt disable counter for each controller */
  Can_IsBusOffOfControllerDataType IsBusOffOfControllerData;  /**< CAN state for each controller: busoff occur */
  Can_LastInitObjectOfControllerDataType LastInitObjectOfControllerData;  /**< last set baudrate for reinit */
  Can_LogStatusOfControllerDataType LogStatusOfControllerData;  /**< CAN state for each controller: UNINIT=0x00, START=0x01, STOP=0x02, INIT=0x04, INCONSISTENT=0x08, WARNING =0x10, PASSIVE=0x20, BUSOFF=0x40, SLEEP=0x80 */
  Can_ModeTransitionRequestOfControllerDataType ModeTransitionRequestOfControllerData;  /**< CAN state request for each controller: INIT=0x00, SLEEP=0x01, WAKEUP=0x02, STOP+INIT=0x03, START=0x04, START+INIT=0x05, NONE=0x06 */
  Can_RamCheckTransitionRequestOfControllerDataType RamCheckTransitionRequestOfControllerData;  /**< CAN state request for each controller: kCanSuppressRamCheck=0x01, kCanExecuteRamCheck=0x00 */
  tCanLLCanIntOld CanInterruptOldStatusOfControllerData;  /**< last CAN interrupt status for restore interrupt for each controller */
  Can_LoopTimeout_dim_type LoopTimeoutOfControllerData;  /**< hw loop timeout for each controller */
  Can_MsgDataStructType RxMsgOfControllerData;  /**< received data buffer */
  Can_ControllerType gCanControllerOfControllerData;  /**< emulated hardware layout and status */
} Can_ControllerDataType;

/**   \brief  type used in Can_Filter */
typedef struct sCan_FilterType
{
  Can_MaskOfFilterType MaskOfFilter;
  Can_BCanHwIdxOfFilterType BCanHwIdxOfFilter;
  Can_BCanHwSizeOfFilterType BCanHwSizeOfFilter;
  Can_BCanLogIdxOfFilterType BCanLogIdxOfFilter;
  Can_CodeOfFilterType CodeOfFilter;
} Can_FilterType;

/**   \brief  type used in Can_InitObject */
typedef struct sCan_InitObjectType
{
  Can_arbBaudrateOfInitObjectType arbBaudrateOfInitObject;
  Can_arbSamOfInitObjectType arbSamOfInitObject;
  Can_arbSjwOfInitObjectType arbSjwOfInitObject;
  Can_arbTseg1OfInitObjectType arbTseg1OfInitObject;
  Can_arbTseg2OfInitObjectType arbTseg2OfInitObject;
  Can_dbrBaudrateOfInitObjectType dbrBaudrateOfInitObject;
  Can_dbrSamOfInitObjectType dbrSamOfInitObject;
  Can_dbrSjwOfInitObjectType dbrSjwOfInitObject;
  Can_dbrTseg1OfInitObjectType dbrTseg1OfInitObject;
  Can_dbrTseg2OfInitObjectType dbrTseg2OfInitObject;
} Can_InitObjectType;

/**   \brief  type used in Can_Mailbox */
typedef struct sCan_MailboxType
{
  Can_IsIndivPollingOfMailboxType IsIndivPollingOfMailbox;
  Can_ActiveSendObjectOfMailboxType ActiveSendObjectOfMailbox;
  Can_ControllerConfigIdxOfMailboxType ControllerConfigIdxOfMailbox;  /**< the index of the 1:1 relation pointing to Can_ControllerConfig */
  Can_HwHandleOfMailboxType HwHandleOfMailbox;
  Can_IDValueOfMailboxType IDValueOfMailbox;
  Can_MailboxSizeOfMailboxType MailboxSizeOfMailbox;
  Can_MailboxTypeOfMailboxType MailboxTypeOfMailbox;
  Can_MaxDataLenOfMailboxType MaxDataLenOfMailbox;
  Can_MemorySectionsIndexOfMailboxType MemorySectionsIndexOfMailbox;
} Can_MailboxType;

/**   \brief  type used in Can_MemorySectionInfo */
typedef struct sCan_MemorySectionInfoType
{
  Can_MemoryStartAddressOfMemorySectionInfoType MemoryStartAddressOfMemorySectionInfo;
  Can_MemorySectionStartOfMemorySectionInfoType MemorySectionStartOfMemorySectionInfo;
} Can_MemorySectionInfoType;

/**   \brief  type used in Can_MemorySectionObjects */
typedef struct sCan_MemorySectionObjectsType
{
  Can_IsIndivPollingOfMemorySectionObjectsType IsIndivPollingOfMemorySectionObjects;
  Can_HwHandleOfMemorySectionObjectsType HwHandleOfMemorySectionObjects;
  Can_MailboxElementOfMemorySectionObjectsType MailboxElementOfMemorySectionObjects;
  Can_MailboxHandleOfMemorySectionObjectsType MailboxHandleOfMemorySectionObjects;
} Can_MemorySectionObjectsType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCRootPointerTypes  Can Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to Can_ActiveSendObject */
typedef P2VAR(Can_ActiveSendObjectType, TYPEDEF, CAN_VAR_NOINIT) Can_ActiveSendObjectPtrType;

/**   \brief  type used to point to Can_CanIfChannelId */
typedef P2CONST(Can_CanIfChannelIdType, TYPEDEF, CAN_CONST) Can_CanIfChannelIdPtrType;

/**   \brief  type used to point to Can_ControllerConfig */
typedef P2CONST(Can_ControllerConfigType, TYPEDEF, CAN_CONST) Can_ControllerConfigPtrType;

/**   \brief  type used to point to Can_ControllerData */
typedef P2VAR(Can_ControllerDataType, TYPEDEF, CAN_VAR_NOINIT) Can_ControllerDataPtrType;

/**   \brief  type used to point to Can_Filter */
typedef P2CONST(Can_FilterType, TYPEDEF, CAN_CONST) Can_FilterPtrType;

/**   \brief  type used to point to Can_FilterStartIdx */
typedef P2CONST(Can_FilterStartIdxType, TYPEDEF, CAN_CONST) Can_FilterStartIdxPtrType;

/**   \brief  type used to point to Can_InitObject */
typedef P2CONST(Can_InitObjectType, TYPEDEF, CAN_CONST) Can_InitObjectPtrType;

/**   \brief  type used to point to Can_InitObjectBaudrate */
typedef P2CONST(Can_InitObjectBaudrateType, TYPEDEF, CAN_CONST) Can_InitObjectBaudratePtrType;

/**   \brief  type used to point to Can_InitObjectStartIndex */
typedef P2CONST(Can_InitObjectStartIndexType, TYPEDEF, CAN_CONST) Can_InitObjectStartIndexPtrType;

/**   \brief  type used to point to Can_Mailbox */
typedef P2CONST(Can_MailboxType, TYPEDEF, CAN_CONST) Can_MailboxPtrType;

/**   \brief  type used to point to Can_MemorySectionInfo */
typedef P2CONST(Can_MemorySectionInfoType, TYPEDEF, CAN_CONST) Can_MemorySectionInfoPtrType;

/**   \brief  type used to point to Can_MemorySectionObjects */
typedef P2CONST(Can_MemorySectionObjectsType, TYPEDEF, CAN_CONST) Can_MemorySectionObjectsPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCRootValueTypes  Can Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Can_PCConfig */
typedef struct sCan_PCConfigType
{
  uint8 Can_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Can_PCConfigType;

typedef Can_PCConfigType Can_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Can_CanIfChannelId
**********************************************************************************************************************/
/** 
  \var    Can_CanIfChannelId
  \brief  indirection table Can to CanIf controller ID
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Can_CanIfChannelIdType, CAN_CONST) Can_CanIfChannelId[1];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerConfig
**********************************************************************************************************************/
/** 
  \var    Can_ControllerConfig
  \brief  Global configuration for all controllers
  \details
  Element                            Description
  CanControllerDefaultBaudrate   
  CanControllerDefaultBaudrateIdx
  MailboxRxBasicEndIdx               the end index of the 0:n relation pointing to Can_Mailbox
  MailboxRxBasicLength               the number of relations pointing to Can_Mailbox
  MailboxRxBasicStartIdx             the start index of the 0:n relation pointing to Can_Mailbox
  MailboxTxBasicEndIdx               the end index of the 0:n relation pointing to Can_Mailbox
  MailboxTxBasicLength               the number of relations pointing to Can_Mailbox
  MailboxTxBasicStartIdx             the start index of the 0:n relation pointing to Can_Mailbox
  MailboxUnusedEndIdx                the end index of the 0:n relation pointing to Can_Mailbox
  MailboxUnusedLength                the number of relations pointing to Can_Mailbox
  MailboxUnusedStartIdx              the start index of the 0:n relation pointing to Can_Mailbox
  RxBasicHwStart                 
  RxBasicHwStop                  
  RxFullHwStart                  
  RxFullHwStop                   
  TxBasicHwStart                 
  TxBasicHwStop                  
  TxFullHwStart                  
  TxFullHwStop                   
  UnusedHwStart                  
  UnusedHwStop                   
  BusName                            controller to hardware mapping
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Can_ControllerConfigType, CAN_CONST) Can_ControllerConfig[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_Filter
**********************************************************************************************************************/
/** 
  \var    Can_Filter
  \brief  filter configuration
  \details
  Element       Description
  Mask      
  BCanHwIdx 
  BCanHwSize
  BCanLogIdx
  Code      
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Can_FilterType, CAN_CONST) Can_Filter[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_FilterStartIdx
**********************************************************************************************************************/
/** 
  \var    Can_FilterStartIdx
  \brief  Start index for filters (Controller - BasicCAN - indexed)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Can_FilterStartIdxType, CAN_CONST) Can_FilterStartIdx[2];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObject
**********************************************************************************************************************/
/** 
  \var    Can_InitObject
  \brief  baudrate settings
  \details
  Element        Description
  arbBaudrate
  arbSam     
  arbSjw     
  arbTseg1   
  arbTseg2   
  dbrBaudrate
  dbrSam     
  dbrSjw     
  dbrTseg1   
  dbrTseg2   
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Can_InitObjectType, CAN_CONST) Can_InitObject[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectBaudrate
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectBaudrate
  \brief  baudrates ('InitStruct' as index)
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Can_InitObjectBaudrateType, CAN_CONST) Can_InitObjectBaudrate[1];
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectStartIndex
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectStartIndex
  \brief  Start index of 'InitStruct' / baudratesets (controllers as index)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Can_InitObjectStartIndexType, CAN_CONST) Can_InitObjectStartIndex[2];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_Mailbox
**********************************************************************************************************************/
/** 
  \var    Can_Mailbox
  \brief  mailbox configuration (over all controllers)
  \details
  Element                Description
  IsIndivPolling     
  ActiveSendObject   
  ControllerConfigIdx    the index of the 1:1 relation pointing to Can_ControllerConfig
  HwHandle           
  IDValue            
  MailboxSize        
  MailboxType        
  MaxDataLen         
  MemorySectionsIndex
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Can_MailboxType, CAN_CONST) Can_Mailbox[3];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_MemorySectionInfo
**********************************************************************************************************************/
/** 
  \var    Can_MemorySectionInfo
  \brief  Memory section description
  \details
  Element               Description
  MemoryStartAddress
  MemorySectionStart
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Can_MemorySectionInfoType, CAN_CONST) Can_MemorySectionInfo[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_MemorySectionObjects
**********************************************************************************************************************/
/** 
  \var    Can_MemorySectionObjects
  \brief  Memory section objects description
  \details
  Element           Description
  IsIndivPolling
  HwHandle      
  MailboxElement
  MailboxHandle 
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Can_MemorySectionObjectsType, CAN_CONST) Can_MemorySectionObjects[250];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendObject
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendObject
  \brief  temporary data for TX object
  \details
  Element    Description
  State      send state like cancelled or send activ
  Pdu        buffered PduId for confirmation or cancellation
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Can_ActiveSendObjectType, CAN_VAR_NOINIT) Can_ActiveSendObject[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerData
**********************************************************************************************************************/
/** 
  \var    Can_ControllerData
  \brief  struct for all controller related variable data
  \details
  Element                      Description
  BusOffTransitionRequest      CAN state request for each controller: ContinueBusOffRecovery=0x00, FinishBusOffRecovery=0x01
  CanInterruptCounter          CAN interrupt disable counter for each controller
  IsBusOff                     CAN state for each controller: busoff occur
  LastInitObject               last set baudrate for reinit
  LogStatus                    CAN state for each controller: UNINIT=0x00, START=0x01, STOP=0x02, INIT=0x04, INCONSISTENT=0x08, WARNING =0x10, PASSIVE=0x20, BUSOFF=0x40, SLEEP=0x80
  ModeTransitionRequest        CAN state request for each controller: INIT=0x00, SLEEP=0x01, WAKEUP=0x02, STOP+INIT=0x03, START=0x04, START+INIT=0x05, NONE=0x06
  RamCheckTransitionRequest    CAN state request for each controller: kCanSuppressRamCheck=0x01, kCanExecuteRamCheck=0x00
  CanInterruptOldStatus        last CAN interrupt status for restore interrupt for each controller
  LoopTimeout                  hw loop timeout for each controller
  RxMsg                        received data buffer
  gCanController               emulated hardware layout and status
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Can_ControllerDataType, CAN_VAR_NOINIT) Can_ControllerData[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* -----------------------------------------------------------------------------
    UserConfigFile
 ----------------------------------------------------------------------------- */
/* User Config File Start */

/* User Config File End */



#endif  /* CAN_CFG_H */
/**********************************************************************************************************************
  END OF FILE: Can_Cfg.h
**********************************************************************************************************************/
 

