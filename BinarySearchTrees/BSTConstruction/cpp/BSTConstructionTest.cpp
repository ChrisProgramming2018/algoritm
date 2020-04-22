// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <gtest/gtest.h>
#include "./BSTConstruction.h"



TEST(BSTConstructionTest, BSTConstruction) {
  BST test1 (10);
  test1.insert(5).insert(15).insert(5).insert(2).insert(14).insert(22);

  BST test2 (10);
  test2.insert(15).insert(11).insert(22).remove(10);

  BST test3 (10);
  test3.insert(5).insert(7).insert(2).remove(10);

  BST test4 (10);
  test4.insert(5).insert(15).insert(22).insert(17).insert(34).insert(7).insert(2).insert(5).insert(1).insert(35).insert(27).insert(16).insert(30).remove(22).remove(17);

  ASSERT_EQ(test1.left->value, 5);
  ASSERT_EQ(test1.right->right->value, 22);
  ASSERT_EQ(test1.right->left->value, 14);
  ASSERT_EQ(test1.left->right->value, 5);
  ASSERT_EQ(test1.left->left->value, 2);
  ASSERT_EQ(test1.left->left->left, nullptr);
  ASSERT_EQ(test1.right->right->right, nullptr);
  ASSERT_EQ(test1.contains(15), 1);
  ASSERT_EQ(test1.contains(2), 1);
  ASSERT_EQ(test1.contains(5), 1);
  ASSERT_EQ(test1.contains(10), 1);
  ASSERT_EQ(test1.contains(22), 1);
  ASSERT_EQ(test1.contains(23), 0);
  
  std::vector<int> expected {11, 15, 22};
  ASSERT_EQ(inOrderTraverse(&test2, {}), expected);

  expected = {2, 5, 7};
  ASSERT_EQ(inOrderTraverse(&test3, {}), expected);

  expected =  {1, 2, 5, 5, 7, 10, 15, 16, 27, 30, 34, 35};
  ASSERT_EQ(inOrderTraverse(&test4, {}), expected);
  ASSERT_EQ(test4.right->right->value, 27);
  ASSERT_EQ(test4.right->right->left->value, 16);
}
