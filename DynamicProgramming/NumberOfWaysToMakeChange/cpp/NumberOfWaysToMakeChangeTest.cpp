// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <gtest/gtest.h>
#include "./NumberOfWaysToMakeChange.h"

TEST(NumberOfWaysToMakeChangeTest, NumberOfWaysToMakeChange) {
  std::vector<int> vector1 {2, 3, 4, 7};
  std::vector<int> vector2 {5};
  std::vector<int> vector3 {2, 4};
  std::vector<int> vector4 {1, 5};
  std::vector<int> vector5 {1, 5, 10, 25};
  std::vector<int> vector6 {1, 5, 10, 25};
  std::vector<int> vector7 {1, 5, 10, 25};
  std::vector<int> vector8 {1, 5, 10, 25};
  std::vector<int> vector9 {2, 3, 7};
  std::vector<int> vector10 {2, 3, 4, 7};
  ASSERT_EQ(numberOfWaysToMakeChange(0, vector1), 1);
  ASSERT_EQ(numberOfWaysToMakeChange(9, vector2), 0);
  ASSERT_EQ(numberOfWaysToMakeChange(7, vector3), 0);
  ASSERT_EQ(numberOfWaysToMakeChange(6, vector4), 2);
  ASSERT_EQ(numberOfWaysToMakeChange(4, vector5), 1);
  ASSERT_EQ(numberOfWaysToMakeChange(5, vector6), 2);
  ASSERT_EQ(numberOfWaysToMakeChange(10, vector7), 4);
  ASSERT_EQ(numberOfWaysToMakeChange(25, vector8), 13);
  ASSERT_EQ(numberOfWaysToMakeChange(12, vector9), 4);
  ASSERT_EQ(numberOfWaysToMakeChange(7, vector10), 3);
}
