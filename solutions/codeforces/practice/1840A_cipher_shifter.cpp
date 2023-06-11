// CodeForces Problem Link: https://codeforces.com/contest/1840/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	string ans = "";
	char curr = s[0];
	for (int i = 1; i < n; ++i) {
		if (s[i] == curr) {
			ans += s[i];
			curr = s[i + 1];
			i++;
		}
	}
	cout << ans << '\n';
}

int main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}