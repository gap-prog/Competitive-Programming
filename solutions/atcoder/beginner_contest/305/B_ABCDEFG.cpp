// AtCoder Problem Link: https://atcoder.jp/contests/abc305/tasks/abc305_b

#include <bits/stdc++.h>
using namespace std;

vector<int> v = {0, 3, 4, 8, 9, 14, 23};

int main() {
  char p, q; cin >> p >> q;
  int ans = v[q - 'A'] - v[p - 'A'];
  cout << abs(ans) << '\n';
  return 0;
}
