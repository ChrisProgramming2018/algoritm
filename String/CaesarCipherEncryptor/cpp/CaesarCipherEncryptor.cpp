// Copyright 2020
// caesar Cypher Encryptor
// Author: Christian Leininger <info2016frei@gmail.com>


#include <vector>
#include <numeric>
#include "./CaesarCipherEncryptor.h"

// O(n) time | O(n) space
// ________________________________________________________________________________________________
std::string caesarCypherEncryptor(std::string str, int key) {
  std::vector<char> newLetter;
  int newKey = key % 26;
  for (int i = 0; i < str.length(); i++) {
    newLetter.push_back(getNewLetter(str[i], newKey));
  }
  return std::string(newLetter.begin(), newLetter.end());
}

// ________________________________________________________________________________________________
char getNewLetter(char letter, int key) {
  int newLetterCode = letter + key;
  return newLetterCode <= 122 ? newLetterCode : 96 + newLetterCode % 122;
}



// O(n) time | O(n) space
// ________________________________________________________________________________________________
std::string caesarCypherEncryptor2(std::string str, int key) {
  std::vector<char> newLetter;
  int newKey = key % 26;
  std::string alphabet = "abcdefghijklmnopqrstuvxyz";
  for ( int i = 0; i < str.length(); i++) {
    newLetter.push_back(getNewLetter2(str[i], newKey, alphabet));
  }
  return std::string(newLetter.begin(), newLetter.end());
}

// ________________________________________________________________________________________________
char getNewLetter2(char letter, int key, std::string alphabet) {
  int newLetterCode = alphabet.find(letter) + key;
  return newLetterCode <= 25 ? alphabet[newLetterCode] : alphabet[-1 + newLetterCode % 25];
}
