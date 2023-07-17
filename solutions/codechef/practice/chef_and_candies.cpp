// CodeChef Problem Link: https://www.codechef.com/problems/CHEFCAND

#include <bits/stdc++.h>
using namespace std;

void solve() {
  double n, x; cin >> n >> x;
  int ans = 0;
  ans = ceil((n - x) / 4.0);
  cout << (ans > 0 ? ans : 0) << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
