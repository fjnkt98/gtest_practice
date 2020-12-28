cmake_minimum_required(VERSION 3.0)
project(gtest_practice)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(GTest)

add_executable(test
  test/test.cpp
  src/sum.cpp)

add_executable(class_test
  test/class_test.cpp
  src/sample_class.cpp)

target_include_directories(test
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(test
  PRIVATE
  GTest::GTest
  GTest::Main)

target_include_directories(class_test
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(class_test
  PRIVATE
  GTest::GTest
  GTest::Main)
