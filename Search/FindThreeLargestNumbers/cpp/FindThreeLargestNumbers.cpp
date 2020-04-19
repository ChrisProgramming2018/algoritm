// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./FindThreeLargestNumbers.h"

// ______________________________________________________________
std::vector<int> findThreeLargestNumbers(std::vector<int> array) {
  std::vector<int> threeLargest{INT_MIN, INT_MIN, INT_MIN}; 
  for (int num : array) {
    updateLargest(&threeLargest, num);
  }
  return threeLargest;
}

// ______________________________________________________________
void updateLargest(std::vector<int> *threeLargest, int num) {
  if (num > threeLargest->at(2)) {
    shiftAndUpdate(threeLargest, num, 2);
  } else if (num > threeLargest->at(1)) {
    shiftAndUpdate(threeLargest, num, 1);
  } else if (num > threeLargest->at(0)) {
    shiftAndUpdate(threeLargest, num, 0);
  }
}

// ______________________________________________________________
void shiftAndUpdate(std::vector<int> *array, int num, int idx) {
  for (int i = 0; i <= idx; i++) {
    if (i == idx) {
      array->at(i) = num;
    } else {
      array->at(i) = array->at(i + 1);
    }
  }
}
