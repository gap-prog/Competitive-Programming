// CodeForces Problem Link: https://codeforces.com/contest/1832/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    vector<ll> a(n), prefix(n + 1);
    for (ll &i: a) cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) prefix[i + 1] = prefix[i] + a[i];
    ll ans = 0;
    for (int i = 0; i <= k; ++i) ans = max(ans, prefix[n - (k - i)] - prefix[2 * i]);
    cout << ans << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}