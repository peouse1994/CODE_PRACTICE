class Solution:
    def romanToInt(self, s):
        """
            input type string return type int
        """
        roman_to_integer = {'I' : 1, 'V' : 5, 'X' : 10,
                            'L' : 50, 'C' : 100,
                            'D' : 500, 'M' : 1000}
