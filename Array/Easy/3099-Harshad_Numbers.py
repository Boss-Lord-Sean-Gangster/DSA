# PROBLEM STATEMENT -An integer divisible by the sum of its digits is said to be a Harshad number. You are given an integer x. Return the sum of the digits of x if x is a Harshad number, otherwise, return -1.


class Solution:
    def sumOfTheDigitsOfHarshadNumber(self, x: int) -> int:
        num_str = str(x)
        result = -1
        sums = sum(int(digit) for digit in num_str)
        # return(sums)
        if (x%sums)==0:
            result = sums
        return result  