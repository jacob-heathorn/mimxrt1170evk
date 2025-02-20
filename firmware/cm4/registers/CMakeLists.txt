add_library(registers INTERFACE)
file(GLOB_RECURSE HEADER_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")
target_include_directories(registers INTERFACE ${CMAKE_SOURCE_DIR}/firmware/cm4)
target_sources(registers INTERFACE ${HEADER_FILES})
