#include <iostream>
#include <string>



bool isPalindrome(std::string text) {
  bool isPalindrome = true;
  int start = 0;
  int end = text.size() - 1;
  while (true) {
    if (text.at(start) == text.at(end)) {
      start++;
      end--;
    } else {
      return false;
    }
    if (end > start) return true;
  }
}




int main(int argc, char** argv) {

  std::cout << "is palindre" << std::endl;
  std::string  text = "abcdefghihgfeddcba";
  std::cout << "is palindre" << isPalindrome(text)  << std::endl;

}
