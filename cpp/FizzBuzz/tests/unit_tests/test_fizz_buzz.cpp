#include "gtest/gtest.h"
#include "../../src/fizz_buzz.cpp"

TEST(FizzBuzz, should_return_one_when_one) {
  EXPECT_EQ("1", FizzBuzz(1));
}

TEST(FizzBuzz, should_return_n_when_n) {
    EXPECT_EQ("2", FizzBuzz(2));
}

TEST(FizzBuzz, should_return_fizz_when_3) {
    EXPECT_EQ("Fizz", FizzBuzz(3));
}

TEST(FizzBuzz, should_return_fizz_when_multiple_of_3) {
    EXPECT_EQ("Fizz", FizzBuzz(6));
}

TEST(FizzBuzz, should_return_buzz_when_multiple_of_5) {
    EXPECT_EQ("Buzz", FizzBuzz(5));
}