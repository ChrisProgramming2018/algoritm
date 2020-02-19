// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <iostream>
#include <vector>



int numberOfWaysToMakeChange(int n, std::vector<int> denoms) {
  int amount = 0;
  std::cout << "numberOfWaysToMakeChange " << std::endl;
  std::vector<int> result;
  for (int i = 0; i<= n; i++) {
    result.push_back(0);
  }
  // only one possiblity to change 0 
  result[0] = 1;
  for(int i = 0; i <  denoms.size(); i++) {
    amount = denoms[i];
    for (int j = 0; j <=n; j++) {
      if (amount >n) break;
      if (j >= amount) {
        result[j] = result[j] + result[j-amount];
      }
    }
  }
  return result[n];
}



int main() {
  std::vector<int> vector1 {1, 5, 10, 25};
  std::cout << "Start Main " << std::endl;
  std::cout << numberOfWaysToMakeChange(10, vector1) << std::endl;
 
 
  return 0;
}

