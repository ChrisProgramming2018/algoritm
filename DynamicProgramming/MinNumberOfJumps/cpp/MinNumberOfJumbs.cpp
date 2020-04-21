// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./MinNumberOfJumbs.h"

// O(n^2) time  | O(n) space
// ______________________________________________________________
int minNumberOfJumbs(std::vector<int> array) {
  std::vector<int> jumps(array.size(), INT_MAX);
  jumps[0] = 0;
  for (int i = 0; i < array.size(); i++) {
    for (int j = 0; j < i; j++) {
      if (array[j] >= i - j) {
        jumps[i] = min(jumps[j] + 1, jumps[i]);
      }
    }
  }
return jumps[jumps.size() - 1];
}

// O(n) time  | O(1) space
// ______________________________________________________________
int minNumberOfJumbsImproved(std::vector<int> array) {
  if (array.size() == 1) { return 0; }
  int jumps = 0;
  int maxReach = array[0];
  int steps = array[0];
  for (int i = 0; i < array.size(); i++) {
    maxReach = max(maxReach, i + array[i]);
    steps--;
    if (steps == 0) {
      jumps++;
      steps = maxReach - 1;
    }
  }
  return jumps + 1;
}
