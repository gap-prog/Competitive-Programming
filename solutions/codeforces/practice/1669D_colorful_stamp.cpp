// CodeForces Problem Link: https://codeforces.com/contest/1669/problem/D

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s; s += 'W';
	int r = 0, b = 0;
	for (int i = 0; i < n + 1; ++i) {
		if (s[i] == 'W') {
			if (!(r && b) && (b || r)) {
				cout << "NO" << '\n';
				return;
			}
			r = 0; b = 0;
		} else if (s[i] == 'R') r = 1;
		else b = 1;
	}
	cout << "YES" << '\n';
}

int main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
