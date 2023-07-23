// CodeForces Problem Link: // CodeForces Problem Link: https://codeforces.com/contest/1847/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k; cin >> n >> k;

  vector<int> a(n); for (int &i: a) cin >> i;

  int sum = 0;
  vector<int> sums;
  for (int i = 0; i < n - 1; ++i) {
    int f = abs(a[i + 1] - a[i]);
    sums.emplace_back(f);
    sum += f;
  }

  sort(sums.begin(), sums.end());

  for (int i = 0; i < k - 1; ++i) {
    sum -= sums.back();
    sums.pop_back();
  }

  cout << sum << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();

  return 0;
}
