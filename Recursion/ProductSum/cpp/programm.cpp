#include <any>
#include <vector>


// O(n) time | O(d) space n := input elements(subarrays also) 
// d is the max depth of a sub array where the elements in Input array is 1
int productSum(std::vector<std::any> array, int level=1) {
  int sum = 0;
  for (auto el : array) {
    // check if element is also an array call recursively productSum
    if (el.type() == typeid(std::vector<std::any>)) {
      sum += productSum(std::any_cast<std::vector<std::any>>(el), level + 1);
     } else {
       // in case its an int cast and add
       sum += std::any_cast<int>(el);
     }
  }
  return sum * level;
}

int main() {

}
