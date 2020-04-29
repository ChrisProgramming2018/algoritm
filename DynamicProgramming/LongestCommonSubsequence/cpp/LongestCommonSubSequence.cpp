// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./LongestCommonSubSequence.h"

// ______________________________________________________________
std::vector<char> buildSequence(std::vector<std::vector<int>> lengths, std::string str) {
  std::vector<char> sequence;
  int i = lengths.size() - 1;
  int j = lengths[0].size() - 1;
  while (i != 0 && j != 0) {
    if (lengths[i][j] == lengths[i - 1][j]) {
      i--;
    } else if (lengths[i][j] == lengths[i][j - 1]) {
      j--;
    } else {
      sequence.insert(sequence.begin(), str[j - 1]);
      i--;
      j--;
    }
  }
  return sequence;
}

// _____________________________________________________________________________
std::vector<char> longestCommonSubSequence(std::string str1, std::string str2) {
  std::vector<std::vector<int>> lengths(str2.length() + 1, std::vector<int>(str1.length() + 1, 0));
  for (int i = 1; i < str2.length() + 1; i++) {
    for (int j = 1; j < str1.length() + 1; j++) {
      if (str2[i -1] == str1[j - 1]) {
        lengths[i][j] = lengths[i - 1][j - 1] + 1;
      } else {
        lengths[i][j] = std::max(lengths[i - 1][j], lengths[i][j -1]);
      }
    }
  }
  return buildSequence(lengths, str1);
}
