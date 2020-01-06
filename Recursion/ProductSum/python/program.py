




def productSum(array, level=1):
    """
    Compute the sum of the elements and multiply it by the depth level
    O(n) time | O(d) space n := total number in input array(count also elements
    in all subarrays d := is largest depth subarray in the input array

    Args:
        param1:(list) array  of integers
        param2:(int) level represent the depth of the nested list
    Return: int represent the productSum

    >>> array = [5, 2, [7, -1], 3, [6, [-13, 8], 4]]
    >>> productSum(array)
    12
    """
    res = 0  # init the sum

    for subarray in array:
        # check if it sub list and call the function on it
        if type(subarray) == list:
            res += productSum(subarray, level + 1)
        else:
            # case its int only add to sum multiply with depth before return
            res += subarray
    return res * level
