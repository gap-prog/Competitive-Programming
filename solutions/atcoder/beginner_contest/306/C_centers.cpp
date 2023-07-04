// AtCoder Problem Link: https://atcoder.jp/contests/abc306/tasks/abc306_c

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> ct(n + 1), ans;
  for (int i = 0; i < 3 * n; ++i) {
    int a; cin >> a;
    ct[a]++;
    if (ct[a] == 2) ans.emplace_back(a);
  }
  for (int &i: ans) cout << i << ' ';
  cout << '\n';
  return 0;
}
