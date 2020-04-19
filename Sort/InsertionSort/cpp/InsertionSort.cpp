// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./InsertionSort.h"

// ______________________________________________________________
void swap(std::vector<int> &array, int left, int right) {
  int tmp = array[left];
  array[left] = array[right];
  array[right] = tmp;
}

// ______________________________________________________________
std::vector<int> insertionSort(std::vector<int> array) {
  if (array.empty()) { return {};}
  for (int i = 1; i < array.size(); i++) {
    int j = i;
    while (j > 0 && array[j] < array[j - 1]) {
      swap(array, j , j - 1);
      j--;
    }
  }
  return array;
}

