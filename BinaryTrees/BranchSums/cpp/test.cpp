
#include "program.cpp"

class TestBinaryTree : public BinaryTree {
public:
  TestBinaryTree(int value) : BinaryTree(value){};

  BinaryTree *insert(vector<int> values, int i = 0) {
    if (i >= values.size())
      return NULL;
    vector<BinaryTree *> queue = {this};
    while (queue.size() > 0) {
      BinaryTree *current = queue[0];
      queue.erase(queue.begin());
      if (current->left == NULL) {
        current->left = new BinaryTree(values[i]);
        break;
      }
      queue.push_back(current->left);
      if (current->right == NULL) {
        current->right = new BinaryTree(values[i]);
        break;
      }
      queue.push_back(current->right);
    }
    insert(values, i + 1);
    return this;
  }
};

class ProgramTest : public TestSuite {
public:
  void Run() {

    RunTest("Test Case 1", []() {
      TestBinaryTree *tree = new TestBinaryTree(1);
      vector<int> expected = {1};
      assert(branchSums(tree) == expected);
    });

    RunTest("Test Case 2", []() {
      TestBinaryTree *tree = new TestBinaryTree(1);
      tree->insert({2});
      vector<int> expected = {3};
      assert(branchSums(tree) == expected);
    });

    RunTest("Test Case 3", []() {
      TestBinaryTree *tree = new TestBinaryTree(1);
      tree->insert({2, 3});
      vector<int> expected = {3, 4};
      assert(branchSums(tree) == expected);
    });

    RunTest("Test Case 4", []() {
      TestBinaryTree *tree = new TestBinaryTree(1);
      tree->insert({2, 3, 4, 5});
      vector<int> expected = {7, 8, 4};
      assert(branchSums(tree) == expected);
    });

    RunTest("Test Case 5", []() {
      TestBinaryTree *tree = new TestBinaryTree(1);
      tree->insert({2, 3, 4, 5, 6, 7, 8, 9, 10});
      vector<int> expected = {15, 16, 18, 10, 11};
      assert(branchSums(tree) == expected);
    });

    RunTest("Test Case 6", []() {
      TestBinaryTree *tree = new TestBinaryTree(0);
      tree->left = new BinaryTree(1);
      tree->left->left = new BinaryTree(10);
      tree->left->left->left = new BinaryTree(100);
      vector<int> expected = {111};
      assert(branchSums(tree) == expected);
    });

    RunTest("Test Case 7", []() {
      TestBinaryTree *tree = new TestBinaryTree(0);
      tree->left = new BinaryTree(1);
      tree->left->left = new BinaryTree(10);
      tree->left->left->left = new BinaryTree(100);
      vector<int> expected = {111};
      assert(branchSums(tree) == expected);
    });

    RunTest("Test Case 8", []() {
      TestBinaryTree *tree = new TestBinaryTree(0);
      tree->right = new BinaryTree(1);
      tree->right->right = new BinaryTree(10);
      tree->right->right->right = new BinaryTree(100);
      vector<int> expected = {111};
      assert(branchSums(tree) == expected);
    });

    RunTest("Test Case 9", []() {
      TestBinaryTree *tree = new TestBinaryTree(0);
      tree->left = new BinaryTree(9);
      tree->right = new BinaryTree(1);
      tree->right->left = new BinaryTree(15);
      tree->right->right = new BinaryTree(10);
      tree->right->right->left = new BinaryTree(100);
      tree->right->right->right = new BinaryTree(200);
      vector<int> expected = {9, 16, 111, 211};
      assert(branchSums(tree) == expected);
    });
  }
};
