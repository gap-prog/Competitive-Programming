// AtCoder Problem Link: https://atcoder.jp/contests/abc309/tasks/abc309_b

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i = 0; i < n; ++i) {
    string s; cin >> s;
    for (int j = 0; j < n; ++j) {
      if (s[j] == '0') a[i][j] = 0;
      else a[i][j] = 1;
    }
  }
  vector<vector<int>> ans(n, vector<int>(n));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if(i == 0 || j == 0 || i == n - 1 || j == n - 1){
        if(i == 0 && j < n - 1) ans[i][j + 1] = a[i][j];
        if(i < n - 1 && j == n - 1) ans[i + 1][j] = a[i][j];
        if(i == n - 1 && j > 0) ans[i][j - 1] = a[i][j];
        if(i > 0 && j == 0) ans[i - 1][j] = a[i][j];
      } else ans[i][j] = a[i][j];
    }
  }
  for (vector<int> &i: ans) {
    for (int &j: i) cout << j;
    cout << '\n';
  }
  return 0;
}
