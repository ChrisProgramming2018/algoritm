

def masterSol(array):
    isNonDecreasing = True
    isNonIncreasing = True

    for i in range(1, len(array)):
        if array[i] < array[i - 1]:
            isNonDecreasing = False
        if array[i] > array[i - 1]:
            isNonIncreasing = False
    return isNonDecreasing or isNonIncreasing




def isMonotonic(array):
    #case empty or one element is awalays 
    if len(array) < 2:
        return True
    item = 1 
    length = len(array)
    # case all the same
    while item < length:
        if array[item] > array[item-1]:
	    return  helper(array, item + 1, True)
    	elif array[item] < array[item-1]:
            return  helper(array, item + 1, False)
    	item +=1
    # all are the same
    return True

			
def helper(array, item, increasing):
    """ 
    
    """
    length =len(array)
    if increasing:
        while item < length:
            if array[item] >= array[item-1]:
                item  +=1
            else:
                return False
	return True
    else:
        while item < length:
            if array[item] <= array[item-1]:
                item  +=1
            else:
                return False
	return True	
