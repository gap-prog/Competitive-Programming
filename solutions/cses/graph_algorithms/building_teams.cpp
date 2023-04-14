// CSES Problem Link: https://cses.fi/problemset/result/5888346/

#include <bits/stdc++.h>
using namespace std;

bool res = false;
int color[100001];
vector<int> adj[200001];

void dfs(int node, int code) {
        if (color[node] != 0) return;
        color[node] = code;
        int ocode = (code == 1) ? 2 : 1;
        for (auto &i: adj[node]) {
                if (color[i] == code) {
                        res = true;
                        return;
                }
                if (color[i] == 0) dfs(i, ocode);
        }
        return;
}

int main() {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; ++i) {
                int a, b;
                cin >> a >> b;
                adj[a].push_back(b);
                adj[b].push_back(a);
        }
        for (int i = 1; i <= n; ++i) {
                if (color[0] == 0) {
                        dfs(i, 1);
                }
        }
        if (res) cout << "IMPOSSIBLE" << endl;
        else {
                for (int i = 1; i <= n; ++i) cout << color[i] << ' ';
        }
        cout << endl;
        return 0;
}
