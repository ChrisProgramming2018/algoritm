// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <vector>


#ifndef THREAD_H_
#define THREAD_H_

class BST {
 public:
  int value;
  BST *left;
  BST *right;
  BST(int val);
  BST& insert(int val);
  bool contains(int val);
  BST& remove(int val, BST *parent = nullptr);
  int getMinValue();
};

std::vector<int> inOrderTraverse(BST* tree, std::vector<int> array);
#endif //

