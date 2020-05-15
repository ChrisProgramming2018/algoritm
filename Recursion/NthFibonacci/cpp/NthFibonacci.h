// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unordered_map>
#include <map>

#ifndef NTHFIBONACCI_H_
#define NTHFIBONACCI_H_

int64_t  getNthFib(int n);
int getNthFib1(int n);
int helper(int n, std::map<int, int> memoize);
int64_t getNthFibMem(int n, std::unordered_map<int, int> mem);

#endif  // NTHFIBONACCI_H_
