// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <vector>
#include <string>

 
// ________________________________________________________________________________________________
Node::Node(std::string name) {
  this->name = name;
}

// ________________________________________________________________________________________________
std::vector<string> Node::depthFirstSearch(std::vector<std::string>* array) {
  array->push_back(this->name);
  for (int i = 0; i < this->children.size(); i++) {
    children[i]->depthFirstSearch(array);
  }
  return *array;
}

// ________________________________________________________________________________________________
Node* Node::addChild(std::string name) {
  Node *child = new Node(name);
  children.push_back(child);
  return this;
}
