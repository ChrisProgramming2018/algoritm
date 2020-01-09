# implementaion of the 2 different Order Traverse


def inOrderTraverse(tree, array):
    """
    """
    if tree is None:
        return array

    array = inOrderTraverse(tree.left, array)
    array.append(tree.value)
    array = inOrderTraverse(tree.right, array)
    return array


def preOrderTraverse(tree, array):
    """

    """
    if tree is None:
        return array

    array.append(tree.value)
    array = preOrderTraverse(tree.left, array)
    array = preOrderTraverse(tree.right, array)
    return array


def postOrderTraverse(tree, array):
    """

    """
    if tree is None:
        return array
    array = postOrderTraverse(tree.left, array)
    array = postOrderTraverse(tree.right, array)
    array.append(tree.value)
    return array
