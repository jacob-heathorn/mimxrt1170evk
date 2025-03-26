add_library(registers INTERFACE)
target_include_directories(registers INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/firmware/cm4)
add_subdirectory(codegen)
