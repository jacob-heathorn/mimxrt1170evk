add_library(cm7_drivers INTERFACE)
file(GLOB_RECURSE HEADER_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")
target_include_directories(cm7_drivers INTERFACE ${CMAKE_SOURCE_DIR}/firmware/cm7)
# target_sources(cm7_drivers INTERFACE ${HEADER_FILES})
