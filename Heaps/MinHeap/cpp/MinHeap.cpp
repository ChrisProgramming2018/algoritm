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
  // if the element of the current pos down to its correct pos
  while (idxLeftChild <= endIdx) {
    idxRightChild = currentIdx * 2 + 2;
    //  check if its exists
