/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2019 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  PduR_Fm.h
 *      Project:  Gw_AsrPduRCfg5
 *       Module:  MICROSAR PDU Router
 *    Generator:  Configurator 5
 *
 *  Description:  Vector implementation of AUTOSAR PDU Router
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/
#if !defined (PDUR_FM_H)
# define PDUR_FM_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
# include "PduR_Types.h"
# include "PduR_Cfg.h"
# include "PduR_Lcfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

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
# define PDUR_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_19.1 */

# if(PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_Init
 *********************************************************************************************************************/
/*! \brief      This function initializes the FifoManager Ram Variables
 *  \details    -
 *  \pre        PduR_InitMemory() has been executed, if the start up code does not initialize variables.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note       The function must be called on task level and has not to be interrupted.
 *              by other administrative function calls.
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_Init(void);
# endif

# if (PDUR_DEDICATEDTXBUFFEROFRMBUFFEREDIFPROPERTIESROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_InitDedicatedIfTxBuffer
 *********************************************************************************************************************/
/*! \brief       This function initializes the dedicated buffer
 *  \details     -
 *  \pre         PduR_InitMemory() has been executed, if the start up code does not initialize variables.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \note        The function must be called on task level and has not to be interrupted
 *               by other administrative function calls.
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_InitDedicatedIfTxBuffer(void);
# endif

# if (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_Peek
 *********************************************************************************************************************/
/*!  \brief       Helper function which checks if any routing is ready to transmit in the FIFO
 *   \details     no dequeuing.
 *   \param[in]   fmFifoRamIdx        Index of the destination FIFO.
 *   \param[in]   fmFifoElementRamIdx Index of the current element which is used by the routing.
 *   \return      E_OK     if a routing is waiting for transmission.
 *                E_NOT_OK FIFO is empty
 *   \pre         -
 *   \context     TASK|ISR1|ISR2
 *   \reentrant   TRUE
 *   \synchronous TRUE
***********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_Peek(PduR_FmFifoRamIterType fmFifoRamIdx, P2VAR(PduR_FmFifoElementRamIterType, AUTOMATIC, PDUR_APPL_DATA) fmFifoElementRamIdx);
# endif

# if ((PDUR_EXISTS_SHARED_FIFO_QUEUE_IMPLEMENTATIONTYPEOFRMBUFFEREDIFPROPERTIESROM == STD_ON) || (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_FreeFifoElement
 *********************************************************************************************************************/
/*! \brief       If no Tx Buffer is available for the FIFO element the FIFO must be freed.
 *  \details     -
 *  \param[in]   fmFifoRomIdx FIFO index.
 *  \param[in]   fmFifoElementRamWriteIdx previous write pointer (roll back).
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FreeFifoElement(PduR_FmFifoRomIterType fmFifoRomIdx, PduR_FmFifoElementRamWriteIdxOfFmFifoRamType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_IsFifoElementAllocated
 *********************************************************************************************************************/
/*! \brief       Helper function to check if the queue element is in use.
 *  \details     -
 *  \param[in]   fmFifoElementRamIdx    Fifo State Id used for state handling.
 *  \return      E_OK                   if the queue is in use.
 *               E_NOT_OK               if the queue is not in use.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_IsFifoElementAllocated(PduR_FmFifoElementRamIterType fmFifoElementRamIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
 /**********************************************************************************************************************
 * PduR_Fm_AllocateFifoElement
 *********************************************************************************************************************/
/*! \brief       Helper function to allocate a FIFO element.
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx    WriteIdx curennt fifo element.
 *  \return      Std_ReturnType      result of the FIFO element allocation.
 *               E_OK                FIFO element could be allocated.
 *               E_NOT_OK            no FIFO element is available.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_AllocateFifoElement(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if ((PDUR_RPGROM == STD_ON) && (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_TpDisableRouting_FmSmStateHandler_NoAction
 *********************************************************************************************************************/
/*! \brief       The function is called if a routing is aborted
 *  \details     Link between RxSm and TxSm
 *  \param[in]   rmGDestRomIdx Routing Manager destination Id
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 ***********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_TpDisableRouting_FmSmStateHandler_NoAction(PduR_RmGDestRomIterType rmGDestRomIdx);
# endif

# if ((PDUR_RPGROM == STD_ON) && (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_TpDisableRouting_FmSmStateHandler_FM_WRITE_READ_ACTIVE
 *********************************************************************************************************************/
/*! \brief       The function is called if a transmission is finished to activate the next pending routing in the FiFo
 *  \details     RxFinish -> activate next in the TxConfirmation context.
 *  \param[in]   rmGDestRomIdx Routing Manager destination Id
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 ***********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_TpDisableRouting_FmSmStateHandler_FM_WRITE_READ_ACTIVE(PduR_RmGDestRomIterType rmGDestRomIdx);
# endif

# if ((PDUR_RPGROM == STD_ON) && (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_TpDisableRouting_FmSmStateHandler_FM_WRITE_FINISHED_READ_ACTIVE
 *********************************************************************************************************************/
/*! \brief           This function is called if a routing is cancelled and the reception is not finished
 *                   (Indication is pending) but the transmission is finished.
 *  \details         Tx State machine in state "TxFinished"
 *  \param[in]       rmGDestRomIdx Routing Manager destination Id
 *  \pre             -
 *  \context         TASK|ISR1|ISR2
 *  \reentrant       TRUE
 *  \synchronous     TRUE
******************************************************************************************************************** */
FUNC(void, PDUR_CODE) PduR_Fm_TpDisableRouting_FmSmStateHandler_FM_WRITE_FINISHED_READ_ACTIVE(PduR_RmGDestRomIterType rmGDestRomIdx);
# endif

# if ((PDUR_RPGROM == STD_ON) && (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_TpDisableRouting_FmSmStateHandler_FM_WRITE_ACTIVE
 *********************************************************************************************************************/
/*! \brief           This function is called if a routing is cancelled and the reception is not finished
 *                   (Indication is pending) but the transmission is finished.
 *  \details         Tx State machine in state "TxFinished"
 *  \param[in]       rmGDestRomIdx Routing Manager destination Id
 *  \pre             -
 *  \context         TASK|ISR1|ISR2
 *  \reentrant       TRUE
 *  \synchronous     TRUE
******************************************************************************************************************** */
FUNC(void, PDUR_CODE) PduR_Fm_TpDisableRouting_FmSmStateHandler_FM_WRITE_ACTIVE(PduR_RmGDestRomIterType rmGDestRomIdx);
# endif

# if (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext_FmSmStateHandler_FatalError
 *********************************************************************************************************************/
/*! \brief       This function is called to activate the next pending routing in the FIFO
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \param[out]  result   result if a routing in the queue could be activate.
 *               E_OK     successful.
 *               E_NO_OK not successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext_FmSmStateHandler_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif


# if (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext_FmSmStateHandler_FM_WRITE_FINISHED_READ_PENDING
 *********************************************************************************************************************/
/*! \brief       This function is called to activate the next pending routing in the FIFO
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \param[out]  result   result if a routing in the queue could be activate.
 *               E_OK     successful.
 *               E_NO_OK not successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE

 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext_FmSmStateHandler_FM_WRITE_FINISHED_READ_PENDING(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext_FmSmStateHandler_FM_WRITE_ACTIVE
 *********************************************************************************************************************/
/*! \brief       This function is called to activate the next pending routing in the FIFO.
 * \details      -
 *  \param[in]   fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \param[out]  result   result if a routing in the queue could be activate.
 *               E_OK     successful.
 *               E_NOT_OK successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext_FmSmStateHandler_FM_WRITE_ACTIVE(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_FmSmStateHandler_FM_WRITE_ACTIVE
 *********************************************************************************************************************/
/*! \brief       This function is called to activate the next pending routing in the FIFO
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_FmSmStateHandler_FM_WRITE_ACTIVE(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_AssignTxBuffer2FifoElement
 *********************************************************************************************************************/
/*! \brief       Assign the element from the buffer pool.
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx  Current write FIFO Idx.
 *  \param[in]   bmTxBufferRomIdx Tx Buffer Idx.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_AssignTxBuffer2FifoElement(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, PduR_BmTxBufferRomIdxOfFmFifoElementRamType bmTxBufferRomIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_FmSmStateHandler_NoAction
 *********************************************************************************************************************/
/*! \brief       This function is called to activate the read operation on the FIFO
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_FmSmStateHandler_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_FmSmStateHandler_FatalError
 *********************************************************************************************************************/
/*! \brief       This function is called if somthing went tottaly wrong
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_FmSmStateHandler_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_FmSmStateHandler_FM_WRITE_FINISHED_READ_PENDING
 *********************************************************************************************************************/
/*! \brief       This function is called to activate the read operation on the FIFO
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_FmSmStateHandler_FM_WRITE_FINISHED_READ_PENDING(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_FmSmStateHandler_NoAction
 *********************************************************************************************************************/
/*! \brief       This function is called if the write operation to the FIFO is finished
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx           Fifo Emement Write Idx.
 *  \param[out]  result   result of write operation.
 *               E_OK     successful.
 *               E_NO_OK not successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE

 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_FmSmStateHandler_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_FmSmStateHandler_FM_READ_FINISHED
 *********************************************************************************************************************/
/*! \brief       This function is called if the write operation to the FIFO is finished
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx Fifo Emement Write Idx.
 *  \param[out]  result   result of write operation.
 *               E_OK     successful.
 *               E_NO_OK not successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_FmSmStateHandler_FM_READ_FINISHED(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_FmSmStateHandler_FM_WRITE_READ_ACTIVE
 *********************************************************************************************************************/
/*! \brief       This function is called if the write operation to the FIFO is finished
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx Fifo Emement Write Idx.
 *  \param[out]  result   result of write operation.
 *               E_OK     successful.
 *               E_NO_OK not successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_FmSmStateHandler_FM_WRITE_READ_ACTIVE(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_FmSmStateHandler_FM_WRITE_ACTIVE
 *********************************************************************************************************************/
/*! \brief       This function is called if the write operation to the FIFO is finished
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx     Routing Manager source Id.
 *  \param[out]  result   result of write operation.
 *               E_OK     successful.
 *               E_NO_OK not successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_FmSmStateHandler_FM_WRITE_ACTIVE(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_FmSmStateHandler_FM_WRITE_FINISHED_READ_ACTIVE
 *********************************************************************************************************************/
/*! \brief       This function is called if the read operation to the FIFO is finished
 *  \details     -
 *  \param[in]   fmFifoElementRamReadIdx  Reas Index to the current fifo element.
 *  \param[out]  result   result of read operation.
 *               E_OK     successful.
 *               E_NO_OK not successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_FmSmStateHandler_FM_WRITE_FINISHED_READ_ACTIVE(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_FmSmStateHandler_FM_WRITE_READ_ACTIVE
 *********************************************************************************************************************/
/*! \brief       This function is called if the read operation to the FIFO is finished.
 *  \details     -
 *  \param[in]   fmFifoElementRamReadIdx  Read Index to the current fifo element.
 *  \param[out]  result   result of read operation.
 *               E_OK     successful.
 *               E_NO_OK not successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_FmSmStateHandler_FM_WRITE_READ_ACTIVE(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_FmSmStateHandler_FatalError
 *********************************************************************************************************************/
/*! \brief       This function is called if the read operation to the FIFO is finished
 * \details      -
 *  \param[in]   fmFifoElementRamReadIdx  Read Index to the current fifo element.
 *  \param[out]  result   result of read operation.
 *               E_OK     successful.
 *               E_NO_OK not successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_FmSmStateHandler_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_FmSmStateHandler_NoAction
 *********************************************************************************************************************/
/*! \brief       This function is called if the read operation to the FIFO is finished
 * \details      -
 *  \param[in]   fmFifoElementRamReadIdx  Read Index to the current fifo element.
 *  \param[out]  result   result of read operation.
 *               E_OK     successful.
 *               E_NO_OK not successful.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_FmSmStateHandler_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateWrite_FmSmStateHandler_FM_ALLOCATED_WITH_BUFFER
 *********************************************************************************************************************/
/*! \brief       This function is called to activate the write operation on the FIFO
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateWrite_FmSmStateHandler_FM_ALLOCATED_WITH_BUFFER(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateWrite_FmSmStateHandler_FatalError
 *********************************************************************************************************************/
/*! \brief       This function is called to activate the write operation on the FIFO
 *  \details     -
 *  \param[in]   fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateWrite_FmSmStateHandler_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_AssignFifoElement
 *********************************************************************************************************************/
/*! \brief       Helper function to allocate a FIFO element.
 *  \details     -
 *  \param[in]   fmFifoRamIdx        FIFO ID used for FIFO handling
 *  \param[out]  fmFifoElementRamIdx IDx to the next free FIFO Element.
 *  \return      E_OK                FIFO element could be allocated.
 *               E_NOT_OK            no FIFO element is available.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_AssignFifoElement(PduR_FmFifoRamIterType fmFifoRamIdx, P2VAR(PduR_FmFifoElementRamWriteIdxOfFmFifoRamType, AUTOMATIC, PDUR_APPL_DATA) fmFifoElementRamIdx);
# endif

# if (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext
 *********************************************************************************************************************/
/*! \brief       This function is called to activated the next pending element in the FiFo.
 *  \details     -
 *  \param[in]   fmFifoRamIdx        Index of the destination FIFO.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext(PduR_FmFifoRamIterType fmFifoRamIdx);
# endif

# if ((PDUR_EXISTS_SHARED_FIFO_QUEUE_IMPLEMENTATIONTYPEOFRMBUFFEREDIFPROPERTIESROM == STD_ON) || (PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_IncrementReadIndex
 *********************************************************************************************************************/
/*! \brief       This function is called to increment the read index of the FIFO.
 *  \details     It also handles the wrap-around and the fill level.
 *  \param[in]   fmFifoRamIdx        Index of the destination FIFO.
 *  \return                          the new read index
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(PduR_FmFifoElementRamIterType, PDUR_CODE) PduR_Fm_IncrementReadIndex(PduR_FmFifoRamIterType fmFifoRamIdx);
# endif

#if (PDUR_EXISTS_SHARED_FIFO_QUEUE_IMPLEMENTATIONTYPEOFRMBUFFEREDIFPROPERTIESROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_PutFifo
 *********************************************************************************************************************/
/*! \brief      This function writes the Pdu to the shared Fifo
 *  \details    -
 *  \param[in]  rmDest               routing manager indirection Idx.
 *  \param[in]  rmGDest              routing manager indirection Idx to global destination Pdu table.
 *  \param[in]  pduLength            length to copy.
 *  \param[in]  sduDataPtr           data pointer.
 *  \pre        -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_PutFifo(PduR_RmGDestRomIterType rmGDest, PduR_RmDestRomIterType rmDest, PduLengthType pduLength, SduDataPtrType sduDataPtr);
#endif

#if (PDUR_EXISTS_SHARED_FIFO_QUEUE_IMPLEMENTATIONTYPEOFRMBUFFEREDIFPROPERTIESROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_RemoveElement
 *********************************************************************************************************************/
/*! \brief       Remove the oldest element from the queue
 *  \details     -
 *  \param[in]   rmGDestRomIdx         global destination Pdu Idx.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_RemoveElement(PduR_RmGDestRomIterType rmGDestRomIdx);
#endif

#if (PDUR_EXISTS_SHARED_FIFO_QUEUE_IMPLEMENTATIONTYPEOFRMBUFFEREDIFPROPERTIESROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_GetNextElement
 *********************************************************************************************************************/
/*! \brief       Get the next element from the queue if available
 *  \details     -
 *  \param[in]   rmGDestRomIdx       global destination Pdu Idx.
 *  \param[out]  rmDestRomIdx        read destination Pdu Idx from the queue
 *  \param[out]  info                read data from the queue
 *  \return      E_OK                A Pdu could be read and will be returned via the pointers
 *               E_NOT_OK            No Pdu could be read.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_GetNextElement(PduR_RmGDestRomIterType rmGDestRomIdx, P2VAR(PduR_RmDestRomIterType, AUTOMATIC, PDUR_APPL_DATA) rmDestRomIdx, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
#endif

#if (PDUR_EXISTS_SHARED_FIFO_QUEUE_IMPLEMENTATIONTYPEOFRMBUFFEREDIFPROPERTIESROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_GetFillLevel
 *********************************************************************************************************************/
/*! \brief       Get the fill level of the queue.
 *  \details     -
 *  \param[in]   rmGDestRomIdx       global destination Pdu Idx.
 *  \return                          Fill level of the queue
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(uint16, PDUR_CODE) PduR_Fm_GetFillLevel(PduR_RmGDestRomIterType rmGDestRomIdx);
#endif

# if (PDUR_EXISTS_SHARED_FIFO_QUEUE_IMPLEMENTATIONTYPEOFRMBUFFEREDIFPROPERTIESROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FlushFiFo
 *********************************************************************************************************************/
/*! \brief       This function flushes the FIFO queue.
 *  \details     -
 *  \param[in]   rmGDestRomIdx  routing manager indirection Idx.
 *  \pre         -
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FlushFiFo(PduR_RmGDestRomIterType rmGDestRomIdx);
# endif

# define PDUR_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */
#endif /* PDUR_FM_H */
/**********************************************************************************************************************
 *  END OF FILE: PduR_Fm.h
 *********************************************************************************************************************/
