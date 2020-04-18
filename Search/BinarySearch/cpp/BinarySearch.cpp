

#include <iostream>
#include "./BinarySearch.h"



// ________________________________________________________________________________________________
int binarySearch(std::vector<int> array, int target) {
  return Helper(array,0, array.size() -1, target);
}



// O(n) time  | O(n) space
// ________________________________________________________________________________________________
int HelperRecursive(std::vector<int> array, int left, int right, int target) {
  if (left > right) {
    return -1;
  }
  int middle = (left + right) / 2;
  int potentialMatch = array[middle];
  if (target == potentialMatch) {
    return middle;
  } else if (target < potentialMatch) {
    return Helper(array, target, left, middle - 1);
  } else {
    return Helper(array, target, middle + 1, right);
  }
}

// O(n) time  | O(1) space
// ________________________________________________________________________________________________
int Helper(std::vector<int> array, int left, int right, int target) {
  
  while(left <= right) {
    int middle = (left + right) / 2;
    int potentialMatch = array[middle];
    if (target == potentialMatch) {
      return middle;
    } else if (target < potentialMatch) {
      right = middle - 1;
    } else {
      left = middle + 1;
    }
  }
  return - 1;
}

