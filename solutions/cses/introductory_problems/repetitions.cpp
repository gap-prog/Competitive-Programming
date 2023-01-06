// CSES Problem Link: https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        string s;
        cin >> s;
        int n = s.size(), m = 0, ct = 1;
        for (int i = 1; i < n; ++i) {
                if (s[i] != s[i - 1]) {
                        m = max(m, ct);
                        ct = 0;
                }
                ct++;
        }
        m = max(m, ct);
        cout << m << endl;
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        solve();
        return 0;
}
