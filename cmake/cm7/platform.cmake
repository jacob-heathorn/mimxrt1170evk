# The directory of this file is added to the module path from project root, enabling direct inclusion
# across the tree.

# Include the common platform cmake.
include($ENV{FORGE_ROOT}/cmake/common/platform.cmake)

# Defers to add_pw_test()
function(add_platform_test)
  add_pw_test(${ARGV})
endfunction()

# Adds a pigweed unit test executable, which can be executed with ctest.
function(add_pw_test)
  # Create the executable.
  add_executable(${ARGV})
  platformify(${ARGV0})
  
  # Get the preset name.
  target_link_libraries(${ARGV0} PRIVATE pw_unit_test)
  if("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
    set(PRESET_NAME "cm7-debug")
  elseif("${CMAKE_BUILD_TYPE}" STREQUAL "Release")
    set(PRESET_NAME "cm7-release")
  else()
    message(FATAL_ERROR "Unsupported build type: ${CMAKE_BUILD_TYPE}")
  endif()
  
  # Add the ctest command.
  add_test(NAME ${ARGV0} 
    COMMAND
      rip --ctest ${PRESET_NAME}:${ARGV0}
  )
endfunction()

# Adds platform-specific libraries and options to the target.
function(platformify target)
  add_common_c_cxx_flags(${target})
  add_platform_flags(${target})
  target_link_libraries(${target} PRIVATE cm7-platform)

  # Executables get special treatment :)
  get_target_property(_type ${target} TYPE)
  if(_type STREQUAL "EXECUTABLE")
    target_link_libraries(${target} PRIVATE rt1170-startup-cm7)
    # Add .elf suffix
    set_target_properties(${target} PROPERTIES OUTPUT_NAME "${target}.elf")
  endif()
endfunction()


# Adds platform-specific compile and link options to the target.
function(add_platform_flags target)

  # Linker flags
  target_link_options(${target} PRIVATE
    -static                          # Links libraries statically, not dynamically    -Wl,--gc-sections                # Enables garbage collection of unused input sections
    --specs=nano.specs    # Links against a smaller version of C standard library
    -u _printf_float      # Re-enable %f/%g in nano-specs printf
    # --specs=nosys.specs
    -Wl,--undefined=_sbrk # Keep fsl_sbrk.c implementation
    #-Wl,--undefined=_sbrk -Wl,--start-group -lm -lc -lgcc -lnosys -Wl,--end-group
    -Wl,-Map=output.map
    -Wl,--print-memory-usage
    -Wl,--no-warn-rwx-segments
  )
  
  # Compiler flags
  target_compile_options(${target} PRIVATE
    -mcpu=cortex-m7            # Specifies the target processor (Cortex-M7)
    -mfpu=fpv5-d16             # Specifies the floating-point hardware (FPv5-D16)
    -mfloat-abi=hard           # Specifies that we are using hardware floating-point instructions
    -mthumb                    # Enables generation of Thumb (compressed) instructions
    -fno-exceptions            # Disables exceptions in C++
    # $<$<COMPILE_LANGUAGE:CXX>:-nostdinc++> # Don't allow standard library usage
    $<$<COMPILE_LANGUAGE:CXX>:-fno-rtti>   # Disables Run-Time Type Information (RTTI) in C++
    $<$<COMPILE_LANGUAGE:CXX>:-fno-use-cxa-atexit> # Avoids registering destructors for global/static objects with __cxa_atexit
    $<$<COMPILE_LANGUAGE:CXX>:-fno-threadsafe-statics>
    $<$<COMPILE_LANGUAGE:X>:-std=gnu99>
  )

  target_compile_options(${target} PUBLIC
    -DCPU_MIMXRT1176DVMAA_cm7
    -DXIP_EXTERNAL_FLASH=1
    -DXIP_BOOT_HEADER_ENABLE=1
    -DCORE1_IMAGE_COPY_TO_RAM
    -DMCMGR_HANDLE_EXCEPTIONS=1
    -D__SEMIHOST_HARDFAULT_DISABLE=1
    -DMCUXPRESSO_SDK
    -DMULTICORE_APP=1
    # -Os
    -MMD
    -MP
    -fno-common
    # -ffreestanding
    -fno-builtin
    -D__STARTUP_CLEAR_BSS
  )

endfunction()

# =================================================================================================
# Other utilities

# Finds a file in the cortex-m4 debug build directory
function(find_cm4_debug result_var input_filename)
  find_file_in_directory(FILE_PATH "$ENV{PROJECT_ROOT}/.bin/cm4-debug" "${input_filename}")
  set(${result_var} ${FILE_PATH} PARENT_SCOPE)
  message(STATUS "cortex-m4 debug build file found found: ${FILE_PATH}")
endfunction()

# Finds a file in the cortex-m4 release build directory
function(find_cm4_release result_var input_filename)
  find_file_in_directory(FILE_PATH "$ENV{PROJECT_ROOT}/.bin/cm4-release" "${input_filename}")
  set(${result_var} ${FILE_PATH} PARENT_SCOPE)
  message(STATUS "cortex-m4 release build file found: ${FILE_PATH}")
endfunction()

# Finds a file in either the release or debug build of cortex-m4 depending on the local build type.
function(find_cm4 result_var input_filename)
  if("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
    find_cm4_debug(CORE0 "${input_filename}")
  elseif("${CMAKE_BUILD_TYPE}" STREQUAL "Release")
    find_cm4_release(CORE0 "${input_filename}")
  else()
    message(FATAL_ERROR "Unsupported build type: ${CMAKE_BUILD_TYPE}")
  endif()
  set(${result_var} ${CORE0} PARENT_SCOPE)
endfunction()
