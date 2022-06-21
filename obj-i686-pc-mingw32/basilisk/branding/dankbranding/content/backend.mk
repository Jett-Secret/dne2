# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1
DIST_SUBDIR = browser
FINAL_TARGET = $(if $(XPI_NAME),$(DIST)/xpi-stage/$(XPI_NAME),$(DIST)/bin)$(DIST_SUBDIR:%=/%)
JAR_MANIFEST := d:/Projects/DanknetExplorer/dne2/basilisk/branding/dankbranding/content/jar.mn
RTL_FLAGS += -MD
