// LeetCode Problem Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

class Solution {
  public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for (auto &i: nums) {
            if (i > 0) {
                p.push_back(i);
            } else {
                n.push_back(i);
            }
        }
        vector<int>ans;
        int i = 0;
        int j = 0;
        while (i < p.size() && j < n.size()) {
            ans.push_back(p[i++]);
            ans.push_back(n[j++]);
        }
        return ans;
    }
};
