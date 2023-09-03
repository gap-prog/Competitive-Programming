// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=669

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000;

vector<bool> visited(MAXN);
vector<int> x(MAXN), y(MAXN);

int n;

int dist(int node1, int node2) {
  int xdist = x[node2] - x[node1], ydist = y[node2] - y[node1];
  return (xdist * xdist) + (ydist * ydist);
}

bool check(int X) {
  visited.clear();
  visited.resize(n);
  int root = 0;
  queue<int> q;
  q.push(root);
  visited[root] = true;
  while (!q.empty()) {
    int node = q.front();
    q.pop();
    for (int i = 0; i < n; ++i) {
      if (!visited[i] && dist(node, i) <= X) {
        q.push(i);
        visited[i] = true;
      }
    }
  }
  for (int i = 0; i < n; ++i)
    if (!visited[i])
      return false;
  return true;
}

int main() {
  ifstream fin("moocast.in");
  ofstream fout("moocast.out");
  fin >> n;
  for (int i = 0; i < n; ++i)
    fin >> x[i] >> y[i];
  int ans, lo = 1, hi = INT_MAX;
  while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (check(mid)) {
      ans = mid;
      hi = mid - 1;
    } else
      lo = mid + 1;
  }
  fout << ans << '\n';
  return 0;
}
