# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1
LOCAL_INCLUDES += -I$(topsrcdir)/modules/brotli/dec
LOCAL_INCLUDES += -I$(topsrcdir)/netwerk/base
CPPSRCS += ParseFTPList.cpp
CPPSRCS += mozTXTToHTMLConv.cpp
CPPSRCS += nsBinHexDecoder.cpp
CPPSRCS += nsDirIndex.cpp
CPPSRCS += nsDirIndexParser.cpp
CPPSRCS += nsFTPDirListingConv.cpp
CPPSRCS += nsHTTPCompressConv.cpp
CPPSRCS += nsIndexedToHTML.cpp
CPPSRCS += nsMultiMixedConv.cpp
CPPSRCS += nsTXTToHTMLConv.cpp
CPPSRCS += nsUnknownDecoder.cpp
RTL_FLAGS += -MD
LIBRARY_NAME := netwerk_streamconv_converters
FORCE_STATIC_LIB := 1
REAL_LIBRARY := netwerk_streamconv_converters.lib
DEFINES += -DSTATIC_EXPORTABLE_JS_API -DMOZ_HAS_MOZGLUE -DMOZILLA_INTERNAL_API -DIMPL_LIBXUL
NONRECURSIVE_TARGETS += export
NONRECURSIVE_TARGETS_export += xpidl
NONRECURSIVE_TARGETS_export_xpidl_DIRECTORY = $(DEPTH)/xpcom/xpidl
NONRECURSIVE_TARGETS_export_xpidl_TARGETS += export
