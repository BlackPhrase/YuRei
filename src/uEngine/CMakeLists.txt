project(uEngine)

add_executable(${PROJECT_NAME})

target_compile_definitions(${PROJECT_NAME}
	PRIVATE YRAY_MODULE_EXPORTS
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)

target_sources(${PROJECT_NAME}
	#PRIVATE ${PROJECT_SOURCES}
	PRIVATE capplication.cpp
	PRIVATE cengine.cpp
	PRIVATE cwindow.cpp
	PRIVATE main.cpp
)

target_link_libraries(${PROJECT_NAME} uMath uCore uScript uAI uCollision uInput)
# TODO: uSound

if(WIN32)
	target_link_libraries(${PROJECT_NAME} d3dx9 winmm)
endif()

set_target_properties(${PROJECT_NAME} PROPERTIES
	ENABLE_EXPORTS ON
)

install(TARGETS ${PROJECT_NAME} DESTINATION .)