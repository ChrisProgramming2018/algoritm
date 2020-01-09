// Add, edit, or remove tests in this file.
// Treat it as your playground!

#include "program.cpp"

BST::BST(int val) {
  value = val;
  left = NULL;
  right = NULL;
}

BST &BST::insert(int val) {
  if (val < value) {
    if (left == NULL) {
      BST *newBST = new BST(val);
      left = newBST;
    } else {
      left->insert(val);
    }
  } else {
    if (right == NULL) {
      BST *newBST = new BST(val);
      right = newBST;
    } else {
      right->insert(val);
    }
  }
  return *this;
}

class ProgramTest : public TestSuite {
public:
  void Run() {

    RunTest("Test Case 1", []() {
      BST test1(10);
      test1.insert(5).insert(15);
      vector<int> expected{5, 10, 15};
      assert(inOrderTraverse(&test1, {}) == expected);
    });

    RunTest("Test Case 2", []() {
      BST test2(10);
      test2.insert(5).insert(15).insert(5).insert(2).insert(1).insert(22);
      vector<int> expected{1, 2, 5, 5, 10, 15, 22};
      assert(inOrderTraverse(&test2, {}) == expected);
    });

    RunTest("Test Case 3", []() {
      BST test3(100);
      test3.insert(5)
          .insert(15)
          .insert(5)
          .insert(2)
          .insert(1)
          .insert(22)
          .insert(1)
          .insert(1)
          .insert(3)
          .insert(1)
          .insert(1)
          .insert(502)
          .insert(55000)
          .insert(204)
          .insert(205)
          .insert(207)
          .insert(206)
          .insert(208)
          .insert(203);
      vector<int> expected{1,  1,   1,   1,   1,   2,   3,   5,   5,   15,
                           22, 100, 203, 204, 205, 206, 207, 208, 502, 55000};
      assert(inOrderTraverse(&test3, {}) == expected);
    });

    RunTest("Test Case 4", []() {
      BST test1(10);
      test1.insert(5).insert(15);
      vector<int> expected{10, 5, 15};
      assert(preOrderTraverse(&test1, {}) == expected);
    });

    RunTest("Test Case 5", []() {
      BST test2(10);
      test2.insert(5).insert(15).insert(5).insert(2).insert(1).insert(22);
      vector<int> expected{10, 5, 2, 1, 5, 15, 22};
      assert(preOrderTraverse(&test2, {}) == expected);
    });

    RunTest("Test Case 6", []() {
      BST test3(100);
      test3.insert(5)
          .insert(15)
          .insert(5)
          .insert(2)
          .insert(1)
          .insert(22)
          .insert(1)
          .insert(1)
          .insert(3)
          .insert(1)
          .insert(1)
          .insert(502)
          .insert(55000)
          .insert(204)
          .insert(205)
          .insert(207)
          .insert(206)
          .insert(208)
          .insert(203);
      vector<int> expected{100, 5,  2,   1,   1,   1,   1,   1,   3,   15,
                           5,   22, 502, 204, 203, 205, 207, 206, 208, 55000};
      assert(preOrderTraverse(&test3, {}) == expected);
    });

    RunTest("Test Case 7", []() {
      BST test1(10);
      test1.insert(5).insert(15);
      vector<int> expected{5, 15, 10};
      assert(postOrderTraverse(&test1, {}) == expected);
    });

    RunTest("Test Case 8", []() {
      BST test2(10);
      test2.insert(5).insert(15).insert(5).insert(2).insert(1).insert(22);
      vector<int> expected{1, 2, 5, 5, 22, 15, 10};
      assert(postOrderTraverse(&test2, {}) == expected);
    });

    RunTest("Test Case 9", []() {
      BST test3(100);
      test3.insert(5)
          .insert(15)
          .insert(5)
          .insert(2)
          .insert(1)
          .insert(22)
          .insert(1)
          .insert(1)
          .insert(3)
          .insert(1)
          .insert(1)
          .insert(502)
          .insert(55000)
          .insert(204)
          .insert(205)
          .insert(207)
          .insert(206)
          .insert(208)
          .insert(203);
      vector<int> expected{1, 1,   1,   1,   1,   3,   2,   5,     22,  15,
                           5, 203, 206, 208, 207, 205, 204, 55000, 502, 100};
      assert(postOrderTraverse(&test3, {}) == expected);
    });
  }
};
