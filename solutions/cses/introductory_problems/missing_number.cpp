// CSES Problem Link: https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        ll n, sum = 0;
        cin >> n;
        for (int i = 0; i < n - 1; ++i) {
                ll num;
                cin >> num;
                sum += num;
        }
        cout << (n * (n + 1)) / 2 - sum << endl;
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        solve();
        return 0;
}
