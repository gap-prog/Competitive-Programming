// CodeForces Problem Link: https://codeforces.com/contest/1831/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i: a) cin >> i;
        for (int i = 0; i < n; ++i) cout << (n + 1) - a[i] << ' ';
        cout << '\n';
    }
    return 0;
}