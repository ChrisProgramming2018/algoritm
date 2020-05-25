# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


def caesarCipherEncryptor(string, key):
    """ shifts the given string in amount  of the key

    Args:
        param1: (str)string
        param2: (pos int) key
    """

    k = ""
    key = key % 26
    for l in string:
        res = ord(l) + (key)
        k += chr(res - 26 if res > 122 else res)
    return k
