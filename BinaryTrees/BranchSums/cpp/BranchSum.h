// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <iostream>
#include <vector>


#ifndef BRANCHSUM_H_
#define BRANCHSUM_H_

class BinaryTree {
 public:
  int value;
  BinaryTree *left;
  BinaryTree * right;
  explicit BinaryTree(int value);
};

class TestBinaryTree : public BinaryTree {
 public:
  explicit TestBinaryTree(int value) : BinaryTree(value) {}
  BinaryTree* insert(std::vector<int> values, int i = 0);
};

void calculateBranchSums(BinaryTree *node, const int runningSum, std::vector<int> &sums);
std::vector<int> branchSums(BinaryTree *root);

#endif  // BRANCHSUM_H_
