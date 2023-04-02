// AtCoder Problem Link: https://atcoder.jp/contests/abc296/tasks/abc296_c

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
	ll n, x;
	cin >> n >> x;
	x = abs(x);
	ll arr[n];
	for (auto &i: arr) cin >> i;
	sort(arr, arr + n);
	int l = 0, r = 0;
	while (r < n) {
		if (abs(arr[r] - arr[l]) == x) {
			cout << "Yes" << endl;
			return;
		} else if (abs(arr[r] - arr[l]) < x) r++;
		else l++;
	}
	cout << "No" << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
