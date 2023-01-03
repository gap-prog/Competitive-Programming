// CodeChef Problem Link: https://www.codechef.com/LP2TO301/problems/INDIPERM

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        int n;
        cin >> n;
        cout << n << spc;
        for (int i = 1; i < n; ++i) {
                cout << i << spc;
        }
        cout << endl;
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
                solve();
        }
}
