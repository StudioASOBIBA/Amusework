cmake_minimum_required(VERSION 3.22)

project(amuse
    VERSION "1.0.0"
    DESCRIPTION "The runtime library & editor program for 2D/3D game developement"
    LANGUAGES C CXX
)

include(cmake/settings.cmake)

option(AMUSE_BUILD_RUNTIME "Build Amuse runtime library" ON)
option(AMUSE_BUILD_EXAMPLES "Build Amuse examples" ON)

if (AMUSE_BUILD_RUNTIME)
	message(TRACE "[Amuse] Building Amuse runtime library")
	add_subdirectory(runtime)
endif ()

if(AMUSE_BUILD_EXAMPLES)
	message(TRACE "[Amuse] Building Amuse examples")
	add_subdirectory(examples)
endif()
