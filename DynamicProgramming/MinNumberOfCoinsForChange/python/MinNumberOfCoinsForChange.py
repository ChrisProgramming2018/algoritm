




def minNumberOfCoinsForChange(n, denoms):
    # special case if n is zero or the change is empty
    if n == 0 or len(denoms) == 0:
        return 0
    result = [ float("inf") for _ in range(n + 1)]

    result[0] = 0

    for denom in denoms:
        if denom > n + 1:
            continue
        for i in range(n+1):
            if denom <= i:
                result[i] = min(result[i - denom] + 1, result[i])

    return  -1 if result[n] == float("inf")  else result[n] 
