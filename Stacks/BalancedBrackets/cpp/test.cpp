// Add, edit, or remove tests in this file.
// Treat it as your playground!

#include "utils.hpp"
#include "program.cpp"

int main() {

  TEST_START;
  TEST_CASE("Test Case 1") {
    REQUIRE(balancedBrackets("()[]{}{") == 0);
  }
  
  TEST_CASE("Test Case 2") {
    REQUIRE(balancedBrackets("(((((({{{{{[[[[[([)])]]]]]}}}}}))))))") == 0);
  }
  
  TEST_CASE("Test Case 3") {
    REQUIRE(balancedBrackets("()()[{()})]") == 0);
  }
  
  TEST_CASE("Test Case 4") {
    REQUIRE(balancedBrackets("(()())((()()()))") == 1);
  }
  
  TEST_CASE("Test Case 5") {
    REQUIRE(balancedBrackets("{}()") == 1);
  }
  
  TEST_CASE("Test Case 6") {
    REQUIRE(balancedBrackets("()([])") == 1);
  }
  
  TEST_CASE("Test Case 7") {
    REQUIRE(balancedBrackets("((){{{{[]}}}})") == 1);
  }
  
  TEST_CASE("Test Case 8") {
    REQUIRE(balancedBrackets("([])(){}(())()()") == 1);
  }
  
  TEST_CASE("Test Case 9") {
    REQUIRE(balancedBrackets("((({})()))") == 1);
  }
  
  TEST_CASE("Test Case 10") {
    REQUIRE(balancedBrackets("(([]()()){})") == 1);
  }
  
  TEST_CASE("Test Case 11") {
    REQUIRE(balancedBrackets("(((((([[[[[[{{{{{{{{{{{{()}}}}}}}}}}}}]]]]]]))))))((([])({})[])[])[]([]){}(())") == 1);
  }
  
  TEST_CASE("Test Case 12") {
    REQUIRE(balancedBrackets("{[[[[({(}))]]]]}") == 0);
  }
  
  TEST_CASE("Test Case 13") {
    REQUIRE(balancedBrackets("[((([])([]){}){}){}([])[]((())") == 0);
  }
  
  TEST_CASE("Test Case 14") {
    REQUIRE(balancedBrackets(")[]}") == 0);
  }
  TEST_END;
}
