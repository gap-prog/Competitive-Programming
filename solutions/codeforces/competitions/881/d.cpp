#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(ll n1, ll n2, vector<vector<ll>> &v1, vector<ll> &v2) {
    if (size(v1[n1]) == 1 && v1[n1][0] == n2) {
        v2[n1] = 1;
        return;
    }
    for (ll &i : v1[n1]) {
        if (i == n2) continue;
        dfs(i, n1, v1, v2);
        v2[n1] += v2[i];
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> v1(n + 1);
    for (int i = 1; i < n; i++) {
        ll u, v;
        cin >> u >> v;
        v1[u].push_back(v);
        v1[v].push_back(u);
    }
    vector<ll> v2(n + 1);
    dfs(1, 0, v1, v2);
    ll q;
    cin >> q;
    while (q--) {
        ll x, y;
        cin >> x >> y;
        cout << v2[x] * v2[y] << '\n';
    }
}

int main() {
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}