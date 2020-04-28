// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <iostream>
#include <thread>
#include <string>


#ifndef THREAD_H_
#define THREAD_H_

class AncestralTree {
 public:
  char name;
  AncestralTree *ancestor;
  AncestralTree(char name) {
    this->name = name;
    this->anecstor = NULL;
  }
  void addAsAncestor(std::vector<AncestralTree *> descendants);
};
#endif //

