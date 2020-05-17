// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <gtest/gtest.h>
#include "./BranchSum.h"



TEST(BrunchSumTest, BrunchSum) {
  TestBinaryTree *tree = new TestBinaryTree(1);
  std::vector<int> expected = {1};
  ASSERT_EQ(branchSums(tree), expected);

  TestBinaryTree *tree1 = new TestBinaryTree(1);
  tree1->insert({2});
  expected = {3};
  ASSERT_EQ(branchSums(tree1), expected);

  TestBinaryTree *tree2 = new TestBinaryTree(1);
  tree2->insert({2, 3});
  expected = {3, 4};
  ASSERT_EQ(branchSums(tree2), expected);

  TestBinaryTree *tree3 = new TestBinaryTree(1);
  tree3->insert({2, 3, 4, 5});
  expected = {7, 8, 4};
  ASSERT_EQ(branchSums(tree3), expected);

  TestBinaryTree *tree4 = new TestBinaryTree(1);
  tree4->insert({2, 3, 4, 5, 6, 7, 8, 9, 10});
  expected = {15, 16, 18, 10, 11};
  ASSERT_EQ(branchSums(tree4), expected);

  TestBinaryTree *tree5 = new TestBinaryTree(0);
  tree5->left = new BinaryTree(1);
  tree5->left->left = new BinaryTree(10);
  tree5->left->left->left = new BinaryTree(100);
  expected = {111};
  ASSERT_EQ(branchSums(tree5), expected);

  TestBinaryTree *tree6 = new TestBinaryTree(0);
  tree6->left = new BinaryTree(1);
  tree6->left->left = new BinaryTree(10);
  tree6->left->left->left = new BinaryTree(100);
  expected = {111};
  ASSERT_EQ(branchSums(tree6), expected);

  TestBinaryTree *tree7 = new TestBinaryTree(0);
  tree7->right = new BinaryTree(1);
  tree7->right->right = new BinaryTree(10);
  tree7->right->right->right = new BinaryTree(100);
  expected = {111};
  ASSERT_EQ(branchSums(tree7), expected);

  TestBinaryTree *tree8 = new TestBinaryTree(0);
  tree8->left = new BinaryTree(9);
  tree8->right = new BinaryTree(1);
  tree8->right->left = new BinaryTree(15);
  tree8->right->right = new BinaryTree(10);
  tree8->right->right->left = new BinaryTree(100);
  tree8->right->right->right = new BinaryTree(200);
  expected = {9, 16, 111, 211};
  ASSERT_EQ(branchSums(tree8), expected);
}
