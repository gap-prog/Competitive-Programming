// AtCoder Problem Link: https://atcoder.jp/contests/abc317/tasks/abc317_a

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h, x; cin >> n >> h >> x;
  for (int i = 0; i < n; ++i) {
    int p; cin >> p;
    if (h + p >= x) {
      cout << i + 1 << '\n';
      break;
    }
  }
  return 0;
}
