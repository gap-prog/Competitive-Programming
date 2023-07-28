// CodeForces PRoblem Link: https://codeforces.com/contest/1619/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll a, s; cin >> a >> s;
  vector<int> b;
  while (s) {
    int p1 = a % 10, p2 = s % 10;
    if (p1 <= p2) b.emplace_back(p2 - p1);
    else {
      s /= 10;
      p2 += 10 * (s % 10);
      if (p1 < p2 && p2 >= 10 && p2 <= 18) b.emplace_back(p2 - p1);
      else {
        cout << -1 << '\n';
        return;
      }
    }
    a /= 10; s /= 10;
  }
  if (a) {
      cout << -1 << '\n';
      return;
  }
  reverse(b.begin(), b.end());
  bool zero = false;
  for (int i = 0; i < (int) b.size(); ++i) {
    if (b[i] != 0 && !zero) zero = true;
    if (b[i] == 0 && !zero) continue;
    cout << b[i];
  }
  cout << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
