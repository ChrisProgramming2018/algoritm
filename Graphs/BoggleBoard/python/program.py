# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>





def boogleBoard(board, words):
    """

    """
    trie = Trie()






def explore(r, c, board, trieNode, visited, finalWords):
    """

    """
    if visited[r][c]:
        return

    letter = board[r][c]

    if letter not in trieNode:
        return
    visited[r][c] = True


