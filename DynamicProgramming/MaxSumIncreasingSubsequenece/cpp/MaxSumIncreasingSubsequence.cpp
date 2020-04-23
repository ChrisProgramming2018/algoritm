// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./MaxSumIncreasingSubsequence.h"

// ______________________________________________________________
std::vector<vector<int>> maxSumIncreasingSubsequence(vector<int> array) {
  std::vector<int> sequences(array.size(), INT_MIN);
  std::vector<int> sums = array;
  int maxSumIdx = 0;
  for (int i = 0; i < array.size(); i++) {
    int currentNUm = array[i];
    for (int j = 0; j < i; j++) {
      int otherNum = array[j];
      if (otherNum < currentNUm && sums[j] + currentNUm >= sums[i]) {
        sums[i] = sums[j] + currentNUm;
        sequences[i] = j;
      }
    }
    if (sums[i] >= sums[maxSumIdx]) {
      maxSumIdx = i;
    }
  }
  return buildSequence(array, sequences, maxSumIdx, sums[maxSumIdx]);
}
// ______________________________________________________________
std::vector<std::vector<int>> buildSequence(std::vector<int> array, std::vector<int> sequences, int currentIdx, int sum) {
  std::vector<std::vector<int>> sequence = {{},{}};
  sequence[0].push_back(sum);
  while (currentIdx != INT_MIN) {
    sequence[1].insert(sequence[1].begin(), array[currentIdx]);
    currentIdx = sequences[currentIdx];
  }
  return sequence;
}
