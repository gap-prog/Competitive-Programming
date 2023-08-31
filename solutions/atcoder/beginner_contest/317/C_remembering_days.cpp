// AtCoder Problem Link: https://atcoder.jp/contests/abc317/tasks/abc317_c

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10;
vector<bool> visited(MAXN);
vector<vector<int>> length(MAXN, vector<int>(MAXN));

int n, m, ans;

void dfs(int node, int curr) {
  visited[node] = true;
  ans = max(ans, curr);
  for (int i = 0; i < n; ++i)
    if (!visited[i] && length[i][node])
      dfs(i, curr + length[i][node]);
  visited[node] = false;
  return;
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; ++i) {
    int a, b, c; cin >> a >> b >> c;
    a--; b--;
    length[a][b] = length[b][a] = c;
  }
  for (int i = 0; i < n; ++i) dfs(i, 0);
  cout << ans << '\n';
  return 0;
}
