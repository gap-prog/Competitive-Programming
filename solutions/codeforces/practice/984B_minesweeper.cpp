// CodeForces Problem Link: https://codeforces.com/problemset/problem/984/B

#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

int n, m;

vector<vector<char>> board(MAX, vector<char>(MAX));
vector<vector<int>> ans(MAX, vector<int>(MAX));

void place(int i, int j) {
  if (i > 0) {
    ans[i - 1][j]++;
    if (j > 0)
      ans[i - 1][j - 1]++;
    if (j < m - 1)
      ans[i - 1][j + 1]++;
  }
  if (i < n - 1) {
    ans[i + 1][j]++;
    if (j > 0)
      ans[i + 1][j - 1]++;
    if (j < m - 1)
      ans[i + 1][j + 1]++;
  }
  if (j > 0)
    ans[i][j - 1]++;
  if (j < m - 1)
    ans[i][j + 1]++;
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      cin >> board[i][j];
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      if (board[i][j] == '*')
        place(i, j);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (board[i][j] == '.') {
        if (ans[i][j] != 0) {
          cout << "NO\n";
          return 0;
        }
      } else if (board[i][j] != '*') {
        if (ans[i][j] != board[i][j] - '0') {
          cout << "NO\n";
          return 0;
        }
      }
    }
  }
  cout << "YES\n";
  return 0;
}