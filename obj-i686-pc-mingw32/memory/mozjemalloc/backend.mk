# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1 -DMOZ_JEMALLOC_HARD_ASSERTS -Dabort=moz_abort -DMOZ_JEMALLOC_IMPL
LOCAL_INCLUDES += -I$(topsrcdir)/memory/build
CSRCS += jemalloc.c
MOZBUILD_CFLAGS += -wd4273
RTL_FLAGS += -MD
LIBRARY_NAME := memory_mozjemalloc
FORCE_STATIC_LIB := 1
REAL_LIBRARY := memory_mozjemalloc.lib
DEFINES += -DMOZ_HAS_MOZGLUE