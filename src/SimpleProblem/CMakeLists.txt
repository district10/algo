project( SimpleProblem )

include_directories( ${CMAKE_CURRENT_BINARY_DIR} )

file( GLOB_RECURSE HDRS_FILES *.h *.hpp )
file( GLOB_RECURSE SRCS_FILES *.cpp )

add_library( ${PROJECT_NAME} STATIC ${SRCS_FILES} ${HDRS_FILES} )
set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Src )  	
set_target_properties( ${PROJECT_NAME} PROPERTIES LINK_FLAGS ${LARGEADDRESSAWARE} )

install( TARGETS ${PROJECT_NAME} DESTINATION bin )
