// LeetCode Problem Link: https://leetcode.com/problems/partition-array-according-to-given-pivot/description/

class Solution {
  public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> g;
        int x = 0, count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < pivot) {
                nums[x++] = nums[i];
            } else if (nums[i] == pivot) {
                count++;
            } else {
                g.push_back(nums[i]);
            }
        }
        while (count--) {
            nums[x++] = pivot;
        }
        for (int i = 0; i < g.size(); ++i) {
            nums[x++] = g[i];
        }
        return nums;
    }
};
