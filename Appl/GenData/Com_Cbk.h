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
 *              File: Com_Cbk.h
 *   Generation Time: 2023-08-17 17:40:09
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


#if !defined (COM_CBK_H)
# define COM_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Cot.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/



/**
 * \defgroup ComHandleIdsComRxPdu Handle IDs of handle space ComRxPdu.
 * \brief Rx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_AmbTempInCar_PDU_5a566260_Rx                  0u
#define ComConf_ComIPdu_AmbTempOutCar_PDU_dccc009c_Rx                 1u
#define ComConf_ComIPdu_DiagRequest                                   2u
#define ComConf_ComIPdu_UserControls_PDU_5c89b54e_Rx                  3u
/**\} */

/**
 * \defgroup ComHandleIdsComTxPdu Handle IDs of handle space ComTxPdu.
 * \brief Tx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_ACFanSpeed_PDU_9dd02bc4_Tx                    0u
#define ComConf_ComIPdu_DiagResponse                                  1u
/**\} */

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /*MD_MSR_MemMap */
/**********************************************************************************************************************
  Com_RxIndication
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after an I-PDU has been received.
    \param    RxPduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                              Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param    PduInfoPtr      Payload information of the received I-PDU (pointer to data and data length).
    \return   none
    \context  The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used.
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737026
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);

/**********************************************************************************************************************
  Com_TxConfirmation
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after the PDU has been transmitted on the network.
              A confirmation that is received for an I-PDU that does not require a confirmation is silently discarded.
    \param    TxPduId    ID of AUTOSAR COM I-PDU that has been transmitted.
                            Range: 0..(maximum number of I-PDU IDs transmitted by AUTOSAR COM) - 1
    \return   none
    \context  The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used.
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737028
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TxConfirmation(PduIdType TxPduId);


/**********************************************************************************************************************
  Com_TpTxConfirmation
**********************************************************************************************************************/
/** \brief    This function is called by the PduR after a large I-PDU has been transmitted via the transport protocol on its network.
    \param    PduId    ID of the I-PDU that has been transmitted.
    \param    Result   Result of the transmission of the I-PDU
    \return   None.
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737029
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TpTxConfirmation( PduIdType PduId, Std_ReturnType Result );

/**********************************************************************************************************************
  Com_CopyTxData
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer to copy Data from the Com TP buffer to the lower layer TP buffer.
    \param    PduId               ID of Com TP I-PDU to be transmitted.
    \param    PduInfoPtr          Pointer to a PduInfoType, which indicates the number of bytes to be copied (SduLength) and the location where the data have to be copied to (SduDataPtr).
                                  An SduLength of 0 is possible in order to poll the available transmit data count. In this case no data are to be copied and SduDataPtr might be invalid.
    \param    RetryInfoPtr        If the TpDataState of the RetryInfoPtr is TP_DATARETRY no data will be copied. Otherwise, the COM module
                                  will ignore the value of this pointer, since it always keeps the complete buffer until the transmission of a large I-PDU is either confirmed or aborted.
    \param    TxDataCntPtr        Out parameter: Remaining Tx data after completion of this call.
    \return   BufReq_ReturnType   BUFREQ_OK:       Data has been copied to the transmit buffer completely as requested.
                                  BUFREQ_E_BUSY:   The transmission buffer is actually not available (implementation specific).
                                  BUFREQ_E_NOT_OK: Data has not been copied. Request failed, in case the corresponding I-PDU was stopped.
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2736849, SPEC-2737039, SPEC-2737040
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, COM_CODE) Com_CopyTxData(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr, P2VAR(RetryInfoType, AUTOMATIC, COM_APPL_VAR) RetryInfoPtr, P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) TxDataCntPtr);

/**********************************************************************************************************************
  Com_TpRxIndication
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after a TP I-PDU has been received.
    \param    PduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                         Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param    Result     Indicates whether the Message was received successfully.
    \return   none
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737027, SPEC-2737063
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TpRxIndication( PduIdType PduId, Std_ReturnType Result );

/**********************************************************************************************************************
  Com_StartOfReception
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer to indicate the start of a incomming TP connection.
    \param    ComRxPduId         ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
    \param    TpSduInfoPtr       The parameter 'TpSduInfoPtr' is currently not used by COM.
    \param    TpSduLength        complete length of the TP I-PDU to be received.
    \param    RxBufferSizePtr    The Com returns in this value the remaining TP buffer size to the lower layer.
    \return   BufReq_ReturnType  BUFREQ_OK:       Connection has been accepted.
                                                  RxBufferSizePtr indicates the available receive buffer.
                                 BUFREQ_E_NOT_OK: Connection has been rejected.
                                                  RxBufferSizePtr remains unchanged.
                                 BUFREQ_E_OVFL:   In case the configured buffer size as specified via ComPduIdRef.PduLength is smaller than TpSduLength.
                                 BUFREQ_E_BUSY:   In case the reception buffer is actually not available for a new reception (implementation specific).
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2736846, SPEC-2737030, SPEC-2737031, SPEC-2737032, SPEC-2737033, SPEC-2737034, SPEC-2737035, SPEC-2737036
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, COM_CODE) Com_StartOfReception(PduIdType ComRxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) TpSduInfoPtr, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) RxBufferSizePtr);

/**********************************************************************************************************************
  Com_CopyRxData
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer to hand a received TP segment to Com.
              The Com copies the received segment in his internal tp buffer.
    \param    PduId              ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
    \param    PduInfoPointer     Payload information of the received TP segment (pointer to data and data length).
    \param    RxBufferSizePtr    The Com returns in this value the remaining TP buffer size to the lower layer.
    \return   BufReq_ReturnType  BUFREQ_OK:       Connection has been accepted.
                                                  RxBufferSizePtr indicates the available receive buffer.
                                 BUFREQ_E_NOT_OK: Connection has been rejected.
                                                  RxBufferSizePtr remains unchanged.
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2736846, SPEC-2737037, SPEC-2737038
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, COM_CODE) Com_CopyRxData(PduIdType PduId, CONSTP2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPointer, P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) RxBufferSizePtr);

#define COM_STOP_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_MemMap */

#endif  /* COM_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cbk.h
**********************************************************************************************************************/

