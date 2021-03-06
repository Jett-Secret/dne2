# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1 -DWIN32_LEAN_AND_MEAN -D_WIN32 -DWIN32 -D_CRT_RAND_S -DCERT_CHAIN_PARA_HAS_EXTRA_FIELDS -DOS_WIN=1 -D_UNICODE -DCHROMIUM_BUILD -DU_STATIC_IMPLEMENTATION -DUNICODE -D_WINDOWS -D_SECURE_ATL -DCOMPILER_MSVC
DIRS := interfaces
LOCAL_INCLUDES += -I$(topobjdir)/ipc/ipdl/_ipdlheaders
LOCAL_INCLUDES += -I$(topsrcdir)/ipc/chromium/src
LOCAL_INCLUDES += -I$(topsrcdir)/ipc/glue
CPPSRCS += Connection.cpp
CPPSRCS += TCPServerSocket.cpp
CPPSRCS += TCPServerSocketChild.cpp
CPPSRCS += TCPServerSocketParent.cpp
CPPSRCS += TCPSocket.cpp
CPPSRCS += TCPSocketChild.cpp
CPPSRCS += TCPSocketParent.cpp
CPPSRCS += UDPSocket.cpp
CPPSRCS += UDPSocketChild.cpp
CPPSRCS += UDPSocketParent.cpp
RTL_FLAGS += -MD
LIBRARY_NAME := dom_network
FORCE_STATIC_LIB := 1
REAL_LIBRARY := dom_network.lib
OS_LIBS += psapi.lib
OS_LIBS += shell32.lib
OS_LIBS += dbghelp.lib
DEFINES += -DSTATIC_EXPORTABLE_JS_API -DMOZ_HAS_MOZGLUE -DMOZILLA_INTERNAL_API -DIMPL_LIBXUL
