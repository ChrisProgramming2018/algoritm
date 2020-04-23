// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <gtest/gtest.h>
#include "./MinNumberOfCoinsForChange.h"


TEST(MinNumberOfCoinsForChangeTest, MinNumberOfCoinsForChange) {

  std::vector<int> vector1 {1, 2, 3};
  std::vector<int> vector2 {2, 1};
  std::vector<int> vector3 {1, 5, 10};
  std::vector<int> vector4 {1, 5, 10};
  std::vector<int> vector5 {1, 5, 10};
  std::vector<int> vector6 {1, 5, 10};
  std::vector<int> vector7 {1, 5, 10};
  std::vector<int> vector8 {1, 5, 10};
  std::vector<int> vector9 {2, 4};
  std::vector<int> vector10 {3, 7};
  std::vector<int> vector11 {3, 5};
  std::vector<int> vector12 {3, 4, 5};
  std::vector<int> vector13 {39, 45, 130, 40, 4, 1};
  std::vector<int> vector14 {39, 45, 130, 40, 4, 1, 60, 75};
  ASSERT_EQ(minNumberOfCoinsForChange(0, vector1), 0);
  ASSERT_EQ(minNumberOfCoinsForChange(3, vector2), 2);
  ASSERT_EQ(minNumberOfCoinsForChange(4, vector3), 4);
  ASSERT_EQ(minNumberOfCoinsForChange(7, vector4), 3);
  ASSERT_EQ(minNumberOfCoinsForChange(10, vector5), 1);
  ASSERT_EQ(minNumberOfCoinsForChange(11, vector6), 2);
  ASSERT_EQ(minNumberOfCoinsForChange(24, vector7), 6);
  ASSERT_EQ(minNumberOfCoinsForChange(25, vector8), 3);
  ASSERT_EQ(minNumberOfCoinsForChange(7, vector9), -1);
  ASSERT_EQ(minNumberOfCoinsForChange(7, vector10), 1);
  ASSERT_EQ(minNumberOfCoinsForChange(9, vector11), 3);
  ASSERT_EQ(minNumberOfCoinsForChange(9, vector12), 2);
  ASSERT_EQ(minNumberOfCoinsForChange(135, vector13), 3);
  ASSERT_EQ(minNumberOfCoinsForChange(135, vector14), 2);
}
