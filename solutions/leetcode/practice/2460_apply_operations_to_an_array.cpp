// LeetCode Problem Link: https://leetcode.com/problems/apply-operations-to-an-array/

class Solution {
  public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i + 1 < nums.size(); ++i) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        int index = 0;
        for (auto n: nums) {
            if(n != 0) {
                nums[index++] = n;
            }
        }
        while(index < nums.size()) {
            nums[index++] = 0;
        }
        return nums;
    }
};
