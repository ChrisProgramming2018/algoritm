
# implemention of Brunch sum


class BinaryTree:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


def branchSums(tree):
    """

    Args:
        param1: (class BinaryTree)
    Return:

    """
    return rekursiveSums(tree, [], 0)


def rekursiveSums(tree, sums, value):
    """
    Traverse the tree in preorder root left right
    Args:
        param1:(class BinaryTree)
        param2:(list) sums
        param3:(int) value

    """

    # case the called does not exist
    if tree is None:
        return

    # case leave node (has no children
    new_value = value + tree.value
    if tree.left is None and tree.right is None:
        sums.append(new_value)

    # travers to the tree in preorder
    rekursiveSums(tree.left, sums, new_value)
    rekursiveSums(tree.right, sums, new_value)
    return sums
