




def productSum(array, level=1):
    """


    Args:
        param1:(list) array  of integers
        param2:(int) level represent the depth of the nested list
    Return: int represent the productSum
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
