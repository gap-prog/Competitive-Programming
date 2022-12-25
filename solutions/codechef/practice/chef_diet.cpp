// CodeChef Problem Link: https://www.codechef.com/problems/DIET

/*
Details
-------
STRATEGY: simulation
I/O: terminal/stdin
APPROACH: simulate the protein intake for each day keeping track of the current stored amount and the amount bought,
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		int c, idx;
		c = idx = 0;
		for (int i = 0; i < n; ++i) {
			c += v[i];
			if (k > c) {
				idx += i + 1;
				break;
			}
			c -= k;
		}
		if (idx == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO " << idx << endl;
		}
	}
}
