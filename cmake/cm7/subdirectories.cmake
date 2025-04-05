include_guard(GLOBAL)

# MIMXRT1170EVK firmware/ and test/
add_subdirectory(
  $ENV{MIMXRT1170EVK_ROOT}/firmware/cm7 
  ${CMAKE_BINARY_DIR}/mimxrt1170evk/firmware
)
add_subdirectory(
  $ENV{MIMXRT1170EVK_ROOT}/test/cm7
  ${CMAKE_BINARY_DIR}/mimxrt1170evk/test
)

# Pigweed unit test library
add_subdirectory(
  $ENV{FORGE_ROOT}/test/common
  ${CMAKE_BINARY_DIR}/forge/test/common
)

# Forge library
add_subdirectory(
  $ENV{FORGE_ROOT}/firmware
  ${CMAKE_BINARY_DIR}/forge/firmware
)

# Add ETL (Embedded Template Library)
add_subdirectory(
  $ENV{ETL_ROOT}
  ${CMAKE_BINARY_DIR}/etl
)
