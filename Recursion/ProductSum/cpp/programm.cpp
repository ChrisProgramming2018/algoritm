#include <any>
#include <vector>



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
