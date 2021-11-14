cmake_minimum_required(VERSION 3.10)
project(starter-template)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

include(GoogleTest)
enable_testing()

add_subdirectory(apps/main)
add_subdirectory(libs/example)
