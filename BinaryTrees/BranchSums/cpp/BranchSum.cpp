// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./BranchSum.h"

// ________________________________________________________________________________________________
std::vector<int> branchSums(BinaryTree *root) {
  std::vector<int> sums;
  calculateBranchSums(root, 0, sums);
  return sums;
}


// ________________________________________________________________________________________________
void calculateBranchSums(BinaryTree *node, const int runningSum, std::vector<int> &sums) {
  if (node == NULL)
    return;
  int newRunningSum = runningSum + node->value;
  if (node->left == NULL && node->right == NULL) {
    sums.push_back(newRunningSum);
    return;
  }

  calculateBranchSums(node->left, newRunningSum, sums);
  calculateBranchSums(node->right, newRunningSum, sums);
}

// ________________________________________________________________________________________________
BinaryTree::BinaryTree(int value) {
  this-> value = value;
  left = NULL;
  right = NULL;
}

// ________________________________________________________________________________________________
BinaryTree* TestBinaryTree::insert(std::vector<int> values, int i) {
  if (i >= values.size()) {return NULL; }
  std::vector<BinaryTree *> queue = {this};
  while (queue.size() > 0) {
    BinaryTree *current = queue[0];
    queue.erase(queue.begin());
    if (current->left == NULL) {
      current->left = new BinaryTree(values[i]);
      break;
    }
    queue.push_back(current->left);
    if (current->right == NULL) {
      current->right = new BinaryTree(values[i]);
      break;
    }
    queue.push_back(current->right);
  }
  insert(values, i + 1);
  return this;
}
