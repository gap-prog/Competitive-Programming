// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=616

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("cbarn.in");
  ofstream fout("cbarn.out");
  int n; fin >> n;
  vector<int> r(n); for (int &i: r) fin >> i;
  int ans = INT_MAX;
  for (int i = 0; i < n; ++i) {
    int res = 0;
    for (int j = 0; j < n; ++j) res += j * r[(i + j) % n];
    ans = min(ans, res);
  }
  fout << ans << '\n';
  return 0;
}
