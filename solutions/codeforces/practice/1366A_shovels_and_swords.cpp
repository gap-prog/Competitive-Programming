// CodeForces Problem Link: https://codeforces.com/problemset/problem/1366/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  ll a, b; cin >> a >> b;
  cout << min({a, b, (a + b) / 3}) << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
