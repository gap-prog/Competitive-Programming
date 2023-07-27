#include <bits/stdc++.h>
using namespace std;

void solve() {
  int b, c, h; cin >> b >> c >> h;
  int ans = min((c + h) * 2 + 1, b * 2 - 1);
  cout << ans << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
