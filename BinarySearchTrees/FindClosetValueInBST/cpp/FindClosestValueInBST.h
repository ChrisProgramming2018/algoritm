// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <iostream>
#include <thread>
#include <string>


#ifndef THREAD_H_
#define THREAD_H_

class BST {
 public:
  int value;
  BST *left;  
  BST *right;

  BST(int val);
  BST &insert(int val);
};


int findClosestValueInBst(BST *tree, int target);
int findClosestValueInBstHelper(BST *tree, int target, double closest);

#endif //
