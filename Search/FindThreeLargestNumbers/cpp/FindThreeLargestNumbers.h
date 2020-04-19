// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <vector>
#include <climits>


#ifndef THREAD_H_
#define THREAD_H_

std::vector<int> findThreeLargestNumbers(std::vector<int> array);
void updateLargest(std::vector<int> *threeLargest, int num);
void shiftAndUpdate(std::vector<int> *array, int num, int idx);

#endif //

