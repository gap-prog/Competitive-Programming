// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=639

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("diamond.in");
  ofstream fout("diamond.out");
  int n, k; fin >> n >> k;
  vector<int> v(n); for (int &i: v) fin >> i;
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int res = 0;
    for (int j = 0; j < n; ++j) if (v[j] >= v[i] && abs(v[j] - v[i]) <= k) res++;
    ans = max(ans, res);
  }
  fout << ans << '\n';
}
