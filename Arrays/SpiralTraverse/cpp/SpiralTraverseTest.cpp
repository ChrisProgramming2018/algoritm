// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <gtest/gtest.h>
#include "./SpiralTraverse.h"




TEST(SpiralTraverseTest, SpiralTraverse) {
  std::vector<std::vector<int>> input = { {1}, };
  std::vector<int> expected = {1};
  std::vector<int> actual = spiralTraverse(input);
  ASSERT_EQ(expected, actual);
      
  input = {
          {1, 2},
          {4, 3},};
      
  expected = {1, 2, 3, 4};
  actual = spiralTraverse(input);
  ASSERT_EQ(expected, actual);
  
  input = {
          {1, 2, 3},
          {8, 9, 4},
          {7, 6, 5},
      };
  expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  actual = spiralTraverse(input);
  ASSERT_EQ(expected, actual);

  input = {
          {1, 2, 3, 4},
          {12, 13, 14, 5},
          {11, 16, 15, 6},
          {10, 9, 8, 7},
      };
  expected = {1, 2,  3,  4,  5,  6,  7,  8,
                              9, 10, 11, 12, 13, 14, 15, 16};
  actual = spiralTraverse(input);
  ASSERT_EQ(expected, actual);
}
/*
      RunTest("Test Case 5", []() {
      vector<vector<int>> input = {
          {1, 2, 3, 4, 5, 6},       {20, 21, 22, 23, 24, 7},
          {19, 32, 33, 34, 25, 8},  {18, 31, 36, 35, 26, 9},
          {17, 30, 29, 28, 27, 10}, {16, 15, 14, 13, 12, 11},
      };
      vector<int> expected = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12,
                              13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                              25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
      vector<int> actual = spiralTraverse(input);
      assert(expected == actual);
    });
    RunTest("Test Case 6", []() {
      vector<vector<int>> input = {
          {1, 2, 3, 4, 5, 6, 7, 8, 9},
          {22, 23, 24, 25, 26, 27, 28, 29, 10},
          {21, 36, 35, 34, 33, 32, 31, 30, 11},
          {20, 19, 18, 17, 16, 15, 14, 13, 12},
      };
      vector<int> expected = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12,
                              13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                              25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
      vector<int> actual = spiralTraverse(input);
      assert(expected == actual);
    });
    RunTest("Test Case 7", []() {
      vector<vector<int>> input = {
          {1, 2, 3, 4},     {22, 23, 24, 5},  {21, 36, 25, 6},
          {20, 35, 26, 7},  {19, 34, 27, 8},  {18, 33, 28, 9},
          {17, 32, 29, 10}, {16, 31, 30, 11}, {15, 14, 13, 12},
      };
      vector<int> expected = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12,
                              13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                              25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
      vector<int> actual = spiralTraverse(input);
      assert(expected == actual);
    });
    RunTest("Test Case 8", []() {
      vector<vector<int>> input = {
          {1, 2, 3, 4},
          {10, 11, 12, 5},
          {9, 8, 7, 6},
      };
      vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
      vector<int> actual = spiralTraverse(input);
      assert(expected == actual);
    });
    RunTest("Test Case 9", []() {
      vector<vector<int>> input = {
          {1, 2, 3}, {12, 13, 4}, {11, 14, 5}, {10, 15, 6}, {9, 8, 7},
      };
      vector<int> expected = {1, 2,  3,  4,  5,  6,  7, 8,
                              9, 10, 11, 12, 13, 14, 15};
      vector<int> actual = spiralTraverse(input);
      assert(expected == actual);
    });
  }
};
*/
