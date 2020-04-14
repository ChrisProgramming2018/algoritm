


def minNumbersOfJumbs(array):
    """ Computes the min number of jumbs to the end or further
    The entry in the array represents the numbers of maximum position to jump

    Run time O(n) | Space O(1) worst case
    Args:
        param1(list): array of ints

    Return int 

    """

    # case array is empty or has 1 element
    if len(array) < 2:
        return 0
    jump = array[0]
    max_reach = array[0]
    # case for number is enough to reach end
    if jump >= len(array) - 1:
        return 1
    step = 1
    idx = 1 

