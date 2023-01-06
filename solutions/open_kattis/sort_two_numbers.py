# Open Kattis Problem Link: https://open.kattis.com/problems/sorttwonumbers

a, b = map(int, input().split())
if a > b:
    print(f'{b} {a}')
else:
    print(f'{a} {b}')
