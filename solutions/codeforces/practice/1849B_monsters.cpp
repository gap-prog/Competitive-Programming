// CodeForces Problem Link: https://codeforces.com/contest/1849/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll n, k; cin >> n >> k;
  vector<pair<ll, ll>> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i].first;
    a[i].second = i;
    a[i].first = (a[i].first % k == 0 ? k : a[i].first % k);
  }
  sort(a.begin(), a.end(), [&](const pair<ll, ll> &p1, pair<ll, ll> &p2) {
    return (p1.first == p2.first ? p1.second < p2.second : p1.first > p2.first);
  });
  for (pair<ll, ll> &i: a) cout << i.second + 1 << ' ';
  cout << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
