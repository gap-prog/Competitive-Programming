// CodeChef Problem Link: https://www.codechef.com/problems/CANCHEF?tab=statement

for _ in range(int(input())):
    x, y = map(int, input().split())
    if (x >= (2 * y) / 15):
        print("YES")
    else:
        print("NO")
