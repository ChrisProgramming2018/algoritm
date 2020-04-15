

def largestRange(array):
    """ Return the start number and number of the end
    of the largest Range in an Array

    Args:
       param1(list): array with int

    Return: list length 2 first element start sec end

    """
    min_value = min(array)
    max_value = max(array)
    min_value
    hashTable = {}
    for i in array:
        hashTable.update({i: True})

    start = min_value
    end = min_value
    lgStart = start
    lgEnd = end
    current = min_value
    newStart = False
    while current <= max_value:
        current += 1
        if current in hashTable:
            if newStart:
                start = current
                newStart = False
            end = current
        else:
            newStart = True
            if end - start > lgEnd - lgStart:
                lgEnd = end
                lgStart = start
    return [lgStart, lgEnd]
