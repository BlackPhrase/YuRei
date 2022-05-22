aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES_DINPUT)

target_sources(${PROJECT_NAME}
	PRIVATE ${PROJECT_SOURCES_DINPUT}
)

target_link_libraries(${PROJECT_NAME} dxguid dinput8)