# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


class ContinuousMedianHandler:
    def __init__(self):
        self.median = None
        self.lowers = Heap(MAX_HEAP_FUNC, [])
        self.greaters = Heap(MIN_HEAP_FUNC, [])
    
    def insert(self, number):
        if not self.lowers.length or number < self.lowers.peek():
            self.lowers.insert(number)
        else:
            self.greaters.insert(number)
        self.rebalanceHeaps()
        self.updateMedian()

    def rebalanceHeaps(self):
        if self.

    def updateMedian(self):
        if self.lowers.length == self.greaters.length:

    def getMedian(self):
        return self.median

        parentIdx = (currentIdx - 1) // 2


class Heap:
    def __init__(self, array, compare="max"):
        """ Transforms the array list to a max or min heap 
        dependen on the compare in put
        Args:
            param1(list): array of int
            param2(str): max or min
        """
        self.heap = self.buildHeap(array)
        self.length = len(self.heap)
        self.type = compare

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
    def compare(self, right, left):
        """
        r
        
        """







