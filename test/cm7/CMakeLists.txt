# Add a simple test to verify the pigweed unit test framework.
add_platform_test(ut-simple ut_simple.cpp)

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

# Cache clean.
add_executable(cache_clean cache_clean.cpp)
platformify(cache_clean)
target_link_libraries(cache_clean PUBLIC registers)

# Cache test
add_platform_test(ut_cache ut_cache.cpp)
target_link_libraries(ut_cache PUBLIC registers)