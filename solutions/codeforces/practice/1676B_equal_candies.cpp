// CodeForces Problem Link: https://codeforces.com/contest/1676/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  vector<ll> a(n); for (ll &i: a) cin >> i;
  ll ans = 0, mn = *min_element(a.begin(), a.end());
  for (int i = 0; i < n; ++i) {
    if (a[i] == mn) continue;
    ans += a[i] - mn;
  }
  cout << ans << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
