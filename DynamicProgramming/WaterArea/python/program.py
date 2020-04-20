# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>

def waterArea(heights):
    """
    
    Args:
        param1(heights): array of non negative int

    Return: 
    """
    if len(heights) < 3:
        return 0   
    
    left = 0
    right = len(heights) - 1
    
    # start non 0 element
    while heights[right] == 0 and right > 0:
        right -=1
    while heights[left] == 0 and left < len(heights) -1:
        left +=1
    if left >= right:
        return 0
    sol = [0 for i in range(len(heights))]
    max_left = heights[left]
    max_right = heights[right]
    while left < right:
        # case rightpointer element is smaller
        while heights[right] <= heights[left] and left < right:
            right -= 1
            sol[right] = max( max_right - heights[right],0)
            if heights[right] > max_right:
                max_right = heights[right]
            
        max_right = heights[right]
        while heights[left] <= heights[right] and left < right:
            left += 1
            sol[left] = max(max_left - heights[left],0)
            if heights[left] > max_left:
                max_left = heights[left]
            
        max_left = heights[left]
        
        print(left, right)    
        print(heights)
    res = sum(sol)
    
    return res
