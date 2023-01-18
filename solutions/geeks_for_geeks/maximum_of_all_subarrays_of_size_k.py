# GeeksForGeeks Problem Link: https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

"""
Details
-------
STRATEGY: sliding window
I/O: problem provided
APPROACH: use a dequeue to model the sliding window algorithm taking the maximum of a subarray and adding it to a maximums list
"""

class Solution:
  def max_of_subarrays(self, arr, n, k):
        final = []
        q = deque()
        for i in range(k):
            while q and arr[i] >= arr[q[-1]]:
                q.pop()
            q.append(i)
        for i in range(k, n):
            final.append(arr[q[0]])
            while q and q[0] <= i - k:
                q.popleft()
            while q and arr[i] >= arr[q[-1]]:
                q.pop()
            q.append(i)
        final.append(arr[q[0]])
        return final
