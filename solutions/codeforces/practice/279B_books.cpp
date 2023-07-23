// CodeForces Problem Link: https://codeforces.com/contest/279/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t; cin >> n >> t;
  vector<int> a(n); for (int &i: a) cin >> i;

  int ans = 0, curr = 0, l = 0, r = 0;

  while (l < n && r < n) {
    while (r < n) {

      curr += a[r++];
      if (curr > t) {
        curr -= a[--r];
        break;
      }
    }
    ans = max(ans, r - l);
    curr -= a[l++];
  }

  cout << ans << '\n';
  return 0;
}
