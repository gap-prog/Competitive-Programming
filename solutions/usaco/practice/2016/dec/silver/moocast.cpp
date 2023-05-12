// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=668

#include <bits/stdc++.h>
using namespace std;

int dfs(int cow, vector<bool> &visited, vector<vector<bool>> &transmit) {
	if (visited[cow]) return 0;
	visited[cow] = true;
	int ret = 1;
	for (int i = 0; i < transmit[cow].size(); ++i) {
		if (transmit[cow][i]) {
			ret += dfs(i, visited, transmit);
		}
	}
	return ret;
}

int main() {
	freopen("moocast.in", "r", stdin);
	freopen("moocast.out", "w", stdout);
	int n;
	cin >> n;
	vector<int> x(n), y(n), p(n);
	for (int i = 0; i < n; ++i) cin >> x[i] >> y[i] >> p[i];
	vector<vector<bool>> transmit(n, vector<bool>(n));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int dist_squared = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
			if (dist_squared <= p[i] * p[i]) transmit[i][j] = true;
		}
	}
	int ans = 1;
	for (int i = 0; i < n; ++i) {
		vector<bool> visited(n);
		ans = max(ans, dfs(i, visited, transmit));
	}
	cout << ans << '\n';
	return 0;
}
