// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=644

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3001;

int N, M;
vector<int> adj[MAXN];
bool visited[MAXN], closed[MAXN];

void dfs(int node) {
  visited[node] = true;
  for (int &i: adj[node]) if (!visited[i] && !closed[i]) dfs(i);
}

int main() {
  ifstream fin("closing.in");
  ofstream fout("closing.out");
  fin >> N >> M;
  for (int i = 0; i < M; ++i) {
    int barn1, barn2; fin >> barn1 >> barn2;
    adj[barn1].emplace_back(barn2);
    adj[barn2].emplace_back(barn1);
  }
  for (int i = 0; i < N; ++i) {
    int ct = 0;
    for (int i = 1; i <= N; ++i) {
      if (!visited[i] && !closed[i]) {
        dfs(i);
        ct++;
      }
    }
    fout << (ct > 1 ? "NO\n" : "YES\n");
    int barn; fin >> barn;
    closed[barn] = true;
    fill(begin(visited), end(visited), false);
  }
}
