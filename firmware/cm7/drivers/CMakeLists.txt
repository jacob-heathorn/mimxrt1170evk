add_library(cm7_drivers STATIC)
file(GLOB_RECURSE HEADER_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")
file(GLOB_RECURSE SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
target_include_directories(cm7_drivers PUBLIC ${CMAKE_SOURCE_DIR}/firmware/cm7)
target_sources(cm7_drivers
  PUBLIC 
    ${HEADER_FILES}
  PRIVATE
    ${SOURCE_FILES}
)
target_link_libraries(cm7_drivers PRIVATE drivers)
platformify(cm7_drivers)
