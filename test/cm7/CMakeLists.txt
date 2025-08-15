# Unit tests.
add_platform_test(ut-simple ut_simple.cpp)
add_platform_test(ut-memory
  ut_mpu.cpp
  ut_bump_allocators.cpp
  ut_bump_pool.cpp
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

# Hello publisher
add_executable(hello-publisher
  hello_publisher.cpp
)
platformify(hello-publisher)
target_link_libraries(hello-publisher PRIVATE network microcyphal)

# Hello subscriber
add_executable(hello-subscriber
  hello_subscriber.cpp
)
platformify(hello-subscriber)
target_link_libraries(hello-subscriber PRIVATE network microcyphal)

# Hello footprint
add_executable(hello-footprint
  hello_footprint.cpp
)
platformify(hello-footprint)
target_link_libraries(hello-footprint PRIVATE stdc++ m)
