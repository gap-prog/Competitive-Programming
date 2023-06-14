// AtCoder Problem Link: https://atcoder.jp/contests/abc305/tasks/abc305_c

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w; cin >> h >> w;
  vector<vector<char>> v(h, vector<char>(w));
  int mnh = INT_MAX, mxh = 0, mnw = INT_MAX, mxw = 0;
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> v[i][j];
      if (v[i][j] == '#') {
        mnh = min(mnh, i);
        mxh = max(mxh, i);
        mnw = min(mnw, j);
        mxw = max(mxw, j);
      }
    }
  }
  int row, column;
  for (int i = mnh; i <= mxh; ++i) {
    for (int j = mnw; j <= mxw; ++j) {
      if (v[i][j] == '.') {
        row = i + 1;
        column = j + 1;
        break;
      }
    }
  }
  cout << row << ' ' << column << '\n';
  return 0;
}
