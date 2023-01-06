# Open Kattis Problem Link: https://open.kattis.com/problems/99problems

n = int(input())
if (n < 100):
    print(99)
else:
    n += 1.1
    print(round(n / 100)* 100 - 1)
