# Pigweed unit test library
add_subdirectory(
  $ENV{FORGE_ROOT}/test/common
  ${CMAKE_BINARY_DIR}/forge/test/common
)

add_subdirectory(threadx)
add_subdirectory(bare_metal)
