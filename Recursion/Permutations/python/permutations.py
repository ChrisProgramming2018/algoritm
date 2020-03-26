import random
import copy





def facult(n):
    res = 1
    for i in range(1,n+1):
        res *=i
    return res


def permuataions_trival(array):
    res = []
    length = facult(len(array))
    orginal = copy.deepcopy(array)
    while len(res) <= length:
        array = copy.deepcopy(orginal)
        tmp = []
        while True:
            item = random.choice(array)
            tmp.append(item)
            array.remove(item)
            if len(array) == 0:
                if tmp is not res:
                    res.append(tmp)
                break

    return res





if __name__ == "__main__":
    array = [1,2,3,4,5]
    print(permuataions_trival(array))
