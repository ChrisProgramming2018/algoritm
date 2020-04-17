// Add, edit, or remove tests in this file.
// Treat it as your playground!


#include <gtest/gtest.h>
#include "./DepthFirstSearch.h"



// ________________________________________________________________________________________________________
TEST(DepthFirstSearchTest, DepthFirstSearch) {
  
  Node test1 ("A");
  test1.addChild("B")->addChild("C");
  test1.children[0]->addChild("D");

  Node test2 ("A");
  test2.addChild("B")->addChild("C")->addChild("D")->addChild("E");
  test2.children[1]->addChild("F");

  Node test3 ("A");
  test3.addChild("B");
  test3.children[0]->addChild("C");
  test3.children[0]->children[0]->addChild("D")->addChild("E");
  test3.children[0]->children[0]->children[0]->addChild("F");

  Node test4 ("A");
  test4.addChild("B")->addChild("C")->addChild("D");
  test4.children[0]->addChild("E")->addChild("F");
  test4.children[2]->addChild("G")->addChild("H");
  test4.children[0]->children[1]->addChild("I")->addChild("J");
  test4.children[2]->children[0]->addChild("K");

  Node test5 ("A");
  test5.addChild("B")->addChild("C")->addChild("D")->addChild("L")->addChild("M");
  test5.children[0]->addChild("E")->addChild("F")->addChild("O");
  test5.children[1]->addChild("P");
  test5.children[2]->addChild("G")->addChild("H");
  test5.children[0]->children[0]->addChild("Q")->addChild("R");
  test5.children[0]->children[1]->addChild("I")->addChild("J");
  test5.children[2]->children[0]->addChild("K");
  test5.children[4]->addChild("S")->addChild("T")->addChild("U")->addChild("V");
  test5.children[4]->children[0]->addChild("W")->addChild("X");
  test5.children[4]->children[0]->children[1]->addChild("Y")->addChild("Z");

  vector<string> expected {"A", "B", "D", "C"};
    vector<string> inputArray {};
    REQUIRE(test1.depthFirstSearch(&inputArray) == expected);

    vector<string> expected {"A", "B", "C", "F", "D", "E"};
    vector<string> inputArray {};
    REQUIRE(test2.depthFirstSearch(&inputArray) == expected);

    vector<string> expected {"A", "B", "C", "D", "F", "E"};
    vector<string> inputArray {};
    REQUIRE(test3.depthFirstSearch(&inputArray) == expected);

    vector<string> expected {"A", "B", "E", "F", "I", "J", "C", "D", "G", "K", "H"};
    vector<string> inputArray {};
    REQUIRE(test4.depthFirstSearch(&inputArray) == expected);

    vector<string> expected {"A", "B", "E", "Q", "R", "F", "I", "J", "O", "C", "P", "D", "G", "K", "H", "L", "M", "S", "W", "X", "Y", "Z", "T", "U", "V"};
    vector<string> inputArray {};
    REQUIRE(test5.depthFirstSearch(&inputArray) == expected);

}
