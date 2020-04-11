def longestPalindromicSubstring(string):
    length = 0
    start = 0
    end = 0
    for idx in range(1, len(string)):
        start, end, length = helper(idx, idx, start, end, length, string)
	start, end, length = helper(idx-1, idx, start, end, length, string)
    return string[start:end+1]





def helper(left, right, start, end, length, text):
    while  left >= 0 and right < len(text):
        if text[left] == text[right]:
            if right - left > length:
                start = left
                end = right
                length = end - start
            left -= 1
            right += 1
        else:
            break
    return start, end, length
		
