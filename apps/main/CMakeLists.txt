cmake_minimum_required(VERSION 3.10)
project(main)

add_executable(${PROJECT_NAME} "")

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

target_link_libraries(${PROJECT_NAME} PRIVATE CONAN_PKG::poco)

target_sources(${PROJECT_NAME} PRIVATE main.cpp)