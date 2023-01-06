// CSES Problem Link: https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        ll n;
        cin >> n;
        while (n != 1) {
                cout << n << spc;
                n = (n % 2 == 0) ? n / 2 : n * 3 + 1;
        }
        cout << 1 << endl;
        return 0;
}
