



def masterSol(array):
    sequences = [None for _ in array]
    sums = [num for num in array]
    maxSumIdx = 0
    for i in range(len(array)):
        currentNum = array[i]
        for j in range(0,i):
            otherNum = array[j]
            if otherNum < currentNum and sums[j] + currentNum >= sums[i]:
                sums[i] = sums[j] + currentNum
                sequences[i] = j

        if sums[i] >= sums[maxSumIdx]:
            maxSumIdx = i
    return [sums[maxSumIdx], buildSequence(array, sequences, maxSumIdx)]















def maxSumIncreasingSubsequence(array):
    # Write your code here.
    length = len(array)

    #result = [0 for i in range(length)]
    result = []
    for a in array:
        result.append(a)
    index = [None for i in range(length)]
    result [0] = array[0]
    temp = 0
    maxSet = []
    result[0] = array[0]
    for a in range(1, length):
        end = a 
        for c in range(0, end):
            if array[c] < array[a]:
                res = result[c] + array[a]
                #print("res {} from c {}  and a {}".format(res, c, a))
                if res > result[a]:
                    result[a] = res
                    index[a] = c
     
    max_num = max(result)
    for n, i in enumerate(result):
        if i == max_num:
            index_num = n
	
	
    maxSet.insert(0, array[index_num])
    while True:
        index_num = index[index_num]
        if index_num == None:
            break
        maxSet.insert(0, array[index_num])
        
        
        
    #print(result)
    
    return [max_num, maxSet] 
