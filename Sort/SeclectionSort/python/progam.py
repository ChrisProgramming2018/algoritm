import numpy as np


def selectionSort(array):
    """ Use selection sort to sort array in place
    Best case O(n^2) time | O(1) space
    Average case O(n^2) time | O(1) space
    Worst case O(n^2) time | O(1) space

    Args:
        param1: array
    Return: sorted array
    """
    current_pos = 0
    length_array = len(array) - 1
    while current_pos < length_array:
        # search for the minimum in the reamining part of the array
        min_element = array[current_pos]
        min_pos = current_pos
        sec = current_pos
        while True:
            if array[sec] < min_element:
                min_element = array[sec]
                min_pos = sec
            sec += 1

            if sec > length_array:
                break
        # swap minimum element with current element
        array[current_pos], array[min_pos] = array[min_pos], array[current_pos]
        current_pos += 1
    print(array)

if __name__ == "__main__":
    array = np.random.randint(0, 10**2, size=20)
    print(array)
    selectionSort(array)
