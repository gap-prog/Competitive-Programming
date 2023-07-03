// CodeForces Problem Link: https://codeforces.com/problemset/problem/467/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int p, q; cin >> p >> q;
        if (q - p >= 2) ans++;
    }
    cout << ans << '\n';
    return 0;
}
