add_library(cm4-platform STATIC)

target_sources(cm4-platform
  PRIVATE
    new_delete.cpp
)

platformify(cm4-platform)

