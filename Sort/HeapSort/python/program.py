# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


class MinHeap:
    def __init__(self, array):
        self.heap = self.buildHeap(array)

    def buildHeap(self, array):
        """ Return  the MinHeap objectwhich contains the min heap
        poperty Peek shows the root element (min value im tree)
        insert, remove

        Args:
            param1(list)

        """
        firstParentIdx = (len(array) - 2) // 2
        for currentIdx in reversed(range(firstParentIdx + 1)):
            self.siftDown(currentIdx, len(array) - 1, array)
        return array

    def siftDown(self, currentIdx, endIdx, heap):
        """


        Args:
            param1(int)
            param2(int)
            param3(heap)
        """
        leftChildIdx = currentIdx * 2 + 1
        # until its in the rigth position
        while leftChildIdx <= endIdx:
            print(leftChildIdx)
            rightChildIdx = currentIdx * 2 + 2
            # check if left child is present
            if rightChildIdx > endIdx:
                    rightChildIdx = -1
            # check if left or right child is smaller
            if rightChildIdx != -1 and heap[rightChildIdx] < heap[leftChildIdx]:
                swapIdx = rightChildIdx
            else:
                swapIdx = leftChildIdx

            # check if smaller child is smaller then parent
            if heap[currentIdx] > heap[swapIdx]:
                heap[swapIdx], heap[currentIdx] = heap[currentIdx], heap[swapIdx]
                currentIdx = swapIdx
                leftChildIdx = currentIdx * 2 + 1
            else:
                return

    def siftUp(self, currentIdx):
        """ Move the value up until its correct position


        """
        parentIdx = (currentIdx - 1) // 2
        # move up child is smaller
        while currentIdx > 0 and self.heap[currentIdx] < self.heap[parentIdx]:
            self.heap[currentIdx], self.heap[parentIdx] = self.heap[parentIdx], self.heap[currentIdx] 
            currentIdx = parentIdx
            parentIdx = (currentIdx - 1) // 2


    def peek(self):
        """
        Return: min element (Root node)
        """
        return self.heap[0]

    def remove(self):
        # swap first and last element
        self.heap[len(self.heap) - 1], self.heap[0] = self.heap[0], self.heap[len(self.heap )-1]
        value = self.heap.pop()
        # restore the min heap proberty
        self.siftDown(0, len(self.heap) - 1, self.heap)
        return value

    def insert(self, value):
        """

        """
        self.heap.append(value)
        self.siftUp(len(self.heap) - 1) 






def heapSort(array):
    """ heap sort by using a min heap tree 
    sort the given array 

    Args:
       param1(list):

    Return: sorted list 
    """

    heap = MinHeap(array)
    sol = []
    while len(heap.heap) > 0:
        sol.append(heap.remove())

    print(sol)
    return sol



if __name__ == "__main__":
    import doctests
