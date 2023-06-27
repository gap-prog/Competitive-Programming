// CodeForces Problem Link: https://codeforces.com/problemset/problem/215/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int &i: a) cin >> i;
  int m; cin >> m;
  vector<int> b(m);
  for (int &i: b) cin >> i;
  int MAX = INT_MIN, ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (b[j] % a[i] == 0) {
        int res = b[j] / a[i];
        if (res > MAX) {
          MAX = res;
          ans = 1;
        } else if (res == MAX) ans++;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
