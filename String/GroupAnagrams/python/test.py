# Add, edit, or remove tests in this file.
# Treat it as your playground!

import program
import unittest


class TestProgram(unittest.TestCase):
    def test_case_1(self):
        words = []
        expected = []
        output = list(map(lambda x: sorted(x), program.groupAnagrams(words)))

        compare(self, expected, output)

    def test_case_2(self):
        words = ["test"]
        expected = [["test"]]
        output = list(map(lambda x: sorted(x), program.groupAnagrams(words)))

        compare(self, expected, output)

    def test_case_3(self):
        words = ["abc", "dabd", "bca", "cab", "ddba"]
        expected = [["abc", "bca", "cab"], ["dabd", "ddba"]]
        output = list(map(lambda x: sorted(x), program.groupAnagrams(words)))

        compare(self, expected, output)

    def test_case_4(self):
        words = ["abc", "cba", "bca"]
        expected = [["abc", "cba", "bca"]]
        output = list(map(lambda x: sorted(x), program.groupAnagrams(words)))

        compare(self, expected, output)

    def test_case_5(self):
        words = ["zxc", "asd", "weq", "sda", "qwe", "xcz"]
        expected = [["zxc", "xcz"], ["asd", "sda"], ["qwe", "weq"]]
        output = list(map(lambda x: sorted(x), program.groupAnagrams(words)))

        compare(self, expected, output)

    def test_case_6(self):
        words = ["yo", "act", "flop", "tac", "cat", "oy", "olfp"]
        expected = [["yo", "oy"], ["flop", "olfp"], ["act", "tac", "cat"]]
        output = list(map(lambda x: sorted(x), program.groupAnagrams(words)))

        compare(self, expected, output)

    def test_case_7(self):
        words = ["cinema", "a", "flop", "iceman", "meacyne", "lofp", "olfp"]
        expected = [["cinema", "iceman"], ["flop", "lofp", "olfp"], ["a"], ["meacyne"]]
        output = list(map(lambda x: sorted(x), program.groupAnagrams(words)))

        compare(self, expected, output)

    def test_case_8(self):
        words = ["abc", "abe", "abf", "abg"]
        expected = [["abc"], ["abe"], ["abf"], ["abg"]]
        output = list(map(lambda x: sorted(x), program.groupAnagrams(words)))

        compare(self, expected, output)


def compare(testFramework, expected, output):
    if len(expected) == 0:
        testFramework.assertEqual(output, expected)
        return
    testFramework.assertEqual(len(expected), len(output))
    for group in expected:
        testFramework.assertTrue(sorted(group) in output)


if __name__ == "__main__":
    unittest.main()
