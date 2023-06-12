// CodeForces Problem Link: https://codeforces.com/problemset/problem/1807/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum = 0, prefix[ 2 * (int) 1e5];

void solve() {
    ll n, q; cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        ll a; cin >> a;
        sum += a;
        prefix[i] = prefix[i - 1] + a;
    }
    while (q--) {
        ll l, r, k; cin >> l >> r >> k;
        ll ans = prefix[n] - (prefix[r] - prefix[l - 1]) + k * (r - l + 1);
        cout << (ans % 2 == 1 ? "YES" : "NO") << '\n';
    }
}

int main() {
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}