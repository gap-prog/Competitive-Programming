// CodeChef Problem Link: https://www.codechef.com/problems/REMOVEMUL

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  ll n, m; cin >> n >> m;
  ll s1 = ((n * (n + 1)) / 2), s2 = 0;
  for (int i = 0; i < m; ++i) {
    ll s; cin >> s;
    s2 += s;
  }
  cout << (s1 - s2) << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
