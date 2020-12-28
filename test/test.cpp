#include <gtest/gtest.h>

#include "gtest_practice/sum.hpp"

TEST(SimpleTestCase, TestSum) {
  EXPECT_EQ(10, gtest_practice::sum(5, 5));
}
