# Add the netxduo repository as a subdirectory
set(NX_USER_FILE ${CMAKE_CURRENT_SOURCE_DIR}/nx_user.h)
set(NXD_ENABLE_FILE_SERVERS OFF)
add_subdirectory(
  $ENV{NETXDUO_ROOT}
  ${CMAKE_BINARY_DIR}/netxduo
)
platformify(netxduo)
target_compile_options(netxduo PRIVATE
  -Wno-cast-align
  -Wno-redundant-decls
  $<$<COMPILE_LANGUAGE:C>:-Wno-discarded-qualifiers>
  -Wno-switch-default
)
target_sources(netxduo
  PUBLIC
    nx_user.h
    nx_driver_imxrt_irq.c
    nx_driver_imxrt.cpp
    nx_driver_imxrt.h
    gigabit_ethernet_driver.cpp
    gigabit_ethernet_driver.h
    ethernet_frame.hpp
    detail/tx_descriptor.h
    detail/tx_descriptor_ring.h
    detail/tx_frame.h
    detail/rx_descriptor.h
    detail/rx_descriptor_ring.h
    detail/ethernet_mac.h
    detail/ethernet_mac.cpp
)
target_compile_options(netxduo PUBLIC
  -Wno-write-strings
  -Wno-cast-align
)
target_link_libraries(netxduo PRIVATE drivers)
