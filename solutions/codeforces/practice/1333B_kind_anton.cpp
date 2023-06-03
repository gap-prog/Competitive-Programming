// CodeForces Problem Link: https://codeforces.com/problemset/problem/1333/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n);
	for (int &i: a) cin >> i;
	for (int &i: b) cin >> i;
	bool pos_1 = false, neg_1 = false;
	for (int i = 0; i < n; ++i) {
		if ((a[i] > b[i] && !neg_1) || (a[i] < b[i] && !pos_1)) {
			cout << "NO" << '\n';
			return;
		}
		if (a[i] == -1) neg_1 = true;
		if (a[i] == 1) pos_1 = true;
	}
	cout << "YES" << '\n';
}

int main() {
	int t; cin >> t;
	while (t--) solve();
}
