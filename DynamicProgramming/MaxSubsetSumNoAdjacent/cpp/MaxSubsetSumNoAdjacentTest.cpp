// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <gtest/gtest.h>
#include "./MaxSubsetSumNoAdjacent.h"


TEST(MaxSubsetSumNoAdjacentTest, MaxSubsetSumNoAdjacent) {
  std::vector<int> array = {75, 105, 120, 75, 90, 135};
  ASSERT_EQ(maxSubsetSumNoAdjacent(array), 330);
  array = {};
  ASSERT_EQ(maxSubsetSumNoAdjacent(array), 0);
  array = {125, 210, 250, 120, 150, 300};
  ASSERT_EQ(maxSubsetSumNoAdjacent(array), 675);
  array = {30, 25, 50, 55, 100};
  ASSERT_EQ(maxSubsetSumNoAdjacent(array), 180);
}
