// CodeForces Problem Link: https://codeforces.com/contest/1619/problem/A

#include <bits/stdc++.h>
using namespace std;
#define sz(x) x.size()

void solve() {
  string s; cin >> s;
  bool flag = true;
  if (sz(s) % 2 == 0) {
    string s1 = s.substr(0, sz(s) / 2), s2 = s.substr(sz(s) / 2, sz(s) / 2 + 1);
    cout << (s1 == s2 ? "YES\n" : "NO\n");
  } else cout << "NO\n";
}

int main() {
  int t; cin >> t;
  while (t--) solve();
}
