add_library(mcmgr STATIC)

target_link_libraries(mcmgr PUBLIC device drivers)

file(GLOB public_headers "*.h")
file(GLOB private_sources 
  "*.c"
)

# TODO why sources had to be public for the MUA_IRQHandler to be seen?
target_sources(mcmgr
  PUBLIC
    ${public_headers}
  PUBLIC
    ${private_sources}
)

target_include_directories(mcmgr INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
platformify(mcmgr)
target_compile_options(mcmgr PUBLIC 
  # -Wno-discarded-qualifiers
  -Wno-cast-align
)

