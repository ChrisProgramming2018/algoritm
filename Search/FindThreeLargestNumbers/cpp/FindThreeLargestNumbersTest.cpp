// Add, edit, or remove tests in this file.
// Treat it as your playground!


#include <gtest/gtest.h>
#include "./FindThreeLargestNumbers.h"


TEST(FindThreeLargestNumbersTest, FindThreeLargestNumbers) {
  std::vector<int> expected{7, 8, 55};
  ASSERT_EQ(findThreeLargestNumbers({55, 7, 8}), expected);

  expected = {11, 43, 55};
  ASSERT_EQ(findThreeLargestNumbers({55, 43, 11, 3, -3, 10}), expected);

  expected = {11, 43, 55};
  ASSERT_EQ(findThreeLargestNumbers({55, 7, 8, 3, 43, 11}), expected);

  expected = {7, 7, 7};
  ASSERT_EQ(findThreeLargestNumbers({7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7}), expected);

  expected = {7, 7, 8};
  ASSERT_EQ(findThreeLargestNumbers({7, 7, 7, 7, 7, 7, 8, 7, 7, 7, 7}), expected);

  expected = {18, 141, 541};
  ASSERT_EQ(findThreeLargestNumbers({141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7}), expected);

  expected = {-2, -1, 7};
  ASSERT_EQ(findThreeLargestNumbers({-1, -2, -3, -7, -17, -27, -18, -541, -8, -7, 7}), expected);
}
