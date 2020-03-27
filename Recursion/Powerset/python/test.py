# Add, edit, or remove tests in this file.
# Treat it as your playground!

import program
import unittest


class TestProgram(unittest.TestCase):
    def test_case_1(self):
        output = list(map(lambda x: set(x), program.powerset([])))
        self.assertTrue(len(output) == 1)
        self.assertTrue(set([]) in output)

    def test_case_2(self):
        output = list(map(lambda x: set(x), program.powerset([1])))
        self.assertTrue(len(output) == 2)
        self.assertTrue(set([]) in output)
        self.assertTrue(set([1]) in output)

    def test_case_3(self):
        output = list(map(lambda x: set(x), program.powerset([1, 2])))
        self.assertTrue(len(output) == 4)
        self.assertTrue(set([]) in output)
        self.assertTrue(set([1]) in output)
        self.assertTrue(set([2]) in output)
        self.assertTrue(set([1, 2]) in output)

    def test_case_4(self):
        output = list(map(lambda x: set(x), program.powerset([1, 2, 3])))
        self.assertTrue(len(output) == 8)
        self.assertTrue(set([]) in output)
        self.assertTrue(set([1]) in output)
        self.assertTrue(set([2]) in output)
        self.assertTrue(set([1, 2]) in output)
        self.assertTrue(set([3]) in output)
        self.assertTrue(set([1, 3]) in output)
        self.assertTrue(set([2, 3]) in output)
        self.assertTrue(set([1, 2, 3]) in output)

    def test_case_5(self):
        output = list(map(lambda x: set(x), program.powerset([1, 2, 3, 4])))
        self.assertTrue(len(output) == 16)
        self.assertTrue(set([]) in output)
        self.assertTrue(set([1]) in output)
        self.assertTrue(set([2]) in output)
        self.assertTrue(set([1, 2]) in output)
        self.assertTrue(set([3]) in output)
        self.assertTrue(set([1, 3]) in output)
        self.assertTrue(set([2, 3]) in output)
        self.assertTrue(set([1, 2, 3]) in output)
        self.assertTrue(set([4]) in output)
        self.assertTrue(set([1, 4]) in output)
        self.assertTrue(set([2, 4]) in output)
        self.assertTrue(set([1, 2, 4]) in output)
        self.assertTrue(set([3, 4]) in output)
        self.assertTrue(set([1, 3, 4]) in output)
        self.assertTrue(set([2, 3, 4]) in output)
        self.assertTrue(set([1, 2, 3, 4]) in output)


if __name__ == "__main__":
    unittest.main()
