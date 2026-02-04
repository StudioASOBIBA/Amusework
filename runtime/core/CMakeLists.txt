set(amuse_core_headers
    # IO
    include/io.hpp
    include/io/directory.hpp

    # Misc
    include/misc.hpp
    include/misc/macros.hpp
    include/misc/types.hpp
)

set(amuse_core_sources
    src/io/directory.cpp
)

add_library(amuse_core STATIC
    ${amuse_core_headers}
    ${amuse_core_sources}
)

target_include_directories(amuse_core PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/io
    ${CMAKE_CURRENT_SOURCE_DIR}/include/misc
)

target_link_libraries(amuse_core
    PUBLIC
        # 필요하면 뭐 넣어라
    PRIVATE
        # 필요하면 뭐 넣어라
)

set_target_properties(amuse_core
    PROPERTIES
        OUTPUT_NAME "libamuse_core"
)