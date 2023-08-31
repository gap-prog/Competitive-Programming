// AtCoder Problem Link: https://atcoder.jp/contests/abc317/tasks/abc317_b

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> N(n); for (int &i: N) cin >> i;
  sort(N.begin(), N.end());
  for (int i = 0; i < n - 1; ++i) {
    if (N[i] + 1 != N[i + 1]) {
      cout << N[i] + 1 << '\n';
      break;
    }
  }
  return 0;
}
