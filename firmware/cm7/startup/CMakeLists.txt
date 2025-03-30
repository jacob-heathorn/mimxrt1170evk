add_subdirectory(system_init)
add_subdirectory(boot)

# Compile a library from the assembly provided by NXP. TODO(make my own)
add_library(rt1170-startup-cm7 STATIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/startup_MIMXRT1176_cm7.S
)
platformify(rt1170-startup-cm7)

# Link the boot library without allowing the linker to remove symbols, because they are used by the
# qspi hardware directly from memory. Since they are not used by the application, the linker was
# removing them.
target_link_libraries(rt1170-startup-cm7 PRIVATE
  -Wl,--whole-archive boot -Wl,--no-whole-archive
)

target_link_libraries(rt1170-startup-cm7 PRIVATE system_init)

# Link the linker script. This needs to be public. Executables will link with
# this library to inherit the linker script.
target_link_options(rt1170-startup-cm7 PUBLIC
  -T${CMAKE_CURRENT_SOURCE_DIR}/MIMXRT1176xxxxx_cm7_flexspi_nor.ld
)
