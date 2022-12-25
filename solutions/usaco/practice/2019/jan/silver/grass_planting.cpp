// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=894

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("planting.in", "r", stdin);
	freopen("planting.out", "w", stdout);
	int n;
	cin >> n;
	vector<int> paths(n);
	for (int i = 1; i < n; ++i) {
		int n1, n2;
		cin >> n1 >> n2;
		paths[n1 - 1]++;
		paths[n2 - 1]++;
	}
	int m = 0;
	for (int &i: paths) {
		m = max(m, i);
	}
	cout << (m + 1) << '\n';
}
