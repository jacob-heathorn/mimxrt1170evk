add_library(board STATIC)

target_link_libraries(board PUBLIC drivers utilities)

file(GLOB public_headers "*.h")
file(GLOB private_sources 
  "*.c"
)

target_sources(board
  PUBLIC
    ${public_headers}
  PRIVATE
    ${private_sources}
)

target_include_directories(board INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
platformify(board)
# target_compile_options(device PRIVATE -Wno-sign-conversion)

