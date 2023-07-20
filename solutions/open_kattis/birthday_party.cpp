// Open Kattis Problem Link: https://open.kattis.com/problems/birthday

#include <bits/stdc++.h>
using namespace std;

int n, m;

bool visited[101], adj[101][101];

void dfs(int node) {
  visited[node] = true;
  for (int i = 0; i < n; ++i) if (adj[node][i] && !visited[i]) dfs(i);
}

void solve() {
  memset(adj, false, sizeof(adj));
  vector<pair<int, int>> edges;
  for (int i = 0; i < m; ++i) {
    int u, v; cin >> u >> v;
    adj[u][v] = true;
    adj[v][u] = true;
    edges.emplace_back(make_pair(u, v));
  }
  for (pair<int, int> edge: edges) {
    adj[edge.first][edge.second] = false;
    adj[edge.second][edge.first] = false;
    memset(visited, false, sizeof(visited));
    dfs(0);
    for (int i = 0; i < n; ++i) if (!visited[i]) { cout << "YES\n"; return; }
    adj[edge.first][edge.second] = true;
    adj[edge.second][edge.first] = true;
  }
  cout << "No\n";
}

int main() {
  while (cin >> n >> m && (n || m)) solve();
  return 0;
}
