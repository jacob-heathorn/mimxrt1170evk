add_library(boot STATIC)

target_sources(boot
  PUBLIC
    evkmimxrt1170_flexspi_nor_config.c
    evkmimxrt1170_flexspi_nor_config.h
    fsl_flexspi_nor_boot.h
    fsl_flexspi_nor_boot.c
)
target_link_libraries(boot PUBLIC drivers)
add_common_c_cxx_flags(boot)
add_platform_flags(boot)
