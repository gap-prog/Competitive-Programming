// SPOJ Problem Link: https://www.spoj.com/problems/PRIME1/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int m, n; cin >> m >> n;
    bool flag;
    for (int i = m; i <= n; ++i) {
      flag = true;
      for (int j = 2; j * j <= i; ++j) {
        if (i % j == 0) {
          flag = false;
          break;
        }
      }
      if (flag && i != 1)
        cout << i << '\n';
    }
    cout << '\n';
  }
  return 0;
}
