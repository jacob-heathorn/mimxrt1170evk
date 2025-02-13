# The directory of this file is added to the module path from project root, enabling direct inclusion
# across the tree.

# Include the common platform cmake.
include($ENV{FORGE_ROOT}/cmake/common/platform.cmake)


# Adds platform-specific libraries and options to the target.
function(platformify target)
  add_common_c_cxx_flags(${target})
  add_platform_flags(${target})
  # target_link_libraries(${target} PUBLIC rt1170-platform)

  # Executables get special treatment :)
  get_target_property(_type ${target} TYPE)
  if(_type STREQUAL "EXECUTABLE")
    # TODO handle cm7 and cm4
    target_link_libraries(${target} PRIVATE rt1170-startup-cm4)
    # Add .elf suffix
    set_target_properties(${target} PROPERTIES OUTPUT_NAME "${target}.elf")
  endif()
endfunction()


# Adds platform-specific compile and link options to the target.
function(add_platform_flags target)
  
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

    # Exe linker flags?
    # Debug
    -g
    -mcpu=cortex-m4
    -Wall
    -fno-common
    -ffunction-sections
    -fdata-sections
    -ffreestanding
    -fno-builtin
    -mthumb
    -mapcs
    -Xlinker
    --gc-sections
    -Xlinker
    -static
    -Xlinker
    -z
    -Xlinker
    muldefs
    #-Map=output.map
    -Wl,--print-memory-usage
    -static
    # # Release
    # -mcpu=cortex-m4 \
    # -Wall \
    # -fno-common \
    # -ffunction-sections \
    # -fdata-sections \
    # -ffreestanding \
    # -fno-builtin \
    # -mthumb \
    # -mapcs \
    # -Xlinker \
    # --gc-sections \
    # -Xlinker \
    # -static \
    # -Xlinker \
    # -z \
    # -Xlinker \
    # muldefs \
    # -Xlinker \
    # -Map=output.map \
    # -Wl,--print-memory-usage \
    # ${FPU} \
    # ${SPECS} \
    # -T${ProjDirPath}/MIMXRT1176xxxxx_cm4_ram.ld -static \
  )
  
  # Compiler flags
  target_compile_options(${target} PRIVATE
    -mcpu=cortex-m4            # Specifies the target processor (Cortex-M7)
    -mfpu=fpv4-sp-d16          # Specifies the floating-point hardware
    -mfloat-abi=hard           # Specifies that we are using hardware floating-point instructions
    -mthumb                    # Enables generation of Thumb (compressed) instructions
    -fno-exceptions            # Disables exceptions in C++
    $<$<COMPILE_LANGUAGE:CXX>:-fno-rtti> # Disables Run-Time Type Information (RTTI) in C++
    $<$<COMPILE_LANGUAGE:CXX>:-fno-use-cxa-atexit> # Avoids registering destructors for global/static objects with __cxa_atexit
  )


  target_compile_options(${target} PUBLIC
    # Debug
    -DDEBUG
    -D__STARTUP_CLEAR_BSS
    -D__STARTUP_INITIALIZE_NONCACHEDATA
    -mcpu=cortex-m4
    -mthumb
    -DCPU_MIMXRT1176DVMAA_cm4
    -DFLEXSPI_IN_USE
    -DMCMGR_HANDLE_EXCEPTIONS=1
    -D__SEMIHOST_HARDFAULT_DISABLE=1
    -DMCUXPRESSO_SDK
    -DMULTICORE_APP=1
    -g
    -O0
    -Wall
    -mthumb
    -MMD
    -MP
    -fno-common
    -ffunction-sections
    -fdata-sections
    -ffreestanding
    -fno-builtin
    -mapcs
    -std=gnu99
    #${DEBUG_CONSOLE_CONFIG}
    
    # TODO C++
    # -fno-rtti
    -fno-exceptions
  )

endfunction()

# set(CONFIG_COMPILER gcc)
# set(CONFIG_TOOLCHAIN armgcc)
# set(CONFIG_USE_COMPONENT_CONFIGURATION false)
# set(CONFIG_USE_middleware_multicore_mcmgr_imxrt1170 true)
# set(CONFIG_USE_utility_debug_console_lite true)
# set(CONFIG_USE_utility_assert_lite true)
# set(CONFIG_USE_middleware_multicore_mcmgr true)
# set(CONFIG_USE_driver_lpuart true)
# set(CONFIG_USE_driver_clock true)
# set(CONFIG_USE_driver_common true)
# set(CONFIG_USE_device_MIMXRT1176_CMSIS true)
# set(CONFIG_USE_component_lpuart_adapter true)
# set(CONFIG_USE_component_lists true)
# set(CONFIG_USE_device_MIMXRT1176_startup true)
# set(CONFIG_USE_driver_iomuxc true)
# set(CONFIG_USE_driver_igpio true)
# set(CONFIG_USE_driver_xip_device true)
# set(CONFIG_USE_driver_xip_board_evkmimxrt1170 true)
# set(CONFIG_USE_driver_pmu_1 true)
# set(CONFIG_USE_driver_dcdc_soc true)
# set(CONFIG_USE_driver_cache_lmem true)
# set(CONFIG_USE_utilities_misc_utilities true)
# set(CONFIG_USE_driver_mu true)
# set(CONFIG_USE_driver_anatop_ai true)
# set(CONFIG_USE_CMSIS_Include_core_cm true)
# set(CONFIG_USE_device_MIMXRT1176_system true)
# set(CONFIG_CORE cm4f)
# set(CONFIG_DEVICE MIMXRT1176)
# set(CONFIG_BOARD evkmimxrt1170)
# set(CONFIG_KIT evkmimxrt1170)
# set(CONFIG_DEVICE_ID MIMXRT1176xxxxx)
# set(CONFIG_FPU SP_FPU)
# set(CONFIG_DSP NO_DSP)
# set(CONFIG_CORE_ID cm4)