add_executable(hello-world-cm4 hello_world_cm4.c)
platformify(hello-world-cm4)
target_link_libraries(hello-world-cm4 PRIVATE board drivers device utilities mcmgr)
target_compile_options(hello-world-cm4 PRIVATE 
  -Wno-missing-field-initializers
  -Wno-shadow
)

# TODO make a function to do this stuff.

# TODO need this intermediate step?
ADD_CUSTOM_COMMAND(TARGET hello-world-cm4 POST_BUILD 
  COMMAND ${CMAKE_OBJCOPY} -Obinary $<TARGET_FILE:hello-world-cm4> $<TARGET_NAME:hello-world-cm4>.bin)

# Output source file from .bin
ADD_CUSTOM_COMMAND(TARGET hello-world-cm4 POST_BUILD COMMAND xxd -i hello-world-cm4.bin hello-world-cm4.c)

# # Custom command to generate C source file from binary
# add_custom_command(
#     OUTPUT ${GENERATED_SRC}
#     COMMAND xxd -i ${BINARY_PATH} ${GENERATED_SRC}
#     DEPENDS hello-world-cm4 ${BINARY_PATH}
#     COMMENT "Generating C array from binary"
# )
