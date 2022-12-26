// LeetCode Problem Link: https://leetcode.com/problems/merge-intervals/description/

/*
Details
-------
STRATEGY: array, sorting
I/O: problem provided
APPROACH: sort vector, then compare intervals and append to final vector
*/

class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(intervals.begin(), intervals.end());
            vector<vector<int>> res;
            for (auto &i: intervals) {
                if (res.empty() || res.back()[1] < i[0]) {
                    res.push_back(i);
                } else {
                    res.back()[1] = max(res.back()[1], i[1]);
                }
            }
            return res;
        }
};
