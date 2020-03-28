








def groupAnagrams(words):
    # Write your code here.
    res = {}
    sol = []
    for word in words:
        new = ''.join(sorted(word))
        if new not in res:
            res.update({new:[word]})
        else:
            res[new] +=[word]
    for word in res.values():
        sol.append(word)
    return sol
