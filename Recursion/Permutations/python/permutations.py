

def permuataions_trival(array):
    res = []
    length = facult(len(array))
    while len(res) <= length:
        tmp = []
        while True:
            item = random.choice(array)
            tmp.apppend(item)
            array.remove(item)
            if len(array) == 0:
                break

    return res






def __name__ == "__main__":
    array = [1,2,3,4]
    print(permuataions_trival)
