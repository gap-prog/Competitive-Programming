// CodeForces Problem Link: https://codeforces.com/contest/1624/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  int mn = INT_MAX, mx = INT_MIN;
  for (int i = 0; i < n; ++i) {
    int a; cin >> a;
    mn = min(mn, a);
    mx = max(mx, a);
  }
  cout << (mx - mn) << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
