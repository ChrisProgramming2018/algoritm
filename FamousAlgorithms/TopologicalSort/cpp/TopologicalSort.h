// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <iostream>
#include <vector>
#include <unordered_map>


#ifndef THREAD_H_
#define THREAD_H_


class JobNode {
 public:
  int job;
  std::vector<JobNode*> preqeqs;
  bool visited;
  bool visiting;
};


class JobGraph {
 public:
  std::vector<JobNode*> nodes;
  JobGraph(std::vector<int> jobs);
  void addPreqeq(int job, int preqeq);
  void addNode(int job);
  JobNode* getNode

};
  
bool isValidTopologicalOrder(std::vector<int> order, std::vector<int> jobs, std::vector<std::vector<int>> deps);
#endif //

