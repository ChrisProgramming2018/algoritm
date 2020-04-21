// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <gtest/gtest.h>
#include "./SmallestDifference.h"

TEST(SmallestDifferenceTest, SmallestDifference) {
  std::vector<int> expected {20, 17};
  ASSERT_EQ(smallestDifference({-1, 5, 10, 20, 3}, {26, 134, 135, 15, 17}), expected);
}
/*
  TEST_CASE("Test Case 2") {
    vector<int> expected {28, 26};
    REQUIRE(smallestDifference({-1, 5, 10, 20, 28, 3}, {26, 134, 135, 15, 17}) == expected);
  }

  TEST_CASE("Test Case 3") {
    vector<int> expected {25, 1005};
    REQUIRE(smallestDifference({10, 0, 20, 25}, {1005, 1006, 1014, 1032, 1031}) == expected);
  }

  TEST_CASE("Test Case 4") {
    vector<int> expected {25, 1005};
    REQUIRE(smallestDifference({10, 0, 20, 25, 2200}, {1005, 1006, 1014, 1032, 1031}) == expected);
  }

  TEST_CASE("Test Case 5") {
    vector<int> expected {2000, 1032};
    REQUIRE(smallestDifference({10, 0, 20, 25, 2000}, {1005, 1006, 1014, 1032, 1031}) == expected);
  }

  TEST_CASE("Test Case 6") {
    vector<int> expected {954, 954};
    REQUIRE(smallestDifference({240, 124, 86, 111, 2, 84, 954, 27, 89}, {1, 3, 954, 19, 8}) == expected);
  }

  TEST_CASE("Test Case 7") {
    vector<int> expected {20, 21};
    REQUIRE(smallestDifference({0, 20}, {21, -2}) == expected);
  }

  TEST_CASE("Test Case 8") {
    vector<int> expected {1000, 1014};
    REQUIRE(smallestDifference({10, 1000}, {-1441, -124, -25, 1014, 1500, 660, 410, 245, 530}) == expected);
  }

  TEST_CASE("Test Case 9") {
    vector<int> expected {-123, -124};
    REQUIRE(smallestDifference({10, 1000, 9124, 2142, 59, 24, 596, 591, 124, -123}, {-1441, -124, -25, 1014, 1500, 660, 410, 245, 530}) == expected);
  }

  TEST_CASE("Test Case 10") {
    vector<int> expected {530, 530};
    REQUIRE(smallestDifference({10, 1000, 9124, 2142, 59, 24, 596, 591, 124, -123, 530}, {-1441, -124, -25, 1014, 1500, 660, 410, 245, 530}) == expected);
  }
  TEST_END;
}
*/
