// CodeForces Problem Link: https://codeforces.com/contest/1669/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		mp[a]++;
	}
	for (auto &i: mp) {
		if (i.second >= 3) {
			cout << i.first << '\n';
			return;
		}
	}
	cout << -1 << '\n';
}

int main() {
	int t; cin >> t;
	while (t--) solve();
}
