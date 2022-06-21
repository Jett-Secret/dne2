# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG -DTRIMMED=1 -DWIN32 -D_WINDOWS -DNOMINMAX -DPSAPI_VERSION=1 -D_CRT_RAND_S -DCERT_CHAIN_PARA_HAS_EXTRA_FIELDS -DWIN32_LEAN_AND_MEAN -D_ATL_NO_OPENGL -D_HAS_EXCEPTIONS=0 -D_SECURE_ATL -DCHROMIUM_BUILD -DTOOLKIT_VIEWS=1 -DUSE_LIBJPEG_TURBO=1 -DENABLE_ONE_CLICK_SIGNIN -DENABLE_REMOTING=1 -DENABLE_WEBRTC=1 -DENABLE_CONFIGURATION_POLICY -DENABLE_INPUT_SPEECH -DENABLE_NOTIFICATIONS -DENABLE_GPU=1 -DENABLE_EGLIMAGE=1 -DUSE_SKIA=1 -D__STD_C -D_CRT_SECURE_NO_DEPRECATE -D_SCL_SECURE_NO_DEPRECATE -DENABLE_TASK_MANAGER=1 -DENABLE_WEB_INTENTS=1 -DENABLE_EXTENSIONS=1 -DENABLE_PLUGIN_INSTALLATION=1 -DENABLE_PROTECTOR_SERVICE=1 -DENABLE_SESSION_SERVICE=1 -DENABLE_THEMES=1 -DENABLE_BACKGROUND=1 -DENABLE_AUTOMATION=1 -DENABLE_PRINTING=1 -DENABLE_CAPTIVE_PORTAL_DETECTION=1 -DWEBRTC_MOZILLA_BUILD -DEXPAT_RELATIVE_PATH -DWEBRTC_WIN -D__STDC_FORMAT_MACROS -DNVALGRIND -DDYNAMIC_ANNOTATIONS_ENABLED=0 -DUNICODE -D_UNICODE
LOCAL_INCLUDES += -I$(topsrcdir)/media/webrtc/trunk
LOCAL_INCLUDES += -I$(topsrcdir)/media/webrtc/trunk/webrtc/common_video/interface
LOCAL_INCLUDES += -I$(topsrcdir)/media/webrtc/trunk/webrtc/common_video/libyuv/include
LOCAL_INCLUDES += -I$(topobjdir)/ipc/ipdl/_ipdlheaders
LOCAL_INCLUDES += -I$(topsrcdir)/ipc/chromium/src
LOCAL_INCLUDES += -I$(topsrcdir)/ipc/glue
CPPSRCS += overuse_frame_detector.cc

# We build files in 'unified' mode by including several files
# together into a single source file.  This cuts down on
# compilation times and debug information size.
UNIFIED_CPPSRCS := Unified_cpp_webrtc_video_engine0.cpp Unified_cpp_webrtc_video_engine1.cpp
CPPSRCS += $(UNIFIED_CPPSRCS)
ALLOW_COMPILER_WARNINGS := 1
DISABLE_STL_WRAPPING := 1
IS_GYP_DIR := 1
RTL_FLAGS += -MD
LIBRARY_NAME := video_engine_core
FORCE_STATIC_LIB := 1
REAL_LIBRARY := video_engine_core.lib
DEFINES += -DSTATIC_EXPORTABLE_JS_API -DMOZ_HAS_MOZGLUE -DMOZILLA_INTERNAL_API -DIMPL_LIBXUL