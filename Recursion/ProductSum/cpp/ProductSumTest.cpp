



#include "./ProductSum.h"




TEST(ProductSumTest, ProductSum) {
  std::vector<any> test = {1, 2, 3, 4, 5};
  ASSERT_EQ(productSum(test), 15);
  
  test = {1, 2, std::vector<any>{3}, 4, 5};
  ASSERT_EQ(productSum(test), 8);

  test = {std::vector<any>{1, 2}, 3, std::vector<any>{4, 5}};
  ASSERT_EQ(productSum(test) == 27);

  test = { std::vector<any>{std::vector<any>{std::vector<any>{std::vector<any>{5}}}}};
  ASSERT_EQ(productSum(test) == 600);
  test = { 9, std::vector<any>{2, -3, 4}, 1,
          std::vector<any>{1, 1, std::vector<any>{1, 1, 1}},
          std::vector<any>std::{vector<any>{std::vector<any>{std::vector<any>{3, 4, 1}}}, 8},
          std::vector<any>{1, 2, 3, 4, 5, std::vector<any>{6, 7}, -7},
          std::vector<any>{1, std::vector<any>{2, 3, std::vector<any>{4, 5}},
                      std::vector<any>{6, 0, std::vector<any>{7, 0, -8}}, -7},
          std::vector<any>{1, -3, 2,
                      std::vector<any>{1, -3, 2, std::vector<any>{1, -3, 2},
                                  std::vector<any>{1, -3, 2, std::vector<any>{1, -3, 2}},
                                  std::vector<any>{1, -3, 2}}},
          -3,
      };
  ASSERT_EQ(productSum(test), 1351);
  test = {5, 2, std::vector<any>{7, -1}, 3, std::vector<any>{6, std::vector<any>{-13, 8}, 4}};
  ASSERT_EQ(productSum(test), 12);
}
