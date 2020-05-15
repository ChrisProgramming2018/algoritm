// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./NthFibonacci.h"

// ________________________________________________________________________________________________
int64_t  getNthFib(int n) {
  if (n == 1) {
    return 0;
  }

  if (n == 2) {
    return 1;
  }
  return getNthFib(n - 1) + getNthFib(n - 2);
}

// ________________________________________________________________________________________________
int getNthFib1(int n) {
  std::map<int, int> memoize({{1, 0}, {2, 1}});
  return helper(n, memoize);
}

// ________________________________________________________________________________________________
int helper(int n, std::map<int, int> memoize) {
  if (memoize.find(n) != memoize.end()) {
    return memoize[n];
  }
  if (memoize.size() > n) {
    memoize[n] = memoize[n - 1] + memoize[n - 2];
  }
  return helper(n - 1, memoize) + helper(n - 2, memoize);
}

// ________________________________________________________________________________________________
int64_t getNthFibMem(int n, std::unordered_map<int, int> mem) {
  if (mem.find(n) != mem.end()) {
    return mem[n];
  } else {
    mem[n] = getNthFibMem(n - 1, mem) + getNthFibMem(n - 2, mem);
    return mem[n];
  }
}
