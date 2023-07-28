// CSES Problem Link: https://cses.fi/problemset/task/1660

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, x; cin >> n >> x;
  vector<ll> a(n); for (ll &i: a) cin >> i;
  int ans = 0, sum = 0, l = 0, r = 0;
  while (r < n) {
    sum += a[r];
    while (sum >= x) {
      if (sum == x) ans++;
      sum -= a[l];
      l++;
    }
    r++;
  }
  cout << ans << '\n';
  return 0;
}
