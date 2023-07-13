// Library Checker Problem Link: https://judge.yosupo.jp/problem/associative_array

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll Q; cin >> Q;
    map<ll, ll> m;
    while (Q--) {
        ll q, k; cin >> q >> k;
        if (q == 0) {
            ll v; cin >> v;
            m[k] = v;
        } else cout << m[k] << '\n';
    }
    return 0;
}
