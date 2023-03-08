# Open Kattis Problem Link: https://open.kattis.com/problems/a1paper

def s(n):
    r = 0.70710678118
    lst = [(0.42044820762, 0.5946035575)]
    while len(lst) < n:
        lst.append((lambda i: (r * i, i))(lst[-1][0]))
    return lst

def m(lst, s):
    n = 2 - lst[0]
    for i, j in enumerate(lst[1:]):
        if j >= 2 * n:
            lst[i + 1] -= 2 * n
            lst[i] += n
            return True, n * s[i + 1][1]
        else:
            n = 2 * n - j
    return False, 0.0
    
def t(n, lst):
    l = 0.0
    sd = s(n - 1)
    while lst and lst[0] < 2:
        r1, r2 = m(lst, sd)
        l += r2
        if not r1:
            break
    return -1.0 if not lst or lst[0] < 2 else sd[0][1] + l

def tr(n, lst):
    while lst and lst[-1] == 0:
        n -= 1
        lst.pop()
    return n
    
n = int(input())
lst = list(map(int, input().split()))
n = tr(n, lst)
tp = t(n, lst)
print('impossible' if tp < 0 else tp)
