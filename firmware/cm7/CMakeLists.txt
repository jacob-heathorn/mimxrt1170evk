add_subdirectory(drivers)
add_subdirectory(registers)
add_subdirectory(rtos)
add_subdirectory(platform)
add_subdirectory(legacy)
add_subdirectory(network)
add_subdirectory(startup)
add_subdirectory(utils)

add_subdirectory(
  $ENV{MICROCYPHAL_ROOT}/firmware
  ${CMAKE_BINARY_DIR}/microcyphal/firmware
)
target_link_libraries(microcyphal INTERFACE network)
