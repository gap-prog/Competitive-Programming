// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1203

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  ll n; cin >> n;
  vector<ll> a(n);
  ll sum = 0;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    sum += a[i];
  }
  for (int i = 0; i <= sum; ++i) {
    if (i != 0 && sum % i != 0) continue;
    ll curr = 0;
    bool flag = true;
    for (ll &j: a) {
      curr += j;
      if (curr > i) {
        flag = false;
        break;
      } else if (curr == i) curr = 0;
    }
    if (flag) {
      cout << (i == 0 ? 0 : (n - (sum / i))) << '\n';
      return;
    }
  }
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
