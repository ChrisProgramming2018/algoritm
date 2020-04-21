


#include "./BSTConstruction.h"

class BST {
 public:
  int value;
  BST *left;
  BST *right;

  BST(int val) {
    value = val;
    left = NULL;
    right = NULL;
  }

  
  
  BST &insert(int val) {
    if (val < value) {
      if (left == NULL) {
        BST *newBST = new BST(val);
        left = newBST;
      } else { 
        left->insert(val);
      }
    } else {
      if (right = NULL) {
        BST *newBST = new BST(val);
        right = newBST;
      } else {
        right->insert(val);
      }
    }
    return *this;
  }



  bool contains(int val) {
    if (val < value) {
      if (left == NULL) {
        return false;
      } else {
        return left->contains(val);
      }
    } else if (val > value) {
      if (right == NULL) {
        return false;
      } else {
        return right->contains(val);
      }
    } else {
      return true;
    }
  }

