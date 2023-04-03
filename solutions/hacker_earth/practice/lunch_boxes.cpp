// HackerEarth Problem Link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/lunch-boxes-019bf2a5/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<int> v(m);
		for (int &i: v) cin >> i;
		sort(begin(v), end(v));
		int ct = 0;
		for (int i = 0; i < m; ++i) {
			if (n - v[i] >= 0) {
				n -= v[i];
				ct++;
			}
			else break;
		}
		cout << ct << endl;
	}
	return 0;
}
