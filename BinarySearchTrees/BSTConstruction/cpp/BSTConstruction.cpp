


#include "./BSTConstruction.h"

// ________________________________________________________________________________________________
BST::BST(int val) {
  value = val;
  left = nullptr;
  right = nullptr;
}

  
  
// ________________________________________________________________________________________________
BST& BST::insert(int val) {
  if (val < value) {
    if (left == nullptr) {
      BST *newBST = new BST(val);
      left = newBST;
    } else { 
      left->insert(val);
    }
  } else {
    if (right == nullptr) {
      BST *newBST = new BST(val);
      right = newBST;
    } else {
      right->insert(val);
    }
  }
  return *this;
}



// ________________________________________________________________________________________________
bool BST::contains(int val) {
  if (val < value) {
    if (left == nullptr) {
      return false;
    } else {
      return left->contains(val);
    }
  } else if (val > value) {
    if (right == nullptr) {
      return false;
    } else {
      return right->contains(val);
    }
  } else {
    return true;
  }
}

  
  
// ________________________________________________________________________________________________
BST& BST::remove(int val, BST *parent) {
  if (val < value) {
    if( left != nullptr) {
      left->remove(val, this);
    }
  } else if (val > value) {
    if (right != nullptr) {
      right->remove(val, this);
    }
  } else {
    if (left != nullptr && right != nullptr) {
      value = right->getMinValue();
      right->remove(value, this);
    } else if (parent == nullptr) {
      if (left != nullptr) {
        value = left->value;
        right= left->right;
        left = left->left;
      } else if (right != nullptr) {
        value = right->value;
        left = right->left;
        right = right->right;
      } else {
        // This is a single Node 
      }
    } else if (parent->left == this) {
      parent->left = left != nullptr ? left : right;
    } else if (parent->right == this) {
      parent->right = left != nullptr ? left : right;
    }
  }
  return *this;
}

// ________________________________________________________________________________________________
int BST::getMinValue() {
  if (left == nullptr) {
    return value;
  } else {
    return left->getMinValue();
  }
}

// ________________________________________________________________________________________________
std::vector<int> inOrderTraverse(BST* tree, std::vector<int> array) {
  if (tree->left != nullptr) {
    array = inOrderTraverse(tree->left, array);
  }
  array.push_back(tree->value);
  if (tree->right != nullptr) {
    array = inOrderTraverse(tree->right, array);
  }
  return array;
}
