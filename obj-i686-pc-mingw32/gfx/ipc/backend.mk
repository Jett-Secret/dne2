# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1 -DWIN32_LEAN_AND_MEAN -D_WIN32 -DWIN32 -D_CRT_RAND_S -DCERT_CHAIN_PARA_HAS_EXTRA_FIELDS -DOS_WIN=1 -D_UNICODE -DCHROMIUM_BUILD -DU_STATIC_IMPLEMENTATION -DUNICODE -D_WINDOWS -D_SECURE_ATL -DCOMPILER_MSVC
LOCAL_INCLUDES += -I$(topsrcdir)/dom/ipc
LOCAL_INCLUDES += -I$(topsrcdir)/xpcom/threads
LOCAL_INCLUDES += -I$(topobjdir)/ipc/ipdl/_ipdlheaders
LOCAL_INCLUDES += -I$(topsrcdir)/ipc/chromium/src
LOCAL_INCLUDES += -I$(topsrcdir)/ipc/glue
CPPSRCS += CompositorSession.cpp
CPPSRCS += CompositorWidgetVsyncObserver.cpp
CPPSRCS += D3DMessageUtils.cpp
CPPSRCS += GPUChild.cpp
CPPSRCS += GPUParent.cpp
CPPSRCS += GPUProcessHost.cpp
CPPSRCS += GPUProcessImpl.cpp
CPPSRCS += GPUProcessManager.cpp
CPPSRCS += InProcessCompositorSession.cpp
CPPSRCS += RemoteCompositorSession.cpp
CPPSRCS += SharedDIB.cpp
CPPSRCS += SharedDIBSurface.cpp
CPPSRCS += SharedDIBWin.cpp
CPPSRCS += VsyncBridgeChild.cpp
CPPSRCS += VsyncBridgeParent.cpp
CPPSRCS += VsyncIOThreadHolder.cpp
MOZBUILD_CXXFLAGS += -Id:/Projects/DanknetExplorer/dne2/obj-i686-pc-mingw32/dist/include/cairo
RTL_FLAGS += -MD
LIBRARY_NAME := gfx_ipc
FORCE_STATIC_LIB := 1
REAL_LIBRARY := gfx_ipc.lib
OS_LIBS += psapi.lib
OS_LIBS += shell32.lib
OS_LIBS += dbghelp.lib
DEFINES += -DSTATIC_EXPORTABLE_JS_API -DMOZ_HAS_MOZGLUE -DMOZILLA_INTERNAL_API -DIMPL_LIBXUL
