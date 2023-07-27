// CodeForces Problem Link: https://codeforces.com/contest/1285/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  vector<ll> a(n);
  ll yasser = 0, adel = 0;
  for (ll &i : a) {
    cin >> i;
    yasser += i;
  }
  for (int i = 0; i < n - 1; ++i) {
    adel += a[i];
    if (adel >= yasser || adel <= 0) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
