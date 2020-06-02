// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <vector>
#include <stdlib.h>  

#ifndef QUICKSORT_H_
#define QUICKSORT_H_
class Quicksort {
  std::vector<int> _array;
  bool _random;
  explicit Quicksort(std::vector<int> array);
  std::vector<int> quicksortMain(std::vector<int> array, bool random);
  std::vector<int> divideSort(std::vector<int> array, int leftIdx, int rightIdx);
  int randomNumber(int leftIdx, int rightIdx);
};
#endif  // QUICKSORT_H_

