############################################################################### 
# File Name  : VttOs_rules.mak 
# Description: Rules makefile 
#------------------------------------------------------------------------------
# COPYRIGHT
#------------------------------------------------------------------------------
# Copyright (c) 2019 by Vector Informatik GmbH.  All rights reserved.
#------------------------------------------------------------------------------
# REVISION HISTORY
#------------------------------------------------------------------------------
# Version   Date        Author  Description
#------------------------------------------------------------------------------
# 1.00.00   2016-03-24  Dfe     Initial Version
# 2.02.00   2016-12-13  Asl     Update source files
# 2.03.00   2019-02-06  vircbl  Added support of component-based SIP structure
# 2.03.00   2019-02-11  Rework  to match the template
#------------------------------------------------------------------------------
# TemplateVersion = 1.02
###############################################################################

# Include of OS Core makefile

include $(ROOT)\$(GLOBAL_COMP_DIR)\VttOs\$(if $(BSW_MAKE_DIR),$(BSW_MAKE_DIR),mak)\Os_Core.mak


# Component Files

CC_FILES_TO_BUILD       +=  VttOs$(BSW_SRC_DIR)\Os_Hal_Core.c         \
                            VttOs$(BSW_SRC_DIR)\Os_Hal_Processor.c    \
                            VttOs$(BSW_SRC_DIR)\Os_Hal_Entry.c

ASM_FILES_TO_BUILD      +=

GENERATED_SOURCE_FILES  +=  $(GENDATA_DIR)\Os_Hal_Context_Lcfg.c          \
                            $(GENDATA_DIR)\Os_Hal_Core_Lcfg.c             \
                            $(GENDATA_DIR)\Os_Hal_Vtt_LCfg.c              \
                            $(GENDATA_DIR)\Os_Hal_Entry_Lcfg.c            \
                            $(GENDATA_DIR)\Os_Hal_Interrupt_Lcfg.c        \
                            $(GENDATA_DIR)\Os_Hal_Kernel_Lcfg.c           \
                            $(GENDATA_DIR)\Os_Hal_MemoryProtection_Lcfg.c \
                            $(GENDATA_DIR)\Os_Hal_Timer_Lcfg.c


# Library Settings
# Library not supported
