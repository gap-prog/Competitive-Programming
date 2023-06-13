// CodeForces Problem Link: https://codeforces.com/problemset/problem/1766/A

#include <bits/stdc++.h>
using namespace std;

vector<int> v;

bool check(int num) {
  string res = to_string(num);
  int ret = 0;
  for (int i = 0; i < res.size(); ++i) if (res[i] != '0') ret++;
  if (ret == 1) return true;
  return false;
}

void solve() {
  int n; cin >> n;
  int ans = 0;
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] <= n) ans++;
  }
  cout << ans << '\n';
}

int main() {
  for (int i = 1; i <= 999999; ++i) {
    if (check(i)) v.push_back(i);
  }
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
