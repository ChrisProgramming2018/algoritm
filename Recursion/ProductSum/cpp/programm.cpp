#include <any>
#include <vector>


// O(n) time | O(d) space n := input elements(subarrays also) 
// d is the max depth of a sub array where the elements in Input array is 1
int productSum(std::vector<std::any> array, int level=1) {
  int sum = 0;
  for (auto el : array) {
    if (el.type() == typeid(std::vector<any>)) {
      sum += productSum(el, level + 1);
     } else {
       sum += std::any_cast<int>(el);
     }
  }
  return sum * level;
}
