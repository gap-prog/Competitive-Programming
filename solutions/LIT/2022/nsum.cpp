// LIT Problem Link: https://lit.lhsmathcs.org/sample

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  ll sum = 0;
  for (int i = 0; i < n; ++i) {
    int a; cin >> a;
    sum += a;
  }
  cout << sum << '\n';
  return 0;
}
