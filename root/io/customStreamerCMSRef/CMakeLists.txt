ROOTTEST_ADD_TESTDIRS()

#include(modules/FindCMSSW)
#///////////////////////////////////////////////////////////////////////////////////

include_directories(SYSTEM ${TBB_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
 
ROOT_GLOB_HEADERS(headers inc/*.h)
ROOT_GLOB_SOURCES(sources src/*.cxx)

ROOT_GENERATE_DICTIONARY(G__RefCoreStreamer RefCoreStreamer.h MODULE RefCoreStreamer LINKDEF LinkDef.h)

ROOT_LINKER_LIBRARY(RefCoreStreamer RefCoreStreamer.cxx G__RefCoreStreamer DEPENDENCIES Core)

set(RootExeOptions -e "gSystem->Load(\"libRefCoreStreamer\")")

ROOTTEST_ADD_TEST(custom-refstreamer-CMS
				MACRO test_customRefStreamerCMS.C
				DEPENDS RefCoreStreamer
				ERRREF test_customStreamerCMS.ref)

ROOTTEST_ADD_TEST(custom-refstreamer-CMSflush
				MACRO test_customRefStreamerCMSflush.C
				DEPENDS RefCoreStreamer
				ERRREF test_customStreamerCMSflush.ref)

