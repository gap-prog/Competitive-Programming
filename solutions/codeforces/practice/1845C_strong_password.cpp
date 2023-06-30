// CodeForces Problem Link: https://codeforces.com/contest/1845/problem/C

#include <bits/stdc++.h>
using namespace std;

int ci(char c) { return ((int) (c - '0')); }
char ic(int i) { return ((char) (i + '0')); }

void solve() {
  string s; cin >> s;
  int m; cin >> m;
  string l, r; cin >> l >> r;
  int pos = -1;
  for (int i = 0; i < m; ++i) {
    int new_pos = -1;
    for (int j = ci(l[i]); j <= ci(r[i]); ++j) {
      if (s.find(ic(j), pos + 1) == string::npos) { cout << "YES" << '\n'; return; }
      else new_pos = max(new_pos, (int) s.find(ic(j), pos + 1));
    }
    pos = new_pos;
  }
  cout << "NO" << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
