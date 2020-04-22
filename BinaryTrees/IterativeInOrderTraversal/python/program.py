# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>



def iterativeInOrderTraversal(tree, callback):
    previous_node = None
    current_node = tree
    while current_node is not None:
        if previous_node is None or previous_node == current_node.parent:
            if current_node.left is not None:
                next_node = current_node.left
            else:
                callback(current_node)
                next_node = current_node.right if current_node.right is not None else current_node.parent
        elif previous_node == current_node.left:
            callback(current_node)
            next_node = current_node.right if current_node.right is not None else current_node.parent
        else:
            next_node = current_node.parent
        previous_node = current_node
        current_node = next_node
