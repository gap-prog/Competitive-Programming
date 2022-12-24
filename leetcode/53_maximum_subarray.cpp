// LeetCode Problem Link: https://leetcode.com/problems/maximum-subarray/description/

/*
Details
-------
STRATEGY: array, dynamic programming
I/O: problem provided
APPROACH: Apply dynamic programming to find an O(n) algorithm that looks at the previous subarray sum to decide whether to take that subarray into maximum value consideration
*/

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int m = nums[0], sum = 0;
            for (int i = 0; i < nums.size(); ++i) {
                if (sum < 0) {
                    sum = 0;
                }
                sum += nums[i];
                m = max(m, sum);
            }
            return m;
        }
};
