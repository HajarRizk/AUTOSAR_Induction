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
 *  \addtogroup Os_Hal_Os
 *  \{
 *
 *  \file       Os_Hal_Os.h
 *  \brief      HAL interfaces which are visible to the user.
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  --------------------------------------------------------------------------------------------------------------------
 *  Anton Schmukel                visasl        Vector Informatik GmbH
 *  Bilal Parvez                  visbpz        Vector Informatik GmbH
 *  Da He                         visdhe        Vector Informatik GmbH
 *  Fabian Wild                   viszfa        Vector Informatik GmbH
 *  Michael Kock                  vismkk        Vector Informatik GmbH
 *  Tosten Schmidt                visto         Vector Informatik GmbH
 *  David Feuerstein              visdfe        Vector Informatik GmbH
 *  Senol Cendere                 visces        Vector Informatik GmbH
 *  Benjamin Seifert              virbse        Vector Informatik GmbH
 *  Johannes Thull                visjth        Vector Informatik GmbH
 *  Martin Schultheiss            virsmn        Vector Informatik GmbH
 *  Susann Rothweiler             visror        Vector Informatik GmbH
 *  Stefano Simoncelli            virsso        Vector Informatik GmbH
 *  Alexander Egorenkov           visaev        Vector Informatik GmbH
 *  Rainer Kuennemeyer            visrk         Vector Informatik GmbH
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2016-01-05  visasl  -             Initial version
 *                        viszfa
 *  01.01.00  2016-05-09  visasl  -             Developer version (RC3)
 *                        viszfa
 *  01.01.01  2016-05-31  visasl  ESCAN00088874 Bypass interrupt state to/from service functions.
 *  01.01.07  2016-08-11  visdhe  WORKITEM8032  Improved performance
 *  01.01.08  2016-09-08  visdhe  FEAT-1931     Provide access to interrupt control register (Step2)
 *  01.02.00  2016-10-12  visdhe                Updated to sprint 11
 *  01.02.01  2016-11-14  virbse                Updated Generator to latest BSWMD version
 *  01.03.00  2016-12-02  visjth  -             Allow HRT to run with any frequency
 *                                ESCAN00092119 Set CANoeTaskFunction to Os_Hal_CANoeTaskWrapper for Hooks and (N)TFs
 *                                ESCAN00092653 Added state change handler to switch off timers during reset
 *            2016-12-02  vismkk  WORKITEM11170 Extended naming convention for HAL context interface
 *  01.04.00  2016-12-23  -       -             Identical to 1.03.00
 *  01.05.00  2017-01-12  -       -             Internal improvements
 *  02.00.00  2017-02-01  -       -             Internal improvements
 *  02.01.00  2017-03-08  -       -             Internal improvements
 *  02.02.00  2017-03-28  visto   WORKITEM14883 Keep compatibility to core generator
 *  02.03.00  2017-05-04  -       -             Internal improvements
 *  02.04.00  2017-06-01  visdfe  ESCAN00094046 Wrong validation of the maximum available MPU regions
 *  02.05.00  2017-07-03  visces  STORYC-1308   Support for cat. 0 ISRs
 *  02.06.00  2017-07-20  viszfa  -             Fixed compiler warnings
 *  02.07.00  2017-07-24  virsmn  ESCAN00094867 Compiler warning: warning #1514-D: incorrect GHS #pragma: small data
 *                                              area is not supported in this configuration
 *  02.08.00  2017-09-14  vismkk  STORYC-1658   #Core:Generator: Remove support of IOC inline interface
 *  02.09.00  2017-10-10  visces  ESCAN00095552 Free Running Timers configured as non High Resolution Counters do not
 *                                              work properly.
 *  02.10.00  2017-10-18  virbse  FEAT-2816     Support shared stack for non-preemptive Basic tasks
 *                                FEAT-2815     Support shared stack for tasks with same internal resource
 *                        vismkk  ESCAN00097104 Timer Interrupts still occur after reset.
 *  02.11.00  2017-11-03  virsmn  ESCAN00096854 Usage of High Resolution Timer and Master Protection Mechanism of INTC
 *                                              could lead to protection violation.
 *                        visror  ESCAN00097010 The OS executes a pending interrupt but the source was never enabled.
 *  02.12.00  2017-11-22  visdhe  STORYC-1751   Performance improvements on some platforms
 *                        visbpz  STORY-2769    OS Interrupt API optimization by replacement of a call sequence for
 *                                              modification of the global interrupt flag.
 *  02.13.00  2017-01-10  virsso  STORYC-3218   Support for user configurable FPU cotext saving
 *  02.14.00  2018-02-01  visbpz  STORYC-2756   Refactoring of VTT
 *                                STORYC-3282   Support for user Msr settings.
 *  02.14.01  2018-02-26  viszfa  ESCAN00098474 Exception is reported when interrupt occurs between Os_Init and StartOS
 *  02.15.00  2018-01-29  virsmn  STORYC-3042   Support for OS internal exception detection.
 *  02.16.00  2018-03-23  visbpz  STORYC-4068   Performance improvment by avoiding traps
 *  02.17.00  2018-05-03  virsmn  STORYC-3965   Added support for derivatives without interrupt level support.
 *  02.18.00  2018-05-14  virsmn  STORYC-3320   Added support for interrupt mapping feature.
 *  02.19.00  2018-06-26  virsmn  ESCAN00099775 ECU reset leads to timing faults.
 *            2018-06-29  virsmn  STORYC-5594   Added support fo aggregated stack configuration view.
 *  02.20.00  2018-07-20  virbse  ESCAN00099802 OutOfMemoryError during VttOs generation.
 *  02.21.00  2018-08-06  virsmn  STORYC-4094   Achieve 100 percent variant coverage.
 *  02.22.00  2018-10-09  virsmn  STORYC-4537   MISRA-C 2012 Compliance
 *  02.23.00  2018-11-06  virsmn  STORYC-4796   Interrupt API optimization.
 *  02.24.00  2019-02-08  visaev  STORYC-7166   Added support for initial enabling of interrupt sources.
 *  02.25.00  2019-03-13  virsmn  ESCAN00102127 Compiler Error: Unresolved Symbols.
 *            2019-03-15  visrk   STORYC-2545   Configuration of FRT timer size.
 ***********************************************************************************************************************/
                                                                                                                        /* PRQA S 0388  EOF */ /* MD_MSR_Dir1.1 */
#ifndef OS_HAL_OS_H
# define OS_HAL_OS_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_OsInt.h"

/* Os kernel module dependencies */
# include "Os_Lcfg.h"

/* Os HAL dependencies */


/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/
/* ----- Component version information ----- */
# define OS_HAL_SW_MAJOR_VERSION                     (2u)
# define OS_HAL_SW_MINOR_VERSION                     (25u)
# define OS_HAL_SW_PATCH_VERSION                     (0u)

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/


#endif /* OS_HAL_OS_H */


/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Os.h
 **********************************************************************************************************************/

