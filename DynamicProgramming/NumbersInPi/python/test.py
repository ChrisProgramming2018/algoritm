# Add, edit, or remove tests in this file.
# Treat it as your playground!

import program
import unittest


PI = "3141592653589793238462643383279"


class TestProgram(unittest.TestCase):
    def test_case_1(self):
        numbers = ["314159265358979323846264338327", "9"]
        self.assertEqual(program.numbersInPi(PI, numbers), 1)

    def test_case_2(self):
        numbers = ["3", "314", "49", "9001", "15926535897", "14", "9323", "8462643383279", "4", "793"]
        self.assertEqual(program.numbersInPi(PI, numbers), 3)

    def test_case_3(self):
        numbers = ["3141592653589793238462643383279"]
        self.assertEqual(program.numbersInPi(PI, numbers), 0)

    def test_case_4(self):
        numbers = ["3141", "1512", "159", "793", "12412451", "8462643383279"]
        self.assertEqual(program.numbersInPi(PI, numbers), -1)

    def test_case_5(self):
        numbers = ["314159265358979323846", "26433", "8", "3279", "314159265", "35897932384626433832", "79"]
        self.assertEqual(program.numbersInPi(PI, numbers), 2)

    def test_case_6(self):
        numbers = ["314159265358979323846", "327", "26433", "8", "3279", "9", "314159265", "35897932384626433832", "79"]
        self.assertEqual(program.numbersInPi(PI, numbers), 2)

    def test_case_7(self):
        numbers = [
            "141592653589793238462643383279",
            "314159265358979323846",
            "327",
            "26433",
            "8",
            "3279",
            "9",
            "314159265",
            "35897932384626433832",
            "79",
            "3",
        ]
        self.assertEqual(program.numbersInPi(PI, numbers), 1)

    def test_case_8(self):
        numbers = ["3", "1", "4", "592", "65", "55", "35", "8", "9793", "2384626", "83279"]
        self.assertEqual(program.numbersInPi(PI, numbers), 13)

    def test_case_9(self):
        numbers = ["3", "1", "4", "592", "65", "55", "35", "8", "9793", "2384626", "383279"]
        self.assertEqual(program.numbersInPi(PI, numbers), 12)

    def test_case_10(self):
        numbers = ["3", "141", "592", "65", "55", "35", "8", "9793", "2384626", "383279"]
        self.assertEqual(program.numbersInPi(PI, numbers), -1)

    def test_case_11(self):
        numbers = ["3", "141", "592", "65", "55", "35", "8", "9793", "23846264", "383279"]
        self.assertEqual(program.numbersInPi(PI, numbers), 9)

    def test_case_12(self):
        numbers = ["3", "141", "592", "65", "55", "35", "8", "9793", "23846264", "3832798"]
        self.assertEqual(program.numbersInPi(PI, numbers), -1)


if __name__ == "__main__":
    unittest.main()
