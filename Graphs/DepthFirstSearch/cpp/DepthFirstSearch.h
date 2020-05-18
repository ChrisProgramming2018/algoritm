// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <string>
#include <vector>


#ifndef DEPTHFIRSTSEARCH_H_
#define DEPTHFIRSTSEARCH_H_

class Node {
 public:
  std::string name;
  std::vector<Node*> children;
  explicit Node(std::string name);
  std::vector<std::string> depthFirstSearch(std::vector<std::string>* array);
  Node *addChild(std::string name);
};
#endif  // DEPTHFIRSTSEARCH_H_

