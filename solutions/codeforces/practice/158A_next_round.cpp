// CodeForces Problem Link: https://codeforces.com/contest/158/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int &i: v) cin >> i;
	sort(rbegin(v), rend(v));
	int target = v[k - 1], ans = 0;
	for (int i = 0; i < n; ++i) if (v[i] >= target && v[i] > 0) ans++;
	cout << ans << '\n';
	return 0;
}
