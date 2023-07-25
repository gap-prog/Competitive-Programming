// CodeForces Problem Link: https://codeforces.com/contest/1851/problem/E

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX = 2e5;

vector<int> adj[MAX];
vector<bool> visited(MAX);
vector<ll> c(MAX), cost(MAX);

void dfs(int node) {
  if ((int) adj[node].size() == 0) {
    cost[node] = c[node];
    return;
  }
  visited[node] = true;
  for (int &i: adj[node]) {
    if (!visited[i]) dfs(i);
    cost[node] += cost[i];
  }
  cost[node] = min(cost[node], c[node]);
}

void solve() {
  int n, k; cin >> n >> k;
  for (int i = 0; i < n; ++i) cin >> c[i];
  for (int i = 0; i < k; ++i) {
    int p; cin >> p; p--;
    c[p] = 0;
  }
  for (int i = 0; i < n; ++i) {
    int m; cin >> m;
    for (int j = 0; j < m; ++j) {
      int e; cin >> e; e--;
      adj[i].emplace_back(e);
    }
  }
  for (int i = 0; i < n; ++i) if (!visited[i]) dfs(i);
  for (int i = 0; i < n; ++i) cout << cost[i] << ' ';
  cout << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) {
    fill(c.begin(), c.end(), 0);
    fill(cost.begin(), cost.end(), 0);
    fill(visited.begin(), visited.end(), false);
    solve();
  }
  return 0;
}
