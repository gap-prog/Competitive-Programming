# USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=665

fin = open('cowsignal.in', 'r')
m, n, k = map(int, fin.readline().split())
s = ''
for i in range(m):
    ln = fin.readline()
    nln = ''
    for j in ln:
        if j != '\n':
            nln += j * k
    s += (nln + '\n') * k
fin.close()
fout = open('cowsignal.out', 'w')
fout.write(s)
fout.close()
