class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums = sorted((nums1 + nums2))
        nums_length = len(nums)
        if nums_length % 2 == 0:
            return (nums[int(nums_length / 2) - 1] + nums[(int(nums_length / 2) - 1) + 1]) / 2
        else:
            return nums[(int((nums_length + 1) / 2)) - 1]
