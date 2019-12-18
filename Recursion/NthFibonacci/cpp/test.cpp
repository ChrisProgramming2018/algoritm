// Add, edit, or remove tests in this file.
// Treat it as your playground!

#include "utils.hpp"
#include "program.cpp"

int main() {

  TEST_START;
  TEST_CASE("Test Case 1") {
    REQUIRE(getNthFib(1) == 0);
  }

  TEST_CASE("Test Case 2") {
    REQUIRE(getNthFib(2) == 1);
  }

  TEST_CASE("Test Case 3") {
    REQUIRE(getNthFib(3) == 1);
  }

  TEST_CASE("Test Case 4") {
    REQUIRE(getNthFib(4) == 2);
  }

  TEST_CASE("Test Case 5") {
    REQUIRE(getNthFib(5) == 3);
  }

  TEST_CASE("Test Case 6") {
    REQUIRE(getNthFib(6) == 5);
  }

  TEST_CASE("Test Case 7") {
    REQUIRE(getNthFib(7) == 8);
  }

  TEST_CASE("Test Case 8") {
    REQUIRE(getNthFib(8) == 13);
  }

  TEST_CASE("Test Case 9") {
    REQUIRE(getNthFib(9) == 21);
  }

  TEST_CASE("Test Case 10") {
    REQUIRE(getNthFib(10) == 34);
  }

  TEST_CASE("Test Case 11") {
    REQUIRE(getNthFib(11) == 55);
  }

  TEST_CASE("Test Case 12") {
    REQUIRE(getNthFib(12) == 89);
  }

  TEST_CASE("Test Case 13") {
    REQUIRE(getNthFib(13) == 144);
  }

  TEST_CASE("Test Case 14") {
    REQUIRE(getNthFib(14) == 233);
  }

  TEST_CASE("Test Case 15") {
    REQUIRE(getNthFib(15) == 377);
  }

  TEST_CASE("Test Case 16") {
    REQUIRE(getNthFib(16) == 610);
  }

  TEST_CASE("Test Case 17") {
    REQUIRE(getNthFib(17) == 987);
  }

  TEST_CASE("Test Case 18") {
    REQUIRE(getNthFib(18) == 1597);
  }
  TEST_END;
}

