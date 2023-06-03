// CodeForces Problem Link: https://codeforces.com/contest/456/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<pair<int, int>> v(n);
	for (pair<int, int> &i: v) cin >> i.first >> i.second;
	sort(v.begin(), v.end());
	bool found = false;
	for (int i = 0; i < n - 1; ++i) {
		if (v[i].second > v[i + 1].second) {
			found = true;
			break;
		}
	}
	cout << (found ? "Happy Alex" : "Poor Alex") << '\n';
	return 0;
}
