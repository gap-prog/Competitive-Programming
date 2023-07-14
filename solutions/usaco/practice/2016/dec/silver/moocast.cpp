// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=668

#include <bits/stdc++.h>
using namespace std;

const int N = 25000;

int n;

int dfs(int node, vector<bool> &visited, vector<vector<int>> &adj) {
  visited[node] = true;
  int res = 1;
  for (int i = 0; i < n; ++i) if (!visited[i] && adj[node][i]) res += dfs(i, visited, adj);
  return res;
}

int main() {
  ifstream fin("moocast.in");
  ofstream fout("moocast.out");
  fin >> n;
  vector<array<int, 3>> cow(n);
  for (array<int, 3> &i: cow) fin >> i[0] >> i[1] >> i[2];
  vector<vector<int>> adj(n, vector<int>(n));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int x = abs(cow[i][0] - cow[j][0]), y = abs(cow[i][1] - cow[j][1]);
      int dist = x * x + y * y;
      adj[i][j] = dist <= cow[i][2] * cow[i][2];
    }
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    vector<bool> visited(n);
    ans = max(ans, dfs(i, visited, adj));
  }
  fout << ans << '\n';
  return 0;
}
