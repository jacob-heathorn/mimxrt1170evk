add_subdirectory(system_init)
add_subdirectory(boot)

# Compile a library from the assembly provided by NXP. TODO(make my own)
add_library(rt1170-startup-cm7 STATIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/startup_MIMXRT1176_cm7.S
)
platformify(rt1170-startup-cm7)

target_link_libraries(rt1170-startup-cm7 PRIVATE system_init boot)

# Link the linker script. This needs to be public. Executables will link with
# this library to inherit the linker script.
#
# TODO explore other linker scripts
target_link_options(rt1170-startup-cm7 PUBLIC
  -T${CMAKE_CURRENT_SOURCE_DIR}/MIMXRT1176xxxxx_cm7_flexspi_nor.ld
)
