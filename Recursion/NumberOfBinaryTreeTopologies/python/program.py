# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>




# upper bound O((n*(2n)!) / (n!(n+1)!) | O(n) space
def numberOfBinaryTreeTopologies(n):
    if n == 0:
        return 1
    numberOfTrees = 0

    for leftTreeSize in range(n):
        rightTreeSize = n - 1 - leftTreeSize
        numberOfLeftTrees = numberOfBinaryTreeTopologies(leftTreeSize)
        numberOfRightTrees = numberOfBinaryTreeTopologies(rightTreeSize)
        numberOfTrees += numberOfLeftTrees * numberOfRightTrees
    return numberOfTrees


def numberOfBinaryTreeTopologies(n), cache = {0,1}:
    if n in cache:
        return cache[n]
    numberOfTrees = 0

    for leftTreeSize in range(n):
        rightTreeSize = n - 1 - leftTreeSize
        numberOfLeftTrees = numberOfBinaryTreeTopologies(leftTreeSize)
        numberOfRightTrees = numberOfBinaryTreeTopologies(rightTreeSize)
        numberOfTrees += numberOfLeftTrees * numberOfRightTrees
    cache[n] = numberOfTrees
    return numberOfTrees
