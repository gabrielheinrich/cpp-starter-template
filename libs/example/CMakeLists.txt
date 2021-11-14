cmake_minimum_required(VERSION 3.10)
project(example)

add_library(${PROJECT_NAME} "")

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

target_sources(${PROJECT_NAME} PRIVATE
  include/example/example.h
  src/example/example.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC include)

add_subdirectory(test)