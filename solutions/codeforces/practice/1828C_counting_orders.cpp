// CodeForces Problem Link: https://codeforces.com/contest/1828/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const ll MOD = 1e9 + 7;

int main() {
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> a(n), b(n);
		for (ll &i: a) cin >> i;
		for (ll &i: b) cin >> i;
		sort(begin(a), end(a));
		sort(begin(b), end(b));
		ll j = 0;
		vector<ll> res(n);
		for (ll i = 0; i < n; ++i) {
			while (a[j] <= b[i] && j != n) ++j;
			if (j != n) res[i] = n - j;
		}
		sort(begin(res), end(res));
		ll ans = 1;
		for (ll i = 0; i < n; ++i) ans = ((ans % MOD) * ((res[i] - i) % MOD)) % MOD;
		cout << ans << '\n';
	}
	return 0;
}
