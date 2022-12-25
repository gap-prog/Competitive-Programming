# CodeChef Problem Link: https://www.codechef.com/DEC221D/problems/GCDSUBARRAYS

for _ in range(int(input())):
    n, k = map(int, input().split())
    sum = n * (n + 1) // 2 - 1
    if k < (n * (n - 1)):
        print(-1)
    else:
        for _ in range(n - 1):
            print("1 ", end="")
        print(k - sum)
