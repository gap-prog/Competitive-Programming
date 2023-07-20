// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=944

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;

vector<int> x(N), y(N), adj[N];
vector<bool> visited(N);

array<int, 4> arr = {INT_MAX, 0, INT_MAX, 0};

int ans = INT_MAX;

void dfs(int node) {
  visited[node] = true;
  arr[0] = min(arr[0], x[node]);
  arr[1] = max(arr[1], x[node]);
  arr[2] = min(arr[2], y[node]);
  arr[3] = max(arr[3], y[node]);
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
      arr = {INT_MAX, 0, INT_MAX, 0};
      dfs(i);
      ans = min(ans, 2 * (arr[1] - arr[0]) + 2 * (arr[3] - arr[2]));
    }
  }
  fout << ans << '\n';
  return 0;
}
