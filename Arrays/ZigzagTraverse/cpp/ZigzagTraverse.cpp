// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./ZigzagTraverse.h"

// ______________________________________________________________
std::vector<int> zigzagTraverse(std::vector<std::vector<int>> array) {
  std::vector<int> sol;
  int rightBorder = array[0].size() - 1;
  int downBorder = array.size() - 1;
  bool up = false;
  int row = 0;
  int col = 0;
  std::cout << "right " << rightBorder << std::endl;
  std::cout << "down " << downBorder << std::endl;
  while (true) {
    std::cout << row << col << std::endl;
    if (row < 0 || col < 0 || row > downBorder || col > rightBorder) {
      break;
    }
    sol.push_back(array[row][col]);

    if (up) {
      // check if at the border
      if (row == 0 || col == rightBorder) {
        up = false;
        if (col == rightBorder) {
          row++;
        } else { 
          col++;
        }
      } else {
        // go up
        row--;
        col++;
      }
    } else {
      if (row == downBorder || col == 0) {
          up = true;
        if (row == downBorder) {
          std::cout << "row" << row << std::endl;
          col++;
        } else {
          row++;
        }
      } else {
        row++;
        col--;
      }
    }
  }
  return sol;
}

