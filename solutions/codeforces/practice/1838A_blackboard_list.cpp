// CodeForces Problem Link: https://codeforces.com/contest/1838/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n); for (int &i: a) cin >> i;
  int mx = INT_MIN;
  for (int i = 0; i < n; ++i) {
    if (a[i] < 0) {
      cout << a[i] << '\n';
      return;
    }
    mx = max(mx, a[i]);
  }
  cout << mx << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
}
