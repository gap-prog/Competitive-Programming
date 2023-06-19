// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=615

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("pails.in");
  ofstream fout("pails.out");
  int x, y, m; fin >> x >> y >> m;
  int ans = 0;
  for (int i = 0; i * x <= m; ++i) for (int j = 0; i * x + j * y <= m; ++j) ans = max(ans, i * x + j * y);
  fout << ans << '\n';
  return 0;
}
