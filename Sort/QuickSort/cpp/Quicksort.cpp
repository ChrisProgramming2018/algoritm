// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./Quicksort.h"

// ______________________________________________________________
Quicksort::Quicksort(std::vector<int> array) {
  _array = array;
  _random = false;
}

// ______________________________________________________________
std::vector<int> Quicksort::quicksortMain(bool random) {
}

// ______________________________________________________________
void Quicksort::divideSort(int leftIdx, int rightIdx) {
  int pivotIdx = leftIdx;
  int pivotElement = _array[leftIdx];
  if (_random) {
     pivotIdx = randomNumber(leftIdx, rightIdx);
     pivotElement = _array[pivotIdx];
  }
  int lp = leftIdx;
  int rp = rightIdx;
  // swap pivo element to the first position
  swap(leftIdx, pivotIdx);
  // swap all smaller or equal to pivo to the left
  while (true) {
    while (lp < rightIdx && _array[lp] <= pivotElement) {
      lp++;
    }
    while (rp >= leftIdx && _array[rp] > pivotElement) {
      rp--;
    }
    if (lp >= rp) { break; }
    swap(lp, rp);
  }

  if (_array[leftIdx] >= pivotElement) { lp--; }
  swap(leftIdx, lp);
}

// ______________________________________________________________
void Quicksort::swap(int leftIdx, int rightIdx) {
  int tmp = _array[leftIdx];
  _array[leftIdx] = _array[rightIdx];
  _array[rightIdx] = tmp;
}

// ______________________________________________________________
int Quicksort::randomNumber(int leftIdx, int rightIdx) {
  int dif = rightIdx -leftIdx;
  int randamVariable = rand() % dif + leftIdx;
  return randamVariable;
}
