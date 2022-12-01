// LeetCode Problem Link: https://leetcode.com/problems/largest-triangle-area/

class Solution {
	public:
		double largestTriangleArea(vector<vector<int>>& points) {
		double area = 0;
		for (int i = 0; i < points.size(); ++i) {
			for (int j = 0; j < points.size(); ++j) {
				for (int k = 0; k < points.size(); ++k) {
					area = max(area, 0.5 * abs(points[i][0] * points[j][1] + points[j][0] * points[k][1] + points[k][0] * points[i][1] - points[j][0] * points[i][1] - points[k][0] * points[j][1] - points[i][0] * points[k][1]));
				}
			}
		}
		return area;
	}
};
