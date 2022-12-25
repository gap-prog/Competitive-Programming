// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=736

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<vector<char>> s(n, vector<char>(m));
	vector<vector<char>> p(n, vector<char>(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> s[i][j];
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> p[i][j];
		}
	}
	int indx = 0;
	for (int i = 0; i < m; ++i) {
		bool d = false;
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				if (s[j][i] == p[k][i]) {
					d = true;
					break;
				}
			}
		}
		if (!d) {
			indx++;
		}
	}
	cout << indx << endl;
}
