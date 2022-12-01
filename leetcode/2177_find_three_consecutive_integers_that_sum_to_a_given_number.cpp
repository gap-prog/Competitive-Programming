// LeetCode Problem Link: https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/

class Solution {
	public:
		vector<long long> sumOfThree(long long num) {
			if (num % 3 != 0){
				return {};
			}
			long long x = num / 3;
			return {x - 1, x, x + 1};
		}
};
