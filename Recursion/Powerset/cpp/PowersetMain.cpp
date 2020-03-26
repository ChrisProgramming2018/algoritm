// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <iostream>
#include <vector>



std::vector<std::vector<int>> PowerSet(std::vector<int> array) {
  std::vector<std::vector<int>> res = {{}};

  for (int i = 0; i < array.size(); i++) {
    int item = array[i];
    int old_size = res.size();
    for (int j = 0; j < old_size; j++) {
      std::vector<int> tmp = res.at(j);
      tmp.push_back(item);
      res.push_back(tmp);
    }
  }
  return res;
}

void printArrayOfArrays(std::vector<std::vector<int>> array) {
  for (int i = 0; i < array.size(); i++) {
    std::cout << " {";
    for (int j = 0; j < array[i].size(); j++) {
      if ( j == array[i].size() - 1) {
        std::cout << array[i][j];
      } else { 
        std::cout << array[i][j] << ", ";
      }
    }
    std::cout << "} " << std::endl;
  }
}

void printArray(std::vector<int> array) {
  std::cout << " {";
  for (int i = 0; i < array.size(); i++) {
    if ( i == array.size() - 1) {
      std::cout << array[i];
    } else {
      std::cout << array[i] << ", ";
    }
  }
  std::cout << "} " <<std::endl;
}

int main() {
  std::cout << "Start Main " << std::endl;
  int max_size = 40;
  for (int i = 2; i <= max_size; i++) {
    std::vector<int> array;
    for (int j = 1; j <= i; j++) {
      array.push_back(j);
    }
    printArray(array);
    std::cout << "Compute Powerset" << std::endl;
    std::cout << " Powerset size " << PowerSet(array).size() <<  std::endl;
    
    //printArrayOfArrays(PowerSet(array));
  }
  return 0;
}

