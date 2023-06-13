// CSES Problem Link: https://cses.fi/problemset/task/1640

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x; cin >> n >> x;
  vector<int> a(n + 1); for (int i = 1; i <= n; ++i) cin >> a[i];
  map<int, int> m;
  string ans = "IMPOSSIBLE";
  for (int i = 1; i <= n; ++i) {
    if (m.count(x - a[i])) {
      ans = to_string(i) + " " + to_string(m[x - a[i]]);
      break;
    }
    m[a[i]] = i;
  }
  cout << ans << '\n';
  return 0;
}
