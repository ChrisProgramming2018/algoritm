// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <gtest/gtest.h>
#include "./Quicksort.h"

TEST(QuicksortTest, Quicksort) {
  std::vector<int> array = {31, 24, 15, 56, 8, 32, 56};
  Quicksort qs(array);
  int value = qs.randomNumber(0 , 10);
  ASSERT_EQ(value, 1);
  value = qs.randomNumber(0 , 10);
  ASSERT_EQ(value, 1);
  value = qs.randomNumber(0 , 10);
  ASSERT_EQ(value, 1);
  qs.divideSort(0, 6);
  ASSERT_EQ(qs._array[0], 8);
  ASSERT_EQ(qs._array[1], 24);
  ASSERT_EQ(qs._array[2], 15);
  ASSERT_EQ(qs._array[3], 31);
  ASSERT_EQ(qs._array[4], 56);
  ASSERT_EQ(qs._array[5], 32);
  ASSERT_EQ(qs._array[6], 56);

  array = {1, 1, -2, -5, 18, -32, 516, 0, 0};
  Quicksort qs2(array);
  qs2.quicksortMain(true);
  ASSERT_EQ(qs2._array[0], -32);
  ASSERT_EQ(qs2._array[1], -5);
  ASSERT_EQ(qs2._array[2], -2);
  ASSERT_EQ(qs2._array[3], 0);
  ASSERT_EQ(qs2._array[4], 0);
  ASSERT_EQ(qs2._array[5], 1);
  ASSERT_EQ(qs2._array[6], 1);
  ASSERT_EQ(qs2._array[7], 18);
  ASSERT_EQ(qs2._array[8], 516);

  array = {1, 1, -2, -5, 18, -32, 516, 0, 0};
  Quicksort qs3(array);
  qs3.quicksortMain(false);
  ASSERT_EQ(qs3._array[0], -32);
  ASSERT_EQ(qs3._array[1], -5);
  ASSERT_EQ(qs3._array[2], -2);
  ASSERT_EQ(qs3._array[3], 0);
  ASSERT_EQ(qs3._array[4], 0);
  ASSERT_EQ(qs3._array[5], 1);
  ASSERT_EQ(qs3._array[6], 1);
  ASSERT_EQ(qs3._array[7], 18);
  ASSERT_EQ(qs3._array[8], 516);
}
