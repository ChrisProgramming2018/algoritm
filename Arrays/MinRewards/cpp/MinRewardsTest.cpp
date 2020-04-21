close announcement cross

AlgoExpert

Quad Layout
Quad Layout
Tri Layout
C++
C#
C++
Go
Java
JavaScript
Python
Swift
14px
12px
13px
14px
15px
16px
17px
18px
Sublime
Sublime
Emacs
Vim


Monokai
Blackboard
Cobalt
Lucario
Midnight
Monokai
Night
Oceanic Next
Rubyblue
Solarized Dark


00:00:00
00:00:00
Start
Reset


Prompt

Scratchpad

Our Solution(s)

Video Explanation








Our Tests

Your Tests

Quick Test
BETA



1
// Add, edit, or remove tests in this file.
2
// Treat it as your playground!
3
​
4
#include "utils.hpp"
5
#include "program.cpp"
6
​
7
int main() {
8
​
9
  TEST_START;
10
  TEST_CASE("Test Case 1") {
11
    REQUIRE(minRewards({1}) == 1);
12
  }
13
​
14
  TEST_CASE("Test Case 2") {
15
    REQUIRE(minRewards({5, 10}) == 3);
16
  }
17
​
18
  TEST_CASE("Test Case 3") {
19
    REQUIRE(minRewards({10, 5}) == 3);
20
  }
21
​
22
  TEST_CASE("Test Case 4") {
23
    REQUIRE(minRewards({4, 2, 1, 3}) == 8);
24
  }
25
​
26
  TEST_CASE("Test Case 5") {
27
    REQUIRE(minRewards({0, 4, 2, 1, 3}) == 9);

Your Solutions


Run Code
Solution 1
Solution 2
Solution 3
1
#include <vector>
2
using namespace std;
3
​
4
int minRewards(vector<int> scores) {
5
  // Write your code here.
6
}

Custom Output

Raw Output

Submit Code
Run or submit code when you're ready.


