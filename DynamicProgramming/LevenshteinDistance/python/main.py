import numpy as np

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
    >>> w = "kitten"
    >>> s = "siting"
    >>> levenshteinDistance(w, len(w)-1, s, len(s) - 1)
    3
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






# timeO(n*m) | Space O(n*m)
def levenshteinDistance1(str1, str2):
    """Use Dynamic Programming to reduce complexity

    Args:
        param1: str
        param2: str
    Return: int represents the levenshteinDistance
    >>> w = " "
    >>> s = " "
    >>> levenshteinDistance1(w, s)
    0
    >>> w = "hello"
    >>> s = "h"
    >>> levenshteinDistance1(w, s)
    4
    >>> w = "kitten"
    >>> s = "sitting"
    >>> levenshteinDistance1(w, s)
    3
    """

    sol = np.zeros((len(str1) + 1, len(str2) + 1))
    for i in range(sol.shape[0]):
        # sol[i,j] # row i # columon j
        sol[i, 0] = i
    for j in range(sol.shape[1]):
        # sol[i,j] # row i # columon j
        sol[0, j] = j
    str1 = " " + str1
    str2 = " " + str2
    for j in range(1, sol.shape[1]):
        for i in range(1, sol.shape[0]):
            if str1[i] == str2[j]:
                cost = 0
            else:
                cost = 1
            sol[i, j] = min(sol[i-1, j] + 1, sol[i, j-1] + 1, sol[i-1, j-1] + cost)
    return int(sol[sol.shape[0]-1, sol.shape[1]-1])







if __name__ == "___main__":
    import doctest
    doctest.testmod()
