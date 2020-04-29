// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <gtest/gtest.h>
#include "./LongestCommonSubSequence.h"



TEST(LongestCommonSubSequenceTest, LongestCommonSubSequence) {
  std::string str1 = "ZXVVYZW";
  std::string str2 = "XKYKZPW";
  std::vector<char> sol = {'X', 'Y', 'Z', 'W'};
  longestCommonSubSequence(str1, str2);
  // ASSERT_EQ(longestCommonSubSequence(str1, str2)[0], sol[0]); 

}
