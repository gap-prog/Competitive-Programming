// Open Kattis Problem Link: https://open.kattis.com/submissions/11086769

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
  if (visited[node]) return;
  visited[node] = true;
  for (int &i: adj[node]) dfs(i, adj, visited);
  return;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> adj(n);
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  vector<bool> visited(n);
  dfs(0, adj, visited);
  int ct = 0;
  for (int i = 0; i < n; ++i) if (visited[i]) ct++;
  cout << ((ct == n) ? "YES" : "NO") << '\n';
  return 0;
}
