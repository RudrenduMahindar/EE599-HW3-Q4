#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(ValidstringTest, ReturnTrue) {
  Solution solution;
  string s1="(a+b)[c*d]{5g+h}";
  bool actual = solution.checkvalidstring(s1);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(ValidstringTest, ReturnFalse) {
  Solution solution;
  string s1="(a+b]";
  bool actual = solution.checkvalidstring(s1);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}