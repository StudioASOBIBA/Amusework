cmake_minimum_required(VERSION 3.22)

project(amuse
    VERSION "1.0.0"
    DESCRIPTION "The runtime library & editor program for 2D/3D game developement"
    LANGUAGES C CXX
)

include(cmake/settings.cmake)

if (AMUSE_BUILD_RUNTIME)
	message(TRACE "[Amuse] Building Amuse runtime library")
	add_subdirectory(runtime)
endif ()

if (AMUSE_BUILD_EDITOR)
	# message(TRACE "[Amuse] Building Amuse editor program")
	# add_subdirectory(editor)
endif ()

if(AMUSE_BUILD_EXAMPLES)
	message(TRACE "[Amuse] Building Amuse examples")
	add_subdirectory(examples)
endif()

if (AMUSE_BUILD_TESTS)
	# message(TRACE "[Amuse] Building Amuse tests")
	# enable_testing()
	# add_subdirectory(tests)
endif ()