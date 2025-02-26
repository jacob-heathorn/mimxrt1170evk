add_library(cm4-platform STATIC)

target_sources(cm4-platform
  PUBLIC
    mpu.hpp
  PRIVATE
    new_delete.cpp
)

platformify(cm4-platform)
