// CodeForces Problem Link: https://codeforces.com/contest/1848/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, k; cin >> n >> m >> k;
  int vx, vy; cin >> vx >> vy;
  bool flag = true;
  while (k--) {
    int fx, fy; cin >> fx >> fy;
    if ((abs(fx - vx) + abs(fy - vy)) % 2 == 0) flag = false;
  }
  cout << (flag ? "YES" : "NO") << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
