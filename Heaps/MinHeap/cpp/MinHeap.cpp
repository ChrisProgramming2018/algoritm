// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./MinHeap.h"

// ______________________________________________________________
MinHeap::MinHeap(std::vector<int> array) {
  _heap = array;
  this->_heap = build(array);
}

// ______________________________________________________________
std::vector<int>  MinHeap::build(std::vector<int> array) {
  int idxFirstParent = (array.size() - 2) / 2;
  for (int i = idxFirstParent + 1; i >= 0; i--) {
    this->siftDown(i, array.size() - 1, array);
  }
  return this->_heap;
}


// ______________________________________________________________
void MinHeap::show() {
  std::cout << "heap" << std::endl;
  for (int i = 0; i < _heap.size(); i++) {
    std::cout << _heap[i] << std::endl;
  }
}


// ______________________________________________________________
void MinHeap::siftDown(int currentIdx, int endIdx, std::vector<int> array) {
  int idxLeftChild = currentIdx * 2 + 1;
  int swapIdx = -1;
  // if the element of the current pos down to its correct pos
  while (idxLeftChild <= endIdx) {
    int idxRightChild = currentIdx * 2 + 2;
    //  check if its exists
    if (idxRightChild > endIdx) {
      idxRightChild = -1;
    }
    // check if right child exist if its smaller
    if (idxRightChild != -1 && _heap.at(idxRightChild) < _heap.at(idxLeftChild)) {
      swapIdx = idxRightChild;
    } else {
      swapIdx = idxLeftChild;
    }
    // check if currentIdx is smaller then the smallest child
    if (_heap.at(currentIdx) > _heap.at(swapIdx)) {
      // swap and update the current idx and left child
      swapElements(swapIdx, currentIdx);
      currentIdx = swapIdx;
      idxLeftChild = currentIdx * 2 + 1;
    } else {
      // element is at the correct position
      return;
    }
  }
}


// ______________________________________________________________
int MinHeap::removeMin() {
  // swap first and last then remove it
  int value = peek();
  swapElements(0, _heap.size() - 1);
  _heap.pop_back();
  // shift the elemt to the right position
  siftDown(0, _heap.size() - 1 , _heap);
  return value;
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

// ______________________________________________________________
void MinHeap::shiftUp(int idxCurrent) {
  int idxParent = (idxCurrent -1) / 2;
  // if there is a parent and its bigger move the current up
  while (idxCurrent > 0 && _heap.at(idxCurrent) < _heap.at(idxParent)) {
    swapElements(idxCurrent, idxParent);
    idxCurrent = idxParent;    // set the parent idx as new current
    idxParent = (idxCurrent -1) / 2;
  }
}

// ______________________________________________________________
void MinHeap::swapElements(int left, int right) {
  int tmp = _heap.at(left);
  _heap.at(left) = _heap.at(right);
  _heap.at(right) = tmp;
}
