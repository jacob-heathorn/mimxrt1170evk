add_library(cmsis INTERFACE)

file(GLOB public_headers "*.h")

target_sources(cmsis
  PUBLIC
    ${public_headers}
)

target_include_directories(cmsis INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
# platformify(system_init)
target_compile_options(cmsis INTERFACE 
  -Wno-sign-conversion
)