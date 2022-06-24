# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1
export:: domainsfallbacks.properties.h
GARBAGE += domainsfallbacks.properties.h
EXTRA_MDDEPEND_FILES += domainsfallbacks.properties.h.pp
domainsfallbacks.properties.h: d:/Projects/DanknetExplorer/dne2/platform/intl/locale/props2arrays.py $(srcdir)/domainsfallbacks.properties
	$(REPORT_BUILD)
	$(call py_action,file_generate,d:/Projects/DanknetExplorer/dne2/platform/intl/locale/props2arrays.py main domainsfallbacks.properties.h $(MDDEPDIR)/domainsfallbacks.properties.h.pp $(srcdir)/domainsfallbacks.properties)

export:: encodingsgroups.properties.h
GARBAGE += encodingsgroups.properties.h
EXTRA_MDDEPEND_FILES += encodingsgroups.properties.h.pp
encodingsgroups.properties.h: d:/Projects/DanknetExplorer/dne2/platform/intl/locale/props2arrays.py $(srcdir)/encodingsgroups.properties
	$(REPORT_BUILD)
	$(call py_action,file_generate,d:/Projects/DanknetExplorer/dne2/platform/intl/locale/props2arrays.py main encodingsgroups.properties.h $(MDDEPDIR)/encodingsgroups.properties.h.pp $(srcdir)/encodingsgroups.properties)

export:: labelsencodings.properties.h
GARBAGE += labelsencodings.properties.h
EXTRA_MDDEPEND_FILES += labelsencodings.properties.h.pp
labelsencodings.properties.h: d:/Projects/DanknetExplorer/dne2/platform/intl/locale/props2arrays.py $(srcdir)/labelsencodings.properties
	$(REPORT_BUILD)
	$(call py_action,file_generate,d:/Projects/DanknetExplorer/dne2/platform/intl/locale/props2arrays.py main labelsencodings.properties.h $(MDDEPDIR)/labelsencodings.properties.h.pp $(srcdir)/labelsencodings.properties)

export:: localesfallbacks.properties.h
GARBAGE += localesfallbacks.properties.h
EXTRA_MDDEPEND_FILES += localesfallbacks.properties.h.pp
localesfallbacks.properties.h: d:/Projects/DanknetExplorer/dne2/platform/intl/locale/props2arrays.py $(srcdir)/localesfallbacks.properties
	$(REPORT_BUILD)
	$(call py_action,file_generate,d:/Projects/DanknetExplorer/dne2/platform/intl/locale/props2arrays.py main localesfallbacks.properties.h $(MDDEPDIR)/localesfallbacks.properties.h.pp $(srcdir)/localesfallbacks.properties)

export:: nonparticipatingdomains.properties.h
GARBAGE += nonparticipatingdomains.properties.h
EXTRA_MDDEPEND_FILES += nonparticipatingdomains.properties.h.pp
nonparticipatingdomains.properties.h: d:/Projects/DanknetExplorer/dne2/platform/intl/locale/props2arrays.py $(srcdir)/nonparticipatingdomains.properties
	$(REPORT_BUILD)
	$(call py_action,file_generate,d:/Projects/DanknetExplorer/dne2/platform/intl/locale/props2arrays.py main nonparticipatingdomains.properties.h $(MDDEPDIR)/nonparticipatingdomains.properties.h.pp $(srcdir)/nonparticipatingdomains.properties)

LOCAL_INCLUDES += -I$(topsrcdir)/intl/locale
CPPSRCS += EncodingUtils.cpp
CPPSRCS += FallbackEncoding.cpp
CPPSRCS += TextDecoder.cpp
CPPSRCS += TextEncoder.cpp
RTL_FLAGS += -MD
LIBRARY_NAME := dom_encoding
FORCE_STATIC_LIB := 1
REAL_LIBRARY := dom_encoding.lib
DEFINES += -DSTATIC_EXPORTABLE_JS_API -DMOZ_HAS_MOZGLUE -DMOZILLA_INTERNAL_API -DIMPL_LIBXUL
