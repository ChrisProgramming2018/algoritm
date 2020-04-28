// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./MinMaxStack.h"

// ______________________________________________________________
int MinMaxStack::peek() {
  return _stack[_stack.size() - 1]; 
}

// ______________________________________________________________
int MinMaxStack::pop() {
  _minMaxStack.pop_back();
  int result = _stack[_stack.size() - 1];
  _stack.pop_back();
  return result;
}

// ______________________________________________________________
void MinMaxStack::push(int number) {
  std::unordered_map<std::string, int> newMinMax = {{"min", number}, {"max", number}};
  if (_minMaxStack.size()) {
    std::unordered_map<std::string, int> lastMinMax = _minMaxStack[_minMaxStack.size() - 1];
    newMinMax["min"] = std::min(lastMinMax["min"], number);
    newMinMax["max"] = std::max(lastMinMax["max"], number);
  }
  _minMaxStack.push_back(newMinMax);
  _stack.push_back(number);
}

// ______________________________________________________________
int MinMaxStack::getMin() {
  return  _minMaxStack[_minMaxStack.size() - 1]["min"]; 
}

// ______________________________________________________________
int MinMaxStack::getMax() {
  return  _minMaxStack[_minMaxStack.size() - 1]["max"]; 
}
