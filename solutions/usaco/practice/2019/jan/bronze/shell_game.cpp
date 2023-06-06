// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=891

#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream fin("shell.in");
	ofstream fout("shell.out");
	vector<int> pos = {0, 1, 2};
	int n; fin >> n;
	vector<int> ans(3);
	for (int i = 0; i < n; ++i) {
		int a, b, g; fin >> a >> b >> g;
		a--; b--; g--;
		swap(pos[a], pos[b]);
		ans[pos[g]]++;
	}
	fout << max({ans[0], ans[1], ans[2]}) << '\n';
	return 0;
}
