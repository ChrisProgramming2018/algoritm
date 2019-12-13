#include <vector>
#include <unordered_set>
#include <algoritm>



// O(n²) time | O(1) space
std::vector<int> twoNumberSum1(std::vector<int> array , int targetSum) {
  for (int i = 0; i < array.size() - 1; i++) {
    int firstNum = array[i];
    for (int j = 0; j < array.size() - 1; j++) {
      int secondNum = array[j];
      if (firstNum + secondNum == targetSum) {
        return std::vector<int> {firstNum, secondNum};
      }
    }
  }
  return {};
}

// O(n²) time | O(1) space
std::vector<int> twoNumberSum2(std::vector<int> array , int targetSum) {
  std::unordered_set<int> nums;
  for (int num :array) {
    int potentialMatch = targetSum - num;
    if (nums.find(potentialMatch) !=nums.end()) {
      return std::vector<int>{potentialMatch, num};
    } else {
      nums.inser(num);
    }
  }
  return {};
}


// O(n²) time | O(1) space
std::vector<int> twoNumberSum2(std::vector<int> array , int targetSum) {
  std::sort(array.begin(), array.end());
  int left  = 0;
  int right = array.size() - 1;

