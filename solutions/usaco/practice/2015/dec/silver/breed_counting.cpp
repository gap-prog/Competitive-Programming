// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=572

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("bcount.in");
  ofstream fout("bcount.out");
  int n, q; fin >> n >> q;
  vector<int> h(n + 1), g(n + 1), j(n + 1);
  for (int i = 0; i < n; ++i) {
    h[i + 1] = h[i]; g[i + 1] = g[i]; j[i + 1] = j[i];
    int cow; fin >> cow;
    if (cow == 1) h[i + 1]++;
    else if (cow == 2) g[i + 1]++;
    else j[i + 1]++;
  }
  while (q--) {
    int l, r; fin >> l >> r;
    int h_sum = h[r] - h[l - 1], g_sum = g[r] - g[l - 1], j_sum = j[r] - j[l - 1];
    fout << h_sum << ' ' << g_sum << ' ' << j_sum << '\n';
  }
  return 0;
}
