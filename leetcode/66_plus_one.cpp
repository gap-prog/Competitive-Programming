// LeetCode Problem Link: https://leetcode.com/problems/plus-one/description/

class Solution {
  public:
    vector<int> plusOne(vector<int>& digits) {
        int sum = 0;
        int c = 0;
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (i == digits.size() - 1) {
                sum = digits[i] + 1;
            } else {
                sum = digits[i] + c;
            }
            digits[i] = sum % 10;
            c = sum / 10;
        }
        if (c > 0) {
            digits.insert(digits.begin(), c);
        }
        return digits;
    }
};
