
import sys
import numpy as np


def bubbleSort(array):
    """ Implementation of the Bubble sort algoritm.
    Compares to adjacente Elements and swap them if left is bigger than right
    Until its sorted
    n is the Array length
    Best case O(n) if already sorted
    Worst case O(n^2)

    Agrs:
        param1: (List) of integers

    Returns:
         sorted List
    """
    done = True
    while done:
        done = False
        for i in range(len(array) - 1):
            if array[i] <= array[i + 1]:
                pass
            else:
                # swap elements
                array[i], array[i+1] = array[i+1], array[i]
                done = True
    return array


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Please insert size of array")
        sys.exit()

    size = int(sys.argv[1])
    array = np.random.randint(-size * 2, size * 2, size=size)
    print(bubble_sort(array))
