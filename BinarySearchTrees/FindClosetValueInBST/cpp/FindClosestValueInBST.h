// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <string>


#ifndef FINDCLOSESTVALUEINBST_H_
#define FINDCLOSESTVALUEINBST_H_

class BST {
 public:
  int value;
  BST *left;
  BST *right;

  explicit BST(int val);
  BST &insert(int val);
};


int findClosestValueInBst(BST *tree, int target);
int findClosestValueInBstHelper(BST *tree, int target, double closest);

#endif  //  FINDCLOSESTVALUEINBST_H_
