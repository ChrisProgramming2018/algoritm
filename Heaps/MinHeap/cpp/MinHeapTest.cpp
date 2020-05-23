// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "MinHeap.h"
#include <gtest/gtest.h>



TEST(MinHeapTest, MinHeap) {
  std::vector<int> array = {8, 9, 1, 3};
  MinHeap  minHeap(array);
  ASSERT_EQ(minHeap.peek(), 1);
  minHeap.insert(-8);
  ASSERT_EQ(minHeap.peek(), -8);
  ASSERT_EQ(minHeap.removeMin(), -8);
  ASSERT_EQ(minHeap.peek(), 1);
  minHeap.insert(8);
  ASSERT_EQ(minHeap.peek(), 1);
}
