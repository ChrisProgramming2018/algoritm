// Add, edit, or remove tests in this file.
// Treat it as your playground!

vector<int> vector1{1};
vector<int> vector2{1, 1};
vector<int> vector3{3, 1};
vector<int> vector4{1, 1, 1};
vector<int> vector5{2, 1, 1};
vector<int> vector6{2, 1, 2, 3, 1};
vector<int> vector7{2, 1, 2, 3, 1, 1, 1};
vector<int> vector8{2, 1, 2, 2, 1, 1, 1};
vector<int> vector9{3, 4, 2, 1, 2, 3, 7, 1, 1, 1, 3};
vector<int> vector10{3, 4, 2, 1, 2, 3, 7, 1, 1, 1, 3, 2, 6, 2, 1, 1, 1, 1};
vector<int> vector11{3, 4, 2, 1, 2, 3, 7, 1, 1, 1, 3, 2, 3, 2, 1, 1, 1, 1};
vector<int> vector12{3, 10, 2, 1, 2, 3, 7, 1, 1, 1, 3, 2, 3, 2, 1, 1, 1, 1};
vector<int> vector13{3, 12, 2, 1, 2, 3, 7, 1, 1, 1, 3, 2, 3, 2, 1, 1, 1, 1};
vector<int> vector14{3, 12, 2, 1, 2, 3, 15, 1, 1, 1, 3, 2, 3, 2, 1, 1, 1, 1};
class ProgramTest : public TestSuite {
public:
  void Run() {

    RunTest("Test Case 1", []() { assert(minNumberOfJumps(vector1) == 0); });

    RunTest("Test Case 2", []() { assert(minNumberOfJumps(vector2) == 1); });

    RunTest("Test Case 3", []() { assert(minNumberOfJumps(vector3) == 1); });

    RunTest("Test Case 4", []() { assert(minNumberOfJumps(vector4) == 2); });

    RunTest("Test Case 5", []() { assert(minNumberOfJumps(vector5) == 1); });

    RunTest("Test Case 6", []() { assert(minNumberOfJumps(vector6) == 2); });

    RunTest("Test Case 7", []() { assert(minNumberOfJumps(vector7) == 3); });

    RunTest("Test Case 8", []() { assert(minNumberOfJumps(vector8) == 4); });

    RunTest("Test Case 9", []() { assert(minNumberOfJumps(vector9) == 4); });

    RunTest("Test Case 10", []() { assert(minNumberOfJumps(vector10) == 5); });

    RunTest("Test Case 11", []() { assert(minNumberOfJumps(vector11) == 7); });

    RunTest("Test Case 12", []() { assert(minNumberOfJumps(vector12) == 6); });

    RunTest("Test Case 13", []() { assert(minNumberOfJumps(vector13) == 5); });

    RunTest("Test Case 14", []() { assert(minNumberOfJumps(vector14) == 3); });
  }
};

