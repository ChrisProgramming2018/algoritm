# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


def smallestDifference(arrayOne, arrayTwo):
    """


    """

    arrayOne.sort()
    arrayTwo.sort()
    idxOne = 0
    idxTwo = 0
    smallest = float("inf")
    current = float("inf")
    smallestpair = []

    while idxOne < len(arrayOne) and idxTwo < len(arrayTwo):
        firstNum = arrayOne[idxOne]
        secondNum = arrayTwo[idxTwo]
        if firstNum < secondNum:
            current = secondNum - firstNum
            idxOne += 1
        elif secondNum < firstNum:
            current = firstNum - secondNum
            idxTwo += 1
        else:
            return [firstNum, secondNum]
        if smallest > current:
            smallest = current
            smallestpair = [firstNum, secondNum]
    return smallestpair
