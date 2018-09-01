#include "gtest/gtest.h"
#include "../../src/fizz_buzz.cpp"

TEST(FizzBuzz, should_return_one_when_one) {
  EXPECT_EQ("1", FizzBuzz(1));
}

TEST(FizzBuzz, should_return_n_when_n) {
    EXPECT_EQ("2", FizzBuzz(2));
}