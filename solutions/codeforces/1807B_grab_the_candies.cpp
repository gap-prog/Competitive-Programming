// CodeForces Problem Link: https://codeforces.com/contest/1807/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  int even = 0, odd = 0;
  for (int i = 0; i < n; ++i) {
    int a; cin >> a;
    if (a % 2 == 0)
      even += a;
    else
      odd += a;
  }
  cout << (even > odd ? "YES\n" : "NO\n");
  return;
}

int main() {
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}
