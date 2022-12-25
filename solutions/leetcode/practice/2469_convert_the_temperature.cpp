// LeetCode Problem Link: https://leetcode.com/problems/convert-the-temperature/

class Solution {
  public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans(2);
        double kelvin = celsius + 273.15;
        ans[0] = kelvin;
        double fahrenheit = celsius * 1.80 + 32.00;
        ans[1] = fahrenheit;
        return ans;
    }
};
