



# O(2^n) time | O(1) space
def getNthFib(n):
    """ Computes the n fibonacci number 
    implementation of Naive Recursion with runtime of O(2^n) 
    Args:
        param1:(int) which fibonacci number to compute

    Returns:
       int: the n fibonaccci number

    """
    if n == 0:
        return 0
    if n == 1:
        return 1 

    return getNthFib(n - 1) + getNthFib(n - 2)



