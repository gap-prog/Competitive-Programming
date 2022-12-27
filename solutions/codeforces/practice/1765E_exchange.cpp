// CodeForces Problem Link: https://codeforces.com/problemset/problem/1765/E

/*
Details
-------
STRATEGY: number theory
I/O: terminal/stdin
APPROACH: if a > b, output will always be 1; otherwise, output will be (n + a - 1) / a
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;
		if (a > b) {
			cout << 1 << endl;
		} else {
			cout << (int) ((n + a - 1) / a) << endl;
		}
	}
	return 0;
}
