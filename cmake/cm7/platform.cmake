# The directory of this file is added to the module path from project root, enabling direct inclusion
# across the tree.

# Include the common platform cmake.
include($ENV{FORGE_ROOT}/platforms/common/platform.cmake)


# Adds platform-specific libraries and options to the target.
function(platformify target)
  add_common_c_cxx_flags(${target})
  add_platform_flags(${target})
  # target_link_libraries(${target} PUBLIC rt1170-platform)

  # Executables get special treatment :)
  get_target_property(_type ${target} TYPE)
  if(_type STREQUAL "EXECUTABLE")
    # TODO handle cm7 and cm4
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
    --specs=nosys.specs
    -Wl,--start-group  -lm -lc -lgcc -lnosys  -Wl,--end-group
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
# Function to find a file recursively in a given directory
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

# Function to find the core0 debug file
function(FIND_CORE0_DEBUG result_var input_filename)
    FIND_FILE_IN_DIRECTORY(FILE_PATH "$ENV{PROJECT_ROOT}/bin/cm4-debug" "${input_filename}")

    # Pass the result to the caller's variable
    set(${result_var} ${FILE_PATH} PARENT_SCOPE)
    message(STATUS "Found core 0 binary source: ${FILE_PATH}")
endfunction()
