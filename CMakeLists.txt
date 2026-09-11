# Minimum required CMake version
cmake_minimum_required(VERSION 3.16)

# Project name, version, and programming language
project(VisionAnalyzer VERSION 1.0 LANGUAGES CXX)

# Set global C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")
message(STATUS "Current System Path (ENV): $ENV{PATH}")

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)