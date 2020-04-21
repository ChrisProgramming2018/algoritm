// Copyright 2020
// algo expert three number sum
// Author: Christian Leininger <info2016frei@gmail.com>




#include <gtest/gtest.h>
#include "TwoNumberSum.h"


TEST(TwoNumberSumTest, TwoNumberSum)   {
 std::vector<int> expected {4, 6};
 ASSERT_EQ(twoNumberSum({4, 6}, 10), expected);
 
 expected = {1, 4};
 ASSERT_EQ(twoNumberSum({4, 6, 1}, 5), expected);
 
 expected = {-3, 6};
 ASSERT_EQ(twoNumberSum({4, 6, 1, -3}, 3), expected);
 
 expected =  {-1, 11};
 ASSERT_EQ(twoNumberSum({3, 5, -4, 8, 11, 1, -1, 6}, 10), expected);
 
 expected = {8, 9};
 ASSERT_EQ(twoNumberSum({1, 2, 3, 4, 5, 6, 7, 8, 9}, 17), expected);
 
 expected = {3, 15};
 ASSERT_EQ(twoNumberSum({1, 2, 3, 4, 5, 6, 7, 8, 9, 15}, 18), expected);
 
 expected = {-5, 0};
 ASSERT_EQ(twoNumberSum({-7, -5, -3, -1, 0, 1, 3, 5, 7}, -5), expected);

 expected = {-47, 210};
 ASSERT_EQ(twoNumberSum({-21, 301, 12, 4, 65, 56, 210, 356, 9, -47}, 163), expected);
 
 expected = {};
 ASSERT_EQ(twoNumberSum({-21, 301, 12, 4, 65, 56, 210, 356, 9, -47}, 164), expected);
 
 expected =  {};
 ASSERT_EQ(twoNumberSum({3, 5, -4, 8, 11, 1, -1, 6}, 15),expected);
}
