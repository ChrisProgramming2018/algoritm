// Add, edit, or remove tests in this file.
// Treat it as your playground!

#include "utils.hpp"
#include "program.cpp"

int main() {

  TEST_START;
  TEST_CASE("Test Case 1") {
    REQUIRE(levenshteinDistance("", "") == 0);
  }

  TEST_CASE("Test Case 2") {
    REQUIRE(levenshteinDistance("", "abc") == 3);
  }

  TEST_CASE("Test Case 3") {
    REQUIRE(levenshteinDistance("abc", "abc") == 0);
  }

  TEST_CASE("Test Case 4") {
    REQUIRE(levenshteinDistance("abc", "abx") == 1);
  }

  TEST_CASE("Test Case 5") {
    REQUIRE(levenshteinDistance("abc", "abcx") == 1);
  }

  TEST_CASE("Test Case 6") {
    REQUIRE(levenshteinDistance("abc", "yabcx") == 2);
  }

  TEST_CASE("Test Case 7") {
    REQUIRE(levenshteinDistance("algoexpert", "algozexpert") == 1);
  }

  TEST_CASE("Test Case 8") {
    REQUIRE(levenshteinDistance("abcdefghij", "1234567890") == 10);
  }

  TEST_CASE("Test Case 9") {
    REQUIRE(levenshteinDistance("abcdefghij", "a234567890") == 9);
  }

  TEST_CASE("Test Case 10") {
    REQUIRE(levenshteinDistance("biting", "mitten") == 4);
  }

  TEST_CASE("Test Case 11") {
    REQUIRE(levenshteinDistance("cereal", "saturday") == 6);
  }

  TEST_CASE("Test Case 12") {
    REQUIRE(levenshteinDistance("cereal", "saturdzz") == 7);
  }

  TEST_CASE("Test Case 13") {
    REQUIRE(levenshteinDistance("abbbbbbbbb", "bbbbbbbbba") == 2);
  }

  TEST_CASE("Test Case 14") {
    REQUIRE(levenshteinDistance("abc", "yabd") == 2);
  }

  TEST_CASE("Test Case 15") {
    REQUIRE(levenshteinDistance("xabc", "abcx") == 2);
  }
  TEST_END;
}

