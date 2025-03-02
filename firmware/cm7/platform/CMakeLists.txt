add_library(cm7-platform STATIC)

target_sources(cm7-platform
  PUBLIC
    mpu.hpp
    syscalls.cpp
  PRIVATE
    new_delete.cpp
)

target_link_libraries(cm7-platform PUBLIC utilities drivers)
# platformify(cm7-platform)
add_common_c_cxx_flags(cm7-platform)
add_platform_flags(cm7-platform)
