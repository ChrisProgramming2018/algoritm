# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>



def riverSizes(matrix):
    sizes = []
    visited = [[False for value in row] for row in matrix] 
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            if visited[i][j]:
                continue
            traversNode(i, j, matrix, visited, sizes)
    return sizes



def traversNode(i, j, matrix, visited, sizes):
    current_river_size = 0
    nodes_to_explore = [[i, j]]
    while len(nodes_to_explore):
        current_node = nodes_to_explore.pop()
        i = current_node[0]
        j = current_node[1]
        if visited[i][j]:
            continue
        visited[i][j] = True
        if matrix[i][j] == 0:
            continue
        current_river_size += 1
        unvisited_neighbors = getUnvisitedNeighbors(i, j, matrix, visited)
        for neighbor in unvisited_neighbors:
            nodes_to_explore.append(neighbor)
    if current_river_size > 0:
        sizes.append(current_river_size)





def getUnvisitedNeighbors(i, j, matrix, visited):
    unvisited_neighbors = []
    if i > 0 and not visited[i - 1][j]:
        unvisited_neighbors.append([i-1, j])
    
    if i < len(matrix) - 1 and not visited[i + 1][j]:
        unvisited_neighbors.append([i + 1, j])
    
    if j > 0 and not visited[i][j - 1]:
        unvisited_neighbors.append([i, j - 1])
    
    if j < len(matrix[0]) - 1 and not visited[i][j + 1]:
        unvisited_neighbors.append([i, j + 1])

    return unvisited_neighbors
