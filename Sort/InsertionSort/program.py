# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


def insertionSort(array):
    """ Best case (sorted) O(n) | O(1) space
    Worst case O(n^2) time | O(1) space

    Args:
        param1(list): array int
    Return: sorted list
    """
    idx = 1
    length = len(array)
    for idx in range(1, length):
        item = idx
        while item > 0:
            if array[item-1] > array[item]:
                array[item-1], array[item] = array[item], array[item-1]
            item -= 1
    return array


def mastersol(array):
    for i in range(1, len(array)):
        j = i
        while j > 0 and array[j] < array[j - 1]:
            swap(j, j-1, array)
            j -= 1
    return array


def swap(i, j, array):
    array[i], array[j] = array[j], array[i]
