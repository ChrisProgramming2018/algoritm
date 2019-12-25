#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unordered_map>
#include <map>


unsigned long long int getNthFib(int n) {
  if (n == 1) {
    return 0;
  }
  
  if (n == 2) {
    return 1;
  }

  return getNthFib(n-1) + getNthFib(n -2);
}



int getNthFib1(int n);
int helper(int n, std::map<int, int> memoize);


int getNthFib1(int n) {
  std::map<int, int> memoize({{1,0},{2,1}});
  return helper(n, memoize);
}

int helper(int n, std::map<int, int> memoize) {
  if (memoize.find(n) != memoize.end()) {
    return memoize[n];
  }
  if (memoize.size() > n) {
    memoize[n] = memoize[n-1] + memoize[n-2];
  }
  return helper(n-1, memoize) + helper(n-2, memoize);
}

unsigned long long int getNthFibMem(int n, std::unordered_map<int, int> mem) {
  if (mem.find(n) != mem.end()) {
    return mem[n];
  } else {
    // std::cout << n << std::endl;
    mem[n] = getNthFibMem(n-1, mem) + getNthFibMem(n -2, mem);
    return mem[n];
  }
}






void printUsageAandExit() {
  fprintf(stderr, "Usage: ./Fibonacci [options] \n");
  exit(1);
}

int main(int argc, char** argv){

  struct option options[] = {
    {"number", 1, NULL,'n'}
  };
  int n;
  optind = 1;
  while(true) {
    char c = getopt_long(argc, argv,"n:",options, NULL);
    if (c == -1) break;
    switch (c) {
      case 'n': n = atoi(optarg);
               break;
      case '?':
      default:
                printUsageAandExit();

    }
  }
  std::unordered_map<int, int> mem({{1,0}, {2,1}});
  // std::cout << "fibo of " << n << " is " << getNthFib(n) << std::endl;
  std::cout << "fibo of " << n  << " is " << getNthFib1(n) << std::endl;
  //std::cout << "fibo of " << n  << " is " << getNthFibMem(n , mem) << std::endl;

}

