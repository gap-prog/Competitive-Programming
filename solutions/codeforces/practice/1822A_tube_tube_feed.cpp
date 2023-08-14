// CodeForces Problem Link: https://codeforces.com/contest/1822/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, t; cin >> n >> t;
  vector<int> a(n + 1), b(n + 1);
  for (int i = 1; i <= n; ++i) cin >> a[i];
  for (int i = 1; i <= n; ++i) cin >> b[i];
  int idx = -1, val = 0;
  for (int i = 1; i <= n; ++i) {
    if (a[i] + i - 1 <= t) {
      if (b[i] > val) {
        idx = i;
        val = b[i];
      }
    }
  }
  cout << idx << '\n';
  return;
}

int main() {
  int q; cin >> q;
  while (q--) solve();
  return 0;
}
