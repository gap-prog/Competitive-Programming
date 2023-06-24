// CodeForces Problem Link: https://codeforces.com/contest/1842/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n; cin >> n;
  vector<ll> a(n), dp(n + 1, INT_MIN);
  for (ll &i: a) cin >> i;
  dp[0] = 0;
  for (int i = 0; i < n; ++i) {
    ll num = dp[a[i]];
    dp[a[i]] = max(dp[a[i]], dp[0] - i);
    dp[0] = max(dp[0], num + i + 1);
  }
  cout << dp[0] << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
