


def mastersol(array, toMove):
    i = 0
    j = len(array) - 1
    while i < j:
        while i < j and array[j] == toMove:
            j -= 1
        if array[i] == toMove:
            array[i], array[j] = array[j], array[i]
        i += 1

    return array



#time O(n) | space O(1)
def moveElementToEnd(array, toMove):
    """ Moves the toMove int to the end of the list
    in place and linear in time
    
    Args:
       param1: list of int
       param2: int

    Return: 
          
    """
    # case array is empty or has 1 just return it
    if len(array) < 2:
        return array
    left = 0
    right = len(array) - 1
    while True:
        while array[left] != toMove:
            left +=1
            if left >= len(array):
                break
        while array[right] == toMove:
            right -=1
            if right <=0:
                break
        if left > right:
            break
        array[left], array[right] = array[right], array[left]
    return array
