// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./Thread_5.h"

// ______________________________________________________________
std::vector<int> findMaxSum(BinaryTree *tree) {
  if (tree == NULL) { return std::vector<int>{0,0}; }
  
  std::vector<int> leftMaxSumArray = findMaxSum(tree->left);
  int leftMaxSumAsBrunch = leftMaxSumArray[0];
  int leftMaxPathSum = leftMaxSumArray[1];
  
  std::vector<int> rightMaxSumArray = findMaxSum(tree->right);
  int rightMaxSumAsBrunch = rightMaxSumArray[0];
  int rightMaxPathSum = rightMaxSumArray[1];

  int maxChilderenSumsAsBranch = std::max(leftMaxSumAsBrunch, rightMaxSumAsBrunch);
  int maxSumAsBrunch = std::max(maxChilderenSumsAsBranch + tree->value, tree->value);
  int maxSumAsRootNode = std::max(leftMaxPathSum + tree->value + rightMaxSumAsBrunch, maxSumAsBrunch);
  int maxPathSum = std::max(leftMaxPathSum, std::max(rightMaxPathSum, maxPathSum));
  
  return std::vector<int> {maxSumAsBrunch, maxPathSum};
}

// ______________________________________________________________
int maxPathSum(BinaryTree tree) {
  std::vector<int> maxSumArray = findMaxSum(&tree);
  return maxSumArray[1];
}

