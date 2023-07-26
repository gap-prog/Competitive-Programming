// CodeForces Problem Link: https://codeforces.com/contest/1676/problem/A

#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) { return (int) c - '0'; }

void solve() {
  string s; cin >> s;
  int sum1 = ctoi(s[0]) + ctoi(s[1]) + ctoi(s[2]);
  int sum2 = ctoi(s[3]) + ctoi(s[4]) + ctoi(s[5]);
  cout << (sum1 == sum2 ? "YES\n" : "NO\n");
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
