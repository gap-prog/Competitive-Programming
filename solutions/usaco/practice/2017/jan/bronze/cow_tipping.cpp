// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=689

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("cowtip.in", "r", stdin);
	freopen("cowtip.out", "w", stdout);
	int n;
	cin >> n;
	vector<vector<char>> v(n, vector<char>(n));
	for (vector<char> &i: v) for (char &j: i) cin >> j;
	int ans = 0;
	for (int i = n - 1; i >=0; --i) {
		for (int j = n - 1; j >= 0; --j) {
			if (v[i][j] == '1') {
				ans++;
				for (int x = 0; x <= i; ++x) {
					for (int y = 0; y <= j; ++y) {
						if (v[x][y] == '0') v[x][y] = '1';
						else v[x][y] = '0';
					}
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
