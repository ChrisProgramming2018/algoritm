# implemention of Brunch sum


class BinaryTree():
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

    def insert(self, values, i=0):
        if i >= len(values):
            return
        queue = [self]
        while len(queue) > 0:
            current = queue.pop(0)
            if current.left is None:
                current.left = BinaryTree(values[i])
                break
            queue.append(current.left)
            if current.right is None:
                current.right = BinaryTree(values[i])
                break
            queue.append(current.right)
        self.insert(values, i + 1)
        return self


def branchSums(tree):
    """ Compute the brunch sum of the given binary tree
    returns a list with all the values.
    Runtime O(n) time || O(n) space
    n := nodes in the Tree
    It has to look at every node with constant operations
    and list all leafe nodes In a binary tree its most ceil(n/2)

    Args:
        param1: (class BinaryTree)

    Return: list contains all the sums

    >>> tree = BinaryTree(1).insert([2, 3, 4, 5, 6, 7, 8, 9, 10])
    >>> branchSums(tree)
    [15, 16, 18, 10, 11]

    """
    return rekursiveSums(tree, [], 0)


def rekursiveSums(tree, sums, value):
    """
    Traverse the tree in preorder root left right
    Args:
        param1:(class BinaryTree)
        param2:(list) sums
        param3:(int) value

    Returns: (list)
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


if __name__ == "__main__":
    import doctest
    doctest.testmod()
