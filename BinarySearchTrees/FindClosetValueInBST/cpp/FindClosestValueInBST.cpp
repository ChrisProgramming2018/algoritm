


#include <cmath>
#include <float.h>
#include "./FindClosestValueInBST.h"



// recursive solution
// Worst Case : O(n) time | O(n) space
// Average Case : O(log n) time | O(log n) space
// ________________________________________________________________________________________________
int findClosestValueInBst(BST *tree, int target) {
  return  findClosestValueInBstHelper(tree, target, DBL_MAX);
}

// ________________________________________________________________________________________________
int findClosestValueInBstHelper(BST *tree, int target, double closest) {
  if (fabs(target - closest) > fabs(target - tree->value)) {
    closest = tree->value;
  }
  if (target < tree->value && tree->left != NULL) {
    return  findClosestValueInBstHelper(tree->left, target, closest);
  } else if (target > tree->value && tree->right != NULL) {
    return  findClosestValueInBstHelper(tree->right, target, closest);
  } else {
    return (int)closest;
  }
}
