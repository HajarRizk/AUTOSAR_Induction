/***********************************************************************************************************************
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2018 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  --------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/**
 *  \addtogroup Os_Hal_MemoryProtection
 *  \{
 *
 *  \file       Os_Hal_MemoryProtection_Types.h
 *  \brief
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/
                                                                                                                        /* PRQA S 0388  EOF */ /* MD_MSR_Dir1.1 */
#ifndef OS_HAL_MEMORYPROTECTION_TYPES_H
# define OS_HAL_MEMORYPROTECTION_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os kernel module dependencies */

/* Os HAL dependencies */
# include "Os_Hal_Core_Types.h"


/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/*! Forward declaration of platform specific System-MPU configuration type. */
struct Os_Hal_MpSystemConfigType_Tag;
typedef struct Os_Hal_MpSystemConfigType_Tag Os_Hal_MpSystemConfigType;

/*! Forward declaration of platform specific Core-MPU configuration type. */
struct Os_Hal_MpCoreConfigType_Tag;
typedef struct Os_Hal_MpCoreConfigType_Tag Os_Hal_MpCoreConfigType;

/*! Forward declaration of platform specific App configuration type. */
struct Os_Hal_MpAppConfigType_Tag;
typedef struct Os_Hal_MpAppConfigType_Tag Os_Hal_MpAppConfigType;

/*! Forward declaration of platform specific Thread configuration type. */
struct Os_Hal_MpThreadConfigType_Tag;
typedef struct Os_Hal_MpThreadConfigType_Tag Os_Hal_MpThreadConfigType;

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/


#endif /* OS_HAL_MEMORYPROTECTION_TYPES_H */


/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_MemoryProtection_Types.h
 **********************************************************************************************************************/