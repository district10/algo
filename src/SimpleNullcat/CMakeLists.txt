project( SimpleNullcat )

add_library( ${PROJECT_NAME} STATIC main.cpp )
set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Src )  	
set_target_properties( ${PROJECT_NAME} PROPERTIES LINK_FLAGS ${LARGEADDRESSAWARE} )

install( TARGETS ${PROJECT_NAME} DESTINATION bin )
