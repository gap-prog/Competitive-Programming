// CodeForces Problem Link: https://codeforces.com/contest/1826/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int &i: l) cin >> i;
    for (int i = 0; i <= n; ++i) {
        int real = 0;
        for (int j = 0; j < n; ++j) {
            if (!(i >= l[j])) real++;
        }
        if (real == i) {
            cout << i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
