# Implementation of Breadth First Search


class Node:
    """
    Node of the tree
    """
    def __init__(self, name):
        """
        Init the member var of the class name and a empty children list
        Args:(string) name of the node
        """
        self.children = []
        self.name = name

    def addChild(self, name):
        """ Creates a new Node with the given name
            and add it to the children list of the node

        Args:
            param1: (string) name to add to children
        """
        self.children.append(Node(name))
        return self

    def breadthFirstSearch(self, array):
        """ Create a BFS order list of the nodes of the tree.
            Time: O(n) | Space O(n)
            n:= amount of nodes in the tree
            Args:
                param1:(list) empty list of the solutiom
            Return: list with the Nodes names in BFS order
        """
        fifo = [self]
        array.append(self.name)
        while len(fifo) > 0:
            # returns and removes the first element of the list
            node = fifo.pop(0)
            for child in node.children:
                array.append(child.name)
                fifo.append(child)

        return array
