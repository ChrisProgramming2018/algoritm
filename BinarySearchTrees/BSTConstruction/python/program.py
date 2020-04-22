class BST:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

    def insert(self, value):
        # Do not edit the return statement of this method.
        # can't be emtpy
        current_node = self
        while True:
            if value < current_node.value:
                if current_node.left is None:
                    current_node.left = BST(value)
                    break
            else:
                if current_node.right is None:
                    current_node = BST(value)
                    break
                else:
                    current_node = current_node.right 
        return self

     def contains(self, value):
        # Write your code here.
        current = self
        while True:
            if current.value == value:
                return True
            if value >= current.value:
                current = current.right
            else:
                current = current.left
            if current is None:
                return False
    
    def remove(self, value):
        # Write your code here.
        # Do not edit the return statement of this method.
        return self
