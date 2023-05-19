// CodeForces Problem Link: https://codeforces.com/contest/1833/problem/D

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int &i: v) cin >> i;
		if (n == 1) {
			cout << 1 << '\n';
			continue;
		}
		int r = 1;
		for (int i = 1; i < n; ++i) {
			if (v[i] > v[r]) {
				r = i;
			}
		}
		if (r != n - 1) r--;
		int l = r;
		while ((l - 1) > 0) {
			if (v[l - 1] > v[0]) {
				l--;
			}
			else break;
		}
		for (int i = r + 1; i < n; ++i) {
			cout << v[i] << ' ';
		}
		for (int i = r; i >= l; --i) {
			cout << v[i] << ' ';
		}
		for (int i = 0; i < l; ++i) {
			cout << v[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
