






def iterativeInOrderTraversal(tree, callback):
    # Write your code here.
    previousNode = None
    currNode = tree
    while currNode is not None:
        if previousNode is None or previousNode == currNode.parent:
            if currNode.left is not None:
                nextNode = currNode.left
            else:
                callback(currNode)
                nextNode = currNode.right if currNode.right is not None else currNode.parent
        elif  previousNode == currNode.left:
            callback(currNode)
            nextNode = currNode.right if currNode.right is not None else currNode.parent
        else:
            nextNode = currNode.parent

        previousNode =currNode
        currNode = nextNode
