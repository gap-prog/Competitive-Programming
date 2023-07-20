// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=944

#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int) x.size()

const int N = 1e5 + 1;

vector<bool> visited(N);
vector<vector<int>> components;
vector<int> x(N), y(N), adj[N], current;

void dfs(int node) {
  visited[node] = true;
  current.emplace_back(node);
  for (int &i: adj[node]) if (!visited[i]) dfs(i);
}

int main() {
  ifstream fin("fenceplan.in");
  ofstream fout("fenceplan.out");
  int n, m; fin >> n >> m;
  for (int i = 1; i <= n; ++i) fin >> x[i] >> y[i];
  for (int i = 0; i < m; ++i) {
    int a, b; fin >> a >> b;
    adj[a].emplace_back(b);
    adj[b].emplace_back(a);
  }
  for (int i = 1; i <= n; ++i) {
    if (!visited[i]) {
      current.clear();
      dfs(i);
      components.emplace_back(current);
    }
  }
  int ans = INT_MAX;
  for (vector<int> &i: components) {
    int minx = INT_MAX, maxx = 0, miny = INT_MAX, maxy = 0;
    for (int j = 0; j < sz(i); ++j) {
      minx = min(minx, x[i[j]]);
      maxx = max(maxx, x[i[j]]);
      miny = min(miny, y[i[j]]);
      maxy = max(maxy, y[i[j]]);
    }
    ans = min(ans, 2 * (maxx - minx) + 2 * (maxy - miny));
  }
  fout << ans << '\n';
  return 0;
}
