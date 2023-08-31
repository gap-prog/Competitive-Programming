// CodeForces Problem Link: https://codeforces.com/contest/1861/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string a, b; cin >> a >> b;
  if (a == b) {
    cout << "YES\n";
    return;
  }
  int len = (int) a.size();
  assert(len == (int) b.size());
  for (int i = 0; i < len; ++i) {
    if (a[i] == b[i]) {
      for (int j = i + 1; j < len; ++j) {
        if (a[j] != b[j]) break;
        if (a[i] == '0' && b[i] == '0' && a[j] == '1' && b[j] == '1') {
          cout << "YES\n";
          return;
        }
      }
    }
  }
  cout << "NO\n";
  return;
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
