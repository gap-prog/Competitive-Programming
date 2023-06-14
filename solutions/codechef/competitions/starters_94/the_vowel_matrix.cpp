// CodeChef Problem Link: https://www.codechef.com/problems/VOWMTRX

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 1e9 + 7;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void solve() {
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    ll res = 1, ct1 = 0, ct2;
    bool flag1 = false, flag2 = false;
    for (ll i = 0; i < n; ++i) {
        if (isVowel(s[i])) {
            if (!flag1) {
                if (flag2) { ct2++; res = (res * ct2) % MOD; }
            }
            ct1++; ct2 = 0;
            flag1 = true; flag2 = true;
        } else { if (!flag1) ct2++; }
        if (ct1 == k) { ct1 = 0; flag1 = false; }
    }
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}