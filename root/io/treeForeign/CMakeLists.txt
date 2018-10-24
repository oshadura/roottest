
if(compression_default STREQUAL "lz4")
            ROOTTEST_ADD_TEST(testForeignDraw
                  MACRO Run.C
                  PRECMD ${ROOT_root_CMD} -b -q -l ${CMAKE_CURRENT_SOURCE_DIR}/def.C+
                  OUTREF testForeignDrawLZ4.ref
                  DEPENDS test-dataset)
elseif((compression_default STREQUAL "lz4") AND (CMAKE_SYSTEM_PROCESSOR MATCHES "amd64|x86_64|AMD64|X86_64|aarch64") AND (CMAKE_SYSTEM_NAME MATCHES "Linux") AND (builtin_zlib))
	    ROOTTEST_ADD_TEST(testForeignDraw
                  MACRO Run.C
                  PRECMD ${ROOT_root_CMD} -b -q -l ${CMAKE_CURRENT_SOURCE_DIR}/def.C+
		  OUTREF testForeignDrawZLIBCF.ref
                  DEPENDS test-dataset)
else()
            ROOTTEST_ADD_TEST(testForeignDraw
                  MACRO Run.C
                  PRECMD ${ROOT_root_CMD} -b -q -l ${CMAKE_CURRENT_SOURCE_DIR}/def.C+
                  OUTREF testForeignDrawZLIB.ref
                  DEPENDS test-dataset)
endif()
