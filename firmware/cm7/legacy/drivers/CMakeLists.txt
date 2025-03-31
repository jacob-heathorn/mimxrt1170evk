add_library(drivers STATIC)

target_link_libraries(drivers PUBLIC device)

file(GLOB public_headers "*.h")
file(GLOB private_sources 
  "*.c"
)

target_sources(drivers
  PUBLIC
    ${public_headers}
  PRIVATE
    ${private_sources}
)

target_include_directories(drivers INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
platformify(drivers)
target_compile_options(drivers PUBLIC 
  -Wno-null-dereference
  -Wno-unused-parameter
  -Wno-switch-enum
  # -Wno-implicit-function-declaration
)