# Copyright 2020
# AlgoExpert Exercise
# Author: Christian Leininger <info2016frei@gmail.com>


def threeNumberSum(array, target):
    """ Computes sets of 3 integers that sum up to target
    in O(n**2) time and O(1) space


    Args:
        param1: array (list)
        param2: target(int)

    Return: list of list with the elements sum up to the target
    """
    array.sort()
    solution = []
    current_pos = 0
    lpointer = 1
    rpointer = len(array) - 1
    # only go until the 3 last position
    while current_pos <= len(array) - 3:
        while True:
            if lpointer >= rpointer:
                current_pos += 1
                lpointer = current_pos + 1
                rpointer = len(array) - 1
                break

            res = array[current_pos] + array[rpointer] + array[lpointer]
            # 3 cases
            if res > target:
                # res needs to get lower
                rpointer -= 1

            if res < target:
                # res needs to get higher
                lpointer += 1

            if res == target:
                solution.append([array[current_pos], array[lpointer], array[rpointer]])
                lpointer += 1
                rpointer -= 1
    return solution


# O(n^2) time | O(n) spcae
def masterSol(array, targetSum):
    array.sort()
    triplets = []
    for i in range(len(array) - 2):
        left = i + 1
        right = len(array) - 1
        while left < right:
            currentSum = array[i] + array[left] + array[right]
            if currentSum == targetSum:
                triplets.append(array[i], array[left], array[right])
                left += 1
                right -= 1
            elif currentSum < targetSum:
                left += 1
            elif currentSum > targetSum:
                right -= 1
    return triplets
