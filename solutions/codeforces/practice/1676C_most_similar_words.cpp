// CodeForces Problem Link: https://codeforces.com/contest/1676/problem/C

#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) { return c - '0'; }

void solve() {
  int n, m; cin >> n >> m;
  vector<string> v(n); for (string &i: v) cin >> i;
  int ans = INT_MAX;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      int res = 0;
      for (int k = 0; k < m; ++k) res += abs(ctoi(v[i][k]) - ctoi(v[j][k]));
      ans = min(ans, res);
    }
  }
  cout << ans << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
