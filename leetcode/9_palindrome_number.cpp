// LeetCode Problem Link: https://leetcode.com/problems/palindrome-number/

class Solution {
  public:
    bool isPalindrome(int x) {
      string r = to_string(x);
      reverse(r.begin(), r.end());
      return r == to_string(x);
    }
};
