// CodeForces Problem Link: https://codeforces.com/contest/1873/problem/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll n, x; cin >> n >> x;
  vector<ll> a(n);
  for (ll &i: a) cin >> i;
  int lo = 0, hi = 2e9;
  while (lo < hi) {
    int mid = lo + (hi - lo + 1) / 2;
    ll res = 0;
    for (int i = 0; i < n; ++i)
      res += max(0LL, mid - a[i]);
    if (x >= res)
      lo = mid;
    else
      hi = mid - 1;
  }
  cout << lo << '\n';
  return;
}

int main() {
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}
