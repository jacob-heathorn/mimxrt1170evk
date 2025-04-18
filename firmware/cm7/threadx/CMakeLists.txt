set(THREADX_ARCH cortex_m7)
set(THREADX_TOOLCHAIN gnu)
set(TX_USER_FILE ${CMAKE_CURRENT_SOURCE_DIR}/tx_user.h)
add_subdirectory(
  $ENV{THREADX_ROOT}
  ${CMAKE_BINARY_DIR}/threadx
)

target_sources(threadx
  PUBLIC
    tx_user.h
    tx_thread_stack_error.cpp
    tx_initialize_low_level.c
)

target_include_directories(threadx PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

platformify(threadx)

# Add forge/ftl and forge/threadx subdirectories.
add_subdirectory(
  $ENV{FORGE_ROOT}/firmware/ftl
  ${CMAKE_BINARY_DIR}/forge/firmware/ftl
)
add_subdirectory(
  $ENV{FORGE_ROOT}/firmware/threadx
  ${CMAKE_BINARY_DIR}/forge/firmware/threadx
)
target_link_libraries(threadx PUBLIC ftl ftl-threadx)

# Add pigweed unit test, and a threadx-main.
add_subdirectory(
  $ENV{FORGE_ROOT}/firmware/pw_unit_test
  ${CMAKE_BINARY_DIR}/forge/firmware/pw_unit_test
)
target_sources(pw_unit_test
  PRIVATE
    pw_ut_main.cpp
)
target_link_libraries(pw_unit_test PUBLIC threadx)
