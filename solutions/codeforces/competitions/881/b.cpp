#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll &i: a) {
        cin >> i;
        sum += abs(i);
    }
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        if (a[i] >= 0) continue;
        ans++;
        while (i < n && a[i] <= 0) i++;
    }
    cout << sum << ' ' << ans << '\n';
}

int main() {
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}