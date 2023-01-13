// GeeksForGeeks Problem Link: https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

/*
Details
-------
STRATEGY: complete search
I/O: problem provided
APPROACH: sort the array and then check if each element has a successor that is 1 greater than its value
*/

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        sort(array.begin(), array.end());
        for (int i = 0; i < n - 1; ++i) {
            if (array[i] != array[i + 1] - 1) {
                return array[i] + 1;
            }
        }
    }
};
