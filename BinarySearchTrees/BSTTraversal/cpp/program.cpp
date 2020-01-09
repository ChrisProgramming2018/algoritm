#include <vector>

class BST {
 public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &inster(int val);
};

// ____________________________________________________________________________
// O(n) time | O(n) space
std::vector<int> inOrderTraverse(BST *tree, std::vector<int> array) {
  if (tree->left != NULL) {
    array = inOrderTraverse(tree-left, array);
  }
  array.push_back(tree->value);

  if (tree->right != NULL) {
    array = inOrderTraverse(tree->right, array);
  }
  return array;
}


// ____________________________________________________________________________
// O(n) time | O(n) space
std::vector<int> preOrderTraverse(BST *tree, std::vector<int> array) {
  array.push_back(tree->value);
  if (tree->left != NULL) {
    array = preOrderTraverse(tree-left, array);
  }

  if (tree->right != NULL) {
    array = preOrderTraverse(tree->right, array);
  }
  return array;
}


// ____________________________________________________________________________
// O(n) time | O(n) space
std::vector<int> postOrderTraverse(BST *tree, std::vector<int> array) {
  array.push_back(tree->value);
  if (tree->left != NULL) {
    array = postOrderTraverse(tree-left, array);
  }

  if (tree->right != NULL) {
    array = postOrderTraverse(tree->right, array);
  }
  return array;
}
