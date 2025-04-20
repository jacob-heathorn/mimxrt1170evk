add_library(network STATIC)
target_include_directories(network PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)

file(GLOB header_files "${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp")
file(GLOB source_files "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
target_sources(network
  PUBLIC
    ${header_files}
  PRIVATE
    ${source_files}
)
platformify(network)
target_link_libraries(network PUBLIC 
  netxduo
)
