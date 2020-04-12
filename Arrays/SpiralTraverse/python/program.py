




def spiralTraverse(array):
    """

    """

    sol = []
    startRow, startColumn = 0, 0
    endRow, endColumn = len(array) - 1, len(array[0]) - 1

    while startRow <= endRow and startColumn <= endColumn:
        # go from left to right
        for col in range(startColumn, endColumn + 1):
            sol.append(array[startRow][col])

        # go down 
        for row in range(startRow + 1, endRow + 1):
            sol.append(array[row][endColumn])

        # go back to from right to left

        for col in reversed(range(startColumn, endColumn)):
            if startRow == endRow:
                break
            sol.append(array[endRow][col])

        # go up 

        for row in reversed(range(startRow + 1, endRow)):
            if startColumn == endColumn:
                break
            sol.append(array[row][startColumn])

        # now change endes and start
        startRow +=1
        endRow -=1
        startColumn +=1
        endColumn -=1

    return sol

