// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=785

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("outofplace.in");
  ofstream fout("outofplace.out");
  int n; fin >> n;
  vector<int> original(n); for (int &i: original) fin >> i;
  vector<int> sorted = original;
  sort(begin(sorted), end(sorted));
  int ans = 0;
  for (int i = 0; i < n; ++i) if (original[i] != sorted[i]) ans++;
  fout << ans - 1 << '\n';
  return 0;
}
