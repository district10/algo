project( Test3rdParty )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

file( GLOB TEST_SRC_FILES *.cpp *.cc )
add_executable( ${PROJECT_NAME} ${TEST_SRC_FILES} )
target_link_libraries( ${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT} 
    cppformat gmock )
set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Tests )
install( TARGETS ${PROJECT_NAME} DESTINATION bin )

add_test(test1 ${PROJECT_NAME})
