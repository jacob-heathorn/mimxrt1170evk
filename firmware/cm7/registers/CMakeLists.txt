add_library(registers INTERFACE)
file(GLOB_RECURSE HEADER_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")
target_sources(registers INTERFACE ${HEADER_FILES})
