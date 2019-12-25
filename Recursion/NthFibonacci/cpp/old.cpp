#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>


// time O(n) | space
int fib(int n) {
    static std::vector<int> table; // our cache
    if (n <= 1) {
        return n;
    }
    else if (n >= table.size()) {
        table.resize(n+1);
    }

    if (table[n] == 0) {
        // only recalc if we don't have a value
        table[n] = fib(n-1) + fib(n-2);
    }
    return table[n];
}


int main() {
  std::cout << "fibo of " <<" 55"  << " is " << fib(55) << std::endl;
}

