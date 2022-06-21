# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1 -DENABLE_SHARED_ARRAY_BUFFER -DEXPORT_JS_API -DJS_HAS_CTYPES '-DDLL_PREFIX=""' '-DDLL_SUFFIX=".dll"' -DFFI_BUILDING -D_CRT_RAND_S -DNOMINMAX
export:: ReservedWordsGenerated.h
GARBAGE += ReservedWordsGenerated.h
EXTRA_MDDEPEND_FILES += ReservedWordsGenerated.h.pp
ReservedWordsGenerated.h: d:/Projects/DanknetExplorer/dne2/platform/js/src/frontend/GenerateReservedWords.py $(srcdir)/ReservedWords.h
	$(REPORT_BUILD)
	$(call py_action,file_generate,d:/Projects/DanknetExplorer/dne2/platform/js/src/frontend/GenerateReservedWords.py main ReservedWordsGenerated.h $(MDDEPDIR)/ReservedWordsGenerated.h.pp $(srcdir)/ReservedWords.h)

LOCAL_INCLUDES += -I$(topobjdir)/js/src
LOCAL_INCLUDES += -I$(topsrcdir)/js/src
CPPSRCS += BytecodeCompiler.cpp
CPPSRCS += BytecodeEmitter.cpp
CPPSRCS += FoldConstants.cpp
CPPSRCS += NameFunctions.cpp
CPPSRCS += ParseNode.cpp
CPPSRCS += Parser.cpp
CPPSRCS += TokenStream.cpp
MOZBUILD_CFLAGS += -fp:precise
MOZBUILD_CXXFLAGS += -fp:precise
MOZBUILD_CXXFLAGS += -wd4805
MOZBUILD_CXXFLAGS += -wd4661
MOZBUILD_CXXFLAGS += -we4067
MOZBUILD_CXXFLAGS += -we4258
MOZBUILD_CXXFLAGS += -we4275
MOZBUILD_CXXFLAGS += -wd4146
MOZBUILD_CXXFLAGS += -wd4577
MOZBUILD_CXXFLAGS += -wd4312
RTL_FLAGS += -MD
LIBRARY_NAME := js_src_frontend
FORCE_STATIC_LIB := 1
REAL_LIBRARY := js_src_frontend.lib
DEFINES += -DMOZ_HAS_MOZGLUE
