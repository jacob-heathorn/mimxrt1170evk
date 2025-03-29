add_library(system_init STATIC)
target_link_libraries(system_init PRIVATE
  cmsis
  utilities
  drivers
)

file(GLOB public_headers "*.h")

target_sources(system_init
  PUBLIC
    ${public_headers}
  PRIVATE
    system_init_hook.cpp
)
platformify(system_init)
target_compile_options(system_init PRIVATE 
  -Wno-sign-conversion
)
