import numpy as np



def quickSort(array):
    """ 

    """
    start = 0
    end = len(array)
    sorted_array = recursion(array, start, end)
    return sorted_array





def  recursion(array, left, right):
    """
    
    """
    if left >=right:
        return
    pos = helper(array, left, right)
    # call left side
    recursion(array, left, pos - 1)
    recursion(array, pos + 1, right)





def helper(array, left, right):
    """
    
    Args:
    
    
    Return:
        pivot position
    >>> array = [ 8, 10, 6, 4, 2, 5, 13, 15, 14, 11, 17]
    
    """
    pivot = array[np.random.randint(0,len(array))]
    pos = np.random.randint(0,len(array))
    pivot = array[pos]
    left = left
    right = right
    # put the pivot element at the first place
    print("pivot", pos)
    # switch the pivolement
    while True:
        while left < right and array[left] <= pivot:
            left +=1
        while right > left and array[right] > pivot:
            right -=1
        array[left], array [right] = array[right], array[left]
        if right == left:
            # swap pivo element to the pivo pos
            if array[left] > pivot:
                right -=1
            array[pos], array [right] = array[right], array[pos]
            break
    print(array)
    return pos
        

