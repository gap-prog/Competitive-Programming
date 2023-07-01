// AtCoder Problem Link: https://atcoder.jp/contests/abc156/tasks/abc156_c

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n); for (int &i: x) cin >> i;
  int ans = INT_MAX;
  for (int i = 1; i <= 100; ++i) {
    int res = 0;
    for (int j = 0; j < n; ++j) {
      res += (x[j] - i) * (x[j] - i);
    }
    ans = min(ans, res);
  }
  cout << ans << '\n';
  return 0;
}
