// CodeChef Problem Link: https://www.codechef.com/problems/AUCTION

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c; cin >> a >> b >> c;
  if (a > b && a > c) cout << "Alice" << '\n';
  else if (b > a && b > c) cout << "Bob" << '\n';
  else cout << "Charlie" << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
