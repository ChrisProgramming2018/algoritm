#include <vector>

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
