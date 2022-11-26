# LeetCode Problem Link: https://leetcode.com/problems/reverse-integer/

class Solution:
    def reverse(self, x: int) -> int:
        if x > 0:
            ans = int(str(x)[::-1])
        else:
            ans = int(str(x * -1)[::-1]) * -1
        minimum = pow(-2, 31)
        maximum = pow(2, 31) - 1
        if ans < minimum or ans > maximum:
            return 0
        return ans
