// CodeForces Problem Link: https://codeforces.com/contest/1822/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  vector<ll> a(n); for (ll &i: a) cin >> i;
  sort(a.begin(), a.end());
  ll mx = LLONG_MIN;
  for (int i = 0; i < n - 1; ++i) mx = max(mx, a[i] * a[i + 1]);
  cout << mx << '\n';
  return;
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
