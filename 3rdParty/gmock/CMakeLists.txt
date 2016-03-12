project( gmock )

add_library( ${PROJECT_NAME} STATIC
  gmock-gtest-all.cc gmock.h gtest/gtest.h gtest/gtest-spi.h)
target_compile_options( gmock PUBLIC ${CPP11_FLAG} )
target_include_directories( gmock PUBLIC . )

find_package(Threads)
if (Threads_FOUND)
  target_link_libraries(gmock ${CMAKE_THREAD_LIBS_INIT})
else ()
  target_compile_definitions(gmock PUBLIC GTEST_HAS_PTHREAD=0)
endif ()

if (NOT SUPPORTS_VARIADIC_TEMPLATES OR NOT SUPPORTS_INITIALIZER_LIST)
  target_compile_definitions(gmock PUBLIC GTEST_LANG_CXX11=0)
endif ()

# Workaround a bug in implementation of variadic templates in MSVC11.
if (MSVC)
  target_compile_definitions(gmock PUBLIC _VARIADIC_MAX=10)
endif ()

# GTest doesn't detect <tuple> with clang.
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  target_compile_definitions(gmock PUBLIC GTEST_USE_OWN_TR1_TUPLE=1)
endif ()

set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER 3rdParty )  	
