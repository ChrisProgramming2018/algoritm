// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <vector>
#include <stdlib.h>  

#ifndef QUICKSORT_H_
#define QUICKSORT_H_
class Quicksort {
 public:
  std::vector<int> _array;
  bool _random;
  explicit Quicksort(std::vector<int> array);
  std::vector<int> quicksortMain(bool random);
  void divideSort(int leftIdx, int rightIdx);
  int randomNumber(int leftIdx, int rightIdx);
  void swap(int leftIdx, int rightIdx);
};
#endif  // QUICKSORT_H_

