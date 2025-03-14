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

# Forge common includes:
# * pw_unit_test
add_subdirectory(
  $ENV{FORGE_ROOT}/test/common
  ${CMAKE_BINARY_DIR}/forge/test/common
)

# Add ETL (Embedded Template Library)
add_subdirectory(
  $ENV{ETL_ROOT}
  ${CMAKE_BINARY_DIR}/etl
)
# add_library(etl INTERFACE)
# target_include_directories(etl INTERFACE $ENV{ETL_ROOT}/include)
