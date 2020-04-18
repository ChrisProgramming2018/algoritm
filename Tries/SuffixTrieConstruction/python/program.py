# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


class SuffixTrie:
    def __init__(self, string):
        self.root = {}
        self.endSymbol = "*"
        self.populateSuffixTrieFrom(string)
        
    def populateSuffixTrieFrom(self, string):
        pass
    
    def contains(self, string):
        pass
