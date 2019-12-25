// Add, edit, or remove tests in this file.
// Treat it as your playground!

#include "utils.hpp"
#include "program.cpp"

int main() {

  TEST_START;
  TEST_CASE("Test Case 1") {
    REQUIRE(isPalindrome("a") == 1);
  }

  TEST_CASE("Test Case 2") {
    REQUIRE(isPalindrome("ab") == 0);
  }

  TEST_CASE("Test Case 3") {
    REQUIRE(isPalindrome("aba") == 1);
  }

  TEST_CASE("Test Case 4") {
    REQUIRE(isPalindrome("abb") == 0);
  }

  TEST_CASE("Test Case 5") {
    REQUIRE(isPalindrome("abba") == 1);
  }

  TEST_CASE("Test Case 6") {
    REQUIRE(isPalindrome("abcdcba") == 1);
  }

  TEST_CASE("Test Case 7") {
    REQUIRE(isPalindrome("abcdefghhgfedcba") == 1);
  }

  TEST_CASE("Test Case 8") {
    REQUIRE(isPalindrome("abcdefghihgfedcba") == 1);
  }

  TEST_CASE("Test Case 9") {
    REQUIRE(isPalindrome("abcdefghihgfeddcba") == 0);
  }
  TEST_END;
}

