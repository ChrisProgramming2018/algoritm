import math

# Do not edit the class below except for the buildHeap,
# siftDown, siftUp, peek, remove, and insert methods.
# Feel free to add new properties and methods to the class.
class MinHeap:
    def __init__(self, array):
        # Do not edit the line below.
        self.heap = self.buildHeap(array)
        
    def buildHeap(self, array):
        # Write your code here.
        if len(array) == 0:
            return None
        
        self.length = len(array)
        # get last parent 
        start = self.getIdxParent(self.length - 1)
        # for each parent until -1 also need 0(root) 
        for i in range(start,-1,-1):
            idx = i
            while idx >= 0:
                # get value
                value = array[idx]
                print(value)
                break
        return array
        

    def siftDown(self):
        # Write your code here.
        pass

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
        # Write your code here.
        pass
    
    def getIdxParent(self, idx):
        """
        
        """
        return int(math.ceil((idx-2)/2.))    
    def getIdxRightChild(self, idx):
        """
        
        """
        return idx * 2 + 1
    
    def getIdxLeftChild(self, idx):
        """
        
        """
        return idx * 2 + 2
 
    
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
        pos = index * 2 + 2
        try:
            return self.heap[pos]
        except:
            return None
    
    
    def getRightChild(self, index):
        """
        
        """
        pos = index * 2 + 1
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
                    
