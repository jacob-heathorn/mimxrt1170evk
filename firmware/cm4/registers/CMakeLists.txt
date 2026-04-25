# Generated headers depend on ftl::mmio primitives. cm4 doesn't pull in ftl
# transitively (cm7 gets it via threadx), so wire it in explicitly here.
if(NOT TARGET ftl)
  add_subdirectory(
    $ENV{FORGE_ROOT}/firmware/ftl
    ${CMAKE_BINARY_DIR}/forge/firmware/ftl
  )
endif()

add_library(registers INTERFACE)
target_include_directories(registers INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/firmware/cm4)
target_link_libraries(registers INTERFACE ftl)
add_subdirectory(codegen)
