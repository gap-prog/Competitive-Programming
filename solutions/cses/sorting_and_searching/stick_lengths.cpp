// CSES Problem Link: https://cses.fi/problemset/result/5580441/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n, md, res = 0;
    cin >> n;
    vector<ll> v(n);
    for (ll &i: v) cin >> i;
    sort(begin(v), end(v));
    md = v[n / 2];
    for (ll i = 0; i < n; ++i) res += abs(v[i] - md);
    cout << res << endl;
    return 0;
}
