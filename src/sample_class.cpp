#include "gtest_practice/sample_class.hpp"

#include <string>

namespace gtest_practice {
  SampleClass::SampleClass(std::string str)
    :str_(str)
  {
  }

  std::string SampleClass::get_str() {
    return str_;
  }
}
