// LeetCode Problem Link: https://leetcode.com/problems/climbing-stairs/

class Solution {
  public:
    int climbStairs(int n) {
        int o = 1, t = 1;
        for (int i = 0; i < (n - 1); ++i) {
            int tmp = o;
            o += t;
            t = tmp;
        }
        return o;
    }
};
