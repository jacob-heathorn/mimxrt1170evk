cmake_minimum_required(VERSION 3.27.4)

project(MIMXRT1170EVK-PLATFORM VERSION 1.0 LANGUAGES C CXX ASM)

# Use C++20. Force it, No Extensions (-std=c++20 not -std=gnu++20) to increase portability.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable testing with ctest
enable_testing()

# Make the platform module accessible from anywhere in the tree.
list(APPEND CMAKE_MODULE_PATH ${PLATFORM_PATH})

# Add the platform module here at the root of the tree.
include(platform)
include(subdirectories)
