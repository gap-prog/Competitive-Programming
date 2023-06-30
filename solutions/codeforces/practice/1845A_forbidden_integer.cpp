// CodeForces Problem Link: https://codeforces.com/contest/1845/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, x; cin >> n >> k >> x;
  if ((k == 1 && x == 1) || (k == 2 && x == 1 && n % 2 == 1)) cout << "NO" << '\n';
  else {
    cout << "YES" << '\n';
    if (x != 1) {
      cout << n << '\n';
      while (n--) cout << 1 << ' ';
      cout << '\n';
    } else if (x == 1) {
      if (n % 2 == 0) {
        cout << n / 2 << '\n';
        for (int i = 0; i < n / 2; ++i) cout << 2 << ' ';
        cout << '\n';
      } else {
        cout << n / 2 << '\n';
        for (int i = 0; i < n / 2 - 1; ++i) cout << 2 << ' ';
        cout << 3 << '\n';
      }
    }
  }
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
