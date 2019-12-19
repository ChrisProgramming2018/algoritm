import numpy as np
import time

def binarySearch(array, target):
    """ Finds the target in array in O(log(n)) time
        returns position in array if not found returns -1 

        param1: (array) array of sorted int
        param2: (target )int

        Return:
              int 
    """
    
    return helper(array, 0, len(array) - 1, target)
	
def helper(array, left, right, target):
    """

    """
    left = left
    right = right
    if left > right:
        return -1
    pos = (right - left)/2 + left
    if array[pos] < target:
        # search on the right side of arry
        return helper(array, pos +1, right, target)
    
    if array[pos] > target:
        # search on the right side of arry
        return helper(array, left, pos - 1, target)
        
    if array[pos] == target:
        return pos






if __name__ == "__main__":
    for size in range(10**5, 5*10**6, 10**5):
        print(size)
        array = np.random.randint(0, 100000, size=size)
        target = np.random.randint(200000,size=1)
        array.sort()
        start = time.time()
        print(binarySearch(array, target))
        print("It took: {} sec ".format(time.time() - start))
