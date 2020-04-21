// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./ThreeNumberSum.h"

// ______________________________________________________________
std::vector<std::vector<int>> threeNumberSum(std::vector<int> array, int targetSum) {
  sort(array.begin(), array.end());
  std::vector<std::vector<int>> triplets;
  for (int i = 0; i < array.size() - 2; i++) {
    int left = i + 1;
    int right = array.size() - 1;
    while(left < right) {
      int currentSum = array[i] + array[left] + array[right];
      if (currentSum == targetSum) {
        triplets.push_back({array[i], array[left], array[right]});
        left++;
        right--;
      } else if (currentSum < targetSum) {
        left++;
      } else if (currentSum > targetSum) {
        right--;
      }
    }
  }
  return triplets;
}

