#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

unsigned long long int getNthFib(int n) {
  if (n == 0) {
    return 0;
  }
  
  if (n == 1) {
    return 1;
  }

  return getNthFib(n-1) + getNthFib(n -2);
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
  std::cout << "fibo of " << n << " is " << getNthFib(n) << std::endl;

}

