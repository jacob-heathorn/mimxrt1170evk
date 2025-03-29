add_library(boot STATIC)
# target_link_libraries(boot PRIVATE
#   cmsis
#   utilities
#   drivers
# )

# file(GLOB public_headers "*.h")

target_sources(boot
  PUBLIC
    evkmimxrt1170_flexspi_nor_config.c
    evkmimxrt1170_flexspi_nor_config.h
    fsl_flexspi_nor_boot.h
    fsl_flexspi_nor_boot.c
  # PRIVATE
)
platformify(boot)
# target_compile_options(boot PRIVATE 
#   -Wno-sign-conversion
# )
