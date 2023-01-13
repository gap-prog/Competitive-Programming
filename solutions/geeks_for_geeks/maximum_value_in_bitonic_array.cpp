// GeeksForGeeks Problem Link: https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1

/*
Details
-------
STRATEGY: brut force, bounds
I/O: problem provided
APPROACH: bound the array from the left and right and calculate the relative maximum of the middle element (of interval).
*/

class Solution{
  public:
      int findMaximum(int arr[], int n) {
          int l = 0;
          int r = n - 1;
          while (l <= r) {
              int m = l + (r - l) / 2;
              if (arr[m] > arr[m - 1] && arr[m] > arr[m + 1]) {
                  return arr[m];
              } else if (arr[m] < arr[m - 1] && arr[m + 1] < arr[m]) {
                  r = m - 1;
              } else if (arr[m] > arr[m - 1] && arr[m + 1] > arr[m]) {
                  l = m + 1;
              }
          }
      }
};
