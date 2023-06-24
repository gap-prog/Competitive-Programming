// CodeForces Problem Link: https://codeforces.com/contest/1842/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  ll n, m; cin >> n >> m;
  ll s1 = 0, s2 = 0;
  vector<ll> a(n); for (ll &i: a) { cin >> i; s1 += i; }
  vector<ll> b(m); for (ll &i: b) { cin >> i; s2 += i; }
  cout << (s1 == s2 ? "Draw" : ((s1 > s2) ? "Tsondu" : "Tenzing")) << '\n';
}


int main() {
  ll t; cin >> t;
  while (t--) solve();
  return 0;
}
