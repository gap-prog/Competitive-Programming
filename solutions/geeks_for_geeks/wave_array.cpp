// GeeksForGeeks Problem Link: https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1

/*
Details
-------
STRATEGY: brute force, sorting, swapping
I/O: problem provided
APPROACH: a sorted array (linear conformation) can be transformed to a wave array (sinusoidal conformation) by swaping pairs of adjacent elements. NOTE: an element is not swapped more than once to preserve the wave form.
*/

class Solution{
    public:
      void convertToWave(int n, vector<int>& arr) {
          for (int i = 0; i < n - 1; i += 2) {
              int tmp = arr[i];
              arr[i] = arr[i + 1];
              arr[i + 1] = tmp;
          }
      }
};
