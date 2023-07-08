// CodeForces Problem Link: https://codeforces.com/contest/1352/problem/D

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n); for (int &i: a) cin >> i;
  int ans = 0, alice = 0, bob = 0, a_last = 0, b_last = 0, l = 0, r = n - 1;
  while (l <= r) {
    if (ans % 2 == 0) {
      int a_curr = 0;
      while (l <= r && a_curr <= b_last) a_curr += a[l++];
      alice += a_curr;
      a_last = a_curr;
    } else {
      int b_curr = 0;
      while (l <= r && b_curr <= a_last) b_curr += a[r--];
      bob += b_curr;
      b_last = b_curr;
    }
    ans++;
  }
  cout << ans << ' ' << alice << ' ' << bob << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
