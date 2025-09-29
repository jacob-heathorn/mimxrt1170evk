add_library(cm7_drivers STATIC)

# Public headers location
target_include_directories(cm7_drivers
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/src
)

# Gather source and header files
file(GLOB_RECURSE HEADER_FILES "${CMAKE_CURRENT_LIST_DIR}/include/*.hpp" "${CMAKE_CURRENT_LIST_DIR}/include/*.h")
file(GLOB_RECURSE SOURCE_FILES "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")

target_sources(cm7_drivers
  PUBLIC
    ${HEADER_FILES}
  PRIVATE
    ${SOURCE_FILES}
)

platformify(cm7_drivers)
