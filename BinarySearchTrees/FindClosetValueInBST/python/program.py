# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


# ___________________________________________________________________
def findClosestValueInBstRecursive(tree, target):
    """ use the proberty of the binear Search tree
    that all values ld are smaller
    than root and right greater or equal
    Run time:
    Worst case is O(n) if the tree has depth n
    Average case is O(log n) depth of tree
    Space O(n) recursion stack in worst case
    Args:
       param1:(class BST ) tree value left right
       param2:(int) target

    Return: the closet value in the BST
    """
    return findClosestValueInBstHelper(tree, target, float("inf"))


# ___________________________________________________________________
def findClosestValueInBstHelper(tree, target, closest):
    """ call recursivly the dfs  to find closest element
    Args:
       param1:(class BST ) tree value left right
       param2:(int) target
       param3:(int) closet so far

    Return: the closet value in the BST

    """
    current_node = tree
    while current_node is not None:
        if abs(target - closest) > abs(target - tree.value):
            closest = current_node.value
        if target < current_node.value:
            current_node = current_node.left
        elif target > current_node.value:
            current_node = current_node.right
        else:
            break

    return closest


# ___________________________________________________________________
def findClosestValueInBst(tree, target):
    """ use the proberty of the binear Search tree
    that all values of the left child are smaller
    than root and right greater or equal
    Run time:
    Worst case is O(n) if the tree has depth n
    Average case is O(log n) depth of tree

    Args:
       param1:(class BST ) tree value left right
       param2:(int) target

    Return: the closet value in the BST
    """

    # case the root value is the target
    if tree.value == target:
        return target

    current_node = tree
    closest_value = tree.value    # set root value as closed
    small_dif = abs(target - current_node.value)
    while True:
        if target > current_node.value:
            current_node = current_node.right
        else:
            # check left: all values are at most tree.value - 1
            current_node = current_node.left
            # case its None
        if current_node is None:
            break
        # case current value is target
        if current_node.value == target:
            return target
        # check if value is closer
        if abs(target - current_node.value) <= small_dif:
            # in case it is set it as new closest value
            small_dif = abs(target - current_node.value)
            closest_value = current_node.value

    return closest_value
