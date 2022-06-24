# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1
CSRCS += chain.c
CSRCS += iccread.c
CSRCS += matrix.c
CSRCS += transform-sse1.c
CSRCS += transform-sse2.c
CSRCS += transform.c
CSRCS += transform_util.c
transform-sse2.c_FLAGS += -arch:SSE2
transform-sse1.c_FLAGS += -arch:SSE
RTL_FLAGS += -MD
VISIBILITY_FLAGS := 
LIBRARY_NAME := gfx_qcms
FORCE_STATIC_LIB := 1
REAL_LIBRARY := gfx_qcms.lib
DEFINES += -DMOZ_HAS_MOZGLUE
