# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1
LOCAL_INCLUDES += -I$(topsrcdir)/toolkit/xre

# We build files in 'unified' mode by including several files
# together into a single source file.  This cuts down on
# compilation times and debug information size.
UNIFIED_CPPSRCS := Unified_cpp_toolkit_profile0.cpp
CPPSRCS += $(UNIFIED_CPPSRCS)
JAR_MANIFEST := d:/Projects/DanknetExplorer/dne2/platform/toolkit/profile/jar.mn
RTL_FLAGS += -MD
LIBRARY_NAME := toolkit_profile
FORCE_STATIC_LIB := 1
REAL_LIBRARY := toolkit_profile.lib
DEFINES += -DSTATIC_EXPORTABLE_JS_API -DMOZ_HAS_MOZGLUE -DMOZILLA_INTERNAL_API -DIMPL_LIBXUL
NONRECURSIVE_TARGETS += export
NONRECURSIVE_TARGETS_export += xpidl
NONRECURSIVE_TARGETS_export_xpidl_DIRECTORY = $(DEPTH)/xpcom/xpidl
NONRECURSIVE_TARGETS_export_xpidl_TARGETS += export
