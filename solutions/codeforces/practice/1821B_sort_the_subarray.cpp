// CodeForces Problem Link: https://codeforces.com/contest/1821/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), d(n);
        for (int &i: a) cin >> i;
        for (int &i: d) cin >> i;
        int l = -1, r = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] != d[i]) {
                r = i;
                if (l == -1) l = i;
            }
        }
        while (l > 0 && d[l - 1] <= d[l]) l--;
        while (r < n - 1 && d[r + 1] >= d[r]) r++;
        cout << l + 1 << ' ' << r + 1 << '\n';
    }
    return 0;
}