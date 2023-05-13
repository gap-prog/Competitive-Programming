// DMOJ Problem Link: https://dmoj.ca/problem/acsl1p4

#include <bits/stdc++.h>
using namespace std;

const int MAX = 20;
vector<vector<int>> adj(MAX);
bool visited[MAX], cyclic[MAX];

void dfs(int node, int start) {
	visited[node] = true;
	if (node == start) {
		cyclic[node] = true;
		return;
	}
	for (int &i: adj[node]) if (!visited[i]) dfs(i, start);
}

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; ++i) {
		int a, b, sa, sb;
		cin >> a >> b >> sa >> sb;
		a--, b--;
		if (sa > sb) adj[b].push_back(a);
		else adj[a].push_back(b);
	}
	for (int i = 0; i < n; ++i) {
		int start = i;
		fill(begin(visited), end(visited), false);
		for (int &j: adj[i]) dfs(j, start);
	}
	int ans = 0;
	for (int i = 0; i < n; ++i) if (cyclic[i]) ans++;
	cout << ans << endl;
	return 0;
}
