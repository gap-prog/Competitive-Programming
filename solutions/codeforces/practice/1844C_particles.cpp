// CodeForces Problem Link: https://codeforces.com/problemset/problem/1844/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n; cin >> n;
  vector<ll> c(n); for (ll &i: c) cin >> i;

  ll neg = 0;
  for (int i = 0; i < n; ++i) neg += (c[i] < 0);
  if (neg == n) {
    cout << *max_element(c.begin(), c.end()) << '\n';
    return;
  }

  ll even = 0, odd = 0;
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0) even += max(c[i], 0LL);
    else odd += max(c[i], 0LL);
  }

  cout << max(even, odd) << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();

  return 0;
}
