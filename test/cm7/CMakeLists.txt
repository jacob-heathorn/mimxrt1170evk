# Unit tests.
add_platform_test(ut-simple ut_simple.cpp)
add_platform_test(ut-memory
  ut_mpu.cpp
  ut_allocators.cpp
  ut_memory.cpp
)
add_platform_test(ut-threadx
  ut_concurrency.cpp
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

# Hello threadx.
add_executable(hello-threadx
  hello_threadx.cpp
)
platformify(hello-threadx)
target_compile_options(hello-threadx PRIVATE -Wno-write-strings)

# Hello netx
add_executable(hello-netx
  hello_netx.cpp
)
platformify(hello-netx)
target_link_libraries(hello-netx PRIVATE network)

# Hello cyphal
add_executable(hello-cyphal
  hello_cyphal.cpp
)
platformify(hello-cyphal)
target_link_libraries(hello-cyphal PRIVATE network microcyphal)

# Hello map
add_executable(hello-map
  hello_map.cpp
)
platformify(hello-map)
target_link_libraries(hello-map PRIVATE stdc++ m)
