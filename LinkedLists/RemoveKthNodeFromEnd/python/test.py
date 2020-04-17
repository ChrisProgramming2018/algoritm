# Add, edit, or remove tests in this file.
# Treat it as your playground!

import program
import unittest


class StartLinkedList:
    def __init__(self, value):
        self.value = value
        self.next = None


linkedListClass = StartLinkedList
if hasattr(program, "LinkedList"):
    linkedListClass = program.LinkedList


class LinkedList(linkedListClass):
    def addMany(self, values):
        current = self
        while current.next is not None:
            current = current.next
        for value in values:
            current.next = LinkedList(value)
            current = current.next
        return self

    def getNodesInArray(self):
        nodes = []
        current = self
        while current is not None:
            nodes.append(current.value)
            current = current.next
        return nodes


class TestProgram(unittest.TestCase):
    def test_case_1(self):
        test1 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8, 9])
        result1 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8])
        program.removeKthNodeFromEnd(test1, 1)
        self.assertEqual(test1.getNodesInArray(), result1.getNodesInArray())

    def test_case_2(self):
        test2 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8, 9])
        result2 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 9])
        program.removeKthNodeFromEnd(test2, 2)
        self.assertEqual(test2.getNodesInArray(), result2.getNodesInArray())

    def test_case_3(self):
        test3 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8, 9])
        result3 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 8, 9])
        program.removeKthNodeFromEnd(test3, 3)
        self.assertEqual(test3.getNodesInArray(), result3.getNodesInArray())

    def test_case_4(self):
        test4 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8, 9])
        result4 = LinkedList(0).addMany([1, 2, 3, 4, 5, 7, 8, 9])
        program.removeKthNodeFromEnd(test4, 4)
        self.assertEqual(test4.getNodesInArray(), result4.getNodesInArray())

    def test_case_5(self):
        test5 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8, 9])
        result5 = LinkedList(0).addMany([1, 2, 3, 4, 6, 7, 8, 9])
        program.removeKthNodeFromEnd(test5, 5)
        self.assertEqual(test5.getNodesInArray(), result5.getNodesInArray())

    def test_case_6(self):
        test6 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8, 9])
        result6 = LinkedList(0).addMany([1, 2, 3, 5, 6, 7, 8, 9])
        program.removeKthNodeFromEnd(test6, 6)
        self.assertEqual(test6.getNodesInArray(), result6.getNodesInArray())

    def test_case_7(self):
        test7 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8, 9])
        result7 = LinkedList(0).addMany([1, 2, 4, 5, 6, 7, 8, 9])
        program.removeKthNodeFromEnd(test7, 7)
        self.assertEqual(test7.getNodesInArray(), result7.getNodesInArray())

    def test_case_8(self):
        test8 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8, 9])
        result8 = LinkedList(0).addMany([1, 3, 4, 5, 6, 7, 8, 9])
        program.removeKthNodeFromEnd(test8, 8)
        self.assertEqual(test8.getNodesInArray(), result8.getNodesInArray())

    def test_case_9(self):
        test9 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8, 9])
        result9 = LinkedList(0).addMany([2, 3, 4, 5, 6, 7, 8, 9])
        program.removeKthNodeFromEnd(test9, 9)
        self.assertEqual(test9.getNodesInArray(), result9.getNodesInArray())

    def test_case_10(self):
        test10 = LinkedList(0).addMany([1, 2, 3, 4, 5, 6, 7, 8, 9])
        result10 = LinkedList(1).addMany([2, 3, 4, 5, 6, 7, 8, 9])
        program.removeKthNodeFromEnd(test10, 10)
        self.assertEqual(test10.getNodesInArray(), result10.getNodesInArray())

if __name__ == "__main__":
    unittest.main()
