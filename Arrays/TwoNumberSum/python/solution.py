


# O(n^2) time | O(1) space
def twoNumberSum1(array, targetSum):
    for i in range(len(array) - 1):
        firstNum = array[i]
        for j in range(i+1, len(array)):
            secondNum = array[j]
            if firstNum + secondNum == targetSum:
                return [firstNum , secondNum]
    return []



# O(n) time | O(n) space 
def twoNumberSum2(array, target_sum):
    nums = {}
    for num in array:
        potential_match = target_sum - num
        if potential_match in nums:
            return [potential_match, num]
        else:
            nums[num] = True
    return []



# O(nlog n) time | O(1) space
def twoNumberSum3(array, targetSum):
    # sort array 
    targetSum = targetSum.sort()
    rp =  len(array) - 1
    lp  = 0

    while True:
        left_element = array[lp]
        right_element = array[rp]
        if right_element + left_element == targetSum:
            return [left_element, right_element]
        
        if right_element + left_element > targetSum:
            rp -=1
        if right_element + left_element < targetSum:
            lp +=1
        if lp > rp:
            return []

