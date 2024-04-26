add_library(rt1170-platform STATIC)
add_common_c_cxx_flags(rt1170-platform)
add_platform_flags(rt1170-platform)
target_include_directories(rt1170-platform PUBLIC ${PROJECT_SOURCE_DIR})

add_subdirectory(include)
add_subdirectory(src)
