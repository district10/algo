project( TestDemo )

add_executable( ${PROJECT_NAME} main.cpp )
target_link_libraries( ${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT} cppformat SimpleAlgo SimpleStdCpp SimpleProblem SimpleNullcat )
set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Tests )
install( TARGETS ${PROJECT_NAME} DESTINATION bin )
