// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=1012

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("breedflip.in");
  ofstream fout("breedflip.out");
  int n; fin >> n;
  string a, b; fin >> a >> b;
  int ans = 0;
  for (int i = 0; i < n - 1; ++i) if (a[i] != b[i] && a[i + 1] == b[i + 1]) ans++;
  fout << ans << '\n';
  return 0;
}
