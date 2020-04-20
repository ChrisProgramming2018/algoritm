// Copyright 2020
// algo expert three number sum
// Author: Christian Leininger <info2016frei@gmail.com>

#include <gtest/gtest.h>
 #include "./FindClosestValueInBST.h"


BST::BST(int val) {
  value = val;
  left = NULL;
  right = NULL;
}

BST& BST::insert(int val) {
  if (val < value) {
    if (left == NULL) {
      BST* newBST = new BST(val);
      left = newBST;
    } else {
      left->insert(val);
    }
  } else {
    if (right == NULL) {
      BST* newBST = new BST(val);
      right = newBST;
    } else {
      right->insert(val);
    }
  }
  return *this;
}

TEST(FindClosestValueInBSTTest, findClosestValueInBST) {
  BST test (100);
  test.insert(5).insert(15).insert(5).insert(2).insert(1).insert(22).insert(1)
  .insert(1).insert(3).insert(1).insert(1).insert(502).insert(55000).insert(204)
  .insert(205).insert(207).insert(206).insert(208).insert(203).insert(-51)
  .insert(-403).insert(1001).insert(57).insert(60).insert(4500);

  ASSERT_EQ(findClosestValueInBst(&test, 100), 100);
  ASSERT_EQ(findClosestValueInBst(&test, 208), 208);
  ASSERT_EQ(findClosestValueInBst(&test, 4500), 4500);
  ASSERT_EQ(findClosestValueInBst(&test, 4501),4500);
  ASSERT_EQ(findClosestValueInBst(&test, -70), -51);
  ASSERT_EQ(findClosestValueInBst(&test, 2000) ,1001);
  ASSERT_EQ(findClosestValueInBst(&test, 6), 5);
  ASSERT_EQ(findClosestValueInBst(&test, 30000), 55000);
  ASSERT_EQ(findClosestValueInBst(&test, -1), 1);
  ASSERT_EQ(findClosestValueInBst(&test, 29751), 55000);
  ASSERT_EQ(findClosestValueInBst(&test, 29749), 4500);
}
