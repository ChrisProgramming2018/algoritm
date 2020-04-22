



#include "./BranchSum.h"


// ________________________________________________________________________________________________
std::vector<int> branchSums(BinaryTree *root) {
  std::vector<int> sums;
  calculateBranchSums(root, 0, sums);
  return sums;
}


// ________________________________________________________________________________________________
void calculateBranchSums(BinaryTree *node, int runningSum, std::vector<int> &sums) {
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

