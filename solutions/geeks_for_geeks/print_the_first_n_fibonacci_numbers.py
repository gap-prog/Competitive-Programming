# GeeksForGeeks Problem Link: https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1

"""
Details
-------
STRATEGY: dynamic programming, memoization
I/O: problem provided
APPROACH: The fibonacci sequence is a sequence of numbers whose nth term is the sum of its previous two terms. TO avoid time complexity errors, rather than using recursion, it is possible to store all the values calculated in an array and access it when required.
"""

class Solution:
    def printFibb(self,n):
        fib = [0, 1]
        for i in range(2, n + 1):
            fib.append(fib[i - 1] + fib[i - 2])
        del fib[0]
        return fib;
