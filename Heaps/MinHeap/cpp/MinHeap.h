// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <vector>


#ifndef MINHEAP_H_
#define MINHEAP_H_

class MinHeap {
 public:
  std::vector<int> build(std::vector<int> array);
  int peek();
  void insert(int value) {
  void siftDown(int currentIdx, int endIdx, std::vector<int> array);
  std::vector<int> _heap;
};
#endif  // MINHEAP_H_

