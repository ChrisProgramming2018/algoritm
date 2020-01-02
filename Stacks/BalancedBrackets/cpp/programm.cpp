// Copyright 2020
// Data structures
// Author: Christian Leininger 

#include <vector>
#include <string>
#include <unordered_map>


// O(n) time | O(n) space

bool balancedBrackets(std::string str) {
  std::string openingBrackets = "({[";
  std::string closingBrackets = ")]}";
  std::unordered_map<char, char> matchingBrackets {{")", "("}, {"]", "["}, {"}", "{"}};
  std::vector<char> stack;
  
  for (char character : str) {
    if (openingBrackets.find(character) != std::string::npos) {
      stack.push_back(character);   // only add opening brackets
    } else if (closingBrackets.find(character) != std::string::npos) {
      if (stack.size() == 0) {
        return false;
      }
      if (stack[stack.size() - 1] == matchingBrackets[character]) {
        stack.pop_back();  // the last opening bracket need to match closing bracket
      } else {
        return false;
      }
    }
  }
  // in case stack is empty at the end strings is bracket balanced 
  return stack.size() == 0;
}
