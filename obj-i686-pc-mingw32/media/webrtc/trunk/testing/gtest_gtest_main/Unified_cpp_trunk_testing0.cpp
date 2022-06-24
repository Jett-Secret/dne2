#define MOZ_UNIFIED_BUILD
#include "d:/Projects/DanknetExplorer/dne2/platform/media/webrtc/trunk/testing/gtest/src/gtest_main.cc"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "d:/Projects/DanknetExplorer/dne2/platform/media/webrtc/trunk/testing/gtest/src/gtest_main.cc uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "d:/Projects/DanknetExplorer/dne2/platform/media/webrtc/trunk/testing/gtest/src/gtest_main.cc defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif