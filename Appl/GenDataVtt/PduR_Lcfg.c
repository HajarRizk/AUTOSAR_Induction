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
 *            Module: PduR
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Delphi Deutschland GmbH
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC-397 B-Step
 *    License Scope : The usage is restricted to CBD1800285_D02
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Lcfg.c
 *   Generation Time: 2023-08-20 17:47:17
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

#define PDUR_LCFG_SOURCE

/**********************************************************************************************************************
 * MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR.h"
#include "PduR_Fm.h"
#include "PduR_IFQ.h"
#include "PduR_Sm.h"
#include "PduR_RmIf.h"
#include "PduR_RmTp.h"
#include "PduR_RmTp_TxInst.h"
#include "SchM_PduR.h"
#if(PDUR_DEV_ERROR_REPORT == STD_ON)
# include "Det.h"
#endif

/* Include headers with callbacks */
#include "PduR_CanIf.h"
#include "PduR_Com.h"
#include "PduR_CanTp.h"
#include "PduR_Dcm.h"


/**********************************************************************************************************************
 * LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/* Exclusive Area Wrapper functions */
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void);
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void);
  
/**********************************************************************************************************************
 * LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA
 *********************************************************************************************************************/
/* \trace SPEC-663, SPEC-661 */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  PduR_ExclusiveAreaRom
**********************************************************************************************************************/
/** 
  \var    PduR_ExclusiveAreaRom
  \brief  PduR Exclusive Area Locks
  \details
  Element    Description
  Lock       Lock function
  Unlock     Unlock function
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_ExclusiveAreaRomType, PDUR_CONST) PduR_ExclusiveAreaRom[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Lock                                        Unlock                                           Referable Keys */
  { /*     0 */ PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0, PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0 }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRLock_PduRExclusiveArea] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_MmRom
**********************************************************************************************************************/
/** 
  \var    PduR_MmRom
  \brief  Module manager: Contains all function pointers of the bordering modules.
  \details
  Element                       Description
  CoreManagerRomIdx             the index of the 1:1 relation pointing to PduR_CoreManagerRom
  MaskedBits                    contains bitcoded the boolean data of PduR_LoIfOfMmRom, PduR_LoTpOfMmRom, PduR_RmGDestRomUsedOfMmRom, PduR_UpIfOfMmRom, PduR_UpTpOfMmRom
  RmGDestRomEndIdx              the end index of the 0:n relation pointing to PduR_RmGDestRom
  RmGDestRomStartIdx            the start index of the 0:n relation pointing to PduR_RmGDestRom
  UpTpCopyRxDataFctPtr          Transport protocol CopyRxData function pointers
  UpTpCopyTxDataFctPtr          Transport protocol CopyTxData function pointers
  UpIfRxIndicationFctPtr        Upper layer communication interface Rx indication function pointers.
  UpIfTxConfirmationFctPtr      Upper layer communication interface Tx confimation function pointers
  UpTpStartOfReceptionFctPtr    Transport protocol StartOfReception function pointers
  UpTpTpRxIndicationFctPtr      Transport protocol TpRxIndication function pointers
  UpTpTpTxConfirmationFctPtr    Transport protocol TpTxConfimation function pointers
  LoIfTransmitFctPtr            Lower layer If transmit function pointers
  LoTpTransmitFctPtr            Lower layer Tp transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_MmRomType, PDUR_CONST) PduR_MmRom[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CoreManagerRomIdx  MaskedBits  RmGDestRomEndIdx  RmGDestRomStartIdx  UpTpCopyRxDataFctPtr  UpTpCopyTxDataFctPtr  UpIfRxIndicationFctPtr  UpIfTxConfirmationFctPtr  UpTpStartOfReceptionFctPtr  UpTpTpRxIndicationFctPtr  UpTpTpTxConfirmationFctPtr  LoIfTransmitFctPtr  LoTpTransmitFctPtr        Comment                        Referable Keys */
  { /*     0 */                0u,      0x14u,               1u,                 0u, NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , CanIf_Transmit    , NULL_PTR           },  /* [BswModule: CanIf] */  /* [/ActiveEcuC/PduR/CanIf, /ActiveEcuC/PduR] */
  { /*     1 */                0u,      0x0Cu,               2u,                 1u, NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NULL_PTR          , CanTp_Transmit     },  /* [BswModule: CanTp] */  /* [/ActiveEcuC/PduR/CanTp, /ActiveEcuC/PduR] */
  { /*     2 */                0u,      0x06u,               5u,                 2u, NULL_PTR            , NULL_PTR            , Com_RxIndication      , Com_TxConfirmation      , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NULL_PTR          , NULL_PTR           },  /* [BswModule: Com]   */  /* [/ActiveEcuC/PduR/Com, /ActiveEcuC/PduR] */
  { /*     3 */                0u,      0x05u,               6u,                 5u, Dcm_CopyRxData      , Dcm_CopyTxData      , NULL_PTR              , NULL_PTR                , Dcm_StartOfReception      , Dcm_TpRxIndication      , Dcm_TpTxConfirmation      , NULL_PTR          , NULL_PTR           }   /* [BswModule: Dcm]   */  /* [/ActiveEcuC/PduR/Dcm, /ActiveEcuC/PduR] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmDestRom
  \brief  PduR RoutiongPathManager destPdu Table
  \details
  Element          Description
  RmGDestRomIdx    the index of the 1:1 relation pointing to PduR_RmGDestRom
  RmSrcRomIdx      the index of the 1:1 relation pointing to PduR_RmSrcRom
  RoutingType      Type of the Routing (API Forwarding, Gateway).
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmDestRomType, PDUR_CONST) PduR_RmDestRom[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmGDestRomIdx  RmSrcRomIdx  RoutingType                                                 Comment                                                              Referable Keys */
  { /*     0 */            5u,          3u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PduRDestPdu]                               */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_DiagRequest/PduRSrcPdu, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_DiagRequest/PduRDestPdu] */
  { /*     1 */            1u,          5u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PduRDestPdu_1]                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_DiagResponse/PduRSrcPdu_1, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_DiagResponse/PduRDestPdu_1] */
  { /*     2 */            4u,          2u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: UserControls_PDU_47f3742d_Rx_4b41d348_Rx]  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UserControls_PDU_47f3742d_Rx/PduRSrcPdu_4b41d348, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UserControls_PDU_47f3742d_Rx/UserControls_PDU_47f3742d_Rx_4b41d348_Rx] */
  { /*     3 */            0u,          4u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ACFanSpeed_PDU_33daf8c1_Tx]                */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACFanSpeed_PDU_9dd02bc4_Tx/PduRSrcPdu_8f6eaf74, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACFanSpeed_PDU_9dd02bc4_Tx/ACFanSpeed_PDU_33daf8c1_Tx] */
  { /*     4 */            2u,          0u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: AmbTempInCar_PDU_74d62fd9_Rx_c8ac1b77_Rx]  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/AmbTempInCar_PDU_74d62fd9_Rx/PduRSrcPdu_c8ac1b77, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/AmbTempInCar_PDU_74d62fd9_Rx/AmbTempInCar_PDU_74d62fd9_Rx_c8ac1b77_Rx] */
  { /*     5 */            3u,          1u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM }   /* [PduRDestPdu: AmbTempOutCar_PDU_b808f076_Rx_e3f99b79_Rx] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/AmbTempOutCar_PDU_b808f076_Rx/PduRSrcPdu_e3f99b79, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/AmbTempOutCar_PDU_b808f076_Rx/AmbTempOutCar_PDU_b808f076_Rx_e3f99b79_Rx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmGDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmGDestRom
  \brief  PduR RoutiongPathManager global destPdu Table
  \details
  Element                  Description
  DestHnd                  handle to be used as parameter for the StartOfReception, CopyRxData, Transmit or RxIndication function call.
  Direction                Direction of this Pdu: Rx or Tx
  MmRomIdx                 the index of the 1:1 relation pointing to PduR_MmRom
  PduRDestPduProcessing    Is Processing Type of destination PDU.
  RmDestRomIdx             the index of the 0:1 relation pointing to PduR_RmDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmGDestRomType, PDUR_CONST) PduR_RmGDestRom[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DestHnd                                             Direction                      MmRomIdx  PduRDestPduProcessing                             RmDestRomIdx        Comment                                                          Referable Keys */
  { /*     0 */ CanIfConf_CanIfTxPduCfg_ACFanSpeed_PDU_215f0eb2_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           3u },  /* [Globale PduRDestPdu: ACFanSpeed_PDU_33daf8c1_Tx]    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ACFanSpeed_PDU_33daf8c1_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     1 */                  CanTpConf_CanTpTxNSdu_CanTpTxNSdu, PDUR_TX_DIRECTIONOFRMGDESTROM,       1u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           1u },  /* [Globale PduRDestPdu: DiagResponse_CanTp]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/DiagResponse_CanTp, /ActiveEcuC/PduR/CanTp] */
  { /*     2 */       ComConf_ComIPdu_AmbTempInCar_PDU_5a566260_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       2u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           4u },  /* [Globale PduRDestPdu: AmbTempInCar_PDU_5a566260_Rx]  */  /* [/ActiveEcuC/EcuC/EcucPduCollection/AmbTempInCar_PDU_5a566260_Rx, /ActiveEcuC/PduR/Com] */
  { /*     3 */      ComConf_ComIPdu_AmbTempOutCar_PDU_dccc009c_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       2u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           5u },  /* [Globale PduRDestPdu: AmbTempOutCar_PDU_dccc009c_Rx] */  /* [/ActiveEcuC/EcuC/EcucPduCollection/AmbTempOutCar_PDU_dccc009c_Rx, /ActiveEcuC/PduR/Com] */
  { /*     4 */       ComConf_ComIPdu_UserControls_PDU_5c89b54e_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       2u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           2u },  /* [Globale PduRDestPdu: UserControls_PDU_5c89b54e_Rx]  */  /* [/ActiveEcuC/EcuC/EcucPduCollection/UserControls_PDU_5c89b54e_Rx, /ActiveEcuC/PduR/Com] */
  { /*     5 */          DcmConf_DcmDslProtocolRx_DcmDslProtocolRx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           0u }   /* [Globale PduRDestPdu: DiagRequest_Com]               */  /* [/ActiveEcuC/EcuC/EcucPduCollection/DiagRequest_Com, /ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmSrcRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmSrcRom
  \brief  PduR RoutiongManager SrcPdu Table
  \details
  Element              Description
  MmRomIdx             the index of the 1:1 relation pointing to PduR_MmRom
  RmDestRomLength      the number of relations pointing to PduR_RmDestRom
  RmDestRomStartIdx    the start index of the 1:n relation pointing to PduR_RmDestRom
  SrcHnd               handle to be used as parameter for the TxConfirmation or TriggerTransmit function call.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmSrcRomType, PDUR_CONST) PduR_RmSrcRom[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MmRomIdx  RmDestRomLength  RmDestRomStartIdx  SrcHnd                                            Comment                                       Referable Keys */
  { /*     0 */       0u,              1u,                4u,                   PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_c8ac1b77] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/AmbTempInCar_PDU_74d62fd9_Rx/PduRSrcPdu_c8ac1b77] */
  { /*     1 */       0u,              1u,                5u,                   PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_e3f99b79] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/AmbTempOutCar_PDU_b808f076_Rx/PduRSrcPdu_e3f99b79] */
  { /*     2 */       0u,              1u,                2u,                   PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_4b41d348] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/UserControls_PDU_47f3742d_Rx/PduRSrcPdu_4b41d348] */
  { /*     3 */       1u,              1u,                0u,                   PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_DiagRequest/PduRSrcPdu] */
  { /*     4 */       2u,              1u,                3u, ComConf_ComIPdu_ACFanSpeed_PDU_9dd02bc4_Tx },  /* [PduRSrcPdu: PduRSrcPdu_8f6eaf74] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACFanSpeed_PDU_9dd02bc4_Tx/PduRSrcPdu_8f6eaf74] */
  { /*     5 */       3u,              1u,                1u,  DcmConf_DcmDslProtocolTx_DcmDslProtocolTx }   /* [PduRSrcPdu: PduRSrcPdu_1]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_DiagResponse/PduRSrcPdu_1] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmTransmitFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_RmTransmitFctPtr
  \brief  Internal routing manager Transmit functions.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmTransmitFctPtrType, PDUR_CONST) PduR_RmTransmitFctPtr[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RmTransmitFctPtr                  Referable Keys */
  /*     0 */ PduR_RmIf_RoutePdu           ,  /* [PduR_RmIf_RoutePdu] */
  /*     1 */ PduR_RmTp_Transmit_MultiDest    /* [PduR_RmTp_Transmit_MultiDest] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxIf2Up
**********************************************************************************************************************/
/** 
  \var    PduR_TxIf2Up
  \brief  This table contains all routing information to perform the Tx handling of an interface routing. Used in the &lt;LLIf&gt;_TriggerTransmit and &lt;LLIf&gt;_TxConfirmation
  \details
  Element               Description
  TxConfirmationUsed    True, if any of the source PduRDestPdus uses a TxConfirmation.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_TxIf2UpType, PDUR_CONST) PduR_TxIf2Up[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxConfirmationUsed        Referable Keys */
  { /*     0 */               TRUE }   /* [/ActiveEcuC/EcuC/EcucPduCollection/ACFanSpeed_PDU_33daf8c1_Tx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Initialized
**********************************************************************************************************************/
/** 
  \var    PduR_Initialized
  \brief  Initialization state of PduR. TRUE, if PduR_Init() has been called, else FALSE
*/ 
#define PDUR_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(PduR_InitializedType, PDUR_VAR_ZERO_INIT) PduR_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


#define PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#if(PDUR_USE_INIT_POINTER == STD_ON)
P2CONST(PduR_PBConfigType, PDUR_VAR_ZERO_INIT, PDUR_PBCFG) PduR_ConfigDataPtr = (const PduR_PBConfigType *) NULL_PTR;
#endif

#define PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */
  
/**********************************************************************************************************************
 * LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "MemMap.h"

/* Exclusive Area Wrapper functions */

/**********************************************************************************************************************
 * PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  enter the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/**********************************************************************************************************************
 * PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  exit the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/* Upper Layer Interface APIs */

/**********************************************************************************************************************
 * PduR_ComTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_CanTpTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_DcmTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/* Communication Interface APIs */

/**********************************************************************************************************************
 * PduR_CanIfRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * -  call internal general IfRxIndication function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXIF2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoIfRxIndication(RxPduId, info);  /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_IFRXIND, PDUR_E_PDU_ID_INVALID);
#endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_CanIfTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general communication interface TxConfirmation function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfTxConfirmation(PduIdType TxPduId) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_TXCONFIRMATIONUSEDOFTXIF2UP == STD_ON)
  PduR_LoIfTxConfirmation(TxPduId);
#endif
  PDUR_DUMMY_STATEMENT(TxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}




/* Transport Protocol APIs */

/**********************************************************************************************************************
 * PduR_CanTpStartOfReception
 *********************************************************************************************************************/
 /*!
 * \internal
 * - call transport protocoll StartOfReception function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpStartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */

#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpStartOfReception(id, info, TpSduLength, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_SOR, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(TpSduLength);    /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpCopyRxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyRxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpCopyRxData(id, info, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_CPYRX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);  			/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  
  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpCopyTxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyTxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if(PDUR_TXTP2SRC == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpCopyTxData(id, info, retry, availableDataPtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_CPYTX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     				/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);  					/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(retry);  				/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(availableDataPtr);       /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  
  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp RxIndication function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpRxIndication(PduIdType id, Std_ReturnType result) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoTpRxIndication(id, result);
#else
  PduR_Det_ReportError(PDUR_FCT_TPRXIND, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_CanTpTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp TxConfirmation function 
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpTxConfirmation(PduIdType id, Std_ReturnType result) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_TXTP2SRC == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoTpTxConfirmation(id, result);
#else
  PduR_Det_ReportError(PDUR_FCT_TPTXCFM, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/* CancelReceive global without UseTag API */

/* ChangeParameter global without UseTag  API */

/* Communication Interface / Transport Protocol APIs */

/* Communication Interface / Transport Protocol APIs */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/


#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "MemMap.h"

/* SBSW_JUSTIFICATION_BEGIN

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR
    \DESCRIPTION    The API is called with an Id and a pointer.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \N The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       The pointer is provided by the lower layer and is assumed to be valid. It is passed as is to the corresponding function. 

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_ONLY
    \DESCRIPTION    The API is called with an Id.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \R The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       
  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY
    \DESCRIPTION    The API call is forwarded to an internal function.
    \COUNTERMEASURE \N The parameter are checked in the called function.

 SBSW_JUSTIFICATION_END */
 
 /* COV_JUSTIFICATION_BEGIN
 
  \ID COV_PDUR_WRAPPER_FUNC
    \ACCEPT X
    \REASON Each neighbouring module call the same internal function. The call is covered by an other module. 
    
  \ID COV_PDUR_RX_OR_TX_ONLY_CONFIG
    \ACCEPT TX
    \REASON The API is mandatory if this Bsw module exists. In case of Rx or Tx only configs the API call is not forwarded to the internal function. 
 
 COV_JUSTIFICATION_END */
 

/**********************************************************************************************************************
 * END OF FILE: PduR_Lcfg.c
 *********************************************************************************************************************/

