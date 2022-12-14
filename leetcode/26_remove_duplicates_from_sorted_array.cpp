// LeetCode Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
        int ans = (nums.size() > 0) ? 1 : 0;
        for (auto &i: nums) {
            if (i > nums[ans - 1]) {
                nums[ans++] = i;
            }
        }
        return ans;
    }
};
