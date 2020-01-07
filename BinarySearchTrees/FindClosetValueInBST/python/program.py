

def findClosestValueInBst(tree, target):
    """
    
    Args:
       param1:(class BST ) tree value left right
       param2:(int) target

    Return: the closet value in the BST 
    """

    # case the root value is the target
    if tree.value == target:
        return target
