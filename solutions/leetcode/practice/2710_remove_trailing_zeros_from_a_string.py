# LeetCode Problem Link: https://leetcode.com/problems/remove-trailing-zeros-from-a-string/

class Solution:
    def removeTrailingZeros(self, num: str) -> str:
        num = list(num)[::-1]
        i = 0
        while (i < len(num)):
            if num[i] != '0':
                break
            del num[i]
        return ''.join(num[::-1])
        
