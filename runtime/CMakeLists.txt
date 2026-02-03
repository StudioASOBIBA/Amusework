set(AMUSE_RUNTIME_SOURCES
	src/core.cpp
	src/graphics.cpp
)

set(AMUSE_RUNTIME_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/include/amuse.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/include/amuse/core.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/include/amuse/graphics.hpp
)

add_library(amuse_runtime STATIC
	${AMUSE_RUNTIME_SOURCES}
	${AMUSE_RUNTIME_HEADERS}
)

target_include_directories(amuse_runtime
	PUBLIC
		include
)

set_target_properties(amuse_runtime
	PROPERTIES
		OUTPUT_NAME "libamuse"
		VERSION     ${PROJECT_VERSION}
		SOVERSION   ${PROJECT_VERSION_MAJOR}
)
