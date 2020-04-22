// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <vector>


#ifndef THREAD_H_
#define THREAD_H_


void  spiralFill(std::vector<std::vector<int>> array, int startRow, int endRow, int startCol, int endCol, std::vector<int> &result);
std::vector<int> spiralTraverse(std::vector<std::vector<int>> array);
#endif //
