

def masterSol(array):
    result = [] 
    spiralFill(array, 0, len(array) - 1, 0, len(array[0]) - 1, result)
    return result


def spiralFill(array, startRow, endRow, startCol, endCol, result):
    if startRow > endRow or startCol > endCol:
        return

    for col in range(startCol, endCol + 1):
        result.append(array[startRow][col])

    for row in range(startRow + 1, endRow + 1):
        result.append(array[row][endCol])

    for col in reversed(range(startCol, endCol)):
        if startRow == endRow:
            break
        result.append(array[endRow][col])

    for row in reversed(range(startRow + 1, endRow)):
        if startCol == endCol:
            break
        result.append(array[row][startCol])

    spiralFill(array, startRow + 1, endRow - 1, startCol + 1, endCol - 1, result)
 





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

