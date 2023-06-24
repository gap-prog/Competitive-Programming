// CodeForces Problem Link: https://codeforces.com/contest/1842/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n, x; cin >> n >> x;
  vector<vector<ll>> v(3, vector<ll>(n));
  for (int i = 0; i < 3; ++i) for (int j = 0; j < n; ++j) cin >> v[i][j];
  ll res = 0;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < n; ++j) {
      if ((v[i][j] | x) == x) res |= v[i][j];
      else break;
    }
  }
  cout << (res == x ? "YES" : "NO") << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
