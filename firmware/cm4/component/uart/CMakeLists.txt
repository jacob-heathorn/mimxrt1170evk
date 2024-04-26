add_library(uart STATIC)

target_link_libraries(uart PUBLIC drivers device)

file(GLOB public_headers "*.h")
file(GLOB private_sources 
  "*.c"
)

target_sources(uart
  PUBLIC
    ${public_headers}
  PRIVATE
    ${private_sources}
)

target_include_directories(uart INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
platformify(uart)
# target_compile_options(uart PRIVATE -Wno-sign-conversion)

