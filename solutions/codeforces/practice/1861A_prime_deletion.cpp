// CodeForces Problem Link: https://codeforces.com/contest/1861/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s; cin >> s;
  int idx1 = 0, idx3 = 0;
  for (int i = 0; i < (int) s.size(); ++i) {
    if (s[i] == '1') idx1 = i;
    else if (s[i] == '3') idx3 = i;
  }
  cout << (idx1 < idx3 ? "13\n" : "31\n");
  return;
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
