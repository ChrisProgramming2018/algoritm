


def masterSol(array):
    sequences = [None for _ in array]
    sums = [num for num in array]
    maxSumIdx = 0
    for i in range(len(array)):
        currentNum = array[i]
        for j in range(0, i):
            otherNum = array[j]
            if otherNum < currentNum and sums[j] + currentNum >= sums[i]:
                sums[i] = sums[j] + currentNum
                sequences[i] = j

        if sums[i] >= sums[maxSumIdx]:
            maxSumIdx = i
    return [sums[maxSumIdx], buildSequence(array, sequences, maxSumIdx)]


def maxSumIncreasingSubsequence(array):
    """ Computes the max Sum of Increasing Numbers

    run time O(n^2) | O(n) space
    Args:
       param1(list): array of int

    Return: list first element int represent max sum and sec elemet list with
    all values used to get sum
    """
    # Write your code here.
    length = len(array)
    result = [i for i in array]
    index = [None for i in range(length)]
    maxSet = []
    for idx_1 in range(1, length):
        for idx_2 in range(0, idx_1):
            if array[idx_2] < array[idx_1]:
                res = result[idx_2] + array[idx_1]
                if res > result[idx_1]:
                    result[idx_1] = res
                    index[idx_1] = idx_2

    max_num = max(result)
    for n, i in enumerate(result):
        if i == max_num:
            index_num = n

    maxSet.insert(0, array[index_num])
    while True:
        index_num = index[index_num]
        if index_num is None:
            break
        maxSet.insert(0, array[index_num])

    return [max_num, maxSet]
