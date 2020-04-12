import program
import unitests


class TestProgram(unitests.TestCase):
    def test_case_1(self):
        matrix = [[1]]
        expected = [1]
        self.assertEqual(program.sprialTravers(matrix), expected)
    
    def test_case_2(self):
        matrix = [[1,2],[4,3]]
        expected = [1,2,3,4]
        self.assertEqual(program.sprialTravers(matrix), expected)
