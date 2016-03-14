cmake_minimum_required( VERSION 2.6 )
project( Algo )

set( CMAKE_COLOR_MAKEFILE ON )
set_property( GLOBAL PROPERTY USE_FOLDERS ON )
mark_as_advanced( CMAKE_VERBOSE_MAKEFILE )

set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/CMakeModules ${CMAKE_MODULE_PATH} )
set( CMAKE_DEBUG_POSTFIX "d" )

string( TOUPPER ${PROJECT_NAME} PROJECT_NAME_CAPITALIZED )
add_definitions( -DUNICODE )

macro( config_project PROJNAME LIBNAME )
include_directories( ${${LIBNAME}_INCLUDE_DIR} )
target_link_libraries( ${PROJNAME} ${${LIBNAME}_LIBRARY} )
endmacro()

# large address aware option setting
if( ${MINGW} )
	set( LARGEADDRESSAWARE "--large-address-aware" )
else( ${MINGW} )
	if ( WIN32 )
		set( LARGEADDRESSAWARE "/LARGEADDRESSAWARE" )
	else ( WIN32 )
		set( LARGEADDRESSAWARE " " )
	endif ( WIN32 )
endif( ${MINGW} )

if ( WIN32)
	SET( APP_OPT "WIN32" )
else ( WIN32 )
	if ( APPLE )
		SET( APP_OPT "EXCLUDE_FROM_ALL" )
	else ( APPLE )
		SET( APP_OPT " " )
	endif ( APPLE )
endif ( WIN32 )

if( MSVC )
    #vc 2012 fix for vararg templates
    set( MSVC_COMPILER_DEFS "-D_VARIADIC_MAX=10" )
endif() 
add_definitions( ${MSVC_COMPILER_DEFS} )

enable_testing()

# OpenMP
find_package( OpenMP )
if( OPENMP_FOUND )
	option( WITH_OPENMP "Whether to use parallel processing capabilities of OPENMP. ON/OFF" ON )
endif( OPENMP_FOUND )

include_directories( ${CMAKE_SOURCE_DIR} )
include_directories( ${CMAKE_BINARY_DIR} )
include_directories( ${CMAKE_SOURCE_DIR}/include )

configure_file( 
    "${PROJECT_SOURCE_DIR}/AlgoConfigs.h.in"
    "${PROJECT_BINARY_DIR}/AlgoConfigs.h" )

add_subdirectory( 3rdParty )
add_subdirectory( src )
add_subdirectory( tests )
