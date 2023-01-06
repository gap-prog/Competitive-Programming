# Open Kattis Problem Link: https://open.kattis.com/problems/oddecho

lst = [input() for _ in range(int(input()))][::2]
for i in lst:
    print(i)
