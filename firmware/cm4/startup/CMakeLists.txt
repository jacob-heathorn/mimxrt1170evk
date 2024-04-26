add_subdirectory(system_init)

# Compile a library from the assembly provided by NXP. TODO(make my own)
add_library(rt1170-startup-cm4 STATIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/startup_MIMXRT1176_cm4.S
  # system_init.cpp
  # interrupt_handlers.cpp
)
platformify(rt1170-startup-cm4)

target_link_libraries(rt1170-startup-cm4 PRIVATE system_init)

# Link the linker script. This needs to be public. Executables will link with
# this library to inherit the linker script.
#
# TODO explore other linker scripts
target_link_options(rt1170-startup-cm4 PUBLIC
  -T${CMAKE_CURRENT_SOURCE_DIR}/MIMXRT1176xxxxx_cm4_ram.ld
)
