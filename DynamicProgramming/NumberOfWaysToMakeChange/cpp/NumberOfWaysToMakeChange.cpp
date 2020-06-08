// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./NumberOfWaysToMakeChange.h"

// _______________________________________________________________
int numberOfWaysToMakeChange(int n, std::vector<int> denoms) {
  int amount = 0;
  std::vector<int> result;
  for (int i = 0; i<= n; i++) {
    result.push_back(0);
  }
  // only one possiblity to change 0
  result[0] = 1;
  for (int i = 0; i <  denoms.size(); i++) {
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

// _______________________________________________________________
int numberOfWaysToMakeChange2(int n, std::vector<int> denoms) {
  std::vector<int> ways(n + 1, 0);
  ways[0] = 1;
  for (int denom : denoms) {
    for (int amount = 1; amount < n + 1; amount++) {
      if (denom <= amount) {
        ways[amount] += ways[amount - denom];
      }
    }
  }
  return ways[n];
}
