// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <iostream>
#include <vector>



int numberOfWaysToMakeChange(int n, std::vector<int> denoms) {
  std::cout << "numberOfWaysToMakeChange " << std::endl;
  std::vector<int> results;
  for (int i = 0; i<= denoms.size(); i++) {
    results.push_back(0);
  }
  // only one possiblity to change 0 
  results[0] = 1;
  return results[n];
}



int main() {
  std::vector<int> vector1 {1, 5, 10, 25};
  std::cout << "Start Main " << std::endl;
  std::cout << numberOfWaysToMakeChange(10, vector1) << std::endl;
 
 
  return 0;
}

