// CodeForces Problem Link: https://codeforces.com/contest/1863/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, q; cin >> n >> a >> q;
  int max_online = a, change = a;
  while (q--) {
    char c; cin >> c;
    if (c == '+') {
      a++;
      change++;
    } else a--;
    max_online = max(max_online, a);
  }
  cout << (max_online == n ? "YES\n" : change >= n ? "MAYBE\n" : "NO\n");
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
