// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <gtest/gtest.h>
#include "./Quicksort.h"

TEST(QuicksortTest, Quicksort) {
  std::vector<int> array = {31, 24, 15, 56, 8, 32, 56};
  Quicksort qs(array);
  int value = qs.randomNumber(0 , 10);
  ASSERT_EQ(value, 3);
  value = qs.randomNumber(0 , 10);
  ASSERT_EQ(value, 6);
  value = qs.randomNumber(0 , 10);
  ASSERT_EQ(value, 7);
  qs.divideSort(0, 6);
  ASSERT_EQ(qs._array[0], 8);
  ASSERT_EQ(qs._array[1], 24);
  ASSERT_EQ(qs._array[2], 15);
  ASSERT_EQ(qs._array[3], 31);
  ASSERT_EQ(qs._array[4], 56);
  ASSERT_EQ(qs._array[5], 32);
  ASSERT_EQ(qs._array[6], 56);

}
