#include <vector>
#include <unordered_set>
#include <algorithm>
#include <iostream>



// O(n²) time | O(1) space
std::vector<int> twoNumberSum1(std::vector<int> array , int targetSum) {
  for (int i = 0; i < array.size() - 1; i++) {
    int firstNum = array[i];
    for (int j = i + 1; j < array.size(); j++) {
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
  for (int num : array) {
    int potentialMatch = targetSum - num;
    if (nums.find(potentialMatch) !=nums.end()) {
      return std::vector<int>{potentialMatch, num};
    } else {
      nums.insert(num);
    }
  }
  return {};
}


// O(n log n) time | O(1) space
std::vector<int> twoNumberSum3(std::vector<int> array , int targetSum) {
  std::sort(array.begin(), array.end());
  int left  = 0;
  int right = array.size() - 1;
  while (left < right) {
    int currentSum = array[left] + array[right];
    if (currentSum = targetSum) { 
      // since only solution is possible
      return {array[left], array[right]};
    } else if (currentSum < targetSum) {
      // currentSum need to be higher 
      // since it is sorted move left pointer increase the sum
      left++;
    } else {
      right--;
    }
  }
  // no pair found
  return {};
}


int main() {
  std::vector<int> sol = twoNumberSum1({4, 6, 1, -3}, 3);
  std::cout << "sol 1: [" << sol[0] << ", " << sol[1] << "] == [-3, 6]" << std::endl;
  sol = twoNumberSum2({4, 6, 1, -3}, 3);
  std::cout << "sol 2: [" << sol[0] << ", " << sol[1] << "] == [-3, 6]" << std::endl;
  sol = twoNumberSum3({4, 6, 1, -3}, 3);
  std::cout << "sol 3: [" << sol[0] << ", " << sol[1] << "] == [-3, 6]" << std::endl;
  return 0;
}
