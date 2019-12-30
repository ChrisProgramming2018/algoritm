import numpy as np


# O(n log n) time | O(log n) space
def quickSort(array, if_random=True):
    """ Sort the given input array using the Quicksort algorithm (divide and
    conquer method by using the left element as pivot the worst case is O(n^2)
    when the array is already sorted
    Chossing the pivot uniformly at random the time complexity is O(n log(n))
    where n is the length of the array

    Args:
       param1: list of int
       param2: bool default Ture use random pivot


    Return: sorted array 

    """
    # case if array is empty or has only one element
    if len(array) < 2:
        return array
    start = 0
    end = len(array) - 1  # list starts at 0
    sorted_array = recursion(array, start, end, if_random)
    return sorted_array





def  recursion(array, left, right, if_random=True):
    """ Calls the divide part recusivly on the left and right part of the pivot
    element
    Args:
        param1: array (list) sub array
        param2: left (int)   left boarder
        param3: right (int)  right boarder
        param4: if_random (bool)

    Return:
    """
    # base case if the sub array contains only 1 element
    if left >=right:
        return 
    pos = helper(array, left, right)
    # call left side
    recursion(array, left, pos - 1)
    recursion(array, pos + 1, right)
    return array




def helper(array, left, right, if_random=True):
    """ Sort sub array by choosing the pivot and 
         bring the elements on the correct side 
         set the pivot element om the final postion and
         return this position

    
    Args:
        param1: array (list of int) subarray
        param2: left (int) left boundry
        param3: rigth(int)
    
    
    Return:
        pivot position
    >>> array = [ 8, 10, 6, 4, 2, 5, 13, 15, 14, 11, 17]
    >>> helper(array, 0, len(array) - 1, False) 
    """

    pos = left
    pivot = array[pos]
    if if_random:
        pos = np.random.randint(left, right)
        pivot = array[pos]
    lp = left
    rp = right
    # put the pivot element at the first place
    array[left], array[pos] = array[pos], array[left] 
    # switch the pivolement
    while True:
        while lp < rp and array[lp] <= pivot:
            lp +=1
        while rp >= lp and array[rp] > pivot:
            rp -=1

        if lp >= rp:
            break
        # now lp points on element greater than pivot and rp on smaller
        array[lp], array [rp] = array[rp], array[lp]
        
    # swap the pivot element to the right position        
    if  pivot <= array[lp]:
        lp -=1
    array[left], array [lp] = array[lp], array[left]
    return lp
        



if __name__ == "__main__":
    array = [-7, 2, 3, 8, -10, 4, -6, -10, -2, -7, 10, 5, 2, 9, -9, -5, 3, 8]
    print(quickSort(array))
