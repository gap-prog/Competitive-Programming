// CodeForces Problem Link: https://codeforces.com/contest/1873/problem/C

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10;

int matrix[MAXN][MAXN] = {
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
  {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
  {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
  {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
  {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
  {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
  {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
  {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

void solve() {
  int ans = 0;
  for (int i = 0; i < MAXN; ++i) {
    for (int j = 0; j < MAXN; ++j) {
      char c; cin >> c;
      if (c == 'X')
        ans += matrix[i][j];
    }
  }
  cout << ans << '\n';
  return;
}

int main() {
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}
