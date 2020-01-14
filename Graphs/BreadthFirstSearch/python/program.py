# Implementation of Breadth First Search

class Node:
    def __init__(self, name):
        self.children = []
        self.name = name

    def addChild(self, name):
        self.children.append(Node(name))
        return self

    def breadthFirstSearch(self, array):
        """
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


