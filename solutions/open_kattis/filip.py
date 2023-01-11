# Open Kattis Problem Link: https://open.kattis.com/problems/filip

a, b = map(str, input().split())
a, b = int(a[::-1]), int(b[::-1])
print(a if a > b else b)
