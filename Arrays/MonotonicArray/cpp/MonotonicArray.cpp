// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./MonotonicArray.h"

// ______________________________________________________________
bool isMonotonic(std::vector<int> array) {
  bool isNonDecreasing = true;
  bool isNonIncreasing = true;
  for (int i = 0; i < array.size(); i++) {
    if (array[i] < array[i - 1]) {
      isNonDecreasing = false;
    }
    if (array[i] < array[i - 1]) {
      isNonDecreasing = false;
    }
  }
  return isNonDecreasing || isNonIncreasing;
}

