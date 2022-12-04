// LeetCode Problem Link: https://leetcode.com/problems/sum-of-even-numbers-after-queries/

class Solution {
  public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
      int sum = accumulate(nums.begin(), nums.end(), 0, [](int sum, int i) {
        return (i % 2 == 0) ? sum + i : sum;
      });
      vector<int> res;
      for (auto &i: queries) {
        const int v = i[0], idx = i[1];
        int& num = nums[idx];
        if (num % 2 == 0) {
          sum -= num;
        }
        num += v;
        if (num % 2 == 0) {
          sum += num;
        }
        res.push_back(sum);
      }
      return res;
    }
};
