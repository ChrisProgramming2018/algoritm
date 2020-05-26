// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <iostream>
#include <unordered_map>
#include <string>


#ifndef THREAD_H_
#define THREAD_H_

class TrieNode {
 public:
  std::unordered_map<char, TrieNode *> _childeren;
};


class SuffixTrie {
 puplic:
  std::string _endSympol;
  std::unordered_map<char, TrieNode> _root;
  SuffixTrie(std::string inputString);


#endif //

