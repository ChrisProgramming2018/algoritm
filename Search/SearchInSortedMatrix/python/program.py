


def searchInSortedMatrix(matrix, target):
    """ Search for given target in an sorted 2 dim array
    with distinct integers. The matrix has shape of nxm where 


    """
    
    ptr_c = len(matrix[0]) - 1
    ptr_r = 0
    n = len(matrix) - 1
    m = len(matrix[0]) - 1
    while True:
        if matrix[ptr_r][ptr_c] == target:
            return [ptr_r, ptr_c]
        if ptr_r >= n or ptr_c >= m:
            # not found return
            return [-1, -1]
        if matrix[ptr_r][ptr_c] > target:
            # left values are smaller and all values on top also
            # move diagonal
            ptr_c -= 1
            ptr_r +=1
        else:
