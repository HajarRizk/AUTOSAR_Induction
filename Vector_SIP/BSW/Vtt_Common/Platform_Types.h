/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2012 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Platform_Types.h
 *    Component:  -
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  Provision of Platform Types for CANoeEmu
 *  
 *  -------------------------------------------------------------------------------------------------------------------
 *  MISRA VIOLATIONS
 *  -------------------------------------------------------------------------------------------------------------------
 *      
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Patrick Markl                 visml         Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2014-03-17  visml                 Creation based on template V1.03.01
 *  02.00.00  2015-02-11  viswge                FEAT 254: Renaming to VTT
 *            2015-02-11  viswge                Adding uint64 and sint64 data types
*********************************************************************************************************************/

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* ##V_CFG_MANAGEMENT ##CQProject : CommonAsr_Vtt CQComponent : Impl_PlatformTypes */
#define COMMONASR_VTT_IMPL_PLATFORMTYPES_VERSION         0x0200
#define COMMONASR_VTT_IMPL_PLATFORMTYPES_RELEASE_VERSION 0x00

#define PLATFORM_VENDOR_ID    30u    /* SREQ00015439, SREQ00015413 */
#define PLATFORM_MODULE_ID    199u   /* SREQ00015439, SREQ00015413 */

 
/* AUTOSAR Software Specification Document Version Information */

/* AUTOSAR release 4.0 R3 */
#   define PLATFORM_AR_RELEASE_MAJOR_VERSION      (4u)
#   define PLATFORM_AR_RELEASE_MINOR_VERSION      (0u)
#   define PLATFORM_AR_RELEASE_REVISION_VERSION   (3u)

/* Component Version Information */
#define PLATFORM_SW_MAJOR_VERSION       (2u)
#define PLATFORM_SW_MINOR_VERSION       (0u)
#define PLATFORM_SW_PATCH_VERSION       (0u) 


#define CPU_TYPE_8       (8u)
#define CPU_TYPE_16      (16u)
#define CPU_TYPE_32      (32u)

#define MSB_FIRST        (0u)    /* big endian bit ordering */
#define LSB_FIRST        (1u)    /* little endian bit ordering */

#define HIGH_BYTE_FIRST  (0u)    /* big endian byte ordering */
#define LOW_BYTE_FIRST   (1u)    /* little endian byte ordering */

#ifndef TRUE
   #define TRUE   (1u)
#endif

#ifndef FALSE
   #define FALSE  (0u)
#endif

#define CPU_TYPE         CPU_TYPE_32

#define CPU_BIT_ORDER    LSB_FIRST        /*little endian bit ordering*/

#define CPU_BYTE_ORDER   LOW_BYTE_FIRST   /*little endian byte ordering*/
                      
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef unsigned char         boolean;       /*        TRUE .. FALSE           */

typedef signed char           sint8;         /*        -127 .. +127            */
typedef unsigned char         uint8;         /*           0 .. 255             */
typedef signed short          sint16;        /*      -32767 .. +32767          */
typedef unsigned short        uint16;        /*           0 .. 65535           */
typedef signed long           sint32;        /* -2147483647 .. +2147483647     */
typedef unsigned long         uint32;        /*           0 .. 4294967295      */
                                        
typedef signed char           sint8_least;   /* At least 7 bit + 1 bit sign    */
typedef unsigned char         uint8_least;   /* At least 8 bit                 */
typedef signed short          sint16_least;  /* At least 15 bit + 1 bit sign   */
typedef unsigned short        uint16_least;  /* At least 16 bit                */
typedef signed long           sint32_least;  /* At least 31 bit + 1 bit sign   */
typedef unsigned long         uint32_least;  /* At least 32 bit                */
                                        
typedef float                 float32;
typedef double                float64;

#define PLATFORM_SUPPORT_SINT64_UINT64
typedef signed long long      sint64;
typedef unsigned long long    uint64;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* PLATFORM_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: Platform_Types.h
 *********************************************************************************************************************/
