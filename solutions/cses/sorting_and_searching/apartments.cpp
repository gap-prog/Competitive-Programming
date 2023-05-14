// CSES Problem Link: https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n), b(m);
	for (int &i: a) cin >> i; for (int &i: b) cin >> i;
	sort(begin(a), end(a)); sort(begin(b), end(b));
	int i = 0, j = 0, ans = 0;
	while (i < n && j < m) {
		if (abs(a[i] - b[j]) <= k) {
			i++; j++; ans++;
		} else {
			if (a[i] - b[j] > k) j++;
			else i++;
		}
	}
	cout << ans << '\n';
	return 0;
}
