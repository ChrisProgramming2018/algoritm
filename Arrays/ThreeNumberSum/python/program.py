
def threeNumberSum(array, target):
    array.sort()
    solution = []
    current_pos = 0
    lpointer = 1
    rpointer = len(array) - 1
    # only go until the 3 last position
    while current_pos <= len(array) - 3:
        while True:
            if lpointer >= rpointer:
                current_pos += 1
                lpointer = current_pos + 1
                rpointer = len(array) - 1
                break

            res = array[current_pos] + array[rpointer] + array[lpointer]
            # 3 cases
            if res > target:
                # res needs to get lower
                rpointer -= 1

            if res < target:
                # res needs to get higher
                lpointer += 1
                
            if res == target:
                solution.append([array[current_pos], array[lpointer], array[rpointer]])
                lpointer += 1
                rpointer -= 1
    return solution
