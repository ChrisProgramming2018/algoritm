// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./MinRewards.h"

// O(n^2) time | O(n) space 
// ______________________________________________________________
int minRewards(std::vector<int> scores) {
  std::vector<int> rewards = std::vector<int>(scores.size(), 1);
  for (int i = 1; i < scores.size(); i++) {
    int j = i - 1;
    if (scores[i] > scores[j]) {
      rewards[i] = rewards[j] + 1;
    } else {
      while (j >= 0 && scores[j] > scores[j + 1]) {
        rewards[j] = max(rewards[j], rewards[j + 1] + 1);
        j--;
      }
    }
  }
  return accumulate(rewards.begin(), rewards.end(), 0);
}

// O(n) time | O(n) space 
// ______________________________________________________________
int minRewards2(std::vector<int> scores) {
  std::vector<int> rewards = std::vector<int>(scores.size(), 1);
  std::vector<int> localMinIdxs = getLocalMinIdx(scores);
  for (int localMinIdx : localMinIdxs) {
    expandFromLocalMinIdx(localMinIdx, scores, &rewards);
  }
  return accumulate(rewards.begin(), rewards.end(), 0);
}

// ______________________________________________________________
std::vector<int> getLocalMinIdx(std::vector<int> array) {
  if (array.size() == 1) return std::vector<int>{0};
  std::vector<int> localMinIdxs = {};
  for (int i = 0; i < array.size(); i++) {
    if (i==0 && array[i] < array[i - 1]) 
      localMinIdxs.push_back(i);
    if (i== array.size() - 1 && array[i] < array[i - 1]) 
      localMinIdxs.push_back(i);
    if (i == 0 ||  array.size() - 1) 
      continue;
    if (array[i] < array[i + 1] && array[i] > array[i] < array[i - 1])
      localMinIdxs.push_back(i);
  }
  return localMinIdxs;
}

// ______________________________________________________________
void expandFromLocalMinIdx(int localMinIdx, std::vector<int> scores, std::vector<int> *rewards) {
  int leftIdx = localMinIdx - 1;
  while (leftIdx >= 0 && scores[leftIdx] > scores[leftIdx + 1]) {
    rewards->at(leftIdx) = max(rewards->at(leftIdx), rewards->at(leftIdx + 1) + 1);
    leftIdx--;
  }
  int rightIdx = localMinIdx + 1;
  while (rightIdx < scores.size()  && scores[rightIdx] > scores[rightIdx - 1]) {
    rewards->at(rightIdx) =  rewards->at(rightIdx - 1) + 1;
    rightIdx++;
  }
}
