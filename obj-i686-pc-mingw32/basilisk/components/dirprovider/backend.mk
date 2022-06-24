# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1
DIST_SUBDIR = browser
FINAL_TARGET = $(if $(XPI_NAME),$(DIST)/xpi-stage/$(XPI_NAME),$(DIST)/bin)$(DIST_SUBDIR:%=/%)
LOCAL_INCLUDES += -I$(topsrcdir)/basilisk/components/build
CPPSRCS += DirectoryProvider.cpp
RTL_FLAGS += -MD
LIBRARY_NAME := basilisk_components_dirprovider
FORCE_STATIC_LIB := 1
REAL_LIBRARY := basilisk_components_dirprovider.lib
DEFINES += -DMOZ_HAS_MOZGLUE
