// Copyright 2020
// algo expert LinkedList
// Author: Christian Leininger <info2016frei@gmail.com>




#include <gtest/gtest.h>
#include "LinkedList.h"


TEST(LinkedListTest, LinkedList) {
  DoublyLinkedList dLL;
  ASSERT_EQ(dLL._head, nullptr);
  ASSERT_EQ(dLL._tail, nullptr);
}
