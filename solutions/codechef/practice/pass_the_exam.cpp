// CodeChef Problem Link: https://www.codechef.com/problems/PASSTHEEXAM

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c; cin >> a >> b >> c;
  if (a + b + c >= 100 && a >= 10 && b >= 10 && c >= 10) {
    cout << "PASS" << '\n';
    return;
  }
  cout << "FAIL" << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
