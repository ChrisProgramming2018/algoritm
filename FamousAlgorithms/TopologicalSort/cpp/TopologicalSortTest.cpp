// Copyright 2020
// algo expert three number sum
// Author: Christian Leininger <info2016frei@gmail.com>


#include <gtest/gtest.h>
#include "./TopologicalSort.h"
 


bool isValidTopologicalOrder(vector<int> order, vector<int> jobs, vector<vector<int>> deps);

TEST(TopologicalSortTest, TopologicalSort) { 
    vector<int> jobs = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<vector<int>> deps = {{3, 1}, {8, 1}, {8, 7}, {5, 7}, {5, 2}, {1, 4}, {1, 6}, {1, 2}, {7, 6}};
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(isValidTopologicalOrder(order, jobs, deps) == true);

    vector<int> jobs = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<vector<int>> deps = {{3, 1}, {8, 1}, {8, 7}, {5, 7}, {5, 2}, {1, 4}, {6, 7}, {1, 2}, {7, 6}};
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(order == vector<int> {});

    vector<int> jobs = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<vector<int>> deps = {{3, 1}, {8, 1}, {8, 7}, {5, 7}, {5, 2}, {1, 4}, {1, 6}, {1, 2}, {7, 6}, {4, 6}, {6, 2}, {2, 3}};
    vector<int> order = topologicalSort(jobs, deps);

    vector<int> jobs = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<vector<int>> deps = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}, {7, 8}, {8, 1}};
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(order == vector<int> {});

    vector<int> jobs = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<vector<int>> deps = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {7, 6}, {7, 8}, {8, 1}};
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(isValidTopologicalOrder(order, jobs, deps) == true);

    vector<int> jobs = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<vector<int>> deps = {{1, 2}, {3, 5}, {4, 6}, {3, 6}, {1, 7}, {7, 8}, {1, 8}, {2, 8}};
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(isValidTopologicalOrder(order, jobs, deps) == true);

    vector<int> jobs = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<vector<int>> deps = {
      {1, 2}, {1, 3}, {1, 4}, {1, 5}, {1, 6}, {1, 7},
      {2, 8}, {3, 8}, {4, 8}, {5, 8}, {6, 8}, {7, 8},
    };
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(isValidTopologicalOrder(order, jobs, deps) == true);

    vector<int> jobs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<vector<int>> deps = {
      {1, 2}, {1, 3}, {1, 4}, {1, 5}, {1, 6}, {1, 7},
      {2, 8}, {3, 8}, {4, 8}, {5, 8}, {6, 8}, {7, 8},
      {2, 3}, {2, 4}, {5, 4}, {7, 6}, {6, 2}, {6, 3},
      {6, 5}, {5, 9}, {9, 8}, {8, 0}, {4, 0}, {5, 0},
      {9, 0}, {2, 0}, {3, 9}, {3, 10}, {10, 11}, {11, 12}, {2, 12},
    };
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(isValidTopologicalOrder(order, jobs, deps) == true);

    vector<int> jobs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<vector<int>> deps = {
      {1, 2}, {1, 3}, {1, 4}, {1, 5}, {1, 6}, {1, 7},
      {2, 8}, {3, 8}, {4, 8}, {5, 8}, {6, 8}, {7, 8},
      {2, 3}, {2, 4}, {5, 4}, {7, 6}, {6, 2}, {6, 3},
      {6, 5}, {5, 9}, {9, 8}, {8, 0}, {4, 0}, {5, 0},
      {9, 0}, {2, 0}, {3, 9}, {3, 10}, {10, 11}, {11, 12}, {12, 2},
    };
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(order == vector<int> {});

    vector<int> jobs = {1, 2, 3, 4};
    vector<vector<int>> deps = {{1, 2}, {1, 3}, {3, 2}, {4, 2}, {4, 3}};
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(isValidTopologicalOrder(order, jobs, deps) == true);

    vector<int> jobs = {1, 2, 3, 4, 5};
    vector<vector<int>> deps = {};
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(isValidTopologicalOrder(order, jobs, deps) == true);

    vector<int> jobs = {1, 2, 3, 4, 5};
    vector<vector<int>> deps = {{1, 4}, {5, 2}};
    vector<int> order = topologicalSort(jobs, deps);
    REQUIRE(isValidTopologicalOrder(order, jobs, deps) == true);
}

bool isValidTopologicalOrder(vector<int> order, vector<int> jobs, vector<vector<int>> deps) {
  unordered_map<int, bool> visited;
  for (int candidate : order) {
    for (vector<int> dep : deps) {
      if (candidate == dep[0] && visited.find(dep[1]) != visited.end()) return false;
    }
    visited[candidate] = true;
  }
  for (int job : jobs) {
    if (visited.find(job) == visited.end()) return false;
  }
  return order.size() == jobs.size();
}
