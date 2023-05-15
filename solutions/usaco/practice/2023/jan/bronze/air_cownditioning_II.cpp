// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=1276&lang=en

#include <bits/stdc++.h>
using namespace std;

int ans = INT_MAX;
vector<int> stalls(100);
vector<array<int, 4>> ac(10);

void search(string s, int m) {
	if (s.length() < m) {
		search(s + "0", m);
		search(s + "1", m);
		return;
	}
	int total = 0;
	vector<int> v(100);
	for (int i = 0; i < m; ++i) {
		if (s[i] == '1') {
			for (int j = ac[i][0] - 1; j < ac[i][1]; ++j) v[j] += ac[i][2];
		}
	}
	for (int i = 0; i < 100; ++i) {
		if (s[i] == '1') total += ac[i][3];
	}
	for (int i = 0; i < 100; ++i) if (stalls[i] > v[i]) return;
	ans = min(ans, total);
	return;
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		int s, t, c;
		cin >> s >> t >> c;
		for (int j = s - 1; j < t; ++j) stalls[j] = c;
	}
	ac.resize(m);
	for (int i = 0; i < m; ++i) cin >> ac[i][0] >> ac[i][1] >> ac[i][2] >> ac[i][3];
	search("0", m);
	search("1", m);
	cout << ans << '\n';
	return 0;
}
