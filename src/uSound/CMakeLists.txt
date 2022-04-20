project(uSound)

# Find the required packages
find_package(OpenAL)

add_library(${PROJECT_NAME} SHARED)

target_include_directories(${PROJECT_NAME}
	PRIVATE ${OPENAL_INCLUDE_DIR}
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)

target_sources(${PROJECT_NAME}
	PRIVATE ${PROJECT_SOURCES}
)

#target_link_libraries(${PROJECT_NAME} ${OPENAL_LIBRARY})
target_link_libraries(${PROJECT_NAME} OpenAL)

install(TARGETS ${PROJECT_NAME} DESTINATION .)