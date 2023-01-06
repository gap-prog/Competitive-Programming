# Open Kattis Problem Link: https://open.kattis.com/problems/stopwatch

n = int(input())
t = int(input())
running = True
total = 0
for i in range(1, n):
    num = int(input())
    if not running:
        running = True
        t = num
    else:
        running = False
        total += (num - t)
if running:
    print("still running")
else:
    print(total)
