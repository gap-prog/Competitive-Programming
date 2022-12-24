// LeetCode Problem Link: https://leetcode.com/problems/merge-strings-alternately/description/

class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string ans = "";
            for (int i = 0; i < word1.size() || i < word2.size(); ++i) {
                if (i < word1.size()) {
                    ans += word1[i];
                }
                if (i < word2.size()) {
                    ans += word2[i];
                }
            }
            return ans;
        }
};
