add_library(utilities STATIC)

target_link_libraries(utilities PUBLIC
  drivers
  device
  cm7-platform
)

file(GLOB public_headers "*.h")
file(GLOB private_sources 
  "*.c"
  "fsl_memcpy.S"
)

target_sources(utilities
  PUBLIC
    ${public_headers}
  PRIVATE
    ${private_sources}
)

target_include_directories(utilities INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
# platformify(utilities)
add_common_c_cxx_flags(utilities)
add_platform_flags(utilities)
