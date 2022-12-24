// LeetCode Problem Link: https://leetcode.com/problems/fizz-buzz/description/

class Solution {
  public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0) {
                answer[i - 1] = "Fizz";
            }
            if (i % 5 == 0) {
                answer[i - 1] = "Buzz";
            }
            if (i % 3 == 0 && i % 5 == 0) {
                answer[i - 1] = "FizzBuzz";
            } 
            if (answer[i - 1].empty()) {
                answer[i - 1] = to_string(i);
            }
        }
        return answer;
    }
};
