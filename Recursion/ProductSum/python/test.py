# Add, edit, or remove tests in this file.
# Treat it as your playground!

import program
import unittest


class TestProgram(unittest.TestCase):
    def test_case_1(self):
        test = [1, 2, 3, 4, 5]
        self.assertEqual(program.productSum(test), 15)

    def test_case_2(self):
        test = [1, 2, [3], 4, 5]
        self.assertEqual(program.productSum(test), 18)

    def test_case_3(self):
        test = [[1, 2], 3, [4, 5]]
        self.assertEqual(program.productSum(test), 27)

    def test_case_4(self):
        test = [[[[[5]]]]]
        self.assertEqual(program.productSum(test), 600)

    def test_case_5(self):
        test = [
            9,
            [2, -3, 4],
            1,
            [1, 1, [1, 1, 1]],
            [[[[3, 4, 1]]], 8],
            [1, 2, 3, 4, 5, [6, 7], -7],
            [1, [2, 3, [4, 5]], [6, 0, [7, 0, -8]], -7],
            [1, -3, 2, [1, -3, 2, [1, -3, 2], [1, -3, 2, [1, -3, 2]], [1, -3, 2]]],
            -3,
        ]
        self.assertEqual(program.productSum(test), 1351)

    def test_case_6(self):
        test = [5, 2, [7, -1], 3, [6, [-13, 8], 4]]
        self.assertEqual(program.productSum(test), 12)


if __name__ == "__main__":
    unittest.main()

