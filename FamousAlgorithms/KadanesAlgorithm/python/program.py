

def kadanesAlgorithm(array):
    """

    Args:
        param1(list): non empty of int
    Returns: 
    """

    sum_array = [0 for x in range(len(array))]
    sum_array[0] = array[0]
    for idx in range(1, len(array)):
        sum_array[idx] = max(array[idx], sum_array[idx - 1] + array[idx])

    return max(sum_array)
