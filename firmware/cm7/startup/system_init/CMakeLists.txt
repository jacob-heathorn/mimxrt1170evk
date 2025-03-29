add_library(system_init STATIC)

target_sources(system_init
  PRIVATE
    system_init_hook.cpp
)

target_link_libraries(system_init PRIVATE
  utilities
)
add_common_c_cxx_flags(system_init)
add_platform_flags(system_init)
