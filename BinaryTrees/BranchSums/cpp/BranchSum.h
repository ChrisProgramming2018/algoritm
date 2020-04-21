// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <iostream>
#include <vector>


#ifndef THREAD_H_
#define THREAD_H_

clas BinaryTree {
 public:
  int value;
  BinaryTree *left;
  BinaryTree * right;

  BinaryTree(int value) {
    this-> value = value;
    left = NULL;
    right = NULL;
  }
};

void calculateBranchSums(BinaryTree *node, int runningSum, std::vector<int> sum);
std::vector<int> branchSums(BinaryTree *root);
#endif //

