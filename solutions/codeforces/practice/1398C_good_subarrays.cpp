// CodeForces Problem Link: https://codeforces.com/contest/1398/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int ctoi(char c) { return c - '0'; }

void solve() {
  int n; cin >> n;
  string s; cin >> s;
  vector<int> a; for (int i = 0; i < n; ++i) a.emplace_back(ctoi(s[i]));
  vector<ll> prefix(n + 1);
  for (int i = 1; i <= n; ++i) prefix[i] = prefix[i - 1] + a[i - 1];
  map<int, ll> sums;
  for (int i = 0; i <= n; ++i) sums[prefix[i] - i]++;
  ll ans = 0;
  for (const auto &[_, sum] : sums) ans += sum * (sum - 1) / 2;
  cout << ans << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
