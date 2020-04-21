// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./SmallestDifference.h"

// ______________________________________________________________
std::vector<int> smallestDifference(std::vector<int> arrayOne, std::vector<int> arrayTwo) {
  sort(arrayOne.begin(), arrayOne.end());
  sort(arrayTwo.begin(), arrayTwo.end());
  int idxOne = 0;
  int idxTwo = 0;
  int smallest = INT_MAX;
  int current =  INT_MAX;
  std::vector<int> smallestPair;

  while (idxOne < arrayOne.size() && idxTwo < arrayTwo.size()) {
    int firstNum = arrayOne[idxOne];
    int secondNum = arrayTwo[idxTwo];
    if (firstNum < secondNum) {
      current = secondNum - firstNum;
      idxOne++;
    } else if (secondNum < firstNum) {
      current = firstNum - secondNum;
      idxTwo++;
    } else {
      return std::vector<int>(firstNum, secondNum);
    }
    if (smallest > current) {
      smallest = current;
      smallestPair = {firstNum, secondNum};
    }
  }
  return smallestPair;
}
