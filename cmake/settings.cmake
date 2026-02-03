# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set C standard
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(AMUSE_BUILD_TYPE "Debug")
    add_compile_definitions(AMUSE_BUILD_DEBUG)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(AMUSE_BUILD_TYPE "Release")
    add_compile_definitions(AMUSE_BUILD_RELEASE)
endif()

if(WIN32)
    set(AMUSE_TARGET_PLATFORM "Windows")
    add_compile_definitions(AMUSE_PLATFORM_WINDOWS)
elseif(APPLE)
    set(AMUSE_TARGET_PLATFORM "MacOS")
    add_compile_definitions(AMUSE_PLATFORM_MACOS)
elseif(UNIX)
    set(AMUSE_TARGET_PLATFORM "Linux")
    add_compile_definitions(AMUSE_PLATFORM_LINUX)
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    set(AMUSE_TARGET_COMPILER "MSVC")
    add_compile_definitions(AMUSE_COMPILER_MSVC)
    add_compile_options(/utf-8)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(AMUSE_TARGET_COMPILER "Clang")
    add_compile_definitions(AMUSE_COMPILER_CLANG)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
      set(AMUSE_TARGET_COMPILER "GNU")
    add_compile_definitions(AMUSE_COMPILER_GNU)
endif()

message(TRACE "[Amuse] Build Type: ${AMUSE_BUILD_TYPE} Platform: ${AMUSE_TARGET_PLATFORM} Compiler: ${AMUSE_TARGET_COMPILER}")
