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
        self.heap = array
        self.length = len(array)
        # get last parent 
        start = self.getIdxParent(self.length - 1)
        # for each parent until -1 also need 0(root) 
        for i in range(start,-1,-1):
            idx = i
            while True:
                # get value
                parent_value = array[idx]
                
                # get left and right child
                left_value = self.getLeftChild(idx)
                right_value = self.getRightChild(idx)
                left_idx = self.getIdxLeftChild(idx)
                right_idx = self.getIdxRightChild(idx)
                # case if right is None
                if right_value == None:
                    if left_value < parent_value:
                            # swap left and parent
                            self.heap[idx], self.heap[left_idx] = self.heap[left_idx], self.heap[idx]
                 
                # which is smaller
                if left_value <= right_value:
                    # left is smaller compare to parent
                    if left_value < parent_value:
                        # swap left and parent
                        self.heap[idx], self.heap[left_idx] = self.heap[left_idx], self.heap[idx] 
                        
                elif right_value < left_value:
                    print("right smaller ")
                    if right_value < parent_value:
                        # swap right and parent
                        self.heap[idx], self.heap[right_idx] = self.heap[right_idx], self.heap[idx]
                # get parent idx if None break
                idx = self.getIdxParent(idx)
                if idx == -1:
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
                    
