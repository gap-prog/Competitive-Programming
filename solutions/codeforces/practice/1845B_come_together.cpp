// CodeForces Problem Link: https://codeforces.com/contest/1845/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int xa, ya, xb, yb, xc, yc; cin >> xa >> ya >> xb >> yb >> xc >> yc;
  int ans = 1;
  if ((xb > xa && xc > xa) || (xb < xa && xc < xa)) ans += min(abs(xb - xa), abs(xc - xa));
  if ((yb > ya && yc > ya) || (yb < ya && yc < ya)) ans += min(abs(yb - ya), abs(yc - ya));
  cout << ans << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
