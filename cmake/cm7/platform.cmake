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
      pw_ctest -f0 ${PRESET_NAME}:${ARGV0}
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

  #-g -mcpu=cortex-m7 -Wall -fno-common     -ffunction-sections     -fdata-sections     
  # -ffreestanding     -fno-builtin     -mthumb     -mapcs     -Xlinker     --gc-sections     
  # -Xlinker     -static     -Xlinker     -z     -Xlinker     muldefs     -Xlinker     
  # -Map=output.map     -Wl,--print-memory-usage     -mfloat-abi=hard -mfpu=fpv5-d16     
  # --specs=nano.specs --specs=nosys.specs     
  # -T/home/jacob/evtol/nxp/mimxrt1170evk-examples/hello_world_demo_cm7/MIMXRT1176/gcc/MIMXRT1176xxxxx_cm7_ram.ld 
  # -static    -Wl,--no-warn-rwx-segments
  
  # Linker flags
  target_link_options(${target} PRIVATE
    # --specs=nosys.specs              # Redirects system calls to stub functions
    # #--specs=nano.specs              # Links against a smaller version of C standard library
    # -static                          # Links libraries statically, not dynamically
    # -Wl,--start-group -lc -lm -Wl,--end-group  # Wraps system libraries in a group to resolve circular dependencies
    # -Wl,--gc-sections                # Enables garbage collection of unused input sections

    --specs=nano.specs
    -Wl,--undefined=_sbrk # Keep fsl_sbrk.c implementation
    # --specs=nosys.specs
    #-Wl,--undefined=_sbrk -Wl,--start-group -lm -lc -lgcc -lnosys -Wl,--end-group
    -Wl,-Map=output.map
  )
  
  # Compiler flags
  target_compile_options(${target} PRIVATE
    -mcpu=cortex-m7            # Specifies the target processor (Cortex-M7)
    -mfpu=fpv5-d16             # Specifies the floating-point hardware (FPv5-D16)
    -mfloat-abi=hard           # Specifies that we are using hardware floating-point instructions
    -mthumb                    # Enables generation of Thumb (compressed) instructions
    -fno-exceptions            # Disables exceptions in C++
    $<$<COMPILE_LANGUAGE:CXX>:-fno-rtti> # Disables Run-Time Type Information (RTTI) in C++
    $<$<COMPILE_LANGUAGE:CXX>:-fno-use-cxa-atexit> # Avoids registering destructors for global/static objects with __cxa_atexit
  )

  # ${CMAKE_C_FLAGS_FLEXSPI_NOR_RELEASE} \
  #   -DXIP_EXTERNAL_FLASH=1 \
  #   -DXIP_BOOT_HEADER_ENABLE=1 \
  #   -DNDEBUG \
  #   -DCORE1_IMAGE_COPY_TO_RAM \
  #   -DCPU_MIMXRT1176DVMAA_cm7 \
  #   -DMCMGR_HANDLE_EXCEPTIONS=1 \
  #   -D__SEMIHOST_HARDFAULT_DISABLE=1 \
  #   -DMCUXPRESSO_SDK \
  #   -DMULTICORE_APP=1 \
  #   -Os \
  #   -mcpu=cortex-m7 \
  #   -Wall \
  #   -mthumb \
  #   -MMD \
  #   -MP \
  #   -fno-common \
  #   -ffunction-sections \
  #   -fdata-sections \
  #   -ffreestanding \
  #   -fno-builtin \
  #   -mapcs \
  #   -std=gnu99 \
  #   ${FPU} \
  #   ${DEBUG_CONSOLE_CONFIG} \

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
    -ffunction-sections
    -fdata-sections
    -ffreestanding
    -fno-builtin
    -mapcs
    -D__STARTUP_CLEAR_BSS
    -D__STARTUP_INITIALIZE_NONCACHEDATA
    -O0
    -ggdb
  )

endfunction()

# =================================================================================================
# Other utilities

# TODO move to forge
# Finds a file recursively in a given directory
function(FIND_FILE_IN_DIRECTORY result_var input_directory input_filename)
  # Use GLOB_RECURSE to search for the file recursively
  file(GLOB_RECURSE found_files
    RELATIVE "${input_directory}"
    "${input_directory}/${input_filename}")

  # Check the number of files found
  list(LENGTH found_files num_files)
  if(num_files EQUAL 1)
    list(GET found_files 0 first_file_path)
    # Construct the full path
    set(full_path "${input_directory}/${first_file_path}")
    set("${result_var}" "${full_path}" PARENT_SCOPE)
    message(STATUS "File found: ${full_path}")
  elseif(num_files GREATER 1)
    message(FATAL_ERROR "Error: Multiple instances of '${input_filename}' found in directory '${input_directory}'.")
  else()
    message(FATAL_ERROR "Error: The file '${input_filename}' not found in directory '${input_directory}'")
  endif()
endfunction()

# TODO: use fore find_application python code instead of cmake?
#
# Finds a file in the cortex-m4 debug build directory
function(FIND_CM4_DEBUG result_var input_filename)
  FIND_FILE_IN_DIRECTORY(FILE_PATH "$ENV{PROJECT_ROOT}/.bin/cm4-debug" "${input_filename}")
  set(${result_var} ${FILE_PATH} PARENT_SCOPE)
  message(STATUS "cortex-m4 debug build file found found: ${FILE_PATH}")
endfunction()

# Finds a file in the cortex-m4 release build directory
function(FIND_CM4_RELEASE result_var input_filename)
  FIND_FILE_IN_DIRECTORY(FILE_PATH "$ENV{PROJECT_ROOT}/.bin/cm4-release" "${input_filename}")
  set(${result_var} ${FILE_PATH} PARENT_SCOPE)
  message(STATUS "cortex-m4 release build file found: ${FILE_PATH}")
endfunction()

# Finds a file in either the release or debug build of cortex-m4 depending on the local build type.
function(FIND_CM4 result_var input_filename)
  if("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
    FIND_CM4_DEBUG(CORE0 "${input_filename}")
  elseif("${CMAKE_BUILD_TYPE}" STREQUAL "Release")
    FIND_CM4_RELEASE(CORE0 "${input_filename}")
  else()
    message(FATAL_ERROR "Unsupported build type: ${CMAKE_BUILD_TYPE}")
  endif()
  set(${result_var} ${CORE0} PARENT_SCOPE)
endfunction()
