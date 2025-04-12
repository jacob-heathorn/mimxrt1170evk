set(THREADX_ARCH cortex_m7)
set(THREADX_TOOLCHAIN gnu)
set(TX_USER_FILE ${CMAKE_CURRENT_SOURCE_DIR}/tx_user.h)
add_subdirectory(
  $ENV{THREADX_ROOT}
  ${CMAKE_BINARY_DIR}/threadx
)

# TODO collect all headers and files, reorganize
target_sources(threadx
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/tx_initialize_low_level.c
    ${CMAKE_CURRENT_SOURCE_DIR}/tx_user.h
)

target_include_directories(threadx PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

platformify(threadx)

# Add ftl and ftl-threadx subdirectories.
add_subdirectory(
  $ENV{FORGE_ROOT}/firmware/ftl
  ${CMAKE_BINARY_DIR}/forge/firmware/ftl
)
add_subdirectory(
  $ENV{FORGE_ROOT}/firmware/ftl_threadx
  ${CMAKE_BINARY_DIR}/forge/firmware/ftl_threadx
)

target_link_libraries(threadx PUBLIC ftl ftl-threadx)
