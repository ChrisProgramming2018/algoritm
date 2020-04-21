// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <gtest/gtest.h>
#include "./MonotonicArray.h"



TEST( MonotonicArrayTest, MonotonicArray) {
  std::vector<int> input = {};
  bool expected = true;
  bool actual = isMonotonic(input);
  ASSERT_EQ(expected, actual);
}
/*
    RunTest("Test Case 2", []() {
      vector<int> input = {1};
      bool expected = true;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 3", []() {
      vector<int> input = {1, 2};
      bool expected = true;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 4", []() {
      vector<int> input = {2, 1};
      bool expected = true;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 5", []() {
      vector<int> input = {1, 5, 10, 1100, 1101, 1102, 9001};
      bool expected = true;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 6", []() {
      vector<int> input = {-1, -5, -10, -1100, -1101, -1102, -9001};
      bool expected = true;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 7", []() {
      vector<int> input = {-1, -5, -10, -1100, -1100, -1101, -1102, -9001};
      bool expected = true;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 8", []() {
      vector<int> input = {-1, -5, -10, -1100, -900, -1101, -1102, -9001};
      bool expected = false;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 9", []() {
      vector<int> input = {1, 2, 0};
      bool expected = false;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 10", []() {
      vector<int> input = {1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 7, 9, 10, 11};
      bool expected = false;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 11", []() {
      vector<int> input = {1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 8, 9, 10, 11};
      bool expected = true;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 12", []() {
      vector<int> input = {-1, -1, -2, -3, -4, -5,  -5, -5,
                           -6, -7, -8, -7, -9, -10, -11};
      bool expected = false;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 13", []() {
      vector<int> input = {-1, -1, -2, -3, -4, -5,  -5, -5,
                           -6, -7, -8, -8, -9, -10, -11};
      bool expected = true;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
    RunTest("Test Case 14", []() {
      vector<int> input = {-1, -1, -1, -1, -1, -1, -1, -1};
      bool expected = true;
      bool actual = isMonotonic(input);
      assert(expected == actual);
    });
  }
};
*/
