# Check array for single cycle


def hasSingleCycle(array):
    """ Checks the given array

    O(n) time | O(1) space
    n := length of array
    Args:
        param1:(list) array of int
    Return bool

    """
    counter = 0
    pos = 0
    length = len(array)

    while counter < length:
        jump = array[pos]
        counter += 1
        pos += jump
        pos = pos % length
        if pos == 0 and counter != length:
            return False

    if pos == 0:
        return True
    return False
