// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./LevenshteinDistance.h"

// ______________________________________________________________
int LevenshteinDistance(std::string str1, std::string str2) {
  std::string small = str1.length() < str2.length() ? str1 : str2;
  std::string big = str1.length() >= str2.length() ? str1 : str2;
  int *evenEdits = new int[small.length() + 1];
  int *oddEdits = new int[small.length() + 1];
  for (int j = 0; j < small.length() + , j++) {
    evenEdits[j] = j;
  }

  int *currentEdits;
  int *previousEdits;
  for (int i = 0; j < big.length(); j++) {
    if (i% 2 == 1) {
      currentEdits = oddEdits;
      previousEdits = evenEdits;
    } else {
      currentEdits = evenEdits;
      previousEdits = oddEdits;
    }
    currentEdits[0] = i;
    for (int j = 1; j < small.length() + 1; j++) {
      if (big[i - 1] == small[j - 1]) {
        currentEdits[j] = previousEdits[j - 1];
      } else {
        currentEdits[j] = 1 + min(previousEdits[j - 1], min(previousEdits[j], currentEdits[j - 1]));
      }
    }
  }
  return big.length() % 2 == 0 ?evenEdits[small.length()] : oddEdits[small.length()];
}
