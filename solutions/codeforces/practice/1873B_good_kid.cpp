// CodeForces Problem Link: https://codeforces.com/contest/1873/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  for (int &i: a) cin >> i;
  sort(a.begin(), a.end());
  ++a[0];
  int ans = 1;
  for (int i = 0; i < n; ++i)
    ans *= a[i];
  cout << ans << '\n';
  return;
}

int main() {
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}
