




def knapsackProblem(items, capacity):
    m = len(items)+1  # first line base case
    n = capacity +1
    a = [[0] * n for i in range(m)]

    for i in range(1, m):
        current_weight = items[i-1][1]
        value = items[i-1][0]
        for j in range(n):
            if  j >= current_weight :

                a[i][j] = max(a[i-1][j], a[i-1][j-current_weight] + value)   # dont use item or use item
            else:
                a[i][j] =   a[i-1][j]

    return getSolution(a, items)


def getSolution(a, items):
    index = []
    c = len(a[0]) -1
    r = len(a) -1
    res = 0
    while r > 0:
        if a[r][c] == a[r-1][c]:
            r -=1
        else:
            index.insert(0,r-1)

            c -= items[r-1][1]
            res += items[r-1][0]
            r -=1
    return[res, index]

