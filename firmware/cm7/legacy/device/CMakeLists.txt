add_library(device STATIC)

target_link_libraries(device PUBLIC cmsis)

file(GLOB public_headers "*.h")
file(GLOB private_sources 
  "*.c"
)

target_sources(device
  PUBLIC
    ${public_headers}
  PRIVATE
    ${private_sources}
)

target_include_directories(device INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
platformify(device)
target_compile_options(device PRIVATE -Wno-sign-conversion)

