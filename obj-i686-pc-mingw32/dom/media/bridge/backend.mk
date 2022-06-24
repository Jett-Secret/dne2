# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1
LOCAL_INCLUDES += -I$(topsrcdir)/ipc/chromium/src
LOCAL_INCLUDES += -I$(topsrcdir)/media/mtransport
LOCAL_INCLUDES += -I$(topsrcdir)/media/mtransport
LOCAL_INCLUDES += -I$(topsrcdir)/media/webrtc
LOCAL_INCLUDES += -I$(topsrcdir)/media/webrtc/signaling/src/common/time_profiling
LOCAL_INCLUDES += -I$(topsrcdir)/media/webrtc/signaling/src/media-conduit
LOCAL_INCLUDES += -I$(topsrcdir)/media/webrtc/signaling/src/mediapipeline
LOCAL_INCLUDES += -I$(topsrcdir)/media/webrtc/signaling/src/peerconnection
CPPSRCS += MediaModule.cpp
RTL_FLAGS += -MD
LIBRARY_NAME := dom_media_bridge
FORCE_STATIC_LIB := 1
REAL_LIBRARY := dom_media_bridge.lib
DEFINES += -DSTATIC_EXPORTABLE_JS_API -DMOZ_HAS_MOZGLUE -DMOZILLA_INTERNAL_API -DIMPL_LIBXUL
NONRECURSIVE_TARGETS += export
NONRECURSIVE_TARGETS_export += xpidl
NONRECURSIVE_TARGETS_export_xpidl_DIRECTORY = $(DEPTH)/xpcom/xpidl
NONRECURSIVE_TARGETS_export_xpidl_TARGETS += export
