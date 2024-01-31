project(uSkeleton)

add_library(${PROJECT_NAME} MODULE)

target_compile_definitions(${PROJECT_NAME}
	PRIVATE YRAY_MODULE_EXPORTS
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)

target_sources(${PROJECT_NAME}
	PRIVATE ${PROJECT_SOURCES}
)

target_link_libraries(${PROJECT_NAME} uCore)

install(TARGETS ${PROJECT_NAME} DESTINATION .)