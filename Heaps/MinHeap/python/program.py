# Do not edit the class below except for the buildHeap,
# siftDown, siftUp, peek, remove, and insert methods.
# Feel free to add new properties and methods to the class.
class MinHeap:
    def __init__(self, array):
        # Do not edit the line below.
        self.heap = self.buildHeap(array)
        
    def buildHeap(self, array):
        # Write your code here.
        firstParentIdx = (len(array) - 2) // 2
        for currentIdx in reversed(range(firstParentIdx + 1)):
            self.siftDown(currentIdx, len(array) - 1, array)
        return array

    def siftDown(self, currentIdx, endIdx, heap):

        # Write your code here.
        leftChildIdx = currentIdx * 2 + 1
        #
        while currentIdx <= endIdx:
            rightChildIdx = currentIdx * 2 + 2
            if rightChildIdx > endIdx:
                rightChildIdx = -1
            # check if left or right child is smaller

        
        return array

    def siftUp(self):
        # Write your code here.
        pass

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
                    
