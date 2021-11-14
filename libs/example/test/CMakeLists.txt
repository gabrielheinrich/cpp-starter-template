cmake_minimum_required(VERSION 3.10)
project(example-test)

add_executable(${PROJECT_NAME})

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

target_sources(${PROJECT_NAME} PRIVATE
  example.test.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE
  example
	CONAN_PKG::GTest
)

gtest_add_tests(TARGET ${PROJECT_NAME})