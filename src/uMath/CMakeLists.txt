project(uMath)

add_library(${PROJECT_NAME} INTERFACE) # STATIC?

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)

#target_sources(${PROJECT_NAME}
	#PRIVATE ${PROJECT_SOURCES}
#)

target_include_directories(${PROJECT_NAME}
	INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)