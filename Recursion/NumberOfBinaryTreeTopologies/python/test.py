# Add, edit, or remove tests in this file.
# Treat it as your playground!

import program
import unittest


class TestProgram(unittest.TestCase):
    def test_case_1(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(0), 1)

    def test_case_2(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(1), 1)

    def test_case_3(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(2), 2)

    def test_case_4(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(3), 5)

    def test_case_5(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(4), 14)

    def test_case_6(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(5), 42)

    def test_case_7(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(6), 132)

    def test_case_8(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(7), 429)

    def test_case_9(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(8), 1430)

    def test_case_10(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(9), 4862)

    def test_case_11(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(10), 16796)

    def test_case_12(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(11), 58786)

    def test_case_13(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(12), 208012)

    def test_case_14(self):
        self.assertEqual(program.numberOfBinaryTreeTopologies(13), 742900)

if __name__ ==  "__main__":
    unittest.main()
