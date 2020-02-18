// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "numbersOfWays.cpp"

int main() {

  vector<int> vector1 {2, 3, 4, 7};
  vector<int> vector2 {5};
  vector<int> vector3 {2, 4};
  vector<int> vector4 {1, 5};
  vector<int> vector5 {1, 5, 10, 25};
  vector<int> vector6 {1, 5, 10, 25};
  vector<int> vector7 {1, 5, 10, 25};
  vector<int> vector8 {1, 5, 10, 25};
  vector<int> vector9 {2, 3, 7};
  vector<int> vector10 {2, 3, 4, 7};

  TEST_START;
  TEST_CASE("Test Case 1") {
    REQUIRE(numberOfWaysToMakeChange(0, vector1) == 1);
  }

  TEST_CASE("Test Case 2") {
    REQUIRE(numberOfWaysToMakeChange(9, vector2) == 0);
  }

  TEST_CASE("Test Case 3") {
    REQUIRE(numberOfWaysToMakeChange(7, vector3) == 0);
  }

  TEST_CASE("Test Case 4") {
    REQUIRE(numberOfWaysToMakeChange(6, vector4) == 2);
  }

  TEST_CASE("Test Case 5") {
    REQUIRE(numberOfWaysToMakeChange(4, vector5) == 1);
  }

  TEST_CASE("Test Case 6") {
    REQUIRE(numberOfWaysToMakeChange(5, vector6) == 2);
  }

  TEST_CASE("Test Case 7") {
    REQUIRE(numberOfWaysToMakeChange(10, vector7) == 4);
  }

  TEST_CASE("Test Case 8") {
    REQUIRE(numberOfWaysToMakeChange(25, vector8) == 13);
  }

  TEST_CASE("Test Case 9") {
    REQUIRE(numberOfWaysToMakeChange(12, vector9) == 4);
  }

  TEST_CASE("Test Case 10") {
    REQUIRE(numberOfWaysToMakeChange(7, vector10) == 3);
  }
  TEST_END;
}

