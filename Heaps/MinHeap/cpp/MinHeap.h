// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <vector>
#include <iostream>


#ifndef MINHEAP_H_
#define MINHEAP_H_

class MinHeap {
 public:
  explicit MinHeap(std::vector<int> array);
  std::vector<int> build(std::vector<int> array);
  void swapElements(int left, int right);
  void show();
  int peek();
  void insert(int value);
  void siftDown(int currentIdx, int endIdx, std::vector<int> array);
  void shiftUp(int idxCurrent);
  int removeMin();
  std::vector<int> _heap;
};
#endif  // MINHEAP_H_

