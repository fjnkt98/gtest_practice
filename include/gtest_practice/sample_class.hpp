#ifndef GTEST_PRACTICE_CLASS_SAMPLE_HPP
#define GTEST_PRACTICE_CLASS_SAMPLE_HPP

#include <string>

namespace gtest_practice {
  class SampleClass {
    public:
      SampleClass(std::string str);

      std::string get_str();

    private:
      std::string str_;
  };
} // namespace gtest_practice

#endif
