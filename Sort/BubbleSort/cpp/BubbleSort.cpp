// Copyright 2020
// Bubblesort
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./BubbleSort.h"


// time O(n^2) | space O(1)
// ______________________________________________________________
std::vector<int> BubbleSort(std::vector<int> array) {
  // case array is empty
  if (array.empty()) { return {}; }
  bool isNotSorted = true;
  int counter = 0;
  int tmp;
  while (isNotSorted) {
    isNotSorted = false;
    for (int i = 0; i < array.size() - 1 - counter; i++) {
      if (array[i] > array[i + 1]) {
        // swap to elements
        tmp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = tmp;
        isNotSorted = true;
      }
    }
    counter++;
  }
  return array;
}
