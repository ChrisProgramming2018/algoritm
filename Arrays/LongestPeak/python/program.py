



def master(array):
    longestPeakLength = 0
    i = 1
    while i < len(array) - 1:
        isPeak = array[i - 1] < array[i] and array[i] > array[i + 1]
        if not isPeak:
            i += 1
            continue

        leftIdx = i - 2
        while leftIdx >= 0 and array[leftIdx] < array[leftIdx + 1]:
            leftIdx -= 1
        rightIdx = i + 2

        while rightIdx < len(array) and array[rightIdx] < array[rightIdx - 1]:
            rightIdx += 1

        currentPeakLength = rightIdx - leftIdx - 1
        longestPeakLength = max(longestPeakLength, currentPeakLength)
        i = rightIdx
    return longestPeakLength


def longestPeak(array):
    """


    Args:
        param1(list): array with ints
    
    Return: int represent length of longest peak

    """
    # all array with less then 4 its zero
    if len(array) < 3:
        return 0
    res = 0
    for idx in range(1, len(array)):
        left  = idx - 1
	right = idx + 1
        peak = array[idx]
        old_peak = peak
        right_peak = 0
        left_peak = 0
        # go left until start of array of element is 
        # equal or bigger
        while left >= 0 and array[left] < peak:
            peak = array[left]
            left_peak += 1
            left -=1
        if left_peak == 0:
            continue
        peak = old_peak
    	# at least one element on the left is requierd
        while right < len(array) and array[right] < peak :
            peak = array[right]
            right_peak += 1
            right +=1
    	if right_peak == 0:
            continue
    	if right_peak + left_peak > res:
            res = right_peak + left_peak
    if res +1 < 3:
        return 0
    return res + 1
