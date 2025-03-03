add_subdirectory(hello_world)

# Compiles a pigweed unit test executable
function(add_pw_test)
  add_executable(${ARGV})
  platformify(${ARGV0})
  target_link_libraries(${ARGV0} PRIVATE pw_unit_test)
  add_test(NAME ${ARGV0} 
    COMMAND
      # TODO resove preset.
      pw_ctest -f0 cm7-debug:${ARGV0}
  )
endfunction()

# Add a simple test to verify the framework
add_pw_test(pw-ut-simple pw_ut_simple.cpp)
