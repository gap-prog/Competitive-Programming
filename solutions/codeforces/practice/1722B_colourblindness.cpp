// CodeForces Problem Link: https://codeforces.com/contest/1722/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  string s1, s2; cin >> s1 >> s2;
  for (int i = 0; i < n; ++i) if (s1[i] == 'B' || s1[i] == 'G') s1[i] = '.';
  for (int i = 0; i < n; ++i) if (s2[i] == 'B' || s2[i] == 'G') s2[i] = '.';
  cout << (s1 == s2 ? "YES\n" : "NO\n");
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
