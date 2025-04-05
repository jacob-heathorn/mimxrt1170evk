add_library(cm7-platform STATIC)
target_include_directories(cm7-platform PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)

file(GLOB header_files "${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp")
target_sources(cm7-platform
  PUBLIC
    ${header_files}
    syscalls.cpp
  PRIVATE
    new_delete.cpp
)

target_link_libraries(cm7-platform PUBLIC 
  utilities
  drivers
  device
  utilities
  drivers
  cm7_drivers
  board
  mcmgr
  registers
  cmsis
  etl
  forge
  utils
)

add_common_c_cxx_flags(cm7-platform)
add_platform_flags(cm7-platform)
