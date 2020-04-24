# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


class SuffixTrie:
    def __init__(self, string):
        self.root = {}
        self.endSymbol = "*"
        self.populateSuffixTrieFrom(string)
        
    def populateSuffixTrieFrom(self, string):
        """

        """
        for idx in range(len(string)):
            self.insertSubstringStartingAt(idx, string)
    
    def contains(self, string):
        """
        run time O(n) | space O(1)
        """
        node = self.root
        for letter in string:
            if letter  not in node:
                return False
            node = node[letter]
        return self.endSymbol in node


    def insertSubstringStartingAt(self, idx, string):
        """
        
        """
        node = self.root
        for j in range(idx, len(string)):
            letter = string[j]
            if letter not in node:
                node[letter] = {}
            node = node[letter]
        node[self.endSymbol] = True

