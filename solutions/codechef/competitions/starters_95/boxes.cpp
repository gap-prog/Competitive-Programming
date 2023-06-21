#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector<ll> a(n); for (ll &i: a) cin >> i;
    sort(rbegin(a), rend(a));
    vector<ll> ans;
    ans.push_back(a[0]);
    for (ll i = 1; i < n; ++i) {
        if (a[i] <= ans[ans.size() - 1]) ans[ans.size() - 1] ^= a[i];
        else ans.push_back(a[i]);
    }
    cout << ans.size() << '\n';
}

int main() {
	ll t; cin >> t;
	while (t--) solve();
	return 0;
}
