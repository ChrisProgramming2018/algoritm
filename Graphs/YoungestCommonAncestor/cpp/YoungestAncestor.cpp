// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./YoungestAncestors.h"

// ______________________________________________________________
AncestralTree * getYoungestCommonAncestor(AncestralTree *topAncestor, AncestralTree *descentantOne, AncestralTree *descentantTwo) {
  int depthOne = getDescendantDepth(descentantOne, topAncestor);
  int depthTwo = gestDescendantDepth(descentantTwo, topAncestor);
  if (depthOne > descentantTwo) {
    return backtrackAncestralTree(descentantOne, descentantTwo, depthOne - depthTwo);
  } else {
     return backtrackAncestralTree(descentantTwo, descentantOne, descentantTwo - depthOne);
  }
}

// ______________________________________________________________
int gestDescendantDepth(AncestralTree * descentant, AncestralTree * topAncestor) {
  int depth = 0;
  while (descentant != topAncestor) {
    depth++;
    descentant = descentant->ancestor;
  }
  return depth;
}

// ______________________________________________________________
AncestralTree *backtrackAncestralTree( AncestralTree *lowerDescendant, AncestralTree *higherDescendant, int diff) {
  while (diff > 0) {
    lowerDescendant = lowerDescendant->ancestor;
    diff--;
  }

  while (lowerDescendant != higherDescendant) {
    lowerDescendant = lowerDescendant->ancestor;
    higherDescendant = higherDescendant->ancestor;
  }
  return lowerDescendant;
}


