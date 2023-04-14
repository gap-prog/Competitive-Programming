// CSES Problem Link: https://cses.fi/problemset/task/1666/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<bool> visited(100001);
vector<vector<int>> adj(100001);
vector<pair<int, int>> res;

void dfs(int n) {
    if (visited[n]) return;
    visited[n] = true;
    for (auto &i: adj[n]) dfs(i);
}

int main() {
    ll n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            adj[1].push_back(i);
            adj[i].push_back(1);
            res.push_back({1, i});
            dfs(i);
        }
    }
    cout << res.size() << endl;
    for (auto &i: res) cout << i.first << " " << i.second << endl;
    return 0;
}
