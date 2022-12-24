// LeetCode Problem Link: https://leetcode.com/problems/baseball-game/description/

class Solution {
  public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> v;
        int track = -1;
        for (int i = 0; i < n; ++i) {
            if (operations[i] == "+") {
                v.push_back(v[track - 1] + v[track]);
                ++track;
            } else if (operations[i] == "D") {
                v.push_back(2 * v[track]);
                ++track;
            } else if (operations[i] == "C") {
                v.pop_back();
                --track;
            } else {
                v.push_back(stoi(operations[i]));
                ++track;
            }
        }
        return accumulate(v.begin(), v.end(), 0);
    }
};
