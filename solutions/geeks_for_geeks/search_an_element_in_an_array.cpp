// GeeksForGeeks Problem Link: https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1

/*
Details
-------
STRATEGY: complete search
I/O: problem provided
APPROACH: iterate through the array to find the first index of a given input
*/

class Solution {
    public:
      int search(int arr[], int N, int X) {
          for (int i = 0; i < N; ++i) {
              if (arr[i] == X) {
                  return i;
              }
          }
          return -1;
      }
};
