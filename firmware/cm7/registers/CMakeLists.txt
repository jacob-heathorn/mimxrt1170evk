add_library(registers INTERFACE)
target_include_directories(registers INTERFACE ${CMAKE_SOURCE_DIR}/firmware/cm7)
add_subdirectory(codegen)
add_subdirectory(handwritten)
