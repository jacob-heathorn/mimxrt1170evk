set(CORE0_BIN_SOURCE "")
FIND_CORE0_DEBUG(CORE0_BIN_SOURCE "hello-world-cm4.c")

################################################################3

add_executable(hello-world-cm7
  hello_world_cm7.c
  ${CORE0_BIN_SOURCE}
)
platformify(hello-world-cm7)
target_link_libraries(hello-world-cm7 PRIVATE device utilities drivers board mcmgr)

target_compile_definitions(hello-world-cm7 PRIVATE
  -DCORE1_IMAGE_COPY_TO_RAM
)
target_compile_options(hello-world-cm7 PRIVATE -Wno-shadow)
