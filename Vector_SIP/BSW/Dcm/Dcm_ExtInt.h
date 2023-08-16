/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2019 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Dcm_ExtInt.h
 *        \brief  Private data type definition and interface of DCM
 *
 *      \details  MICROSAR DCM based on AR 4.0.3
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/
#if !defined(DCM_EXTINT_H)
# define DCM_EXTINT_H
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */

/*! Implementation version */
# define DCM_EXTINT_MAJOR_VERSION                                    11u
# define DCM_EXTINT_MINOR_VERSION                                    6u
# define DCM_EXTINT_PATCH_VERSION                                    0u
# if (DCM_EXTENSION_ID != 0x0001016CUL)
#  error "Mismatching OEMs between static and generated code"
# endif
/* ----------------------------------------------
 ~&&&   Switches
---------------------------------------------- */
# if (DCM_SVC_19_SUPPORT_ENABLED == STD_ON)
#  if defined (DCM_UC_SVC_19_PATCH_SUPPORT_ENABLED)
/* use user definition */
#  else
#   define DCM_UC_SVC_19_PATCH_SUPPORT_ENABLED                       STD_ON
#  endif
# endif /* (DCM_SVC_19_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Defines
---------------------------------------------- */
# if (DCM_SVC_19_SUPPORT_ENABLED == STD_ON)
#  if (DCM_OBDIDMGR_SUPPORT_ENABLED == STD_ON) && \
      (DCM_UC_SVC_19_PATCH_SUPPORT_ENABLED == STD_ON)
#   define DCM_EXT_SVC19_PATCH_CONTEXT                               uint8 DtcStatusPatch;
#   define DCM_EXT_SVC19_PATCH_MASK                                  ((uint8)0x08u)
#  endif
# endif /* (DCM_SVC_19_SUPPORT_ENABLED == STD_ON) */
/*! Determines when the RoE task in the DCM extension is needed */
# if (DCM_SVC_86_SUPPORT_ENABLED == STD_ON)
#  define DCM_EXT_TSK_NUM_ROE                                        1u
# else
#  define DCM_EXT_TSK_NUM_ROE                                        0u /*!< Just a bridge to accomplish the amount of tasks calculation */
# endif

# if (DCM_EXT_TSK_NUM_ROE > 0u)
/*! Events of Dcm_ExtSvc86Task() (task located in the DCM extension part) */
#  define DCM_EXT_TSK_EV_ROE_ACTIVATE                                ((Dcm_TskTaskEvMemType)0x01u) /*!< Activates the task (e.g. on power on to gather the RoE NvM state in the background) */

/*! Registers the most significant bit in the event mask of the Dcm_ExtSvc86Task() (used by the DCM core to determine the width of the task event registers)
    Note: Since used in a preprocessor calculation, do not use casted values (i.e. the event with the highest value above) */
#  define DCM_EXT_TSK_EV_ROE_MSB                                     0x01u

/*! Configures the RoE task as a one with multiple activations within a single Dcm_MainFunction(Worker) activation for better performance */
#  define DCM_EXT_TSK_ATR_ROE_EXEC                                   DCM_TSK_ATR_EXEC_MULTI
# else
/*! No RoE task, no events, no MSB of the events available */
#  define DCM_EXT_TSK_EV_ROE_MSB                                     0x00u
# endif
/* ----------------------------------------------
 ~&&&   Function-like macros
---------------------------------------------- */
# if (DCM_SVC_19_SUPPORT_ENABLED == STD_ON)
#  if (DCM_OBDIDMGR_SUPPORT_ENABLED == STD_ON) && \
      (DCM_UC_SVC_19_PATCH_SUPPORT_ENABLED == STD_ON)
/*! BMW OBD ECU specific workaround for DTC reporting status mask preparation */
#   define Dcm_ExtSvc19UtiPatchDtcStatusInit(pContext)               (pContext->Thread->Repeater.Contexts.Context.Svc19.DtcStatusPatch = 0u)         /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#   define Dcm_ExtSvc19UtiPatchDtcStatusApplyByRequest(pContext, dtcStatusPtr) { if((*(dtcStatusPtr) & 0x0Cu) == 0u){*(dtcStatusPtr) |= pContext->Thread->Repeater.Contexts.Context.Svc19.DtcStatusPatch;}  } /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#   define Dcm_ExtSvc19UtiPatchDtcStatusApplyByResult(dtcStatusPtr)  { if((*(dtcStatusPtr) & 0x2Cu) == 0x20u){*(dtcStatusPtr) |= DCM_EXT_SVC19_PATCH_MASK;}  } /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#   define Dcm_ExtSvc19UtiPatchDtcStatusSetForApply(pContext)        (pContext->Thread->Repeater.Contexts.Context.Svc19.DtcStatusPatch = DCM_EXT_SVC19_PATCH_MASK) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  endif
# endif /* (DCM_SVC_19_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_86_SUPPORT_ENABLED == STD_ON)
#  define Dcm_ExtSvc86TxEnd(txConfirmationState)                     /* not used */
# endif /* (DCM_SVC_86_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Typedefs
---------------------------------------------- */
# if (DCM_SVC_86_SUPPORT_ENABLED == STD_ON)
/*! Service 0x86 temporary processing context for extension */
struct DCM_EXTSVC86REPEATERCONTEXTTYPE_TAG
{
  Dcm_ExtSvc86NvMDataType NewNvmData; /*!< NvM data */
};
typedef struct DCM_EXTSVC86REPEATERCONTEXTTYPE_TAG Dcm_ExtSvc86RepeaterContextType;

typedef P2VAR(Dcm_ExtSvc86RepeaterContextType, TYPEDEF, DCM_VAR_NOINIT)    Dcm_ExtSvc86RepeaterContextPtrType;
typedef P2CONST(Dcm_ExtSvc86RepeaterContextType, TYPEDEF, DCM_VAR_NOINIT)  Dcm_ExtSvc86ReadOnlyRepeaterContextPtrType;
# endif /* (DCM_SVC_86_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Module internal API function declarations
---------------------------------------------- */
# define DCM_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
# if (DCM_SVC_86_SUPPORT_ENABLED == STD_ON)
/**********************************************************************************************************************
  Dcm_ExtService86Init()
 **********************************************************************************************************************/
/*! \brief          Initialization function.
 *  \details        Service 0x86 initializer.
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_ExtService86Init(void);
# endif /* (DCM_SVC_86_SUPPORT_ENABLED == STD_ON) */
# define DCM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
#endif /* !defined(DCM_EXTINT_H) */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_ExtInt.h
 * ******************************************************************************************************************** */
