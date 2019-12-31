// Add, edit, or remove tests in this file.
// Treat it as your playground!

#include "utils.hpp"
#include "program.cpp"

int main() {

  TEST_START;
  TEST_CASE("Test Case 1") {
    REQUIRE(caesarCypherEncryptor("abc", 0) == "abc");
  }

  TEST_CASE("Test Case 2") {
    REQUIRE(caesarCypherEncryptor("abc", 3) == "def");
  }

  TEST_CASE("Test Case 3") {
    REQUIRE(caesarCypherEncryptor("xyz", 2) == "zab");
  }

  TEST_CASE("Test Case 4") {
    REQUIRE(caesarCypherEncryptor("xyz", 5) == "cde");
  }

  TEST_CASE("Test Case 5") {
    REQUIRE(caesarCypherEncryptor("abc", 26) == "abc");
  }

  TEST_CASE("Test Case 6") {
    REQUIRE(caesarCypherEncryptor("abc", 52) == "abc");
  }

  TEST_CASE("Test Case 7") {
    REQUIRE(caesarCypherEncryptor("abc", 57) == "fgh");
  }
  TEST_END;
}

