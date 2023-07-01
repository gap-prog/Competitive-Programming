// AtCoder Problem Link: https://atcoder.jp/contests/abc297/tasks/abc297_a

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, d; cin >> n >> d;
    vector<ll> v(n); for (ll &i: v) cin >> i;
    int ans = -1;
    for (int i = 0; i < n - 1; ++i) if (v[i + 1] - v[i] <= d) { ans = v[i + 1]; break; }
    cout << ans << '\n';
    return 0;
}
