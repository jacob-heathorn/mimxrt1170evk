add_library(cm7-platform STATIC)

target_sources(cm7-platform
  PUBLIC
    mpu.hpp
  PRIVATE
    new_delete.cpp
)

platformify(cm7-platform)
