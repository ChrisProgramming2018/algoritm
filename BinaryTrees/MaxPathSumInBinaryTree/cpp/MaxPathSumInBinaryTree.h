// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <iostream>
#include <thread>
#include <string>


#ifndef THREAD_H_
#define THREAD_H_

class BinaryTree {
 public:
  int value;
  BinaryTree *right;
  BinaryTree *left;
  BinaryTree(int value);
  void insert(std::vector<int> values, int i = 0);
};

std::vector<int> findMaxSum(BinaryTree *tree);
int maxPathSum(BinaryTree tree);

#endif //

