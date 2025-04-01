add_library(utils STATIC)
target_include_directories(utils PUBLIC ${CMAKE_SOURCE_DIR}/firmware/cm7)

file(GLOB public_headers "*.hpp")

target_sources(utils
  PUBLIC
    ${public_headers}
  PUBLIC
    dtcm_allocator.cpp
)

add_common_c_cxx_flags(utils)
add_platform_flags(utils)
target_link_libraries(utils PRIVATE etl)
