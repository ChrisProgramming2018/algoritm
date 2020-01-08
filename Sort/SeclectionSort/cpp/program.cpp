// Copyright 2020 
// Author: Christian Leininger

#include <vector>

std::vector<int> selectionSort(std::vector<int> array);
void swap(int left, int right, std::vector<int> *array);


std::vector<int> selectionSort(std::vector<int> array) {
  // check if array is empty
  if (array.empty()) {
    return {};
  }
  int startIdx = 0;
  int length = array.size() - 1;  # array starts at 0 
  while(startIdx < length) {
    int smallestItmIdx = startIdx;
    for (int i = startIdx + 1; i < length; i++) {
      if(array[smallestItmIdx] > array[i]) {
        smallestItmIdx = i;
      }
    }
    // swap the smallest item on the remaining array 
    swap( startIdx, smallestItmIdx, &array);
    startIdx++;
  }
  return array;
}




}

void swap(int left, int right, std::vector<int> *array);
