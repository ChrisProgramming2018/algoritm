# implementaion of the 2 different Order Traverse


def inOrderTraverse(tree, array):
    """ Return the BST values in inOrder
        left root right
    Args:
        param1: (class BST) tree
        param2: (list) array solution
    """
    if tree is None:
        return array

    array = inOrderTraverse(tree.left, array)
    array.append(tree.value)
    array = inOrderTraverse(tree.right, array)
    return array


def preOrderTraverse(tree, array):
    """ Returns the BST values in preOrder
        root left right
    Args:
        param1: (class BST) tree
        param2: (list) array solution

    """
    if tree is None:
        return array

    array.append(tree.value)
    array = preOrderTraverse(tree.left, array)
    array = preOrderTraverse(tree.right, array)
    return array


def postOrderTraverse(tree, array):
    """ Returns the BST values in postOrder
        left right root

    Args:
        param1: (class BST) tree
        param2: (list) array solution
    """
    if tree is None:
        return array
    array = postOrderTraverse(tree.left, array)
    array = postOrderTraverse(tree.right, array)
    array.append(tree.value)
    return array
