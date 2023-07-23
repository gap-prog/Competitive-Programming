// CodeForces Problem Link: https://codeforces.com/problemset/problem/1846/D

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

void solve() {
  int n; cin >> n;
  ld d, h; cin >> d >> h;
  vector<ll> y(n); for (ll &i: y) cin >> i;
  ld ans = (d * h) / 2.0;
  for (int i = 0; i < n - 1; ++i) {
    if (y[i] + h <= y[i + 1]) ans += (d * h) / 2.0;
    else {
      ld diff = y[i + 1] - y[i];
      ld ratio = (h - diff) / h;
      ans += diff * ((d + d * ratio) / 2.0);
    }
  }
  cout << fixed << setprecision(8) << ans << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
