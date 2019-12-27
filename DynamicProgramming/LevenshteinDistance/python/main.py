

# time O(3^n-1) | space O(1)
def levenshteinDistance(str1, len_str1, str2, len_str2):
    """ Computes the levenshteinDistance between the two
    given strings using recusion. If the last char are the same cost 0
    else 1 

    Args:
        param1: str
        param2: str
    Return: int represents the levenshteinDistance
    >>> w = " "
    >>> s = " "
    >>> levenshteinDistance(w, len(w)-1, s, len(s) - 1)
    0
    >>> w = "hello"
    >>> s = "h"
    >>> levenshteinDistance(w, len(w)-1, s, len(s) - 1)
    4
    """

    # base cases 
    if len_str1 == 0:
        return len_str2
    
    if len_str2 == 0:
        return len_str1
    
    if str1[len_str1] == str2[len_str2]:
        cost = 0
    else:
        cost = 1

    return min(levenshteinDistance(str1[:-1], len_str1 - 1, str2, len_str2) + 1,
            levenshteinDistance(str1, len_str1 , str2[:-1], len_str2 - 1) + 1,
            levenshteinDistance(str1[:-1], len_str1 - 1, str2[:-1], len_str2 - 1) + cost)



if __name__ == "___main__":
    import doctest
    doctest.testmod()
