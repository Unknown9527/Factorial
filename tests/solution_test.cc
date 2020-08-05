#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(NormalTest, NormalTest) {
  Solution solution;
  EXPECT_EQ(solution.NonReFactorial(4), 24);
  EXPECT_EQ(solution.ReFactorial(4), 24);
}

TEST(ErrorTest, ErrorTest) {
  Solution solution;
  EXPECT_EQ(solution.NonReFactorial(-3), -999);
  EXPECT_EQ(solution.ReFactorial(-3), -999);
}

TEST(ErrorZero, ErrorZero) {
  Solution solution;
  EXPECT_EQ(solution.NonReFactorial(0), 1);
  EXPECT_EQ(solution.ReFactorial(0), 1);
}

TEST(ErrorOne, ErrorOne) {
  Solution solution;
  EXPECT_EQ(solution.NonReFactorial(1), 1);
  EXPECT_EQ(solution.ReFactorial(1), 1);
}