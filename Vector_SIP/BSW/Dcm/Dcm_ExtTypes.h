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
/**        \file  Dcm_ExtTypes.h
 *        \brief  Public data type definition interface of DCM
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
#if !defined(DCM_EXTTYPES_H)
# define DCM_EXTTYPES_H
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */

/*! Implementation version */
# define DCM_EXTTYPES_MAJOR_VERSION                                  11u
# define DCM_EXTTYPES_MINOR_VERSION                                  6u
# define DCM_EXTTYPES_PATCH_VERSION                                  0u
# if (DCM_EXTENSION_ID != 0x0001016CUL)
#  error "Mismatching OEMs between static and generated code"
# endif
/* ----------------------------------------------
 ~&&&   Defines
---------------------------------------------- */
# if (DCM_SVC_86_SUPPORT_ENABLED == STD_ON)
/* Backward compatibility to older releases (needed in case Dcm_Svc86NvMDataType is only extended by Dcm_ExtSvc86NvMDataType!) */
#  define Dcm_Svc86NvMDataType                                       Dcm_ExtSvc86NvMDataType
#  define dcmSvc86DefaultNvMData                                     dcmExtSvc86DefaultNvMData
# endif /* (DCM_SVC_86_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Typedefs
---------------------------------------------- */
# if (DCM_SVC_86_SUPPORT_ENABLED == STD_ON)
typedef uint8  Dcm_ExtSvc86RoeStateType;
/*! NvM data for service 0x86 extension */
struct DCM_EXTSVC86NVMDATATYPE_TAG
{
  Dcm_ExtSvc86RoeStateType    Activation;     /*!< Activation state of the active response mechanism */
  PduIdType                   RxPduId;        /*!< Id of connection currently requesting RoE */
  uint16                      ClientSrcAddr;  /*!< The testers source identifier */
};
typedef struct DCM_EXTSVC86NVMDATATYPE_TAG Dcm_ExtSvc86NvMDataType;
typedef P2VAR(Dcm_ExtSvc86NvMDataType, TYPEDEF, DCM_VAR_NOINIT) Dcm_ExtSvc86NvMDataPtrType;
# endif /* (DCM_SVC_86_SUPPORT_ENABLED == STD_ON) */
#endif /* !defined(DCM_EXTTYPES_H) */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_ExtTypes.h
 * ******************************************************************************************************************** */
