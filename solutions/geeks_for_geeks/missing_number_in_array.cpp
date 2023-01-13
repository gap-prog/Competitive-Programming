// GeeksForGeeks Problem Link: https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

/*
Details
-------
STRATEGY: number theory, complete search
I/O: problem provided
APPROACH: the sum of the first n numbers is n * (n + 1) / 2. The logic, based on this formula, is to subtract every element in the array from the sum, which would result in the missing number.
*/

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int total = n * (n + 1) / 2;
        for (int i = 0; i < n - 1; ++i) {
            total -= array[i];
        }
        return total;
    }
};
