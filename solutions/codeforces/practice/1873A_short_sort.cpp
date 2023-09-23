// CodeForces Problem Link: https://codeforces.com/contest/1873/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s; cin >> s;
  if (s == "bca" || s == "cab")
    cout << "NO\n";
  else
    cout << "YES\n";
  return;
}

int main() {
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}
