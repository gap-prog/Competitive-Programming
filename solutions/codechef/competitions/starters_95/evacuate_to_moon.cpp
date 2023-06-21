#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m, h; cin >> n >> m >> h;
    vector<ll> a(n), b(m);
    for (ll &i: a) cin >> i;
    for (ll &i: b) cin >> i;
    sort(rbegin(a), rend(a));
    sort(rbegin(b), rend(b));
    ll ans = 0;
    for (ll i = 0; i < min(n, m); ++i) ans += min(a[i], b[i] * h);
    cout << ans << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
