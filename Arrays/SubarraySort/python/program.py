# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


def subarraySort(array):
    """ Computes the start and end for a possible sub array
        that needs to be sorted in case of a sorted array
        return -1 and -1
    Args:
        param1(list):  array of int
    Return list with 2 elements first is start sec end
    """
    pos = 0
    min_out = float('inf')
    max_out = float('-inf')
    no_change = True
    while True:
        if array[pos] > array[pos + 1]:
            # next element is out of order
            no_change = False
            if array[pos + 1] < min_out:
                min_out = array[pos + 1]
            if array[pos] > max_out:
                max_out = array[pos]
        pos += 1
        if pos >= len(array) - 1:
            break
    if no_change:
        return [-1, -1]
    # find position in array
    pos = 0
    min_pos = 0
    min_found = False
    max_pos = 0
    while True:
        if array[pos] > min_out and not min_found:
            min_found = True
            min_pos = pos
        if array[pos] > max_out:
            max_pos = pos - 1
            return [min_pos, max_pos]
        pos += 1
        # in case until last element
        if pos >= len(array):
            return [min_pos, len(array) - 1]
