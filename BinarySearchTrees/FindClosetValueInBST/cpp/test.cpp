// Add, edit, or remove tests in this file.
// Treat it as your playground!

#include "utils.hpp"
#include "program.cpp"

BST::BST(int val) {
  value = val;
  left = NULL;
  right = NULL;
}

BST& BST::insert(int val) {
  if (val < value) {
    if (left == NULL) {
      BST* newBST = new BST(val);
      left = newBST;
    } else {
      left->insert(val);
    }
  } else {
    if (right == NULL) {
      BST* newBST = new BST(val);
      right = newBST;
    } else {
      right->insert(val);
    }
  }
  return *this;
}

int main() {

  BST test (100);
  test.insert(5).insert(15).insert(5).insert(2).insert(1).insert(22).insert(1)
  .insert(1).insert(3).insert(1).insert(1).insert(502).insert(55000).insert(204)
  .insert(205).insert(207).insert(206).insert(208).insert(203).insert(-51)
  .insert(-403).insert(1001).insert(57).insert(60).insert(4500);

  TEST_START;
  TEST_CASE("Test Case 1") {
    REQUIRE(findClosestValueInBst(&test, 100) == 100);
  }

  TEST_CASE("Test Case 2") {
    REQUIRE(findClosestValueInBst(&test, 208) == 208);
  }

  TEST_CASE("Test Case 3") {
    REQUIRE(findClosestValueInBst(&test, 4500) == 4500);
  }

  TEST_CASE("Test Case 4") {
    REQUIRE(findClosestValueInBst(&test, 4501) == 4500);
  }

  TEST_CASE("Test Case 5") {
    REQUIRE(findClosestValueInBst(&test, -70) == -51);
  }

  TEST_CASE("Test Case 6") {
    REQUIRE(findClosestValueInBst(&test, 2000) == 1001);
  }

  TEST_CASE("Test Case 7") {
    REQUIRE(findClosestValueInBst(&test, 6) == 5);
  }

  TEST_CASE("Test Case 8") {
    REQUIRE(findClosestValueInBst(&test, 30000) == 55000);
  }

  TEST_CASE("Test Case 9") {
    REQUIRE(findClosestValueInBst(&test, -1) == 1);
  }

  TEST_CASE("Test Case 10") {
    REQUIRE(findClosestValueInBst(&test, 29751) == 55000);
  }

  TEST_CASE("Test Case 11") {
    REQUIRE(findClosestValueInBst(&test, 29749) == 4500);
  }
  TEST_END;
}

