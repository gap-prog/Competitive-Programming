// CodeForces Problem Link: https://codeforces.com/problemset/problem/275/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> v(3, vector<int>(3)), ans(3, vector<int>(3, 1));
  for (vector<int> &i: v) for (int &j: i) cin >> j;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      if (v[i][j] % 2 != 0) {
        ans[i][j] ^= 1;
        if (i - 1 >= 0) ans[i - 1][j] ^= 1;
        if (i + 1 < 3) ans[i + 1][j] ^= 1;
        if (j - 1 >= 0) ans[i][j - 1] ^= 1;
        if (j + 1 < 3) ans[i][j + 1] ^= 1;
      }
    }
  }
  for (vector<int> &i: ans) {
    for (int &j: i) cout << j;
    cout << '\n';
  }
  return 0;
}
