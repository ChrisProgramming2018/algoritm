# Feel free to add new properties and methods to the class.
class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def setHead(self, node):
        # Write your code here.
        self.head = node

    def setTail(self, node):
        # Write your code here.
        self.tail = node

    def insertBefore(self, node, nodeToInsert):
        # Write your code here.
        # case at head and tail
        if node == self.head and node == self.tail:
            self.head = nodeToInsert
            nodeToInsert.next = node
            node.prev = nodeToInsert
            return
        # case its head
        

        # case its tail

        # case its between 2 nodes
        nodeToInsert.prev = node.next  
        node.next.prev = nodeToInsert
        nodeToInsert.next = node
        node.prev = nodeToInsert
        
    def insertAfter(self, node, nodeToInsert):
        # Write your code here.
        # case node is tail
        if node.next == None:
            self.tail = nodeToInsert
            node.next = nodeToInsert
            nodeToInsert.prev = node
            nodeToInsert.next = None
            return
        # case between 2 nodes


    def insertAtPosition(self, position, nodeToInsert):
        # Write your code here.
        # case at head

        #case at tail

    def removeNodesWithValue(self, value):
        # Write your code here.
        # check if value is in list


    def remove(self, node):
        # Write your code here.
        # case it is head
        if node.prev == None:
            self.head = node.next
            node.next.prev = None
            return
        # case it is tail 
        if node.next == None:
            self.tail = node.prev
            node.prev.next = None
            return
        node.prev.next = node.next
        node.next.prev = node.prev
        return 


    def containsNodeWithValue(self, value):
      # Write your code here.
      current_node = self.head
      while(True):
          if current_node.value == value:
              # found node with the given value
              return True
          if current_node.next = None:
              return False
          current_node = current_node.next
