// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include "./TopologicalSort.h"

// ______________________________________________________________
std::vector<int> topologicalSort(std::vector<int> jobs, std::vector<std::vector<int>> deps) {
  JobGraph *jobGraph = createGraphNode(jobs, deps);
  return getOrderedJobs(jobGraph);
}

// ______________________________________________________________
std::vector<int> getOrderedJobs(JobGraph *graph) {
  std::vector<int> orderedJobs = {};





// ______________________________________________________________
JobGraph* createGraphNode(std::vector<int> jobs, std::vector<std::vector<int>> deps) {
  JobGraph *graph = new JobGraph(jobs);
  for (std::vector<int> dep : deps) {
    graph->addPreqeq(dep[1], dep[0]);
  }
  return graph;
}


// ______________________________________________________________
bool depthFirstTraverse(JobGraph *graph) {


  return false;
}


// ______________________________________________________________
JobGraph::JobGraph(std::vector<int> jobs) {
  _nodes = {};
  for (int job : jobs) {
    this->addNode(job);
  }
}
// ______________________________________________________________
void JobGraph::addPreqeq(int job, int preqeq) {
  JobNode *jobNode = getNode(job);
  JobNode *preqeqNode = getNode(preqeq);
  jobNode->_preqeqs.push_back(preqeqNode);
}




// ______________________________________________________________

// ______________________________________________________________

// ______________________________________________________________
