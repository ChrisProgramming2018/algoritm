// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>

#include <gtest/gtest.h>
#include "./MoveElementToEnd.h"



TEST(MoveElementToEndTest, MoveElementToEnd) {
  std::vector<int> array = {};
  int toMove = 3;
  std::vector<int> expected = {};
  std::vector<int> output = moveElementToEnd(array, toMove);
  ASSERT_EQ(output.size(), array.size());
  ASSERT_EQ(output, expected);
    
  array = {1, 2, 4, 5, 6};
  toMove = 3;
  expected = {1, 2, 4, 5, 6};
  output = moveElementToEnd(array, toMove);
  ASSERT_EQ(output.size(), array.size());
  sort(output.begin(), output.end());
  ASSERT_EQ(output, expected);
  
  array = {3, 3, 3, 3, 3};
  toMove = 3;
  expected = {3, 3, 3, 3, 3};
  output = moveElementToEnd(array, toMove);
  ASSERT_EQ(output.size(), array.size());
  ASSERT_EQ(output, expected);
  
  array = {3, 1, 2, 4, 5};
  toMove = 3;
  std::vector<int>expectedStart = {1, 2, 4, 5};
  std::vector<int>expectedEnd = {3};
  output = moveElementToEnd(array, toMove);
  ASSERT_EQ(output.size(), array.size());
  std::vector<int> outputStart = std::vector<int>(output.begin(), output.begin() + 4);
  sort(outputStart.begin(), outputStart.end());
  std::vector<int> outputEnd = std::vector<int>(output.begin() + 4, output.end());
  ASSERT_EQ(outputStart, expectedStart);
  ASSERT_EQ(outputEnd, expectedEnd);

}
/*
    RunTest("Test Case 5", []() {
      vector<int> array = {1, 2, 4, 5, 3};
      int toMove = 3;
      vector<int> expectedStart = {1, 2, 4, 5};
      vector<int> expectedEnd = {3};
      vector<int> output = moveElementToEnd(array, toMove);
      assert(output.size() == array.size());
      vector<int> outputStart = vector<int>(output.begin(), output.begin() + 4);
      sort(outputStart.begin(), outputStart.end());
      vector<int> outputEnd = vector<int>(output.begin() + 4, output.end());
      assert(outputStart == expectedStart);
      assert(outputEnd == expectedEnd);
    });

    RunTest("Test Case 6", []() {
      vector<int> array = {1, 2, 3, 4, 5};
      int toMove = 3;
      vector<int> expectedStart = {1, 2, 4, 5};
      vector<int> expectedEnd = {3};
      vector<int> output = moveElementToEnd(array, toMove);
      assert(output.size() == array.size());
      vector<int> outputStart = vector<int>(output.begin(), output.begin() + 4);
      sort(outputStart.begin(), outputStart.end());
      vector<int> outputEnd = vector<int>(output.begin() + 4, output.end());
      assert(outputStart == expectedStart);
      assert(outputEnd == expectedEnd);
    });

    RunTest("Test Case 7", []() {
      vector<int> array = {5, 5, 5, 5, 5, 5,  1,  2, 3,
                           4, 6, 7, 8, 9, 10, 11, 12};
      int toMove = 5;
      vector<int> expectedStart = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12};
      vector<int> expectedEnd = {5, 5, 5, 5, 5, 5};
      vector<int> output = moveElementToEnd(array, toMove);
      assert(output.size() == array.size());
      vector<int> outputStart =
          vector<int>(output.begin(), output.begin() + 11);
      sort(outputStart.begin(), outputStart.end());
      vector<int> outputEnd = vector<int>(output.begin() + 11, output.end());
      assert(outputStart == expectedStart);
      assert(outputEnd == expectedEnd);
    });

    RunTest("Test Case 8", []() {
      vector<int> array = {1,  2,  3, 4, 6, 7, 8, 9, 10,
                           11, 12, 5, 5, 5, 5, 5, 5};
      int toMove = 5;
      vector<int> expectedStart = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12};
      vector<int> expectedEnd = {5, 5, 5, 5, 5, 5};
      vector<int> output = moveElementToEnd(array, toMove);
      assert(output.size() == array.size());
      vector<int> outputStart =
          vector<int>(output.begin(), output.begin() + 11);
      sort(outputStart.begin(), outputStart.end());
      vector<int> outputEnd = vector<int>(output.begin() + 11, output.end());
      assert(outputStart == expectedStart);
      assert(outputEnd == expectedEnd);
    });

    RunTest("Test Case 9", []() {
      vector<int> array = {5, 1, 2, 5,  5,  3, 4, 6, 7,
                           5, 8, 9, 10, 11, 5, 5, 12};
      int toMove = 5;
      vector<int> expectedStart = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12};
      vector<int> expectedEnd = {5, 5, 5, 5, 5, 5};
      vector<int> output = moveElementToEnd(array, toMove);
      assert(output.size() == array.size());
      vector<int> outputStart =
          vector<int>(output.begin(), output.begin() + 11);
      sort(outputStart.begin(), outputStart.end());
      vector<int> outputEnd = vector<int>(output.begin() + 11, output.end());
      assert(outputStart == expectedStart);
      assert(outputEnd == expectedEnd);
    });

    RunTest("Test Case 10", []() {
      vector<int> array = {2, 1, 2, 2, 2, 3, 4, 2};
      int toMove = 2;
      vector<int> expectedStart = {1, 3, 4};
      vector<int> expectedEnd = {2, 2, 2, 2, 2};
      vector<int> output = moveElementToEnd(array, toMove);
      assert(output.size() == array.size());
      vector<int> outputStart = vector<int>(output.begin(), output.begin() + 3);
      sort(outputStart.begin(), outputStart.end());
      vector<int> outputEnd = vector<int>(output.begin() + 3, output.end());
      assert(outputStart == expectedStart);
      assert(outputEnd == expectedEnd);
    });
  }
};
*/
