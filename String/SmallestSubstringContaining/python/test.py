# Add, edit, or remove tests in this file.
# Treat it as your playground!

import program
import unittest


class TestProgram(unittest.TestCase):
    def test_case_1(self):
        bigString = "abcdef"
        smallString = "fa"
        expected = "abcdef"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_2(self):
        bigString = "abcdef"
        smallString = "d"
        expected = "d"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_3(self):
        bigString = "abcdefghijklmnopqrstuvwxyz"
        smallString = "aajjttwwxxzz"
        expected = ""
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_4(self):
        bigString = "abzacdwejxjftghiwjtklmnopqrstuvwxyz"
        smallString = "aajjttwwxxzz"
        expected = "abzacdwejxjftghiwjtklmnopqrstuvwxyz"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_5(self):
        bigString = "abzacdwejxjfxztghiwjtklmnopqrstuvwxyz"
        smallString = "aajjttwwxxzz"
        expected = "abzacdwejxjfxztghiwjt"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_6(self):
        bigString = "aaaa+a$+aaa++$+++++++aaa"
        smallString = "a+$aaAaaaa$++"
        expected = ""
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_7(self):
        bigString = "a$fuu+afff+affaffa+a$Affab+a+a+$a$"
        smallString = "a+$aaAaaaa$++"
        expected = "affa+a$Affab+a+a+$a"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_8(self):
        bigString = "a$fuu+afff+affaffa+a$Affab+a+a+$a$bccgtt+aaaacA+++aaa$"
        smallString = "a+$aaAaaaa$++"
        expected = "affa+a$Affab+a+a+$a"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_9(self):
        bigString = "145624356128828193236336541277356789901"
        smallString = "123"
        expected = "1932"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_10(self):
        bigString = "1456243561288281932363365412356789901!"
        smallString = "123!"
        expected = "2356789901!"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_11(self):
        bigString = "14562435612!88281932363365$412356789901"
        smallString = "$123!"
        expected = "!88281932363365$"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_12(self):
        bigString = "14562435612!88281932363365$412356789901"
        smallString = "#!123!"
        expected = ""
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_13(self):
        bigString = "14562435612!88281932363365$412356789901"
        smallString = "#!333333123!"
        expected = ""
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_14(self):
        bigString = "14562435612z!8828!193236!336!5$41!23!5!6789901#"
        smallString = "#!2z"
        expected = "z!8828!193236!336!5$41!23!5!6789901#"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_15(self):
        bigString = "14562435612z!8828!193236!336!5$41!23!5!6789901#z2!"
        smallString = "#!2z"
        expected = "#z2!"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)

    def test_case_16(self):
        bigString = "abcd$ef$axb$c$"
        smallString = "$$abf"
        expected = "f$axb$"
        self.assertEqual(program.smallestSubstringContaining(bigString, smallString), expected)


if __name__ == "__main__":
    unittest.main()
