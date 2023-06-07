// CodeChef Problem Link: https://www.codechef.com/problems/REMOSET

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MOD = 1e9 + 7;

int modexp(int b, int e) {
  int res = 1;
  while (e > 0) {
    if (e % 2 == 1) res = ((ll) res * b) % MOD;
    b = ((ll) b * b) % MOD;
    e /= 2;
  }
  return res;
}

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> v(n);
    for (int &i: v) cin >> i;
    int odd = 0, even = 0;
    for (int i = 0; i < n; ++i) {
      if (v[i] % 2 == 0) even++;
      else odd++;
    }
    int ans;
    if (odd == 0) ans = (modexp(2, even) - 1 + MOD) % MOD;
    else ans = modexp(2, even);
    cout << ans << '\n';
  }
  return 0;
}
