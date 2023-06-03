// CodeForces Problem Link: https://codeforces.com/problemset/problem/1832/C

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i: a) cin >> i;
    n = unique(a.begin(), a.end()) - a.begin();
    int ans = n;
    for (int i = 1; i + 1 < n; ++i) {
        ans -= (a[i - 1] < a[i] && a[i] < a[i + 1]);
        ans -= (a[i - 1] > a[i] && a[i] > a[i + 1]);
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}