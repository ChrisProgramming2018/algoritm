// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./Quicksort.h"

// ______________________________________________________________
Quicksort::Quicksort(std::vector<int> array) {
  _array = array;
}

// ______________________________________________________________
std::vector<int> Quicksort::quicksortMain(std::vector<int> array, bool random) {
}

// ______________________________________________________________
std::vector<int> Quicksort::divideSort(std::vector<int> array, int leftIdx, int rightIdx) {
  int pivotPos = leftIdx;
  int pivotElement = array[leftIdx];
  if (_random) {
    randomNumber(leftIdx, rightIdx);
  }
}


// ______________________________________________________________
int Quicksort::randomNumber(int leftIdx, int rightIdx) {
  int dif = rightIdx -leftIdx;
  int randamVariable = rand() % dif + leftIdx;
  return randamVariable;
}
