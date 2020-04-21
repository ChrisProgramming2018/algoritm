// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <gtest/gtest.h>
#include "./ThreeNumberSum.h"

TEST(ThreeNumberSumTest, ThreeNumberSum) {
  std::vector<std::vector<int>> expected {{1, 2, 3}};
  ASSERT_EQ(threeNumberSum({1, 2, 3}, 6), expected);
}

/*
  TEST_CASE("Test Case 2") {
    vector<vector<int> > expected {};
    REQUIRE(threeNumberSum({1, 2, 3}, 7) == expected);
  }

  TEST_CASE("Test Case 3") {
    vector<vector<int> > expected {{-2, 10, 49}};
    REQUIRE(threeNumberSum({8, 10, -2, 49, 14}, 57) == expected);
  }

  TEST_CASE("Test Case 4") {
    vector<vector<int> > expected {{-8, 2, 6}, {-8, 3, 5}, {-6, 1, 5}};
    REQUIRE(threeNumberSum({12, 3, 1, 2, -6, 5, -8, 6}, 0) == expected);
  }

  TEST_CASE("Test Case 5") {
    vector<vector<int> > expected {{-8, 3, 5}, {-6, 1, 5}, {-1, 0, 1}};
    REQUIRE(threeNumberSum({12, 3, 1, 2, -6, 5, 0, -8, -1}, 0) == expected);
  }

  TEST_CASE("Test Case 6") {
    vector<vector<int> > expected {{-8, 2, 6}, {-8, 3, 5}, {-6, 0, 6}, {-6, 1, 5}, {-1, 0, 1}};
    REQUIRE(threeNumberSum({12, 3, 1, 2, -6, 5, 0, -8, -1, 6}, 0) == expected);
  }

  TEST_CASE("Test Case 7") {
    vector<vector<int> > expected {{-8, 2, 6}, {-8, 3, 5}, {-6, 0, 6}, {-6, 1, 5}, {-5, -1, 6}, {-5, 0, 5}, {-5, 2, 3}, {-1, 0, 1}};
    REQUIRE(threeNumberSum({12, 3, 1, 2, -6, 5, 0, -8, -1, 6, -5}, 0) == expected);
  }

  TEST_CASE("Test Case 8") {
    vector<vector<int> > expected {{1, 2, 15}, {1, 8, 9}, {2, 7, 9}, {3, 6, 9}, {3, 7, 8}, {4, 5, 9}, {4, 6, 8}, {5, 6, 7}};
    REQUIRE(threeNumberSum({1, 2, 3, 4, 5, 6, 7, 8, 9, 15}, 18) == expected);
  }

  TEST_CASE("Test Case 9") {
    vector<vector<int> > expected {{8, 9, 15}};
    REQUIRE(threeNumberSum({1, 2, 3, 4, 5, 6, 7, 8, 9, 15}, 32) == expected);
  }

  TEST_CASE("Test Case 10") {
    vector<vector<int> > expected {};
    REQUIRE(threeNumberSum({1, 2, 3, 4, 5, 6, 7, 8, 9, 15}, 33) == expected);
  }

  TEST_CASE("Test Case 11") {
    vector<vector<int> > expected {};
    REQUIRE(threeNumberSum({1, 2, 3, 4, 5, 6, 7, 8, 9, 15}, 5) == expected);
  }
  TEST_END;
}
*/
