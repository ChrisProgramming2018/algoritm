# Copyright 2020
# Algo
# Author: Christian Leininger info2016frei@gmail.com


def powerset(array):
    """ Create the Powerset of the array
    all subset of the given set if array has length n 
    then 2**n subsets 
    Interativ solution

    Args:
        param1(list): list of elements

    Return: list of list all subsets of given set
    """

    res = [[]]
    for item in array:
        end = len(res)
        for i in res[:end]:
            res.append(i + [item])
    return res

