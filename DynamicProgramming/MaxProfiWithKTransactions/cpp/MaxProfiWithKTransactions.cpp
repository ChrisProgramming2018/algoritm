// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./MaxProfiWithKTransactions.h"

// ______________________________________________________________
int maxProfiWithKTransactions(std::vector<int> prices, int k) {
  if ( prices.size() == 0) {
    return 0;
  }

  int array[prices.size()][k+1] = {0};
  
  for (int i = 0; i < prices.size(); i++) {
    std::cout << array[i][0] << std::endl;
  }
  
  // std::vector<std::vector<int> proftits= {

}

