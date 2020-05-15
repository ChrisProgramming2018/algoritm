// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>



#include  <gtest/gtest.h>
#include "NthFibonacci.h"


TEST(NthFibonacciTest, NthFibonacci) {
  ASSERT_EQ(getNthFib(1), 0);
  ASSERT_EQ(getNthFib(2), 1);
  ASSERT_EQ(getNthFib(3), 1);
  ASSERT_EQ(getNthFib(4), 2);
  ASSERT_EQ(getNthFib(5), 3);
  ASSERT_EQ(getNthFib(6), 5);
  ASSERT_EQ(getNthFib(7), 8);
  ASSERT_EQ(getNthFib(8), 13);
  ASSERT_EQ(getNthFib(9), 21);
  ASSERT_EQ(getNthFib(10), 34);
  ASSERT_EQ(getNthFib(11), 55);
  ASSERT_EQ(getNthFib(12), 89);
  ASSERT_EQ(getNthFib(14), 233);
  ASSERT_EQ(getNthFib(15), 377);
  ASSERT_EQ(getNthFib(16), 610);
  ASSERT_EQ(getNthFib(17), 987);
  ASSERT_EQ(getNthFib(18), 1597);
}

