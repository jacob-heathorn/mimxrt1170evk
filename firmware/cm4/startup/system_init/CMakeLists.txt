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
    system_MIMXRT1176_cm4.c
)
platformify(system_init)
target_compile_options(system_init PRIVATE 
  -Wno-sign-conversion
)

target_link_libraries(system_init PRIVATE cmsis)

# # add_common_c_cxx_flags(system_init)
# # add_platform_flags(system_init)

# add_common_c_cxx_flags(system_init)
# add_platform_flags(system_init)
# target_link_libraries(system_init PUBLIC rt1170-platform)

