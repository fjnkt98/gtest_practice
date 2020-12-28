cmake_minimum_required(VERSION 3.0)
project(gtest_practice)

find_package(GTest)

add_executable(test
  test/test.cpp
  src/sum.cpp)
target_include_directories(test
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(test
  PRIVATE
  GTest::GTest
  GTest::Main)
