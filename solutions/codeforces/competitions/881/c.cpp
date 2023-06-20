#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, sum = 0; cin >> n;
    while (n) {
        sum += n;
        n /= 2;
    }
    cout << sum << '\n';
}

int main() {
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}