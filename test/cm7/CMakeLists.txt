# Unit tests.
add_platform_test(ut-simple ut_simple.cpp)
add_platform_test(ut-memory
  ut_mpu.cpp
  ut_dtcm_bump_allocator.cpp
)

# Hello world.
find_cm4(CORE0 "hello-world-cm4.bin.cpp")
add_executable(hello-world-cm7
  hello_world_cm7.cpp
  ${CORE0}
)
platformify(hello-world-cm7)
target_compile_definitions(hello-world-cm7 PRIVATE
  -DCORE1_IMAGE_COPY_TO_RAM
)
target_compile_options(hello-world-cm7 PRIVATE -Wno-shadow)

# Echo.
add_executable(echo echo.cpp)
platformify(echo)

# Hello Threadx.
add_executable(hello-threadx
  hello_threadx.cpp
)
platformify(hello-threadx)
