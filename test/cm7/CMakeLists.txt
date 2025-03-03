add_subdirectory(hello_world)

# Add a simple test to verify the pigweed unit test framework.
add_platform_test(ut-simple ut_simple.cpp)
