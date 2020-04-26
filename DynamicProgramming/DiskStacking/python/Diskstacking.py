# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>



def diskStacking(disks): 
    """

    Args:
        param1(listOflist):

    Return List of List
    """
    if len(disks) < 2:
        return disks



def build_sequene(array, seq, Idx):
    """

    """





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
