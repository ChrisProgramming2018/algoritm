


#O(n) time | O(1) space

def findThreeLargestNumbers(array):
    """

    """
    threeLargest = [None, None, None]
    for num in array:
        updateLargest(threeLargest, num)
    return threeLargest
