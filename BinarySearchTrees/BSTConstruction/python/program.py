class BST:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

    def insert(self, value):
        # Write your code here.
        # Do not edit the return statement of this method.
        # can't be emtpy
        current = self
        while True:
            print(current)
            if value >= current.value:
                if current.right is None:
                    current.right = BST(value)
                    break
                current = self.right
            else:
                print(self.left)
                if current.left is None:
                    current.left = BST(value)
                    break
                current = self.left
            
        return self

    def contains(self, value):
        # Write your code here.
        
        return False
    
    def remove(self, value):
        # Write your code here.
        # Do not edit the return statement of this method.
        return self
