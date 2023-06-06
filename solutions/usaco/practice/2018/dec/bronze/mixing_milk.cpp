// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=855

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("mixmilk.in");
  ofstream fout("mixmilk.out");
  vector<int> c(3), m(3);
  for (int i = 0; i < 3; ++i) cin >> c[i] >> m[i];
  for (int i = 0; i < 100; ++i) {
    int b1 = i % 3, b2 = (i + 1) % 3;
    int change = min(m[b1], c[b2] - m[b2]);
    m[b1] -= change; m[b2] += change;
  }
  for (int &i: m) fout << i << '\n';
  return 0;
}
