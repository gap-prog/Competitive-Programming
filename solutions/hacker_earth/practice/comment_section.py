# HackerEarth Problem Link: https://www.hackerearth.com/problem/algorithm/comment-section-a120d784/?source=list_view

n = int(input())
s = input()
comments = [input() for i in range(n)]
count = 0
for i in comments:
    if s.lower() in i.lower():
        count += 1
print(count)
