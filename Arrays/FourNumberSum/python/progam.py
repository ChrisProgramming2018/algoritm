



def fourNumberSum(array, targetSum):
    """


    """

    # create dict for 2 possible sums
    res = {}
    for num, item in enumerate(array[:-1]):
        for sec in array[num+1:]:
            res.update({(item, sec) : item + sec})

