# USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=940

fin = open('factory.in', 'r')
n = int(fin.readline())
s1, s2 = set(), set()
for _ in range(0, n - 1):
    ln = fin.readline()
    incoming, outgoing = ln.split()
    s1.add(incoming)
    s2.add(outgoing)
fin.close()
fout = open('factory.out', 'w')
lst = list(s2.difference(s1))
if len(lst) > 1 or n == 1:
    fout.write(-1)
else:
    fout.write(lst[0])
fout.close()
