






def invertBinaryTree(tree):
    currentNode = tree
    queue = []
    queue.append(currentNode)
    while len(queue) != 0:
        currentNode = queue.pop(0)
        if currentNode is not None:
            queue.append(currentNode.left)
            queue.append(currentNode.right)
            currentNode.left, currentNode.right = currentNode.right, currentNode.left
    return tree
