// CSES Problem Link: https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const ll mod = 1e9 + 7;

ll pw(ll x, ll y, ll m) {
        ll res = 1;
        x %= m;
        while (y) {
                if (y & 1) {
                        res = (res * x) % m;
                }
                y >>= 1;
                x = (x * x) % m;
        }
        return res;
}

int main() {
        ll n;
        cin >> n;
        cout << pw(2, n, mod) << endl;
        return 0;
}
