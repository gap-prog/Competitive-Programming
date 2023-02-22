// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=644

#include <bits/stdc++.h>
using namespace std;

const int MAX = 3001;
int n, m, b1, b2, b, ans;
vector<int> adj[MAX];
bool visited[MAX], done[MAX];

void dfs(int node) {
    visited[node] = true;
    for (int &i: adj[node]) {
        if (!done[i] && !visited[i]) {
            dfs(i);
        }
    }
}

void connected() {
    ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (!done[i] && !visited[i]) {
            dfs(i);
            ans++;
        }
    }
    if (ans > 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    freopen("closing.in", "r", stdin);
    freopen("closing.out", "w", stdout);
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> b1 >> b2;
        adj[b1].push_back(b2);
        adj[b2].push_back(b1);
    }
    for (int i = 0; i < n; ++i) {
        connected();
        cin >> b;
        done[b] = true;
        for (int i = 1; i <= n; ++i) {
            visited[i] = false;
        }
    }
    return 0;
}
