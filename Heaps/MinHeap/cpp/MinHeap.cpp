// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./MinHeap.h"

// ______________________________________________________________
std::vector<int>  MinHeap::build(std::vector<int> array) {
  this->_heap = array;
}
  

// ______________________________________________________________
std::vector<int>  MinHeap::build(std::vector<int> array) {
  int idxFirstParent = (array.size() - 2) / 2;
  for (int i = idxFirstParent + 1; i >= 0; i--) {
    this->shiftDown(i, array.size() - 1, array);
  }
  return this->_heap;
}

// ______________________________________________________________
void MinHeap::siftDown(int currentIdx, int endIdx, std::vector<int> array) {
  int idxLeftChild = currentIdx * 2 + 1;
  int swapIdx = -1;
  // if the element of the current pos down to its correct pos
  while (idxLeftChild <= endIdx) {
    idxRightChild = currentIdx * 2 + 2;
    //  check if its exists
    if idxRightChild > endIdx:
      idxRightChild = -1;
    // check if right child exist if its smaller
    if (idxRightChild != -1 && _heap.at(idxRightChild) < _heap.at(idxLeftChild)) {
      swapIdx = idxRightChild;
    } else {
      swapIdx = idxLeftChild;
    }
    // check if currentIdx is smaller then the smallest child
    if (_heap.at(currentIdx) < _heap.at(swapIdx)) {
      // element is at the correct position
      return;
    } else {
      // swap and update the current idx and left child
      swap(swapIdx, currentIdx);
      currentIdx = swapIdx;
      idxLeftChild = currentIdx * 2 + 1;
    }
  }
}

// ______________________________________________________________
int MinHeap::peek() {
  return _heap[0];
}

// ______________________________________________________________
void MinHeap::insert(int value) {
  _heap.push_back(value);
  shiftUp(_heap.size() - 1);
}
