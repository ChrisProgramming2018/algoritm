


#O(n) time | O(1) space

def findThreeLargestNumbers(array):
    """
    Computes the first largest number of the given array
    returns it as a list [third sec first] 
    run time is O(n) n is size of list 

    Args:
        param1:(list) array of int
    Returns: list 
    """
    threeLargest = [None, None, None]
    for num in array:
        updateLargest(threeLargest, num)
    return threeLargest

def updateLargest(threeLargest, num):
    """

    
    """

    if threeLargest[2] is None or num > threeLargest[2]:
        shiftAndUpdate(threeLargest, num, 2)
    
    elif threeLargest[1] is None or num > threeLargest[1]:
        shiftAndUpdate(threeLargest, num, 1)
    
    elif threeLargest[0] is None or num > threeLargest[0]:
        shiftAndUpdate(threeLargest, num, 0)

def shiftAndUpdate(array, num, idx):
    """
    Updates the first three largest numbers
    Args:
        param1:(list) array of int
        param2:(int) num value to add
        param3:(int) idx update bound

    """

    for i in range(idx + 1):
        if i == idx:
            array[i] = num
        else:
            array[i] = array[i + 1]
