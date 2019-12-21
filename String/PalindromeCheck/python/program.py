


def isPalindrome(string):
    """ Test if given string is a Palindrome
    Returns True if it is and False if its not 
    Args:
       param1: (str) 

    Returns bool 

    """
    isPalindrome = True
    start = 0
    end = len(string) - 1

    while True:
        if string[start] == string[end]:
            start +=1
            end -=1
        else:
            return False
        if start > end:
            return True



if __name__ == "__main__":
    text = "abcdcba"
    print(isPalindrome(text))


