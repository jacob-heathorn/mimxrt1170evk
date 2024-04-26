add_executable(hello-world-cm4 hello_world_cm4.c)
platformify(hello-world-cm4)
target_link_libraries(hello-world-cm4 PRIVATE board drivers device utilities mcmgr)
target_compile_options(hello-world-cm4 PRIVATE 
  -Wno-missing-field-initializers
  -Wno-shadow
)

ADD_CUSTOM_COMMAND(TARGET hello-world-cm4 POST_BUILD COMMAND ${CMAKE_OBJCOPY}
-Obinary $<TARGET_FILE:hello-world-cm4> $<TARGET_NAME:hello-world-cm4>.bin)
