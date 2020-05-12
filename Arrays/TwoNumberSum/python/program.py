# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


# O(n^2) time | O(1) space
def twoNumberSum1(array, targetSum):
    for i in range(len(array) - 1):
        firstNum = array[i]
        for j in range(i+1, len(array)):
            secondNum = array[j]
            if firstNum + secondNum == targetSum:
                return [firstNum, secondNum]
    return []


# O(n) time | O(n) space
def twoNumberSum2(array, target_sum):
    nums = {}
    for num in array:
        potential_match = target_sum - num
        if potential_match in nums:
            return [potential_match, num]
        else:
            nums[num] = True
    return []


# O(nlog n) time | O(1) space
def twoNumberSum(array, targetSum):
    # sort array
    array.sort()
    right = len(array) - 1
    left = 0
    while left < right:
        currentSum = array[left] + array[right]
        if currentSum == targetSum:
            return [array[left], array[right]]
        elif currentSum < targetSum:
            left += 1
        elif currentSum > targetSum:
            right -= 1
    return []


def twoNumberSumOWn(array, targetSum):
    """ Use a dict to access elements faster
    and use a + b = c is a b = c - a
    c is targetSum

    Args:
        param1(list): array
        param2(list): targetSum
    Return: list with the 2 elements that sum up to the targetSum

    >>> twoNumberSumOWn([2,3,4], 7)
    (4, 3)
    >>> twoNumberSumOWn([2,3,4], 8)
    -1
    """
    save = dict()
    # access time
    for num in array:
        save.update({num: num})
    for num in array:
        y = targetSum - num
        # assumption the elemnts are distinct
        if y == num:
            continue
        if y in save:
            return (y, num)
    # case no possible solution found
    return -1


if __name__ == "__main__":
    import doctest
    doctest.testmod()
