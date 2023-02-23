# Open Kattis Problem Link: https://open.kattis.com/contests/de4eaf/problems/ladder

import math
n1, n2 = map(int, input().split())
print(math.ceil(n1 / math.sin(math.radians(n2))))
