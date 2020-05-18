# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


class Node:
    def __init__(self, name):
        """
        Save the direct childern of the node and the name of the name
        Args:
            param1: (string) name of the Node
        """
        self.children = []
        self.name = name

    def addChild(self, name):
        """ adds a child to the node
        Args:
            param1:(string) name of the node
        Return its self
        """
        self.children.append(Node(name))
        return self

    def depthFirstSearch(self, array):
        """ Travers the tree in a depth first fashion
        O(n+e) time | O(n) space n := amount of nodes in the input tree
        e := amount of edges in the input tree

        Args:
            param1:(list) array of the node
        Returns: list of the names in the depth first order
        """
        # add current node to final order
        array.append(self.name)
        #  base case if a node has no children (leaf Node)
        if len(self.children) == 0:
            return array
        for child in self.children:
            # call the function recursively
            child.depthFirstSearch(array)
        return array
