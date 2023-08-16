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
 *              File: Can_Lcfg.c
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


#define CAN_LCFG_SOURCE

/* PRQA S 0779 EOF */ /* MD_MSR_Rule5.2 */

/* -----------------------------------------------------------------------------
    Includes
 ----------------------------------------------------------------------------- */

#include "Can_Cfg.h"

/* -----------------------------------------------------------------------------
    Hw specific
 ----------------------------------------------------------------------------- */
/* HW specific CT global C file */

/* PRQA S 0612 EOF */ /* Can_gCanController variable exceed 32kByte of space, but is OK for VTT */

/* !HW specific CT global C file */

/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
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
CONST(Can_CanIfChannelIdType, CAN_CONST) Can_CanIfChannelId[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     CanIfChannelId      Comment */
  /*     0 */              0u   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
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
CONST(Can_ControllerConfigType, CAN_CONST) Can_ControllerConfig[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CanControllerDefaultBaudrate  CanControllerDefaultBaudrateIdx  MailboxRxBasicEndIdx                                                                                                                                                                    MailboxRxBasicLength                                                                                                                                                                    MailboxRxBasicStartIdx                                                                                                                                                                    MailboxTxBasicEndIdx                                                                                                                                                                    MailboxTxBasicLength                                                                                                                                                                    MailboxTxBasicStartIdx                                                                                                                                                                    MailboxUnusedEndIdx                                                                                                                                                                   MailboxUnusedLength                                                                                                                                                                   MailboxUnusedStartIdx                                                                                                                                                                   RxBasicHwStart  RxBasicHwStop  RxFullHwStart  RxFullHwStop  TxBasicHwStart  TxBasicHwStop  TxFullHwStart  TxFullHwStop  UnusedHwStart  UnusedHwStop  BusName                                             Comment                                                        Referable Keys */
  { /*     0 */                         500u,                              0u,                   2u  /* RX_BASICCAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController) */,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController) */,                     1u  /* RX_BASICCAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController) */,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController) */,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController) */,                     0u  /* TX_BASICCAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController) */,                  3u  /* UNUSED_CAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController) */,                  1u  /* UNUSED_CAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController) */,                    2u  /* UNUSED_CAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController) */,             1u,            6u,            1u,           1u,             0u,            1u,            0u,           0u,            6u,         250u, {67,65,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} }   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */  /* [/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
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
CONST(Can_FilterType, CAN_CONST) Can_Filter[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Mask         BCanHwIdx  BCanHwSize  BCanLogIdx  Code         Comment */
  { /*     0 */ 0x80000000u,        1u,         5u,         0u, 0x00u }   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx - CanFilterMask] */
};
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
CONST(Can_FilterStartIdxType, CAN_CONST) Can_FilterStartIdx[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     FilterStartIdx      Comment */
  /*     0 */              0u,  /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
  /*     1 */              1u   /* [Stop Index] */
};
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
CONST(Can_InitObjectType, CAN_CONST) Can_InitObject[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    arbBaudrate  arbSam  arbSjw  arbTseg1  arbTseg2  dbrBaudrate  dbrSam  dbrSjw  dbrTseg1  dbrTseg2        Comment */
  { /*     0 */     500000u,     0u,     1u,      11u,       4u,          0u,     0u,     0u,       0u,       0u }   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - CanControllerBaudrateConfig] */
};
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
CONST(Can_InitObjectBaudrateType, CAN_CONST) Can_InitObjectBaudrate[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitObjectBaudrate      Comment */
  /*     0 */                500u   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - CanControllerBaudrateConfig] */
};
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
CONST(Can_InitObjectStartIndexType, CAN_CONST) Can_InitObjectStartIndex[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitObjectStartIndex      Comment */
  /*     0 */                    0u,  /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
  /*     1 */                    1u   /* [stop index] */
};
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
CONST(Can_MailboxType, CAN_CONST) Can_Mailbox[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    IsIndivPolling  ActiveSendObject  ControllerConfigIdx                                                                                          HwHandle  IDValue  MailboxSize  MailboxType                                MaxDataLen  MemorySectionsIndex        Comment                                                          Referable Keys */
  { /*     0 */           TRUE,               0u,                  0u  /* /ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 */,       0u,   0x00u,          1u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                  0u },  /* [Connector_eJAD_AC_ECU_5f730b4d60fd8937_17d2a688_Tx] */  /* [/ActiveEcuC/VTTCan/CanConfigSet/Connector_eJAD_AC_ECU_5f730b4d60fd8937_17d2a688_Tx (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanHardwareObject), /ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728, TX_BASICCAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController)] */
  { /*     1 */           TRUE,               0u,                  0u  /* /ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 */,       1u,   0x00u,          5u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                  1u },  /* [Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx] */  /* [/ActiveEcuC/VTTCan/CanConfigSet/Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanHardwareObject), /ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728, RX_BASICCAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController)] */
  { /*     2 */          FALSE,               0u,                  0u  /* /ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 */,       6u,   0x00u,        244u,  CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX,         0u,                  6u }   /* []                                                   */  /* [undefined, /ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728, UNUSED_CAN_TYPE/ActiveEcuC/VTTCan/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/VTT/VTTCan/CanConfigSet/CanController)] */
};
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
CONST(Can_MemorySectionInfoType, CAN_CONST) Can_MemorySectionInfo[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MemoryStartAddress  MemorySectionStart        Comment */
  { /*     0 */        0x15555555u,                 0u }   /* [MemorySection: Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
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
CONST(Can_MemorySectionObjectsType, CAN_CONST) Can_MemorySectionObjects[250] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    IsIndivPolling  HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*     0 */           TRUE,       0u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Connector_eJAD_AC_ECU_5f730b4d60fd8937_17d2a688_Tx] */
  { /*     1 */           TRUE,       1u,             0u,            1u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx] */
  { /*     2 */           TRUE,       2u,             1u,            1u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx] */
  { /*     3 */           TRUE,       3u,             2u,            1u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx] */
  { /*     4 */           TRUE,       4u,             3u,            1u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx] */
  { /*     5 */           TRUE,       5u,             4u,            1u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx] */
  { /*     6 */          FALSE,       6u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*     7 */          FALSE,       7u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*     8 */          FALSE,       8u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*     9 */          FALSE,       9u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    10 */          FALSE,      10u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    11 */          FALSE,      11u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    12 */          FALSE,      12u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    13 */          FALSE,      13u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    14 */          FALSE,      14u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    15 */          FALSE,      15u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    16 */          FALSE,      16u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    17 */          FALSE,      17u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    18 */          FALSE,      18u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    19 */          FALSE,      19u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    20 */          FALSE,      20u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    21 */          FALSE,      21u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    22 */          FALSE,      22u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    23 */          FALSE,      23u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    24 */          FALSE,      24u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    25 */          FALSE,      25u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    26 */          FALSE,      26u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    27 */          FALSE,      27u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    28 */          FALSE,      28u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    29 */          FALSE,      29u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    30 */          FALSE,      30u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    31 */          FALSE,      31u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    32 */          FALSE,      32u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    33 */          FALSE,      33u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    34 */          FALSE,      34u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    35 */          FALSE,      35u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    36 */          FALSE,      36u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    37 */          FALSE,      37u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    38 */          FALSE,      38u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    39 */          FALSE,      39u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    40 */          FALSE,      40u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    41 */          FALSE,      41u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    42 */          FALSE,      42u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    43 */          FALSE,      43u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    44 */          FALSE,      44u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    45 */          FALSE,      45u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    46 */          FALSE,      46u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    47 */          FALSE,      47u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    48 */          FALSE,      48u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    49 */          FALSE,      49u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
    /* Index    IsIndivPolling  HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*    50 */          FALSE,      50u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    51 */          FALSE,      51u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    52 */          FALSE,      52u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    53 */          FALSE,      53u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    54 */          FALSE,      54u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    55 */          FALSE,      55u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    56 */          FALSE,      56u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    57 */          FALSE,      57u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    58 */          FALSE,      58u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    59 */          FALSE,      59u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    60 */          FALSE,      60u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    61 */          FALSE,      61u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    62 */          FALSE,      62u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    63 */          FALSE,      63u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    64 */          FALSE,      64u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    65 */          FALSE,      65u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    66 */          FALSE,      66u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    67 */          FALSE,      67u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    68 */          FALSE,      68u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    69 */          FALSE,      69u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    70 */          FALSE,      70u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    71 */          FALSE,      71u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    72 */          FALSE,      72u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    73 */          FALSE,      73u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    74 */          FALSE,      74u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    75 */          FALSE,      75u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    76 */          FALSE,      76u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    77 */          FALSE,      77u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    78 */          FALSE,      78u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    79 */          FALSE,      79u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    80 */          FALSE,      80u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    81 */          FALSE,      81u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    82 */          FALSE,      82u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    83 */          FALSE,      83u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    84 */          FALSE,      84u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    85 */          FALSE,      85u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    86 */          FALSE,      86u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    87 */          FALSE,      87u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    88 */          FALSE,      88u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    89 */          FALSE,      89u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    90 */          FALSE,      90u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    91 */          FALSE,      91u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    92 */          FALSE,      92u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    93 */          FALSE,      93u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    94 */          FALSE,      94u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    95 */          FALSE,      95u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    96 */          FALSE,      96u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    97 */          FALSE,      97u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    98 */          FALSE,      98u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*    99 */          FALSE,      99u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
    /* Index    IsIndivPolling  HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*   100 */          FALSE,     100u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   101 */          FALSE,     101u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   102 */          FALSE,     102u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   103 */          FALSE,     103u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   104 */          FALSE,     104u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   105 */          FALSE,     105u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   106 */          FALSE,     106u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   107 */          FALSE,     107u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   108 */          FALSE,     108u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   109 */          FALSE,     109u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   110 */          FALSE,     110u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   111 */          FALSE,     111u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   112 */          FALSE,     112u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   113 */          FALSE,     113u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   114 */          FALSE,     114u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   115 */          FALSE,     115u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   116 */          FALSE,     116u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   117 */          FALSE,     117u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   118 */          FALSE,     118u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   119 */          FALSE,     119u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   120 */          FALSE,     120u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   121 */          FALSE,     121u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   122 */          FALSE,     122u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   123 */          FALSE,     123u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   124 */          FALSE,     124u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   125 */          FALSE,     125u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   126 */          FALSE,     126u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   127 */          FALSE,     127u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   128 */          FALSE,     128u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   129 */          FALSE,     129u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   130 */          FALSE,     130u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   131 */          FALSE,     131u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   132 */          FALSE,     132u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   133 */          FALSE,     133u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   134 */          FALSE,     134u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   135 */          FALSE,     135u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   136 */          FALSE,     136u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   137 */          FALSE,     137u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   138 */          FALSE,     138u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   139 */          FALSE,     139u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   140 */          FALSE,     140u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   141 */          FALSE,     141u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   142 */          FALSE,     142u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   143 */          FALSE,     143u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   144 */          FALSE,     144u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   145 */          FALSE,     145u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   146 */          FALSE,     146u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   147 */          FALSE,     147u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   148 */          FALSE,     148u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   149 */          FALSE,     149u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
    /* Index    IsIndivPolling  HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*   150 */          FALSE,     150u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   151 */          FALSE,     151u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   152 */          FALSE,     152u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   153 */          FALSE,     153u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   154 */          FALSE,     154u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   155 */          FALSE,     155u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   156 */          FALSE,     156u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   157 */          FALSE,     157u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   158 */          FALSE,     158u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   159 */          FALSE,     159u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   160 */          FALSE,     160u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   161 */          FALSE,     161u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   162 */          FALSE,     162u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   163 */          FALSE,     163u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   164 */          FALSE,     164u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   165 */          FALSE,     165u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   166 */          FALSE,     166u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   167 */          FALSE,     167u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   168 */          FALSE,     168u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   169 */          FALSE,     169u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   170 */          FALSE,     170u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   171 */          FALSE,     171u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   172 */          FALSE,     172u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   173 */          FALSE,     173u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   174 */          FALSE,     174u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   175 */          FALSE,     175u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   176 */          FALSE,     176u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   177 */          FALSE,     177u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   178 */          FALSE,     178u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   179 */          FALSE,     179u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   180 */          FALSE,     180u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   181 */          FALSE,     181u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   182 */          FALSE,     182u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   183 */          FALSE,     183u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   184 */          FALSE,     184u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   185 */          FALSE,     185u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   186 */          FALSE,     186u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   187 */          FALSE,     187u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   188 */          FALSE,     188u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   189 */          FALSE,     189u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   190 */          FALSE,     190u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   191 */          FALSE,     191u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   192 */          FALSE,     192u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   193 */          FALSE,     193u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   194 */          FALSE,     194u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   195 */          FALSE,     195u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   196 */          FALSE,     196u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   197 */          FALSE,     197u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   198 */          FALSE,     198u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   199 */          FALSE,     199u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
    /* Index    IsIndivPolling  HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*   200 */          FALSE,     200u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   201 */          FALSE,     201u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   202 */          FALSE,     202u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   203 */          FALSE,     203u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   204 */          FALSE,     204u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   205 */          FALSE,     205u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   206 */          FALSE,     206u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   207 */          FALSE,     207u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   208 */          FALSE,     208u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   209 */          FALSE,     209u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   210 */          FALSE,     210u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   211 */          FALSE,     211u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   212 */          FALSE,     212u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   213 */          FALSE,     213u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   214 */          FALSE,     214u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   215 */          FALSE,     215u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   216 */          FALSE,     216u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   217 */          FALSE,     217u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   218 */          FALSE,     218u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   219 */          FALSE,     219u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   220 */          FALSE,     220u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   221 */          FALSE,     221u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   222 */          FALSE,     222u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   223 */          FALSE,     223u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   224 */          FALSE,     224u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   225 */          FALSE,     225u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   226 */          FALSE,     226u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   227 */          FALSE,     227u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   228 */          FALSE,     228u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   229 */          FALSE,     229u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   230 */          FALSE,     230u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   231 */          FALSE,     231u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   232 */          FALSE,     232u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   233 */          FALSE,     233u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   234 */          FALSE,     234u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   235 */          FALSE,     235u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   236 */          FALSE,     236u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   237 */          FALSE,     237u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   238 */          FALSE,     238u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   239 */          FALSE,     239u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   240 */          FALSE,     240u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   241 */          FALSE,     241u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   242 */          FALSE,     242u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   243 */          FALSE,     243u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   244 */          FALSE,     244u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   245 */          FALSE,     245u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   246 */          FALSE,     246u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   247 */          FALSE,     247u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   248 */          FALSE,     248u,             0u,            0u },  /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
  { /*   249 */          FALSE,     249u,             0u,            0u }   /* [Memory_Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - Unused] */
};
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
VAR(Can_ActiveSendObjectType, CAN_VAR_NOINIT) Can_ActiveSendObject[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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
VAR(Can_ControllerDataType, CAN_VAR_NOINIT) Can_ControllerData[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/




