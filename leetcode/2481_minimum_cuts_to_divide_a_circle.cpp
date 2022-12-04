// LeetCode Problem Link: https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/

class Solution {
    public:
        int numberOfCuts(int n) {
            return (n == 1) ? 0 : ((n % 2 == 0) ? n / 2 : n);
        }
};
