// CSES Problem Link: https://cses.fi/problemset/result/5914642/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n;
vector<ll> v(20);

ll solve(int i, ll s1, ll s2) {
	if (i == n) return abs(s1 - s2);
	return min(solve(i + 1, s1 + v[i], s2), solve(i + 1, s1, s2 + v[i]));
}

int main() {
	cin >> n;
	for (ll &i: v) cin >> i;
	ll ans = solve(0, 0, 0);
	cout << ans << endl;
}
