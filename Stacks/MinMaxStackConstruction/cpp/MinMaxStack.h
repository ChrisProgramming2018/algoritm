// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <unordered_map>
#include <vector>
#include <string>


#ifndef THREAD_H_
#define THREAD_H_

class MinMaxStack {
 public:
  std::vector<std:unordered_map<std::string, int> _minMaxStack = {};
  std::vector<int> _stack = {};
  int peek();
  int pop();
  void push(int number);
  int getMin();
  int getMax();
};
#endif //

