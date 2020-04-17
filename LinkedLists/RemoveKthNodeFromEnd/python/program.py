# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


# This is an input class. Do not edit.
class LinkedList:
    def __init__(self, value):
        self.value = value
        self.next = None


def removeKthNodeFromEnd(head, k):
    """ Assumes linked list has at least k nodes
    will remove the k element from the end in place
    Args:
        param1(singleLinkedList): head
        param2(int): k

    Return:
    """
    pos1 = 0
    length = 0
    node = head
    while True:
        if node is None:
            break
        length += 1
        node = node.next

    delete = length - k
    length = 0
    # case is first element
    if delete == 0:
        head.value = head.next.value
        head.next = head.next.next
        return
    node = head
    while True:
        if length == delete - 1:
            node.next = node.next.next
            break
        length += 1
        node = node.next
