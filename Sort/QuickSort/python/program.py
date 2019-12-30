import numpy as np



def quickSort(array):
    """ 

    """
    if len(array) < 2:
        return array
    start = 0
    end = len(array) - 1
    sorted_array = recursion(array, start, end)
    return sorted_array





def  recursion(array, left, right):
    """
    
    """
    #print("left {} right {}".format(left, right))
    if left >=right:
        return 
    pos = helper(array, left, right)
    # call left side
    recursion(array, left, pos - 1)
    recursion(array, pos + 1, right)
    return array




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
    rp = right
    # put the pivot element at the first place
    array[left], array[pos] = array[pos], array[left] 
    # switch the pivolement
    while True:
        while lp < rp and array[lp] <= pivot:
            lp +=1
        while rp >= lp and array[rp] > pivot:
            rp -=1

        #print("left {} right {}".format(lp, rp))
        #print("left {} right {}".format(array[lp], array[rp]))
        #print("pivo {}".format(array[pos]))
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
