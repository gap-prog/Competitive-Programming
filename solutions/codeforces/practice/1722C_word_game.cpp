// CodeForces Problem Link: https://codeforces.com/contest/1722/problem/C

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<vector<string>> v(3, vector<string>(n));
  map<string, int> mp;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> v[i][j];
      mp[v[i][j]]++;
    }
  }
  for (int i = 0; i < 3; ++i) {
    int ans = 0;
    for (int j = 0; j < n; ++j) {
      if (mp[v[i][j]] == 1) ans += 3;
      else if (mp[v[i][j]] == 2) ans++;
    }
    cout << ans << ' ';
  }
  cout << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
