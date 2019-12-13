




array = [3, 5, -4, 8, 11, 1, -1 ,6] 
targetSum = 10

def twoNumberSum(array, targetSum):
    # Write your code here.
    save = dict()
    for num in array:
        save.update({num:num})
    
    for num in array:
        y = targetSum - num
        # because of the assumtion the elemnts are dstinct
        if y == num:
            continue 
        if y in save:
            return (y, num)
    return -1

res = twoNumberSum(array, targetSum)
print(res)
