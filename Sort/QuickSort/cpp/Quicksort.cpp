// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./Quicksort.h"
// ______________________________________________________________
Quicksort::Quicksort(std::vector<int> array) {
  _array = array;
  _random = false;
  _pivot = 0;
}

// ______________________________________________________________
std::vector<int> Quicksort::quicksortMain(bool random) {
  _random = random;
  recursive(0, _array.size() - 1);
  return _array;
}


// ______________________________________________________________
void Quicksort::recursive(int leftIdx, int rightIdx) {
  if (leftIdx >= rightIdx) { return; }

  int pivot = divideSort(leftIdx, rightIdx);
  recursive(leftIdx, pivot - 1);
  recursive(pivot + 1, rightIdx);
}

// ______________________________________________________________
int Quicksort::divideSort(int leftIdx, int rightIdx) {
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
    while (lp < rp && _array[lp] <= pivotElement) {
      lp++;
    }
    while (rp >= lp && _array[rp] > pivotElement) {
      rp--;
    }
    if (lp >= rp) { break; }
    swap(lp, rp);
  }

  if (_array[lp] >= pivotElement) { lp--; }
  swap(leftIdx, lp);

  return lp;
}


// ______________________________________________________________
void Quicksort::swap(int leftIdx, int rightIdx) {
  int tmp = _array[leftIdx];
  _array[leftIdx] = _array[rightIdx];
  _array[rightIdx] = tmp;
}

// ______________________________________________________________
int Quicksort::randomNumber(int leftIdx, int rightIdx) {
  int mod = rightIdx - leftIdx;
  unsigned int dif_n = rightIdx - leftIdx;
  unsigned int *dif = &dif_n;
  // int randamVariable = rand_r() % dif + leftIdx;
  int randamVariable = rand_r(dif) % mod + leftIdx;
  return randamVariable;
}
