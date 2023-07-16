// CodeForces Problem Link: https://codeforces.com/contest/1834/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  int sum = 0, prod = 1;
  for (int &i: a) {
    cin >> i;
    sum += i;
    prod *= i;
  }
  int ans = 0, idx = 0;
  while (sum < 0) {
    if (a[idx] == -1) ans++;
    a[idx] = 1;
    sum = accumulate(begin(a), end(a), 0);
    prod = accumulate(begin(a), end(a), 1, multiplies<int>());
    idx++;
  }
  ans += (prod == -1 ? 1 : 0);
  cout << ans << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
