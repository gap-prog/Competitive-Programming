// CodeForces Problem Link: https://codeforces.com/problemset/problem/34/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(n); for (int &i: a) cin >> i;
  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] >= 0 || m == 0) break;
    ans += abs(a[i]);
    m--;
  }
  cout << ans << '\n';
  return 0;
}
