// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <gtest/gtest.h>
#include "./LongestPeak.h"


TEST(LongestPeakTest, LongestPeak) {
  std::vector<int> input = {};
  int expected = 0;
  int actual = longestPeak(input);
  ASSERT_EQ(expected, actual);
  
  input = {1, 3, 2};
  expected = 3;
  actual = longestPeak(input);
  ASSERT_EQ(expected, actual);
  
  input = {1, 2, 3, 4, 5, 1};
  expected = 6;
  actual = longestPeak(input);
  ASSERT_EQ(expected, actual);
  
  input = {5, 4, 3, 2, 1, 2, 1};
  expected = 3;
  actual = longestPeak(input);
  ASSERT_EQ(expected, actual);
}
    
/*
      RunTest("Test Case 5", []() {
      vector<int> input = {5, 4, 3, 2, 1, 2, 10, 12, -3, 5, 6, 7, 10};
      int expected = 5;
      int actual = longestPeak(input);
      assert(expected == actual);
    });
    RunTest("Test Case 6", []() {
      vector<int> input = {5, 4, 3, 2, 1, 2, 10, 12};
      int expected = 0;
      int actual = longestPeak(input);
      assert(expected == actual);
    });
    RunTest("Test Case 7", []() {
      vector<int> input = {1, 2, 3, 4, 5, 6, 10, 100, 1000};
      int expected = 0;
      int actual = longestPeak(input);
      assert(expected == actual);
    });
    RunTest("Test Case 8", []() {
      vector<int> input = {1, 2, 3, 3, 2, 1};
      int expected = 0;
      int actual = longestPeak(input);
      assert(expected == actual);
    });
    RunTest("Test Case 9", []() {
      vector<int> input = {1, 1, 3, 2, 1};
      int expected = 4;
      int actual = longestPeak(input);
      assert(expected == actual);
    });
    RunTest("Test Case 10", []() {
      vector<int> input = {1, 2, 3, 2, 1, 1};
      int expected = 5;
      int actual = longestPeak(input);
      assert(expected == actual);
    });
    RunTest("Test Case 11", []() {
      vector<int> input = {1,  1,  1, 2,  3,  10, 12, -3, -3, 2, 3,  45, 800,
                           99, 98, 0, -1, -1, 2,  3,  4,  5,  0, -1, -1};
      int expected = 9;
      int actual = longestPeak(input);
      assert(expected == actual);
    });
    RunTest("Test Case 12", []() {
      vector<int> input = {1, 2, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3};
      int expected = 6;
      int actual = longestPeak(input);
      assert(expected == actual);
    });
  }
};
*/
