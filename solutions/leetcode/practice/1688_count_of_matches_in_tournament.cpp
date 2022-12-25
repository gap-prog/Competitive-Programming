// LeetCode Problem Link: https://leetcode.com/problems/count-of-matches-in-tournament/

class Solution {
	public:
		int numberOfMatches(int n) {
			int matches = 0;
			while(n > 1) {
				matches += n / 2;
				n = (n + 1) / 2;
			}
			return matches;
		}
};
