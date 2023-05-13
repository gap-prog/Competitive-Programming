#include <bits/stdc++.h>
using namespace std;

struct Cow {
	int x, y;
	bool visited;
	vector<int> adj;
};

void dfs(int cow, vector<Cow> &cows, vector<int> &network) {
	cows[cow].visited = true;
	network.push_back(cow);
	for (int &i: cows[cow].adj) if (!cows[i].visited) dfs(i, cows, network);
}

int main() {
	freopen("fenceplan.in", "r", stdin);
	freopen("fenceplan.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<Cow> cows(n);
	for (Cow &i: cows) {
		cin >> i.x >> i.y;
		i.visited = false;
	}
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		cows[a].adj.push_back(b);
		cows[b].adj.push_back(a);
	}
	vector<vector<int>> moonet;
	for (int i = 0; i < n; ++i) {
		if (!cows[i].visited) {
			vector<int> network;
			dfs(i, cows, network);
			moonet.push_back(network);
		}
	}
	int ans = INT_MAX;
	for (vector<int> &i: moonet) {
		int minx = INT_MAX, maxx = 0, miny = INT_MAX, maxy = 0;
		for (int &j: i) {
			minx = min(minx, cows[j].x), maxx = max(maxx, cows[j].x);
			miny = min(miny, cows[j].y), maxy = max(maxy, cows[j].y);
		}
		ans = min(ans, 2 * (maxx - minx) + 2 * (maxy - miny));
	}
	cout << ans << endl;
	return 0;
}
