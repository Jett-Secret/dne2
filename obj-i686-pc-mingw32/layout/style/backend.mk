# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1 -DWIN32_LEAN_AND_MEAN -D_WIN32 -DWIN32 -D_CRT_RAND_S -DCERT_CHAIN_PARA_HAS_EXTRA_FIELDS -DOS_WIN=1 -D_UNICODE -DCHROMIUM_BUILD -DU_STATIC_IMPLEMENTATION -DUNICODE -D_WINDOWS -D_SECURE_ATL -DCOMPILER_MSVC
export:: nsStyleStructList.h
GARBAGE += nsStyleStructList.h
EXTRA_MDDEPEND_FILES += nsStyleStructList.h.pp
nsStyleStructList.h: d:/Projects/DanknetExplorer/dne2/platform/layout/style/generate-stylestructlist.py
	$(REPORT_BUILD)
	$(call py_action,file_generate,d:/Projects/DanknetExplorer/dne2/platform/layout/style/generate-stylestructlist.py main nsStyleStructList.h $(MDDEPDIR)/nsStyleStructList.h.pp)

export:: nsCSSPropsGenerated.inc
GARBAGE += nsCSSPropsGenerated.inc
EXTRA_MDDEPEND_FILES += nsCSSPropsGenerated.inc.pp
nsCSSPropsGenerated.inc: d:/Projects/DanknetExplorer/dne2/platform/layout/style/GenerateCSSPropsGenerated.py $(srcdir)/nsCSSPropsGenerated.inc.in $(srcdir)/PythonCSSProps.h
	$(REPORT_BUILD)
	$(call py_action,file_generate,d:/Projects/DanknetExplorer/dne2/platform/layout/style/GenerateCSSPropsGenerated.py generate nsCSSPropsGenerated.inc $(MDDEPDIR)/nsCSSPropsGenerated.inc.pp $(srcdir)/nsCSSPropsGenerated.inc.in $(srcdir)/PythonCSSProps.h)

LOCAL_INCLUDES += -I$(topobjdir)/ipc/ipdl/_ipdlheaders
LOCAL_INCLUDES += -I$(topsrcdir)/ipc/chromium/src
LOCAL_INCLUDES += -I$(topsrcdir)/ipc/glue
LOCAL_INCLUDES += -I$(topsrcdir)/layout/base
LOCAL_INCLUDES += -I$(topsrcdir)/layout/generic
LOCAL_INCLUDES += -I$(topsrcdir)/layout/svg
LOCAL_INCLUDES += -I$(topsrcdir)/layout/xul
LOCAL_INCLUDES += -I$(topsrcdir)/dom/base
LOCAL_INCLUDES += -I$(topsrcdir)/dom/html
LOCAL_INCLUDES += -I$(topsrcdir)/dom/xbl
LOCAL_INCLUDES += -I$(topsrcdir)/dom/xul
LOCAL_INCLUDES += -I$(topsrcdir)/image
CPPSRCS += AnimationCollection.cpp
CPPSRCS += AnimationCommon.cpp
CPPSRCS += CSS.cpp
CPPSRCS += CSSLexer.cpp
CPPSRCS += CSSRuleList.cpp
CPPSRCS += CSSStyleSheet.cpp
CPPSRCS += CSSVariableDeclarations.cpp
CPPSRCS += CSSVariableResolver.cpp
CPPSRCS += CSSVariableValues.cpp
CPPSRCS += CounterStyleManager.cpp
CPPSRCS += Declaration.cpp
CPPSRCS += DocumentStyleRootIterator.cpp
CPPSRCS += ErrorReporter.cpp
CPPSRCS += FontFace.cpp
CPPSRCS += FontFaceSet.cpp
CPPSRCS += FontFaceSetIterator.cpp
CPPSRCS += ImageLoader.cpp
CPPSRCS += IncrementalClearCOMRuleArray.cpp
CPPSRCS += LayerAnimationInfo.cpp
CPPSRCS += Loader.cpp
CPPSRCS += MediaQueryList.cpp
CPPSRCS += RuleNodeCacheConditions.cpp
CPPSRCS += RuleProcessorCache.cpp
CPPSRCS += SVGAttrAnimationRuleProcessor.cpp
CPPSRCS += ServoBindings.cpp
CPPSRCS += ServoDeclarationBlock.cpp
CPPSRCS += ServoElementSnapshot.cpp
CPPSRCS += ServoStyleSet.cpp
CPPSRCS += ServoStyleSheet.cpp
CPPSRCS += StyleAnimationValue.cpp
CPPSRCS += StyleRule.cpp
CPPSRCS += StyleSheet.cpp
CPPSRCS += nsAnimationManager.cpp
CPPSRCS += nsCSSAnonBoxes.cpp
CPPSRCS += nsCSSDataBlock.cpp
CPPSRCS += nsCSSKeywords.cpp
CPPSRCS += nsCSSParser.cpp
CPPSRCS += nsCSSProps.cpp
CPPSRCS += nsCSSPseudoClasses.cpp
CPPSRCS += nsCSSPseudoElements.cpp
CPPSRCS += nsCSSRuleProcessor.cpp
CPPSRCS += nsCSSRules.cpp
CPPSRCS += nsCSSScanner.cpp
CPPSRCS += nsCSSValue.cpp
CPPSRCS += nsComputedDOMStyle.cpp
CPPSRCS += nsDOMCSSAttrDeclaration.cpp
CPPSRCS += nsDOMCSSDeclaration.cpp
CPPSRCS += nsDOMCSSRGBColor.cpp
CPPSRCS += nsDOMCSSRect.cpp
CPPSRCS += nsDOMCSSValueList.cpp
CPPSRCS += nsFontFaceLoader.cpp
CPPSRCS += nsFontFaceUtils.cpp
CPPSRCS += nsHTMLCSSStyleSheet.cpp
CPPSRCS += nsHTMLStyleSheet.cpp
CPPSRCS += nsLayoutStylesheetCache.cpp
CPPSRCS += nsMediaFeatures.cpp
CPPSRCS += nsNthIndexCache.cpp
CPPSRCS += nsROCSSPrimitiveValue.cpp
CPPSRCS += nsRuleData.cpp
CPPSRCS += nsRuleNode.cpp
CPPSRCS += nsStyleContext.cpp
CPPSRCS += nsStyleCoord.cpp
CPPSRCS += nsStyleSet.cpp
CPPSRCS += nsStyleStruct.cpp
CPPSRCS += nsStyleTransformMatrix.cpp
CPPSRCS += nsStyleUtil.cpp
CPPSRCS += nsTransitionManager.cpp
dist_include_FILES += nsStyleStructList.h
dist_include_DEST := $(DEPTH)/dist/include/
dist_include_TARGET := export
INSTALL_TARGETS += dist_include
misc::
	$(call py_action,buildlist,$(DEPTH)/dist/bin/chrome.manifest 'manifest components/CSSUnprefixingService.manifest')
JAR_MANIFEST := d:/Projects/DanknetExplorer/dne2/platform/layout/style/jar.mn
RTL_FLAGS += -MD
LIBRARY_NAME := layout_style
FORCE_STATIC_LIB := 1
REAL_LIBRARY := layout_style.lib
OS_LIBS += psapi.lib
OS_LIBS += shell32.lib
OS_LIBS += dbghelp.lib
DEFINES += -DSTATIC_EXPORTABLE_JS_API -DMOZ_HAS_MOZGLUE -DMOZILLA_INTERNAL_API -DIMPL_LIBXUL
NONRECURSIVE_TARGETS += export
NONRECURSIVE_TARGETS_export += xpidl
NONRECURSIVE_TARGETS_export_xpidl_DIRECTORY = $(DEPTH)/xpcom/xpidl
NONRECURSIVE_TARGETS_export_xpidl_TARGETS += export
