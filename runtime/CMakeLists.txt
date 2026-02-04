add_subdirectory(core)

add_library(amuse_runtime
	STATIC
		$<TARGET_OBJECTS:amuse_core>
)

set_target_properties(amuse_runtime
	PROPERTIES
		OUTPUT_NAME "libamuse"
)
