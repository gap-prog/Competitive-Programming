# Open Kattis Problem Link: https://open.kattis.com/problems/4thought

op = [' + ', ' - ', ' * ', ' // ']
vals = {}
for i in op:
    for j in op:
        for k in op:
            v = f'4{i}4{j}4{k}4'
            val = eval(v)
            vals[val] = v.replace('//', '/') + f' = {val}'
for i in range(0, int(input())):
    n = int(input())
    if n < -60 or n > 256 or n not in vals:
        print('no solution')
    else:
        print(vals[n])
