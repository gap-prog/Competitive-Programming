// CodeForces Problem Link: https://codeforces.com/contest/1676/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX = 200;

int n, m;
vector<vector<ll>> a(MAX, vector<ll>(MAX));

int sum(int row, int column, int rc, int cc) {
  int ret = 0;
  if (row < 0 || column < 0 || row >= n || column >= m) return ret;
  row += rc; column += cc;
  while (row >= 0 && column >= 0 && row < n && column < m) {
    ret += a[row][column];
    row += rc; column += cc;
  }
  return ret;
}

void solve() {
  cin >> n >> m;
  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin >> a[i][j];
  ll ans = INT_MIN;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      ll res = a[i][j];
      res += sum(i, j, 1, 1);
      res += sum(i, j, 1, -1);
      res += sum(i, j, -1, 1);
      res += sum(i, j, -1, -1);
      ans = max(ans, res);
    }
  }
  cout << ans << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
