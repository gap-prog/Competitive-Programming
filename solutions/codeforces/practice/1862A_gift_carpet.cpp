// CodeForces Problem Link: https://codeforces.com/contest/1862/problem/A

#include <bits/stdc++.h>
using namespace std;

string NAME = "vika";

void solve() {
  int n, m; cin >> n >> m;
  vector<vector<char>> carpet(n, vector<char>(m)); for (vector<char> &i: carpet) for (char &j: i) cin >> j;
  int curr = 0;
  for (int i = 0; i < m; ++i) {
    bool found = false;
    for (int j = 0; j < n; ++j) {
      if (carpet[j][i] == NAME[curr]) {
        curr++;
        found = true;
      }
      if (found) break;
    }
  }
  cout << (curr == 4 ? "YES\n" : "NO\n");
  return;
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
