// AtCoder Problem Link: https://atcoder.jp/contests/abc306/tasks/abc306_b

#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

int main() {
  ull sum = 0;
  for (int i = 0; i < 64; ++i) {
    ull num; cin >> num;
    sum += num << i;
  }
  cout << sum << '\n';
}
