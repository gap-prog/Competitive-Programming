// Library Checker Problem Link: https://judge.yosupo.jp/problem/static_range_sum

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, q; cin >> n >> q;
    vector<ll> prefix(n + 1);
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        prefix[i + 1] = prefix[i] + a;
    }
    while (q--) {
        int l, r; cin >> l >> r;
        cout << prefix[r] - prefix[l] << '\n';
    }
    return 0;
}
