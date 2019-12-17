

def wayofMakingChanges(target, coins):
    """ Computes the amount of ways how to 
        build the target with the given coins

    Args:
        param1 (int) target number
        param2 (list of int) repesents the coins

    Returns:
        int:  number of ways to change 
    """
    # create a array to save possibles changes
    array = [0 for _ in range(target + 1)]
    array[0] = 1
    for coin in coins:
        print(array)
        for pos in range(target +1):
            if pos >= coin:
                array[pos] += array[pos - coin]
    return array[target]


if __name__ == "__main__":
    coins = [1, 5,10]
    target = 10
    res = wayofMakingChanges(target,coins)
    print("Numbers of ways to make changes", res)
