// CodeForces Problem Link: https://codeforces.com/contest/1512/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  map<int, pair<int, int>> mp;
  for (int i = 0; i < n; ++i) {
    int a; cin >> a;
    mp[a].first++;
    mp[a].second = i;
  }
  for (auto i : mp) if (i.second.first == 1) cout << i.second.second + 1 << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
