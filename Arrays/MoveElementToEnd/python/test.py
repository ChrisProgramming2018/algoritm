# Add, edit, or remove tests in this file.
# Treat it as your playground!

import program
import unittest


class TestProgram(unittest.TestCase):
    def test_case_1(self):
        array = []
        toMove = 3
        expected = []
        output = program.moveElementToEnd(array, toMove)
        self.assertEqual(output, [])

    def test_case_2(self):
        array = [1, 2, 4, 5, 6]
        toMove = 3
        expected = [1, 2, 4, 5, 6]
        output = sorted(program.moveElementToEnd(array, toMove))
        self.assertEqual(output, expected)

    def test_case_3(self):
        array = [3, 3, 3, 3, 3]
        toMove = 3
        expected = [3, 3, 3, 3, 3]
        output = program.moveElementToEnd(array, toMove)
        self.assertEqual(output, expected)

    def test_case_4(self):
        array = [3, 1, 2, 4, 5]
        toMove = 3
        expectedStart = [1, 2, 4, 5]
        expectedEnd = [3]
        output = program.moveElementToEnd(array, toMove)
        outputStart = sorted(output[0:4])
        outputEnd = output[4:]
        self.assertEqual(outputStart, expectedStart)
        self.assertEqual(outputEnd, expectedEnd)

    def test_case_5(self):
        array = [1, 2, 4, 5, 3]
        toMove = 3
        expectedStart = [1, 2, 4, 5]
        expectedEnd = [3]
        output = program.moveElementToEnd(array, toMove)
        outputStart = sorted(output[0:4])
        outputEnd = output[4:]
        self.assertEqual(outputStart, expectedStart)
        self.assertEqual(outputEnd, expectedEnd)

    def test_case_6(self):
        array = [1, 2, 3, 4, 5]
        toMove = 3
        expectedStart = [1, 2, 4, 5]
        expectedEnd = [3]
        output = program.moveElementToEnd(array, toMove)
        outputStart = sorted(output[0:4])
        outputEnd = output[4:]
        self.assertEqual(outputStart, expectedStart)
        self.assertEqual(outputEnd, expectedEnd)

    def test_case_7(self):
        array = [5, 5, 5, 5, 5, 5, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12]
        toMove = 5
        expectedStart = [1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12]
        expectedEnd = [5, 5, 5, 5, 5, 5]
        output = program.moveElementToEnd(array, toMove)
        outputStart = sorted(output[0:11])
        outputEnd = output[11:]
        self.assertEqual(outputStart, expectedStart)
        self.assertEqual(outputEnd, expectedEnd)

    def test_case_8(self):
        array = [1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 5, 5, 5, 5, 5, 5]
        toMove = 5
        expectedStart = [1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12]
        expectedEnd = [5, 5, 5, 5, 5, 5]
        output = program.moveElementToEnd(array, toMove)
        outputStart = sorted(output[0:11])
        outputEnd = output[11:]
        self.assertEqual(outputStart, expectedStart)
        self.assertEqual(outputEnd, expectedEnd)

    def test_case_9(self):
        array = [5, 1, 2, 5, 5, 3, 4, 6, 7, 5, 8, 9, 10, 11, 5, 5, 12]
        toMove = 5
        expectedStart = [1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12]
        expectedEnd = [5, 5, 5, 5, 5, 5]
        output = program.moveElementToEnd(array, toMove)
        outputStart = sorted(output[0:11])
        outputEnd = output[11:]
        self.assertEqual(outputStart, expectedStart)
        self.assertEqual(outputEnd, expectedEnd)

    def test_case_10(self):
        array = [2, 1, 2, 2, 2, 3, 4, 2]
        toMove = 2
        expectedStart = [1, 3, 4]
        expectedEnd = [2, 2, 2, 2, 2]
        output = program.moveElementToEnd(array, toMove)
        outputStart = sorted(output[0:3])
        outputEnd = output[3:]
        self.assertEqual(outputStart, expectedStart)
        self.assertEqual(outputEnd, expectedEnd)


if __name__ == "__main__":
    unittest.main()
