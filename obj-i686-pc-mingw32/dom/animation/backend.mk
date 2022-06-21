# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DEFINES += -DNDEBUG=1 -DTRIMMED=1
LOCAL_INCLUDES += -I$(topsrcdir)/dom/base
LOCAL_INCLUDES += -I$(topsrcdir)/layout/base
LOCAL_INCLUDES += -I$(topsrcdir)/layout/style
CPPSRCS += AnimValuesStyleRule.cpp
CPPSRCS += Animation.cpp
CPPSRCS += AnimationEffectReadOnly.cpp
CPPSRCS += AnimationEffectTiming.cpp
CPPSRCS += AnimationEffectTimingReadOnly.cpp
CPPSRCS += AnimationPerformanceWarning.cpp
CPPSRCS += AnimationTimeline.cpp
CPPSRCS += AnimationUtils.cpp
CPPSRCS += CSSPseudoElement.cpp
CPPSRCS += ComputedTimingFunction.cpp
CPPSRCS += DocumentTimeline.cpp
CPPSRCS += EffectCompositor.cpp
CPPSRCS += EffectSet.cpp
CPPSRCS += KeyframeEffectParams.cpp
CPPSRCS += KeyframeUtils.cpp
CPPSRCS += PendingAnimationTracker.cpp
CPPSRCS += TimingParams.cpp

# We build files in 'unified' mode by including several files
# together into a single source file.  This cuts down on
# compilation times and debug information size.
UNIFIED_CPPSRCS := Unified_cpp_dom_animation0.cpp
CPPSRCS += $(UNIFIED_CPPSRCS)
RTL_FLAGS += -MD
LIBRARY_NAME := dom_animation
FORCE_STATIC_LIB := 1
REAL_LIBRARY := dom_animation.lib
DEFINES += -DSTATIC_EXPORTABLE_JS_API -DMOZ_HAS_MOZGLUE -DMOZILLA_INTERNAL_API -DIMPL_LIBXUL
