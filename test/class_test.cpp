#include <gtest/gtest.h>

#include "gtest_practice/sample_class.hpp"

TEST(ClassTestCase, TestGetString) {
  std::string str = "Sample Class Test";
  
  gtest_practice::SampleClass sample_class(str);

  EXPECT_EQ(str, sample_class.get_str());
}
