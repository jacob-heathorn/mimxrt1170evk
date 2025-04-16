# Add pw unit test main file for threadx entry.
target_sources(pw_unit_test
  PRIVATE
    pw_ut_main.cpp
)

# Unit tests.
add_platform_test(ut-threadx
  ut_mutex.cpp
)

# Hello Threadx.
add_executable(hello-threadx
  hello_threadx.cpp
)
platformify(hello-threadx)
target_compile_options(hello-threadx PRIVATE -Wno-write-strings)
