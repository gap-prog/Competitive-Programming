// CodeForces Problem Link: https://codeforces.com/contest/1829/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int &i: a) cin >> i;
		int ans = 0, res = 0;
		for (int &i: a) {
			if (i == 1) {
				ans = max(ans, res);
				res = 0;
			} else res++;
		}
		ans = max(ans, res);
		cout << ans << '\n';
	}
	return 0;
}
