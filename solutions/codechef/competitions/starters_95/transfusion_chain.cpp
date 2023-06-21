#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    int a = 0, b = 0, o = 0, ab = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] == "A") a++;
        if (v[i] == "B") b++;
        if (v[i] == "O") o++;
        if (v[i] == "AB") ab++;
    }
    cout << (o + max(a, b) + ab) << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
