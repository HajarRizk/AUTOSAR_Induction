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
 *   Generation Time: 2023-08-16 18:19:40
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

/* PRQA S 0857 EOF */ /* MD_Can_0857 */
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */

/* -----------------------------------------------------------------------------
    Includes
 ----------------------------------------------------------------------------- */

#include "Can_Cfg.h"

/* -----------------------------------------------------------------------------
    Hw specific
 ----------------------------------------------------------------------------- */

/* HW specific CT global C file */

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
  Can_BTP
**********************************************************************************************************************/
/** 
  \var    Can_BTP
  \brief  Bit Timing and Prescaler
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_BTPType, CAN_CONST) Can_BTP[1] = {
  /* Index    BTP               Comment */
  /*     0 */ 0x1C003F0EuL   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_BufferConfig
**********************************************************************************************************************/
/** 
  \var    Can_BufferConfig
  \brief  CAN Buffer Configuration
  \details
  Element    Description
  RXBC   
  RXF0C  
  RXF1C  
  TXBC   
  TXEFC  
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_BufferConfigType, CAN_CONST) Can_BufferConfig[1] = {
    /* Index    RXBC          RXF0C         RXF1C         TXBC          TXEFC               Comment */
  { /*     0 */ 0x00000000uL, 0x00060004uL, 0x00000000uL, 0x00010064uL, 0x00000000uL }   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanIfChannelId
**********************************************************************************************************************/
/** 
  \var    Can_CanIfChannelId
  \brief  indirection table Can to CanIf controller ID
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_CanIfChannelIdType, CAN_CONST) Can_CanIfChannelId[1] = {
  /* Index    CanIfChannelId      Comment */
  /*     0 */             0u   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerConfig
**********************************************************************************************************************/
/** 
  \var    Can_ControllerConfig
  \brief  Global configuration for all controllers
  \details
  Element                         Description
  BasisAdr                        CAN channel base address
  CanControllerDefaultBaudrate
  MailboxRxBasicEndIdx            the end index of the 0:n relation pointing to Can_Mailbox
  MailboxRxBasicLength            the number of relations pointing to Can_Mailbox
  MailboxRxBasicStartIdx          the start index of the 0:n relation pointing to Can_Mailbox
  MailboxTxBasicEndIdx            the end index of the 0:n relation pointing to Can_Mailbox
  MailboxTxBasicLength            the number of relations pointing to Can_Mailbox
  MailboxTxBasicStartIdx          the start index of the 0:n relation pointing to Can_Mailbox
  MailboxUnusedEndIdx             the end index of the 0:n relation pointing to Can_Mailbox
  MailboxUnusedLength             the number of relations pointing to Can_Mailbox
  MailboxUnusedStartIdx           the start index of the 0:n relation pointing to Can_Mailbox
  IsTTCan                         TTCAN channel support
  RxBasicHwStart              
  RxBasicHwStop               
  RxFullHwStart               
  RxFullHwStop                
  RxSelection                     CAN Rx Selection
  TxBasicHwStart              
  TxBasicHwStop               
  TxFullHwStart               
  TxFullHwStop                
  UnusedHwStart               
  UnusedHwStop                
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_ControllerConfigType, CAN_CONST) Can_ControllerConfig[1] = {
    /* Index    BasisAdr      CanControllerDefaultBaudrate  MailboxRxBasicEndIdx                                                                                                                                                                          MailboxRxBasicLength                                                                                                                                                                          MailboxRxBasicStartIdx                                                                                                                                                                          MailboxTxBasicEndIdx                                                                                                                                                                          MailboxTxBasicLength                                                                                                                                                                          MailboxTxBasicStartIdx                                                                                                                                                                          MailboxUnusedEndIdx                                                                                                                                                                         MailboxUnusedLength                                                                                                                                                                         MailboxUnusedStartIdx                                                                                                                                                                         IsTTCan  RxBasicHwStart  RxBasicHwStop  RxFullHwStart  RxFullHwStop  RxSelection  TxBasicHwStart  TxBasicHwStop  TxFullHwStart  TxFullHwStop  UnusedHwStart  UnusedHwStop        Comment                                                        Referable Keys */
  { /*     0 */ 0xF0208500uL,                         500u,                   2u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                     1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                     0u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                  4u  /* UNUSED_CAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                  2u  /* UNUSED_CAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                    2u  /* UNUSED_CAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,   FALSE,            96u,           97u,           32u,          32u,       0x01u,             0u,            1u,            0u,           0u,            0u,           0u }   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */  /* [/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_FBTP
**********************************************************************************************************************/
/** 
  \var    Can_FBTP
  \brief  Fast Bit Timing and Prescaler
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_FBTPType, CAN_CONST) Can_FBTP[1] = {
  /* Index    FBTP              Comment */
  /*     0 */ 0x00000000uL   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_GFC
**********************************************************************************************************************/
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_GFCType, CAN_CONST) Can_GFC[1] = {
  /* Index    GFC               Comment */
  /*     0 */ 0x0000003FuL   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_INT_Priority
**********************************************************************************************************************/
/** 
  \var    Can_INT_Priority
  \brief  Interrupt Priority
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_INT_PriorityType, CAN_CONST) Can_INT_Priority[1] = {
  /* Index    INT_Priority      Comment */
  /*     0 */ 0x00000000uL   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_INT_RoutingGroup
**********************************************************************************************************************/
/** 
  \var    Can_INT_RoutingGroup
  \brief  Interrupt routing for Groups
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_INT_RoutingGroupType, CAN_CONST) Can_INT_RoutingGroup[1] = {
  /* Index    INT_RoutingGroup      Comment */
  /*     0 */     0x11111111uL   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
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
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_InitObjectBaudrateType, CAN_CONST) Can_InitObjectBaudrate[1] = {
  /* Index    InitObjectBaudrate      Comment */
  /*     0 */               500u   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
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
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_InitObjectStartIndexType, CAN_CONST) Can_InitObjectStartIndex[2] = {
  /* Index    InitObjectStartIndex      Comment */
  /*     0 */                   0u,  /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
  /*     1 */                   1u   /* [stop index] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_Mailbox
**********************************************************************************************************************/
/** 
  \var    Can_Mailbox
  \brief  mailbox configuration (over all controllers)
  \details
  Element                Description
  ControllerConfigIdx    the index of the 1:1 relation pointing to Can_ControllerConfig
  IDValue            
  DLC_FIFO           
  HwHandle           
  MailboxType        
  MaxDataLen         
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_MailboxType, CAN_CONST) Can_Mailbox[4] = {
    /* Index    ControllerConfigIdx                                                                                       IDValue  DLC_FIFO  HwHandle  MailboxType                                MaxDataLen        Comment                                                          Referable Keys */
  { /*     0 */                  0u  /* /ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 */, 0x0000u,       1u,       0u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u },  /* [Connector_eJAD_AC_ECU_5f730b4d60fd8937_17d2a688_Tx] */  /* [/ActiveEcuC/Can/CanConfigSet/Connector_eJAD_AC_ECU_5f730b4d60fd8937_17d2a688_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728, TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     1 */                  0u  /* /ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 */, 0x0000u,       1u,      96u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u },  /* [Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx] */  /* [/ActiveEcuC/Can/CanConfigSet/Connector_eJAD_AC_ECU_5f730b4d60fd8937_6b2462b8_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728, RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     2 */                  0u  /* /ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 */, 0x0000u,      95u,       1u,  CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX,         0u },  /* []                                                   */  /* [undefined, /ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728, UNUSED_CAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     3 */                  0u  /* /ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 */, 0x0000u,       1u,      97u,  CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX,         0u }   /* []                                                   */  /* [undefined, /ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728, UNUSED_CAN_TYPE/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_SIDFC
**********************************************************************************************************************/
/** 
  \var    Can_SIDFC
  \brief  Standard ID filter configuration
  \details
  Element          Description
  FLSSA            Filter List Standard Start Address
  SIDFEEndIdx      the end index of the 0:n relation pointing to Can_SIDFE
  SIDFEStartIdx    the start index of the 0:n relation pointing to Can_SIDFE
  LSS              List size standard
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_SIDFCType, CAN_CONST) Can_SIDFC[1] = {
    /* Index    FLSSA    SIDFEEndIdx                                                                                       SIDFEStartIdx                                                                                       LSS          Comment */
  { /*     0 */ 0x0000u,          1u  /* /ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 */,            0u  /* /ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 */, 0x01u }   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_SIDFE
**********************************************************************************************************************/
/** 
  \var    Can_SIDFE
  \brief  Standard ID filters
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_SIDFEType, CAN_CONST) Can_SIDFE[1] = {
  /* Index    SIDFE                                    Comment                                                   Referable Keys */
  /*     0 */ 0x88000000uL  /*  I: 0 S0 FIFO_0 */   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */  /* [/ActiveEcuC/Can/CanConfigSet/Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_SRN_Address
**********************************************************************************************************************/
/** 
  \var    Can_SRN_Address
  \brief  Service Request Node Addresses
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_SRN_AddressType, CAN_CONST) Can_SRN_Address[1] = {
  /* Index    SRN_Address       Comment */
  /*     0 */ 0xF00385B4uL   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ShmAdr
**********************************************************************************************************************/
/** 
  \var    Can_ShmAdr
  \brief  CAN Shared Message RAM configuration
  \details
  Element     Description
  RXBA        RX Buffer Address
  RXF0A       RX FIFO0 Address
  RXF1A       RX FIFO1 Address
  SIDFA       Standard Filters Address
  StartAdr    Start address of the shared memory area
  StopAdr     Stop address of the shared memory area
  TXBA        TX Buffer address
  TXEFA       TX Event FIFO address
  XIDFA       Extended Filters Address
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_ShmAdrType, CAN_CONST) Can_ShmAdr[1] = {
    /* Index    RXBA                            RXF0A                            RXF1A                           SIDFA                           StartAdr      StopAdr       TXBA                             TXEFA                           XIDFA                                 Comment */
  { /*     0 */ 0xF0200000uL  /* Size[B]: 0 */, 0xF0200004uL  /* Size[B]: 96 */, 0xF0200000uL  /* Size[B]: 0 */, 0xF0200000uL  /* Size[B]: 4 */, 0xF0200000uL, 0xF0200075uL, 0xF0200064uL  /* Size[B]: 16 */, 0xF0200000uL  /* Size[B]: 0 */, 0xF0200000uL  /* Size[B]: 0 */ }   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TDCR
**********************************************************************************************************************/
/** 
  \var    Can_TDCR
  \brief  Transmitter Delay Compensation
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_TDCRType, CAN_CONST) Can_TDCR[1] = {
  /* Index    TDCR              Comment */
  /*     0 */ 0x00000000uL   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728 - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TxOffsetHwToLog
**********************************************************************************************************************/
/** 
  \var    Can_TxOffsetHwToLog
  \brief  tx hardware to logical handle indirection table
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_TxOffsetHwToLogType, CAN_CONST) Can_TxOffsetHwToLog[1] = {
  /* Index    TxOffsetHwToLog      Comment */
  /*     0 */               0   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDAM
**********************************************************************************************************************/
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_XIDAMType, CAN_CONST) Can_XIDAM[1] = {
  /* Index    XIDAM             Comment */
  /*     0 */ 0x1FFFFFFFuL   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDFC
**********************************************************************************************************************/
/** 
  \var    Can_XIDFC
  \brief  Extended ID filter configuration
  \details
  Element    Description
  FLESA      Filter List Extended Start Address
  LSE        List size extended
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_XIDFCType, CAN_CONST) Can_XIDFC[1] = {
    /* Index    FLESA    LSE          Comment */
  { /*     0 */ 0x0000u, 0x00u }   /* [Controller_eJAD_AC_ECU_7f252cc98424769f_6e3aa728] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDFE
**********************************************************************************************************************/
/** 
  \var    Can_XIDFE
  \brief  Extended ID filters
  \details
  Element    Description
  EIDFE_0
  EIDFE_1
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_XIDFEType, CAN_CONST) Can_XIDFE[1] = {
    /* Index    EIDFE_0       EIDFE_1      */
  { /*     0 */ 0x00000000uL, 0x00000000uL }
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendObject
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendObject
  \brief  temporary data for TX object
  \details
  Element    Description
  Pdu        buffered PduId for confirmation or cancellation
  State      send state like cancelled or send activ
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_ActiveSendObjectType, CAN_VAR_NOINIT) Can_ActiveSendObject[2];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerData
**********************************************************************************************************************/
/** 
  \var    Can_ControllerData
  \brief  struct for all controller related variable data
  \details
  Element                  Description
  IntEnable                CAN Interrupt Enable state for each controller
  TXBCR                    CAN Tx Buffer Cancellation Request for each controller
  TXBCRWait                CAN Tx Buffer Cancellation Request Confirmation for each controller
  TXBRP                    CAN Tx Buffer request Pending for each controller
  BusOffNotification       CAN state for each controller: busoff occur
  CanInterruptCounter      CAN interrupt disable counter for each controller
  IsBusOff                 CAN state for each controller: busoff occur
  IsHardwareCanceled       hw loop timeout occur for controller
  LastInitObject           last set baudrate for reinit
  LogStatus                CAN state for each controller: UNINIT=0x00, START=0x01, STOP=0x02, INIT=0x04, INCONSISTENT=0x08, WARNING =0x10, PASSIVE=0x20, BUSOFF=0x40, SLEEP=0x80
  StatusReq                CAN state request for each controller: START=0x01, STOP=0x02, WAKEUP=0x08, SLEEP=0x80
  CanInterruptOldStatus    last CAN interrupt status for restore interrupt for each controller
  LoopTimeout              hw loop timeout for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_ControllerDataType, CAN_VAR_NOINIT) Can_ControllerData[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/




