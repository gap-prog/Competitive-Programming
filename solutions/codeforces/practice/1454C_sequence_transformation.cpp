// CodeForces Problem Link: https://codeforces.com/problemset/problem/1454/C

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n); for (int &i: a) cin >> i;
  a.resize(unique(begin(a), end(a)) - begin(a));
  vector<int> ct(n + 1, 1);
  for (int i = 0; i < (int) size(a); ++i) ct[a[i]]++;
  ct[a[0]]--; ct[a[n - 1]]--;
  int MIN = INT_MAX;
  for (int i = 0; i < (int) size(a); ++i) MIN = min(MIN, ct[a[i]]);
  cout << MIN << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
