#include "program.cpp"
#include <any>
#include <vector>

class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<any> test = {1, 2, 3, 4, 5};
      assert(productSum(test) == 15);
    });

    RunTest("Test Case 2", []() {
      vector<any> test = {1, 2, vector<any>{3}, 4, 5};

      assert(productSum(test) == 18);
    });

    RunTest("Test Case 3", []() {
      vector<any> test = {vector<any>{1, 2}, 3, vector<any>{4, 5}};
      assert(productSum(test) == 27);
    });

    RunTest("Test Case 4", []() {
      vector<any> test = {
          vector<any>{vector<any>{vector<any>{vector<any>{5}}}}};
      assert(productSum(test) == 600);
    });

    RunTest("Test Case 5", []() {
      vector<any> test = {
          9,
          vector<any>{2, -3, 4},
          1,
          vector<any>{1, 1, vector<any>{1, 1, 1}},
          vector<any>{vector<any>{vector<any>{vector<any>{3, 4, 1}}}, 8},
          vector<any>{1, 2, 3, 4, 5, vector<any>{6, 7}, -7},
          vector<any>{1, vector<any>{2, 3, vector<any>{4, 5}},
                      vector<any>{6, 0, vector<any>{7, 0, -8}}, -7},
          vector<any>{1, -3, 2,
                      vector<any>{1, -3, 2, vector<any>{1, -3, 2},
                                  vector<any>{1, -3, 2, vector<any>{1, -3, 2}},
                                  vector<any>{1, -3, 2}}},
          -3,
      };
      assert(productSum(test) == 1351);
    });

    RunTest("Test Case 6", []() {
      vector<any> test = {5, 2, vector<any>{7, -1}, 3,
                          vector<any>{6, vector<any>{-13, 8}, 4}};
      assert(productSum(test) == 12);
    });
  }
};
