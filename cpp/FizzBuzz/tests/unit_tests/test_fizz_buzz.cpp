#include "gtest/gtest.h"
#include "../../src/fizz_buzz.cpp"

TEST(FizzBuzz, should_return_one_when_one) {
  EXPECT_EQ("1", FizzBuzz(1));
}