# HackerEarth Problem Link: https://www.hackerearth.com/problem/algorithm/random-keyboard-7fac53bc/?source=list_view

n = int(input())
lst = [set(input()) for i in range(n)]
s = set(input())
found = 0
for i in range(n):
    if s.issubset(lst[i]):
        found = 1
        break
print(found)
