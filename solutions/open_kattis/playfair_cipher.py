# Open Kattis Problem Link: https://open.kattis.com/problems/playfair

from collections import deque


def ck(kp):
    ac = {chr(i + 97) for i in range(26)}
    ac.remove('q')
    keys = []
    for i in kp:
        if i == ' ' or i not in ac:
            continue
        keys.append(i)
        ac.remove(i)
    keys.extend(sorted(ac))
    m = [keys[i: i + 5] for i in range(0, len(keys), 5)]  
    st = {}
    for i, j in enumerate(m):
        for k, l in enumerate(j):
            st[l] = (i, k)
    return m, st


def cipher(s, k, d):
    DQ = deque(s.replace(' ', ''))
    res = []
    while DQ:
        query = DQ.popleft()
        if not DQ:
            DQ.appendleft('x')
            DQ.appendleft(query)
            continue
        ret = DQ.popleft()
        if query == ret:
            DQ.appendleft(ret)
            DQ.appendleft('x')
            DQ.appendleft(query)
            continue
        query1, query2 = d[query]
        ret1, ret2 = d[ret]
        if query1 == ret1:
            res.append(k[query1][(query2 + 1) % 5].upper())
            res.append(k[ret1][(ret2 + 1) % 5].upper())
        elif query2 == ret2:
            res.append(k[(query1 + 1) % 5][query2].upper())
            res.append(k[(ret1+1) % 5][ret2].upper())
        else:
            res.append(k[query1][ret2].upper())
            res.append(k[ret1][query2].upper())
    return ''.join(res)


k, d = ck(input())
print(cipher(input(), k, d))
