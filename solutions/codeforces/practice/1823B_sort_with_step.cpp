// CodeForces Problem Link: https://codeforces.com/contest/1823/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            p[i]--;
        }
        int ct = 0;
        for (int i = 0; i < n; ++i) {
            if (p[i] % k != i % k) ct++;
        }
        if (ct == 0) cout << 0 << '\n';
        else if (ct == 2) cout << 1 << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}
