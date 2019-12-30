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





def helper(array, left, right, if_random=True):
    """
    
    Args:
    
    
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
    right = right
    # put the pivot element at the first place
    array[left], array[pos] = array[pos], array[left] 
    # switch the pivolement
    while True:
        while lp =< rp and array[lp] <= pivot:
            lp +=1
        while lp < rp and array[rp] > pivot:
            rp -=1
        if lp >= rp:
            break
        # now lp points on element greater than pivot and rp on smaller
        array[lp], array [rp] = array[rp], array[lp]
        
    # swap the pivot element to the right position        
    if array[lp] > pivot:
        lp -=1
    array[left], array [lp] = array[lp], array[left]
    return lp
        

