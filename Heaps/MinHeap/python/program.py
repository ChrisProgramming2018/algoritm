
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
        while currentIdx <= endIdx:
            rightChildIdx = currentIdx * 2 + 2
            while rightChildIdx <= endIdx:
                # check if left child is present
                leftChildIdx = currentIdx * 2 + 2
                if leftChildIdx >= endIdx:
                    leftChildIdx = -1
                # check if left or right child is smaller
                if leftChildIdx != -1 and heap[leftChildIdx] < heap[rightChildIdx]:
                    swapIdx = leftChildIdx
                else:
                    swapIdx = rightChildIdx

                # check if smaller child is smaller then parent
                if heap[currentIdx] > heap[swapIdx]:
                    heap[swapIdx], heap[currentIdx] = heap[currentIdx], heap[swapIdx]
                    currentIdx = swapIdx
                    leftChildIdx = currentIdx * 2 + 1
                else:
                    return

    def siftUp(self, currentIdx, heap):
        """


        """
    def peek(self):
        # Write your code here.
        pass

    def remove(self):
        # swap first and last element
        self.heap[-1], self.heap[0] = self.heap[0], self.heap[-1]
        value = self.heap.pop()
        # restore the min heap proberty

    def insert(self, value):
        """

        """
        self.heap.append(value)


    def getIdxParent(self, idx):
        """

        """
        return int(math.ceil((idx-2)/2.))
    def getIdxRightChild(self, idx):
        """

        """
        return idx * 2 + 2

    def getIdxLeftChild(self, idx):
        """

        """
        return idx * 2 + 1


    def getParent(self, idx):
        """
        """
        pos = math.ceil((idx-2)/2.)
        try:
            return self.heap[pos]
        except:
            return None

    def getLeftChild(self, index):
        """
        """
        pos = index * 2 + 1
        try:
            return self.heap[pos]
        except:
            return None


    def getRightChild(self, index):
        """

        """
        pos = index * 2 + 2
        try:
            return self.heap[pos]
        except:
            return None

    def getMin(self):
        """

        """
        if self.length == 0:
            return None
        return self.heap[0]

