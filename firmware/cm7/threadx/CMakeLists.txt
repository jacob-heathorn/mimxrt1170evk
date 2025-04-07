set(THREADX_ARCH cortex_m7)
set(THREADX_TOOLCHAIN gnu)
set(TX_USER_FILE ${CMAKE_CURRENT_SOURCE_DIR}/tx_user_sample.h)
add_subdirectory(
  $ENV{THREADX_ROOT}
  ${CMAKE_BINARY_DIR}/threadx
)

target_sources(threadx
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/tx_initialize_low_level.c
    ${CMAKE_CURRENT_SOURCE_DIR}/tx_user_sample.h
)

platformify(threadx)
