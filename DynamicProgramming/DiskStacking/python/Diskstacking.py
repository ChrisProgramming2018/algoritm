# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


# _________________________________________________________________________________________________
def diskStacking(disks): 
    """ Computes the heightes tower with the given disks
    A valid tower is
    Args:
        param1(listOflist):

    Return List of List
    """
    disks.sort(key=lamda disk:disk[2]) # sort disk by width
    heigths = [disk[2] for disk in disks]
    seq = [None, for _ in rang(len(disks))]
    maxHeightIdx = 0
    for idx1 in range(1, len(disks)):
        current_disk = disks[idx1]
        for idx2 in range(0, idx1):
            if validDisk:
                if heigths[idx1] <= current_disk[2] + heigths[idx2]:
                    # in case the new disk is valid and  increases the height
                    # add it and update the height
                    heigths[idx1] = current_disk[2] + heigths[idx2]
                    seq[idx1] = idx2
        # if the new tower is higher then the old so far update the max height
        if heigths[idx1] >= heigths[maxHeightIdx]:
            maxHeightIdx = idx1
    return build_sequene(disks, seq, maxHeightIdx)



# _________________________________________________________________________________________________
def build_sequene(array, seq, Idx):
    """

    Args:
        param1(list) array Input array with the disks
        param2(list) seq the computed 
        param3(int) Idx  index with where the last added disk is sorted in the input
    Return list represents the solution
    """
    sol = []
     while Idx is not None:
         sol.append(array[Idx])
         Idx = seq[Idx]
    return list(reversed(sol))



# _________________________________________________________________________________________________
def validDisk(disk_c, disk_old):
    """
    Compares the to disk if the disk_c has strict higher value 
    then disk_old the function returns true

    Args:
         param1:(list) disk 3 elements w, d, h

    Return bool
    
    >>> validDisk([1,2,3], [2,3,4])
    False
    >>> validDisk([3,4,5], [2,3,4])
    True
    """

    return disk_old[0] < disk_c[0] and disk_old[1] < disk_c[1] and disk_old[2] < disk_c[2] 



if __name__ == "__main__":
    import doctest
    doctest.testmod()
