// CodeForces Problem Link: https://codeforces.com/contest/1791/problem/D

#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((int) size(x))

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> a, b;
    a[s[0]]++; for (int i = 1; i < n; ++i) b[s[i]]++;
    int ans = sz(a) + sz(b);
    for (int i = 1; i < n - 1; ++i) {
      a[s[i]]++; b[s[i]]--;
      if (!b[s[i]]) b.erase(s[i]);
      ans = max(ans, sz(a) + sz(b));
    }
    cout << ans << '\n';
  }
  return 0;
}
