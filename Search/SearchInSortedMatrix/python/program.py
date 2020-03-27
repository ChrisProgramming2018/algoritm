


def searchInSortedMatrix(matrix, target):
    """ Search for given target in an sorted 2 dim array
    with distinct integers. The matrix has shape of nxm where 
    Worst case: Time O(nm) and Space O(1)
    Args:
         param1(listoflisti): 2dim matrix sorted in ascend and distinct ints
         param2(int): target value to find

    Return: list [row, column] if found else [-1, -1]


    """
    #start bottem right value
    ptr_c = len(matrix[0]) - 1
    ptr_r = 0
    n = len(matrix) - 1
    m = len(matrix[0]) - 1
    while True:
        if matrix[ptr_r][ptr_c] == target:
            return [ptr_r, ptr_c]
        if ptr_r > n or ptr_c < 0:
            # not found return
            return [-1, -1]
        if matrix[ptr_r][ptr_c] > target:
            # left values are smaller and all values on top also
            # move diagonal
            ptr_c -= 1
            if  matrix[ptr_r][ptr_c] < target:
                ptr_r +=1
        else:
            # on the left side are smaller 
            ptr_r += 1 
            if matrix[ptr_r][ptr_c] > target:
                ptr_c -=1
