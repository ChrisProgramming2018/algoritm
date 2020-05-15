# Copyright 2020
# algo expert Fibonacci
# Author: Christian Leininger <info2016frei@gmail.com>


# O(2^n) time | O(1) space
def getNthFib(n):
    """ Computes the n fibonacci number
    implementation of Naive Recursion with runtime of O(2^n)
    Args:
        param1:(int) which fibonacci number to compute

    Returns:
       int: the n fibonaccci number
    """
    if n == 1:
        return 0
    if n == 2:
        return 1
    return getNthFib(n - 1) + getNthFib(n - 2)


# O(2^n) time | O(1) space
def getNthFib1(n, mem):
    """ Computes the n fibonacci number
    implementation of Naive Recursion with runtime of O(2^n)
    Args:
        param1:(int) which fibonacci number to compute

    Returns:
       int: the n fibonacci number

    """
    if n in mem:
        return mem[n]
    if n == 0:
        mem.update({n: 0})
        return 0
    if n == 1:
        mem.update({n: 1})
        return 1
    mem[n] = getNthFib1(n - 1, mem) + getNthFib1(n - 2, mem)
    return mem[n]


# use dynamic programming (cache and reuse to solve in O(n)
def fib_mem(n, mem):
    """ Use dynamic programming to solve in O(n) and O(n) space

    Args:
       param1(int): n the n th fib number
       param2(dict) mem save the computed numbers

       Returns: the n fib number
    """
    if n in mem:
        return mem[n]
    if len(mem) >= n:
        mem.update({n: mem[n - 1] + mem[n - 2]})
    if n == 2:
        mem.update({n: 1})
        return 1
    if n == 1:
        mem.update({n: 0})
        return 0

    return fib_mem(n - 1, mem) + fib_mem(n - 2, mem)


def dynamic_programming_fib(n):
    """
    Call recursivly the fib_mem function
    Args:
        param1(int): compute the n fibonacci number

    Returns; the n fibonacci number
    """
    mem = {}
    res = fib_mem(n, mem)
    return res
