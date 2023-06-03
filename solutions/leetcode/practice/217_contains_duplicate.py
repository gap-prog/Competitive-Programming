# LeetCode Problem Link: https://leetcode.com/problems/contains-duplicate/

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        st = set(nums)
        if (len(st) == len(nums)):
            return False
        return True
