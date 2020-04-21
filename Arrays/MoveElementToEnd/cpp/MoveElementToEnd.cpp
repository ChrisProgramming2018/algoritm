// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./MoveElementToEnd.h"

// ______________________________________________________________
std::vector<int> moveElementToEnd(std::vector<int> array, int toMove) {
  int i = 0;
  int j = array.size() - 1;
  while (i < j) {
    while (i < j && array[j] == toMove)
      j--;
    if (array[i] == toMove) {
      int tmp = array[i];
      array[i] = array[j];
      array[j] = tmp;
    }
    i++;
  }
  return array;
}
